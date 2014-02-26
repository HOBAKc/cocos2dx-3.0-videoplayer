//
//  Wrapper.cpp
//  videoPlayer
//
//  Created by Dill Pixel 2 on 2/24/14.
//
//

#include "Wrapper.h"
//#define CC_TARGET_PLATFORM CC_PLATFORM_ANDROID


static Wrapper *instance = NULL;

void Wrapper::playVideo(const char *vidPath) {
//	AudioManager::getInstance()->stopBG();
#if CC_TARGET_PLATFORM == CC_PLATFORM_IOS
	iOSWrapper::getInstance()->playVideo(vidPath);
#elif CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
//	CCApplication::getInstance()->playVideo(vidPath);
#endif
};

Wrapper *Wrapper::getInstance() {
//	if (!instance) {
//		instance = new Wrapper();
//	}
	return instance;
};