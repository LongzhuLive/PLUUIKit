//
//  UIImage+operation.h
//  longzhu
//
//  Created by JiWuChao on 2017/11/1.
//  Copyright © 2017年 developer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (operation)

// image 旋转 注意：不是imageView旋转
- (UIImage * _Nullable)rotate:(UIImageOrientation)orient;

// 给图片添加水印
+ (UIImage * _Nullable)markImageWithOriginImage:(UIImage * _Nonnull)originImage logoImage:(UIImage * _Nonnull)logoImage;

// 压缩图片到指定尺寸
- (UIImage * _Nullable)rescaleImageToSize:(CGSize)size;

@end
