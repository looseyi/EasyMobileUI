//
//  Hyphenate.h
//  Hyphenate
//
//  Created by EaseMob on 16/10/27.
//  Copyright © 2016年 easemob. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for Hyphenate.
FOUNDATION_EXPORT double HyphenateVersionNumber;

//! Project version string for Hyphenate.
FOUNDATION_EXPORT const unsigned char HyphenateVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <Hyphenate/PublicHeader.h>
#if TARGET_OS_IPHONE

#import "EMClient.h"
#import "EMClientDelegate.h"

#else

#import <HyphenateLite/EMClient.h>
#import <HyphenateLite/EMClientDelegate.h>

#endif
