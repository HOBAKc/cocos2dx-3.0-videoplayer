//
//  iOSWrapper.cpp
//  videoPlayer
//
//  Created by Dill Pixel 2 on 2/24/14.
//
//

#include "iOSWrapper.h"


static iOSWrapper *instance = NULL;

void iOSWrapper::playVideo(const char *vidPath) {
	NSString *stringPath = [NSString stringWithUTF8String:vidPath];
	NSString *string = [[NSBundle mainBundle] pathForResource:stringPath ofType:@"mp4"];

	[[EAGLView sharedEGLView] playTutorialVideo:string];
};

iOSWrapper *iOSWrapper::getInstance() {
	if (!instance) {
		instance = new iOSWrapper();
	}
	return instance;
};