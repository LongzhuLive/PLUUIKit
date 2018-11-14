//
//  UIImagePickerController+PLUJudgeAuthority.h
//  Push
//
//  Created by JiWuChao on 16/5/25.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImagePickerController (PLUJudgeAuthority)

/**
 *  相册是否可用
 */
- (BOOL) isAvailablePhotoLibrary;
/**
 *  摄像头是否可用
 */
- (BOOL) isAvailableCamera;

/**
 *  是否可以保存相册
 */
- (BOOL) isAvailableSavedPhotosAlbum;
/**
 *  是否后置摄像头可用
 */
- (BOOL) isAvailableCameraDeviceRear;
/**
 *  是否前置摄像头可用
 */
- (BOOL)isAvailableCameraDeviceFront;
/**
 *  是否支持拍照权限
 */
- (BOOL) isSupportTakingPhotos;
/**
 *  是否支持获取相册图片权限
 */
- (BOOL) isSupportPickPhotosFromPhotoLibrary;


+ (UIImagePickerController *)imagePickerControllerWithSourceType:(UIImagePickerControllerSourceType)sourceType;

@end
