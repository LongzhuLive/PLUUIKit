//
//  NSMutableAttributedString+Appearance.h
//  PLUUIKit
//
//  Created by DarrenYau on 16/8/18.
//  Copyright © 2016年 plu-dev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSMutableAttributedString (Appearance)

- (void) addHexColor:(NSString *)colorHex fontSize:(CGFloat) fontSize backGroundHexColor:(NSString *)backGroundColorHex;

- (void) addColor:(UIColor *)color fontSize:(CGFloat) fontSize backGroundColor:(UIColor *)backGroundColor;

- (void) addHexColor:(NSString *)colorHex font:(UIFont *) font backGroundHexColor:(NSString *)backGroundColorHex range:(NSRange) range;

- (void) addColor:(UIColor *)color font:(UIFont *) font backGroundColor:(UIColor *)backGroundColor range:(NSRange) range;

@end
