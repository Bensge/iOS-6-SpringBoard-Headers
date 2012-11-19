/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UITableViewCell.h>

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface SBSearchTableViewCell : UITableViewCell {
	UIFont* _titleFont;
	UIFont* _subtitleFont;
	UIFont* _auxiliaryTitleFont;
	UIFont* _topHitFont;
	NSString* _title;
	NSString* _subtitle;
	NSString* _summary;
	NSString* _auxiliaryTitle;
	NSString* _auxiliarySubtitle;
	BOOL _badged;
	BOOL _starred;
	BOOL _usesAlternateBackgroundColor;
	BOOL _isTopHit;
	BOOL _isBelowTopHit;
	BOOL _isFirstInTableView;
	BOOL _isLastInTableView;
	BOOL _isFirstInSection;
	float _sectionHeaderWidth;
	float _edgeInset;
}
@property(assign, nonatomic) float edgeInset;
@property(assign, nonatomic) float sectionHeaderWidth;
@property(assign, nonatomic, getter=isFirstInSection) BOOL firstInSection;
@property(assign, nonatomic, getter=isLastInTableView) BOOL lastInTableView;
@property(assign, nonatomic, getter=isFirstInTableView) BOOL firstInTableView;
@property(assign, nonatomic, getter=isBelowTopHit) BOOL belowTopHit;
@property(assign, nonatomic, getter=isTopHit) BOOL topHit;
@property(assign, nonatomic) BOOL usesAlternateBackgroundColor;
@property(assign, nonatomic, getter=isStarred) BOOL starred;
@property(assign, nonatomic, getter=isBadged) BOOL badged;
@property(retain, nonatomic) NSString* auxiliarySubtitle;
@property(retain, nonatomic) NSString* auxiliaryTitle;
@property(retain, nonatomic) NSString* summary;
@property(retain, nonatomic) NSString* subtitle;
@property(retain, nonatomic) NSString* title;
+(id)inner2xAlternateLineColor;
+(id)outer2xAlternateLineColor;
+(id)inner2xAlternateShadowColor;
+(id)outer2xAlternateShadowColor;
+(id)inner2xLineColor;
+(id)outer2xLineColor;
+(id)inner2xShadowColor;
+(id)outer2xShadowColor;
+(id)topLineShadowColor;
+(id)alternateLineColor;
+(id)lineColor;
+(id)alternateBackgroundColor;
+(id)backgroundColor;
+(void)initialize;
-(id)_scriptingInfo;
-(void)drawRect:(CGRect)rect;
-(void)_drawContentInRect:(CGRect)rect selected:(BOOL)selected;
-(BOOL)_drawsContent;
-(void)_updateOpacity;
-(void)clearContents;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
