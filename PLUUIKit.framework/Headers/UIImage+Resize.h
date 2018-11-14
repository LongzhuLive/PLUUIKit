//
//  UIImage+Resize.h
//  LvKe
//
//  Created by ziya on 2017/7/10.
//  Copyright © 2017年 lvke.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Resize)

-(UIImage*)scaleToSize:(CGSize)size;

- (UIImage*)localScaleToSize:(CGSize)size;

@end
