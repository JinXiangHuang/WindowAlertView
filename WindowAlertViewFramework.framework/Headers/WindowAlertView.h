//
//  WindowAlertView.h
//  WindowAlertViewDemo
//
//  Created by 黄锦祥 on 2018/8/1.
//  Copyright © 2018年 晨曦科技. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, WindowAlertViewCreatStyle)
{
    WindowAlertViewDefalutInit = 0,//默认 每一个都初始化
    WindowAlertViewLowNoInit,//等级低的不初始化
    WindowAlertViewSingle,//单例 未实现
    WindowAlertViewTopOnlyOne,//等级最高且去掉其余的，不会再出现别的
};
typedef void(^CancelBlock)(void);
@interface WindowAlertView : UIViewController
@property (nonatomic,assign)UIWindowLevel windowLevel;
@property (nonatomic,assign,readonly)WindowAlertViewCreatStyle style;
@property (nonatomic,copy)  CancelBlock   cancelBlock;
+ (instancetype)showAlertViewWithStyle:(WindowAlertViewCreatStyle)style WindowLevel:(UIWindowLevel)level BackgroundColor:(UIColor *)backgroundColor TouchToClose:(BOOL)touchToClose;
- (void)closeView;
@end
