/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIAlertViewDelegate.h"
#import <SpringBoardUI/SBAlertItem.h>

@class SBUserInstalledApplicationIcon;

__attribute__((visibility("hidden")))
@interface SBGameDeletionAlertItem : SBAlertItem <UIAlertViewDelegate> {
	SBUserInstalledApplicationIcon* _icon;
}
-(BOOL)dismissOnLock;
-(BOOL)shouldShowInLockScreen;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)dealloc;
-(id)initWithIcon:(id)icon;
@end

