/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class UIButton, SBAppSwitcherVolumeSlider;

__attribute__((visibility("hidden")))
@interface SBAirPlayBarView : UIView {
	UIView* _speakerIcon;
	UIButton* _airPlayButton;
	SBAppSwitcherVolumeSlider* _volumeSlider;
	BOOL _airPlayEnabled;
}
@property(assign, nonatomic, getter=isAirPlayEnabled) BOOL airPlayEnabled;
@property(readonly, assign, nonatomic) UIButton* airPlayButton;
@property(readonly, assign, nonatomic) SBAppSwitcherVolumeSlider* volumeSlider;
-(void)setAirPlayEnabled:(BOOL)enabled animated:(BOOL)animated;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end

