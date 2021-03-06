/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class NSMutableSet, NSMutableArray, SBIconListModel, SBIcon, SBIconViewMap;

__attribute__((visibility("hidden")))
@interface SBIconListView : UIView {
	SBIconListModel* _model;
	SBIconViewMap* _viewMap;
	int _orientation;
	SBIcon* _bouncedIcon;
	NSMutableArray* _removedIcons;
	NSMutableArray* _iconContainerMatrix;
	unsigned _scattered : 1;
	unsigned _needsLayout : 1;
	unsigned _rotating : 1;
	UIView* _fadeView;
	BOOL _iconsAreElsewhere;
	BOOL _recyclesIconViewsWhenNotShowing;
	NSMutableSet* _notShownIconViews;
	BOOL _showingCloseBoxes;
}
+(unsigned)maxIcons;
+(unsigned)iconColumnsForInterfaceOrientation:(int)interfaceOrientation;
+(unsigned)maxVisibleIconRowsInterfaceOrientation:(int)orientation;
+(unsigned)iconRowsForInterfaceOrientation:(int)interfaceOrientation;
-(void)cleanupAfterRotation;
-(void)performRotationWithDuration:(double)duration;
-(void)prepareToRotateToInterfaceOrientation:(int)interfaceOrientation;
-(Class)iconRotationContainerClass;
-(id)rotationIconContainers;
-(unsigned)_rotationReferenceRow;
-(unsigned)_postRotationFirstVisibleRow;
-(unsigned)_preRotationFirstVisibleRow;
-(unsigned)rowAtPoint:(CGPoint)point;
-(unsigned)columnAtPoint:(CGPoint)point;
-(CGPoint)originForIconAtX:(unsigned)x Y:(unsigned)y;
-(float)verticalIconPadding;
-(float)horizontalIconPadding;
-(float)horizontalBumpForColumn:(unsigned)column;
-(float)sideIconInset;
-(float)bottomIconInset;
-(float)topIconInset;
-(id)bouncedIcon;
-(void)setBouncedIcon:(id)icon;
-(BOOL)isDock;
-(void)makeIconViewsPerformBlock:(id)block;
-(void)makeIconsPerformBlock:(id)block;
-(void)makeIconViewsPerformSelector:(SEL)selector;
-(void)makeIconsPerformSelector:(SEL)selector;
-(void)hideCloseBoxes;
-(void)showCloseBoxes;
-(void)startJittering;
-(void)stopJittering;
-(void)showIconImagesFromColumn:(int)column toColumn:(int)column2 totalColumns:(int)columns visibleIconsJitter:(BOOL)jitter;
-(id)iconAtPoint:(CGPoint)point index:(unsigned*)index proposedOrder:(int*)order grabbedIcon:(id)icon;
-(id)iconAtPoint:(CGPoint)point index:(unsigned*)index;
-(float)layoutIconsIfNeeded:(float)needed domino:(BOOL)domino;
-(CATransform3D)_transformForIconAtIndex:(unsigned)index inOrientation:(int)orientation;
-(void)layoutIconsNow;
-(void)setIconsNeedLayout;
-(BOOL)recyclesIconViewsWhenNotShowing;
-(void)setRecyclesIconViewsWhenNotShowing:(BOOL)showing;
-(BOOL)iconsAreElsewhere;
-(void)setIconsAreElsewhere:(BOOL)elsewhere;
-(void)setFrame:(CGRect)frame;
-(CGPoint)originForIcon:(id)icon;
-(CGPoint)originForIconAtIndex:(int)index;
-(CGSize)defaultIconSize;
-(void)removeAllIconAnimations;
-(void)unscatterWithDuration:(double)duration delay:(double)delay;
-(void)unscatterAnimationDidStop;
-(void)scatterWithDuration:(double)duration delay:(double)delay;
-(void)setAlphaForAllIcons:(float)allIcons;
-(BOOL)isScattered;
-(void)removeIcon:(id)icon;
-(void)removeIconAtIndex:(unsigned)index;
-(id)removedIcons;
-(id)insertIcon:(id)icon atIndex:(unsigned)index moveNow:(BOOL)now;
-(id)insertIcon:(id)icon atIndex:(unsigned)index moveNow:(BOOL)now pop:(BOOL)pop;
-(id)placeIcon:(id)icon atIndex:(unsigned)index moveNow:(BOOL)now pop:(BOOL)pop;
-(void)_layoutIcon:(id)icon atIndex:(unsigned)index moveNow:(BOOL)now pop:(BOOL)pop;
-(void)_noteNewIconInModel:(id)model;
-(void)_popIconView:(id)view;
-(void)showIconAnimationDidStop:(id)showIconAnimation didFinish:(id)finish iconView:(id)view;
-(unsigned)firstFreeSlotOrLastSlotIndexForType:(int)type;
-(unsigned)firstFreeSlotOrLastSlotIndex;
-(unsigned)firstFreeSlotIndexForType:(int)type;
-(unsigned)firstFreeSlotIndex;
-(BOOL)isFull;
-(BOOL)isEmpty;
-(id)visibleIcons;
-(id)icons;
-(BOOL)compactIcons:(BOOL)icons;
-(unsigned)rowForIcon:(id)icon;
-(void)getX:(unsigned*)x Y:(unsigned*)y forIndex:(unsigned)index forOrientation:(int)orientation;
-(unsigned)indexForX:(unsigned)x Y:(unsigned)y forOrientation:(int)orientation;
-(void)setOrientation:(int)orientation;
-(unsigned)iconsInRowForSpacingCalculation;
-(unsigned)iconColumnsForCurrentOrientation;
-(unsigned)iconRowsForCurrentOrientation;
-(id)viewMap;
-(id)model;
-(void)setModel:(id)model;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame viewMap:(id)map;
-(Class)modelClass;
@end

