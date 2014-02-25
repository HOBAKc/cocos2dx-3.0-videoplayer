//
//  iOSWrapper.cpp
//  videoPlayer
//
//  Created by Dill Pixel 2 on 2/24/14.
//
//

#import <MediaPlayer/MediaPlayer.h>
#include "iOSWrapper.h"
#include "iOSPlayer.h"

static iOSWrapper *instance = NULL;

void iOSWrapper::playVideo(const char *vidPath) {
	NSString *stringPath = [NSString stringWithUTF8String:vidPath];
	NSString *string = [[NSBundle mainBundle] pathForResource:stringPath ofType:@"mp4"];
	MPMoviePlayerController *player = NULL;
	[[CCEAGLView sharedEGLView] playVideo:string withPlayer:player];
};

iOSWrapper *iOSWrapper::getInstance() {
	if (!instance) {
		instance = new iOSWrapper();
	}
	return instance;
};

