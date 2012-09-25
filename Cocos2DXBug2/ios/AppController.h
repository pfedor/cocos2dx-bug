//
//  Cocos2DXBug2AppController.h
//  Cocos2DXBug2
//
//  Created by Pawel Fedorynski on 9/25/12.
//  Copyright __MyCompanyName__ 2012. All rights reserved.
//

@class RootViewController;

@interface AppController : NSObject <UIAccelerometerDelegate, UIAlertViewDelegate, UITextFieldDelegate,UIApplicationDelegate> {
    UIWindow *window;
    RootViewController    *viewController;
}

@end

