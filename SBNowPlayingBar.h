/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIconViewDelegate.h"
#import </libobjc.A.h>
#import "UIPopoverControllerDelegate.h"
#import "SBSwitcherPopoverWindowControllerDelegate.h"
#import "SpringBoard-Structs.h"

@class SBAirPlayBarView, UIButton, SBNowPlayingBarView, MPAudioVideoRoutingActionSheet, UIViewController, MPAudioVideoRoutingPopoverController, SBApplication, SBAppSwitcherVolumeSlider, MPAudioDeviceController;

__attribute__((visibility("hidden")))
@interface SBNowPlayingBar : NSObject <SBIconViewDelegate, UIPopoverControllerDelegate, SBSwitcherPopoverWindowControllerDelegate> {
	SBNowPlayingBarView* _barView;
	SBAirPlayBarView* _airPlayView;
	MPAudioVideoRoutingActionSheet* _airPlayActionSheet;
	UIViewController* _airPlayController;
	SBAppSwitcherVolumeSlider* _volumeSlider;
	UIButton* _airPlayButton;
	SBApplication* _nowPlayingApp;
	int _scanDirection;
	MPAudioDeviceController* _audioDeviceController;
	MPAudioVideoRoutingPopoverController* _audioRoutingPopoverController;
	BOOL _audioRoutingPopoverVisible;
	BOOL _showPopoverWhenRotationComplete;
	BKSDisplayBrightnessTransactionRef _brightnessTransaction;
}
-(void)viewControllerRequestsDismissal:(id)dismissal;
-(void)switcherPopoverController:(id)controller didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)switcherPopoverController:(id)controller willRotateToOrientation:(int)orientation duration:(double)duration;
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(void)audioDeviceControllerMediaServerDied:(id)died;
-(void)audioDeviceControllerAudioRoutesChanged:(id)changed;
-(void)backlightLevelChanged;
-(void)iconTouchBegan:(id)began;
-(BOOL)iconShouldAllowTap:(id)icon;
-(void)iconTapped:(id)tapped;
-(BOOL)_isAirPlayOn;
-(void)_showAudioRoutingPopover;
-(BOOL)_shouldShowAirPlayButton;
-(void)_dismissAirPlayDetail;
-(void)_airPlayButtonHit:(id)hit;
-(void)_brightnessSliderTouchEnded:(id)ended;
-(void)_brightnessSliderChanged:(id)changed;
-(void)_iapExtendedModeChanged:(id)changed;
-(void)_updateAudioRouteDisplay:(BOOL)display;
-(void)_updateNowPlayingButtonImages;
-(void)_nowPlayingInfoChanged;
-(void)_updateNowPlayingInfo;
-(void)_updateNowPlayingApp;
-(void)_fifteenSecondSkip:(id)skip;
-(void)_trackButtonDownSeek:(id)seek;
-(void)_trackButtonDown:(id)down;
-(void)_trackButtonCancel:(id)cancel;
-(void)_trackButtonUp:(id)up;
-(void)_playButtonHit:(id)hit;
-(void)_toggleButtonHit:(id)hit;
-(void)_updateDisplay;
-(BOOL)shouldScrollCancelInContentForView:(id)view;
-(void)prepareToDisappear;
-(void)warmup;
-(void)viewAtIndexDidDisappear:(int)viewAtIndex;
-(void)viewAtIndexDidAppear:(int)viewAtIndex;
-(void)setVisible:(BOOL)visible;
-(int)scanDirection;
-(id)views;
-(void)dealloc;
-(id)init;
@end
