/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIWindow.h>

@class NSMutableArray, UIView, NSMapTable, SBAlertView;

__attribute__((visibility("hidden")))
@interface SBAlertWindow : UIWindow {
	UIView* _contentLayer;
	unsigned _isAnimating : 1;
	unsigned _isInvalid : 1;
	unsigned _handlerActive : 1;
	float _finalAlpha;
	int _currentOrientation;
	SBAlertView* _currentDisplay;
	NSMutableArray* _stackedAlertDisplays;
	NSMapTable* _alertToDisplayMap;
}
+(CGRect)constrainFrameToScreen:(CGRect)screen;
-(void)noteInterfaceOrientationChangingTo:(int)to animated:(BOOL)animated;
-(void)window:(id)window willAnimateFromContentFrame:(CGRect)contentFrame toContentFrame:(CGRect)contentFrame3;
-(void)window:(id)window didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)window:(id)window willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)window:(id)window willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(id)rotatingContentViewForWindow:(id)window;
-(BOOL)window:(id)window shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(id)animation;
-(BOOL)_isSupportedInterfaceOrientation:(int)orientation;
-(void)_setupContentLayerForCurrentOrientation;
-(BOOL)handlerAlreadyActive;
-(void)setHandlerAlreadyActive:(BOOL)active;
-(id)currentDisplay;
-(void)alertDisplayWillDismiss;
-(void)dismissWindow:(id)window;
-(int)displayCount;
-(BOOL)hasActiveAlertsOrDisplays;
-(BOOL)deactivateAlert:(id)alert;
-(void)displayAlert:(id)alert;
-(id)contentLayer;
-(id)stackedDisplayForAlert:(id)alert;
-(BOOL)isOpaque;
-(void)dealloc;
-(id)initWithContentRect:(CGRect)contentRect;
@end

