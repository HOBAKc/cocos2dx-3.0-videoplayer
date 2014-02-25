//
//  iOSPlayer.h
//  videoPlayer
//
//  Created by Dill Pixel 2 on 2/24/14.
//
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
