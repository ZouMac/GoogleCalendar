//
//  UIColor+Hex.h
//  GoogleCalendar
//
//  Created by Zou Tan on 2019/2/18.
//  Copyright © 2019 Zou Tan. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (Hex)

/**
 16进制颜色转换为UIColor
 
 @param hexColor 16进制字符串（可以以0x开头，可以以#开头，也可以就是6位的16进制）
 @param opacity 透明度
 @return 16进制字符串对应的颜色
 */
+ (UIColor *)colorWithHexString:(NSString *)hexColor alpha:(float)opacity;

@end

NS_ASSUME_NONNULL_END
