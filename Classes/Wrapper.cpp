//
//  Wrapper.cpp
//  videoPlayer
//
//  Created by radio8712 on 2/24/14.
//  Copyright (c) 2014 Dill Pixel. All rights reserved.
//

#include "Wrapper.h"

static Wrapper *instance = NULL;

void Wrapper::playVideo(const char *vidPath) {
	AudioManager::getInstance()->stopBG();
#if CC_TARGET_PLATFORM == CC_PLATFORM_IOS
	iOSWrapper::getInstance()->playVideo(vidPath);
#elif CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
//	CCApplication::getInstance()->playVideo();
	CCApplication::getInstance()->playVideo(vidPath);
#endif
};

Wrapper *Wrapper::getInstance() {
	if (!instance) {
		instance = new Wrapper();
	}
	return instance;
};