//
//  main.m
//  Cocos2DXBug2
//
//  Created by Pawel Fedorynski on 9/25/12.
//  Copyright __MyCompanyName__ 2012. All rights reserved.
//

#import <UIKit/UIKit.h>

int main(int argc, char *argv[]) {
    
    NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];
    int retVal = UIApplicationMain(argc, argv, nil, @"AppController");
    [pool release];
    return retVal;
}
