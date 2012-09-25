#include "HelloWorldScene.h"
#include <string>
#include "SimpleAudioEngine.h"

using namespace cocos2d;
using namespace CocosDenshion;

CCScene* HelloWorld::scene()
{
  // 'scene' is an autorelease object
  CCScene *scene = CCScene::create();
  
  // 'layer' is an autorelease object
  HelloWorld *layer = HelloWorld::create();
  
  // add layer as a child to scene
  scene->addChild(layer);
  
  // return the scene
  return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
  if (!CCLayer::init()) {
    return false;
  }
  
  CCSize s = CCDirector::sharedDirector()->getWinSize();
  render_texture_ = CCRenderTexture::create(s.width, s.height,
                                            kCCTexture2DPixelFormat_RGBA8888);
  render_texture_->retain();
  render_texture_->setPosition(ccp(s.width / 2, s.height / 2));
  render_texture_->clear(1.0, 1.0, 1.0, 1.0);
  this->addChild(render_texture_);

  std::string text = "0123456789";
  for (int i = 0; i < 8; i++) {
    text += text;
  }
  CCLabelTTF* label = new CCLabelTTF;
  label->initWithString(text.c_str(), "Arial", 18,
                        CCSizeMake(1000, 0), kCCTextAlignmentLeft);
  label->setPosition(ccp(10, 760));
  label->setAnchorPoint(ccp(0, 1));
  label->setColor(ccc3(0, 0, 0));
  render_texture_->begin();
  label->visit();
  render_texture_->end();
  label->release();
  
  return true;
}

HelloWorld::~HelloWorld()
{
  render_texture_->release();
  CCTextureCache::sharedTextureCache()->removeUnusedTextures();
}