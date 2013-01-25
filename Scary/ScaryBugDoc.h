//
//  ScaryBugDoc.h
//  Scary
//
//  Created by Vandana on 21/01/13.
//  Copyright (c) 2013 Sunil Ohri. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ScaryBugData.h"
@interface ScaryBugDoc : NSObject
@property (strong) ScaryBugData *data;
@property (strong) UIImage *thumbImage;
@property (strong) UIImage *fullImage;

- (id)initWithTitle:(NSString*)title rating:(float)rating thumbImage:(UIImage *)thumbImage fullImage:(UIImage *)fullImage;
@end
