/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBDownloadingIconObserver.h"
#import "SBIconView.h"

@class SBDownloadingIcon, SBDownloadingProgressBar;

__attribute__((visibility("hidden")))
@interface SBDownloadingIconView : SBIconView <SBDownloadingIconObserver> {
	SBDownloadingProgressBar* _progressView;
}
@property(retain, nonatomic) SBDownloadingIcon* downloadingIcon;
+(Class)_labelImageParametersClassForIcon:(id)icon location:(int)location;
-(void)iconAccessoriesDidUpdate:(id)iconAccessories;
-(void)downloadingIconStatusDidChange:(id)downloadingIconStatus;
-(void)setGhostly:(BOOL)ghostly requester:(int)requester;
-(void)_updateProgressBar;
-(void)setDisplayedIconImage:(id)image;
-(void)setIcon:(id)icon;
-(void)dealloc;
-(id)initWithDefaultSize;
@end

