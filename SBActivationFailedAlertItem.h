/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIAlertViewDelegate.h"
#import <SpringBoardUI/SBAlertItem.h>


__attribute__((visibility("hidden")))
@interface SBActivationFailedAlertItem : SBAlertItem <UIAlertViewDelegate> {
	BOOL _showRetryButton;
	BOOL _showSupportNumber;
}
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)performUnlockAction;
-(id)initWithFailureCount:(int)failureCount;
@end

