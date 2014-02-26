//
//  AppDelegate.h
//  videoPlayer
//
//  Created by radio8712 on 2/24/14.
//  Copyright (c) 2014 Dill Pixel. All rights reserved.
//

#ifndef  _APP_DELEGATE_H_
#define  _APP_DELEGATE_H_

#include "cocos2d.h"
#include "AudioManager.h"
#include "Config.h"
#include "HelloWorldScene.h"

/**
@brief    The cocos2d Application.

The reason for implement as private inheritance is to hide some interface call by Director.
*/

using namespace cocos2d;
using namespace CocosDenshion;

class  AppDelegate : private cocos2d::Application
{
public:
    AppDelegate();
    virtual ~AppDelegate();

    virtual bool applicationDidFinishLaunching();
    virtual void applicationDidEnterBackground();
    virtual void applicationWillEnterForeground();
};

#endif // _APP_DELEGATE_H_

