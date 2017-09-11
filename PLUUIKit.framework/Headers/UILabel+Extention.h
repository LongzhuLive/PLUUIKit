//
//  UILabel+Extention.h
//  TGA
//
//  Created by mafengxin on 16/3/17.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UILabel (Extention)
/**
 *  静态生成方法
 *
 *  @param text     <#text description#>
 *  @param fontSize <#fontSize description#>
 *  @param hexstr   <#hexstr description#>
 *
 *  @return <#return value description#>
 */
+ (instancetype) lblWithText:(NSString *)text FontSize:(CGFloat) fontSize Hexcolor:(NSString *) hexstr;
@end
