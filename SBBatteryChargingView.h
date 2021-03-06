/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class UIImage, UILabel, UIImageView, SBBatteryReflectionView;

__attribute__((visibility("hidden")))
@interface SBBatteryChargingView : UIView {
	int _type;
	UIImageView* _topBatteryView;
	SBBatteryReflectionView* _bottomBatteryView;
	UIImage* _lastBatteryImage;
	UILabel* _percentLabel;
	int _lastBatteryIndex;
	int _lastBatteryPercentage;
	unsigned _showReflection : 1;
}
+(int)redChargeIndexForType:(int)type;
+(float)batteryHeightForType:(int)type;
+(CGSize)defaultSizeForType:(int)type;
-(void)_batteryStatusChanged:(id)changed;
-(id)_imageFormatString;
-(int)_currentBatteryIndex;
-(void)setShowsReflection:(BOOL)reflection;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame type:(int)type;
@end

