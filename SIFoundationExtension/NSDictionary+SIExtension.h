//
//  NSDictionary+SIExtension.h
//  SIKit
//
//  Created by Matias Pequeno on 9/16/12.
//  Copyright (c) 2012 Silicon Illusions, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (SIExtension)

- (NSString *)stringForKey:(id)key;
- (NSNumber *)numberForKey:(id)key;
- (NSDictionary *)dictionaryForKey:(id)key;
- (NSArray *)arrayForKey:(id)key;

@end
