/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class UIImage, UILabel, NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface SBHUDView : UIView {
	int _level;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _imageView;
	BOOL _showsProgress;
	float _progress;
}
@property(assign, nonatomic) float progress;
@property(assign, nonatomic) BOOL showsProgress;
@property(retain, nonatomic) UIImage* image;
@property(retain, nonatomic) NSString* subtitle;
@property(retain, nonatomic) NSString* title;
@property(assign, nonatomic) int level;
+(float)progressIndicatorStep;
+(int)numberOfProgressIndicatorSteps;
-(void)drawRect:(CGRect)rect;
-(void)drawBlockForValue:(float)value point:(CGPoint)point;
-(void)layoutSubviews;
-(BOOL)displaysLabel;
-(void)dealloc;
-(id)initWithHUDViewLevel:(int)hudviewLevel;
@end
