/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "NSObject.h"

@protocol BBWeeAppControllerHost;

@protocol BBWeeAppController <NSObject>
@optional
@property(assign, nonatomic) id<BBWeeAppControllerHost> host;
@required
-(id)view;
@optional
-(void)viewWillDisappear;
-(void)viewDidAppear;
-(void)setPresentationView:(id)view;
-(float)presentationHeight;
-(void)unloadPresentationController;
-(id)presentationControllerForMode:(int)mode;
-(id)launchURLForTapLocation:(CGPoint)tapLocation;
-(id)launchURL;
-(void)loadView;
-(void)clearShapshotImage;
-(void)unloadView;
-(void)loadFullView;
-(void)loadPlaceholderView;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)viewDidDisappear;
-(void)viewWillAppear;
-(float)viewHeight;
@end

