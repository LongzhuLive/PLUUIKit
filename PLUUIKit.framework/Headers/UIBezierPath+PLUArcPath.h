//
//  UIBezierPath+PLUArcPath.h
//  TGA
//
//  Created by mafengxin on 16/10/22.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBezierPath (PLUArcPath)

+ (instancetype)bezierPathWithAngle:(CGFloat)angle startPoint:(CGPoint) start endPoint:(CGPoint)end clockwise:(BOOL)clockwise;

@end
