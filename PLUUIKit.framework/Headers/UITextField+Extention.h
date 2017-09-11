//
//  UITextField+Extention.h
//  TGA
//
//  Created by mafengxin on 16/3/24.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextField (Extention)
/**
 *  静态生成方法
 *
 *  @param holder <#holder description#>
 *  @param size   <#size description#>
 *  @param hexStr <#hexStr description#>
 *
 *  @return <#return value description#>
 */
+ (instancetype)textFieldWithHolder:(NSString *) holder fontSize:(CGFloat)size hexColor:(NSString *) hexStr;
+ (instancetype)textFieldWithHolder:(NSString *) holder fontSize:(CGFloat)size color:(UIColor *) color;
@end
