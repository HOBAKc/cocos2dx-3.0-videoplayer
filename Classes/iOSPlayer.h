//
//  iOSPlayer.h
//  videoPlayer
//
//  Created by radio8712 on 2/24/14.
//  Copyright (c) 2014 Dill Pixel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <EAGLView.h>
#include "AudioManager.h"

//@interface DPiOSPlayer : CCEAGLView {
//	MPMoviePlayerController *dpPlayer;
//}
//
//- (void)playVideo:(NSString *)path;
//- (void)removeVideo;
//
//@property (copy) MPMoviePlayerController *dpPlayer;
//
//@end



@interface DPiOSPlayer : NSObject  {
	MPMoviePlayerController *dpPlayer;
}

- (void)playVideo:(NSString *)path withView:(UIView *)view;
- (void)exitFullscreen;
- (void)videoEnded;
- (void)removeVideo;

+ (DPiOSPlayer *)getInstance;
@end

extern DPiOSPlayer *playerInstance;
