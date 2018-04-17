//
//  UIImage+FromBundle.h
//  PLUUIKit
//
//  Created by sunshaobing on 16/8/1.
//  Copyright © 2016年 plu-dev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (FromBundle)

/**
 *  根据bundleName.bundle/imageFileName生成图片
 *
 *  @param bundleName    图片所在bundle名称不包含后缀(默认 .bundle)
 *  @param imageFileName image name without suffix ext. (默认.png/.jpg)
 *
 *  @return UIImage
 */
+(UIImage *)imageFromBundle: (NSString *)bundleName imageFileName: (NSString *)imageFileName;

/**
 *
 *  @param bundleName    图片所在bundle名称不包含后缀(默认 .bundle)
 *  @param imageFileName image name without suffix ext. (默认.png/.jpg)
 *  @param cls           引用该资源图片的所属类，如果找不到则默认mainbundle中查找是否存在bundleName
 *
 *  @return UIImage
 */
+(UIImage *)imageFromBundle:(NSString *)bundleName
              imageFileName:(NSString *)imageFileName
                bundleClass:(Class)cls;

@end
