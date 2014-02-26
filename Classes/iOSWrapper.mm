//
//  iOSWrapper.cpp
//  videoPlayer
//
//  Created by radio8712 on 2/24/14.
//  Copyright (c) 2014 Dill Pixel. All rights reserved.
//

// Obj-C headers
#import <MediaPlayer/MediaPlayer.h>
#import "EAGLView.h"
#import "iOSWrapper.h"
#import "iOSPlayer.h"

static iOSWrapper *instance = NULL;

void iOSWrapper::playVideo(const char *vidPath) {
	NSString *stringPath = [NSString stringWithUTF8String:vidPath];
	NSString *string = [[NSBundle mainBundle] pathForResource:stringPath ofType:@"mp4"];

	[[DPiOSPlayer getInstance] playVideo:string withView:[CCEAGLView sharedEGLView]];
};

iOSWrapper *iOSWrapper::getInstance() {
	if (!instance) {
		instance = new iOSWrapper();
	}
	return instance;
};

