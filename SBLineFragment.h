/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBLineFragment : NSObject {
	unsigned _index;
	float _lineWidth;
	NSRange _range;
}
@property(assign, nonatomic) float lineWidth;
@property(assign, nonatomic) NSRange range;
@property(assign, nonatomic) unsigned index;
+(id)fragmentWithIndex:(unsigned)index length:(unsigned)length lineWidth:(float)width;
-(id)description;
@end

