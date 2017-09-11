//
//  UIButton+YPKButtonImageWithLabel.h
//  Yopark
//
//  Created by PLU Engineer on 14/12/30.
//  Copyright (c) 2014年 developer. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef enum {
    kUIButtonTypeDefault,           //默认
    kUIButtonTypeFilletedCorner,    //圆角
}btnType;
/**
 *  Button样式生成与设置方法
 */
@interface UIButton (PLUButtonImageWithLabel)

- (void)setImage:(UIImage *)image withTitle:(NSString *)title fontSize:(CGFloat)fontSize titleColor:(UIColor *)titleColor imageEdgeInsets:(UIEdgeInsets)imageEdgeInsets titleEdgeInsets:(UIEdgeInsets)titleEdgeInsets forState:(UIControlState)stateType;

+ (instancetype)btnWithImgName:(NSString *)name;
+ (instancetype)btnWithTitle:(NSString *)title;
+ (instancetype)btnWithTitle:(NSString *)title fontSize:(CGFloat) fontSize Hexcolor:(NSString *) hexstr;
+ (instancetype)btnWithTitle:(NSString *)title fontSize:(CGFloat) fontSize Hexcolor:(NSString *) hexstr type:(btnType) type;
+ (instancetype)btnWithTitle:(NSString *)title img:(UIImage *)img fontSize:(CGFloat) fontSize color:(UIColor *) color type:(btnType) type;
@end
