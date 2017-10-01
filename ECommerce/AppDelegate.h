//
//  AppDelegate.h
//  ECommerce
//
//  Created by SuS on 2017/9/30.
//  Copyright © 2017年 SuS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

//@SuS 1、http://blog.csdn.net/chmod_r_755/article/details/78052380  Safe Area Layout Guide Before IOS 9.0
//iOS安装CocoaPods详细过程 http://www.jianshu.com/p/9e4e36ba8574
//CocoaPods报错：The dependency `AFNetworking ` is not used in any concrete target 正确配置安装CocoaPods

//安装完下面这些库 之后要通过Ecommerce。xcworkspa重启 否则会报错

// pod 'SDWebImage', '~> 4.1.0'
// pod 'AFNetworking', '~> 3.1.0'
// pod 'Masonry', '~> 1.0.2'

/*mac中如何从vim文本编辑器退回到命令
有的时候，我们经常从命令行中进入vim文本编辑器，如何退回来呢：
只需要经过两步：1.按下esc键  2.输入":wq"(保存退出)  输入":q!"(不保存退出)
要在英文模式下
 */

//刚刚学习了怎么更换应用icon  即AppIcon
//两种方式配置启动图 （配置启动页 防止启动白屏的问题）
@end

