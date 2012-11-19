/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplication, NSString, NSTimer;
@protocol SBSystemLocalNotificationAlertDelegate;

__attribute__((visibility("hidden")))
@interface SBSystemLocalNotificationAlert : SBAlertItem {
	id<SBSystemLocalNotificationAlertDelegate> _delegate;
	SBApplication* _app;
	NSString* _body;
	NSString* _actionLabel;
	NSString* _customLockLabel;
	NSString* _alertLaunchImage;
	BOOL _showActionButton;
	BOOL _hideTitle;
	BOOL _allowSnooze;
	NSTimer* _toneAutoMuteTimer;
	unsigned _launchButtonIndex;
	unsigned _snoozeButtonIndex;
	id _context;
}
@property(assign, nonatomic) id<SBSystemLocalNotificationAlertDelegate> delegate;
@property(readonly, assign, nonatomic) SBApplication* application;
@property(retain, nonatomic) id context;
@property(retain, nonatomic) NSString* alertLaunchImage;
@property(retain, nonatomic) NSString* customLockLabel;
@property(assign, nonatomic) BOOL allowSnooze;
@property(assign, nonatomic) BOOL hideTitle;
+(void)stopPlayingAlertSoundOrTone;
+(BOOL)isPlayingTone;
+(void)playSoundWithName:(id)name type:(int)type inApp:(id)app forAlert:(BOOL)alert;
+(id)pathForSoundName:(id)soundName inApp:(id)app;
+(id)alertMatchingContext:(id)context;
+(id)localizedStringFromKey:(id)key defaultValue:(id)value inBundle:(id)bundle arguments:(id)arguments;
+(id)presentWithLocalNotification:(id)localNotification application:(id)application;
-(int)alertPriority;
-(id)alertItemNotificationSender;
-(int)alertItemNotificationType;
-(void)stopToneAutoMuteTimer;
-(void)_toneAutoMuteTimerFired;
-(void)startToneAutoMuteTimer;
-(void)dismiss:(int)dismiss;
-(void)snoozeOrDismiss;
-(void)snoozeIfPossible;
-(void)willDeactivateForReason:(int)reason;
-(void)performUnlockAction;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(BOOL)isCriticalAlert;
-(BOOL)shouldShowInEmergencyCall;
-(float)lockLabelFontSize;
-(id)lockLabel;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(Class)alertSheetClass;
-(void)dealloc;
-(id)initWithApplication:(id)application body:(id)body showActionButton:(BOOL)button actionLabel:(id)label;
@end
