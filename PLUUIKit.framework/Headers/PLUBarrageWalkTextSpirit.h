//
//  PLUBarrageWalkTextSpirit.h
//  BarrageRendererDemo
//
//  Created by plu-dev on 15/9/9.
//  Copyright (c) 2015年 ExBye Inc. All rights reserved.
//

#import "BarrageWalkSpirit.h"

@interface PLUBarrageWalkTextSpirit : BarrageWalkSpirit

@property(nonatomic,strong)NSString * label;
@property(nonatomic,strong)UIColor * labelColor; // 字体颜色
@property(nonatomic,assign)CGFloat  labelFontSize; // 字体
@property(nonatomic,assign)CGFloat labelBorderWidth;
@property(nonatomic,strong)UIColor * labelBorderColor;
@property(nonatomic,assign)CGFloat labelCornerRadius;
@property(nonatomic,strong)UIColor * labelBackgroundColor;
@property(nonatomic,strong)UIColor * labelShadowColor;
@property(nonatomic,assign)CGSize labelShadowOffset;


@property(nonatomic,strong)NSString * text;
@property(nonatomic,strong)NSAttributedString * attributeText;

@property(nonatomic,strong)UIColor * backgroundColor;

@property(nonatomic,strong)UIColor * textShadowColor;
@property(nonatomic,assign)CGSize textShadowOffset;
@property(nonatomic,strong)UIColor * textColor; // 字体颜色
@property(nonatomic,assign)CGFloat fontSize;

@property(nonatomic,assign)CGFloat borderWidth;
@property(nonatomic,strong)UIColor * borderColor;
@property(nonatomic,assign)CGFloat cornerRadius; // 圆角,此属性十分影响绘制性能,谨慎使用

@property(nonatomic, assign) NSTimeInterval duration;

@end
