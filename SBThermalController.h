/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "SBThermalWarningSuppressionAssertionDelegate.h"
#import "SBThermalWarningAlertItemDelegate.h"

@class NSMutableSet, NSDictionary;

__attribute__((visibility("hidden")))
@interface SBThermalController : NSObject <SBThermalWarningSuppressionAssertionDelegate, SBThermalWarningAlertItemDelegate> {
	BOOL _sampling;
	double _samplingStartTime;
	NSDictionary* _samplingStartCPUTimesByApp;
	int _sunlightStateToken;
	int _warningAssertionToken;
	int _warningResponseToken;
	NSMutableSet* _warningSuppressionAssertions;
	BOOL _warningSuppressionPreference;
}
+(void)logThermalEvent:(id)event;
+(id)sharedInstance;
-(void)thermalWarningAlert:(id)alert didTriggerAction:(int)action;
-(void)thermalWarningAssertionExpired:(id)expired;
-(BOOL)captureWarningSuppressionAssertionWithPort:(unsigned)port reason:(id)reason;
-(void)_didReceiveWarningAction:(int)action;
-(void)_calculateAppsCPUTimesWithCompletion:(id)completion;
-(void)_killThermallyActiveApplication;
-(void)_killThermallyActiveApplicationGivenCPUTimes:(id)times;
-(void)_beginThermalJetsamCPUSampling;
-(void)respondToCurrentThermalCondition;
-(void)showThermalAlertIfNecessary;
-(void)startListeningForThermalEvents;
-(void)dealloc;
-(id)init;
@end

