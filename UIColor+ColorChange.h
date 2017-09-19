//
//  UIColor+ColorChange.h
//  QingQuanTool
//
//  Created by 李鹏飞 on 2017/1/12.
//  Copyright © 2017年 李鹏飞. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (ColorChange)
// 颜色转换：iOS中（以#开头）十六进制的颜色转换为UIColor(RGB)
+ (UIColor *) colorWithHexString: (NSString *)color;
@end
