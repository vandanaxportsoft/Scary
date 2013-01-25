//
//  ScaryBugData.h
//  Scary
//
//  Created by Vandana on 21/01/13.
//  Copyright (c) 2013 Sunil Ohri. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ScaryBugData : NSObject
@property (strong) NSString *title;
@property (assign) float rating;

- (id)initWithTitle:(NSString*)title rating:(float)rating;
@end
