//
//  PLUBarrageItem.h
//  BarrageRendererDemo
//
//  Created by plu-dev on 15/9/9.
//  Copyright (c) 2015年 ExBye Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface PLUBarrageTextItem : NSObject

@property (nonatomic, strong) NSString *label;
@property (nonatomic, strong) NSString *text;
//如果设置了attributeText则优先
@property (nonatomic, strong) NSAttributedString *attributeText;
@property (nonatomic, strong) UIColor *textColor;
@property(nonatomic,assign)CGFloat textBorderWidth;
@property(nonatomic,strong)UIColor *textBorderColor;
@property(nonatomic,assign)CGFloat textCornerRadius; // 圆角,此属性十分影响绘制性能,谨慎使用
@property (nonatomic, assign) NSTimeInterval delay;
//如果不设置，则会按照barrageview的行数自动设定
@property (nonatomic, assign) CGFloat labelTextFontSize;

+ (PLUBarrageTextItem *)barrageTextItemWithLabel: (NSString *)label text: (NSString *)text delay: (NSTimeInterval)delay;

+ (PLUBarrageTextItem *)barrageTextItemWithLabel: (NSString *)label attributeText: (NSAttributedString *)attributeText delay: (NSTimeInterval)delay;

@end
