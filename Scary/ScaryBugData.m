//
//  ScaryBugData.m
//  Scary
//
//  Created by Vandana on 21/01/13.
//  Copyright (c) 2013 Sunil Ohri. All rights reserved.
//

#import "ScaryBugData.h"

@implementation ScaryBugData
@synthesize title = _title;
@synthesize rating = _rating;
- (id)initWithTitle:(NSString*)title rating:(float)rating {
    if ((self = [super init])) {
        self.title = title;
        self.rating = rating;
    }
    return self;
}
@end
