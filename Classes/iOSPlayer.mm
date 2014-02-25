//
//  iOSPlayer.m
//  videoPlayer
//
//  Created by Dill Pixel 2 on 2/24/14.
//
//

#import <MediaPlayer/MediaPlayer.h>
#import "iOSPlayer.h"

@implementation CCEAGLView (DPVideoPlayer)

- (void)playVideo:(NSString *)path withPlayer:(MPMoviePlayerController *)player {

	NSURL *url;

	url = [NSURL fileURLWithPath:path];

	player = [[MPMoviePlayerController alloc] initWithContentURL:url];
	player.view.frame = CGRectMake(0, 0, self.frame.size.height, self.frame.size.width);
	player.fullscreen = YES;
	player.scalingMode = MPMovieScalingModeNone;
	player.controlStyle = MPMovieControlStyleNone;
	[self                           addSubview:player.view];
	[player                         play];

	[[NSNotificationCenter defaultCenter] addObserver:self
																					 selector:@selector(removeVideo)
																							 name:MPMoviePlayerPlaybackStateDidChangeNotification object:nil];
}

- (void)removeVideo:(MPMoviePlayerController *)player {
	if (player.playbackState == MPMoviePlaybackStatePaused || player.playbackState == MPMoviePlaybackStateStopped) {
		[player.view removeFromSuperview];
		[player release];
		player = nil;

		[[NSNotificationCenter defaultCenter] removeObserver:self
																										name:MPMoviePlayerPlaybackStateDidChangeNotification
																									object:nil];

		AudioManager::getInstance()->playBG();
	}
}



@end
