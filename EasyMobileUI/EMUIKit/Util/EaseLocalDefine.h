/************************************************************
 *  * Hyphenate CONFIDENTIAL
 * __________________
 * Copyright (C) 2016 Hyphenate Inc. All rights reserved.
 *
 * NOTICE: All information contained herein is, and remains
 * the property of Hyphenate Inc.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from Hyphenate Inc.
 */

#import "EaseMessageCell.h"

#ifndef EaseLocalDefine_h
#define EaseLocalDefine_h

#define EaseBundlePath [[NSBundle bundleForClass: [EaseMessageCell class]] pathForResource:@"EaseUIResource" ofType:@"bundle"]

#define EaseBundleImage(name) [UIImage imageNamed:(name) inBundle:[NSBundle bundleWithPath: EaseBundlePath] compatibleWithTraitCollection:nil]


#define NSEaseLocalizedString(key, comment) \
[[NSBundle bundleWithPath:EaseBundlePath] localizedStringForKey:(key) value:@"" table:nil]

#endif /* EaseLocalDefine_h */
