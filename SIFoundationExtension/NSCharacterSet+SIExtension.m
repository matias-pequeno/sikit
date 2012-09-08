//
//  NSCharacterSet.m
//  SIKit
//
//  Created by Matias Pequeno on 9/26/10.
//  Copyright 2010 Silicon Illusions, Inc. All rights reserved.
//

#import "NSCharacterSet+SIExtension.h"

@implementation NSCharacterSet (SIExtension)

#define LF 0x000a // Line Feed
#define FF 0x000c // Form Feed
#define CR 0x000d // Carriage Return
#define NEL 0x0085 // Next Line
#define LS 0x2028 // Line Separator
#define PS 0x2029 // Paragraph Separator

+ (NSCharacterSet *)linebreaksCharacterSet
{
	unichar theCharacters[] = { LF, FF, CR, NEL, LS, PS, };
	
	return [NSCharacterSet characterSetWithCharactersInString:[NSString stringWithCharacters:theCharacters length:sizeof(theCharacters) / sizeof(*theCharacters)]];
}

@end
