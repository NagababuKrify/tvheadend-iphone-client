//
//  TVHDebugLytics.h
//  TvhClient
//
//  Created by Luis Fernandes on 01/11/13.
//  Copyright (c) 2013 Luis Fernandes.
//
//  This Source Code Form is subject to the terms of the Mozilla Public
//  License, v. 2.0. If a copy of the MPL was not distributed with this
//  file, You can obtain one at http://mozilla.org/MPL/2.0/.
//

#import <Foundation/Foundation.h>

@interface TVHDebugLytics : NSObject
+ (void)setObjectValue:(id)value forKey:(NSString*)key;
+ (void)setIntValue:(int)value forKey:(NSString*)key;
@end
