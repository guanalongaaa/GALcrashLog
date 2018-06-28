//
//  GALUncaughtExceptionHandler.h
//  SmartDot
//
//  Created by guanal on 2018/6/28.
//

#import <Foundation/Foundation.h>

//返回地址路径
typedef void(^ logPathBlock)(NSString *pathStr);

@interface GALUncaughtExceptionHandler : NSObject

+ (instancetype)shareInstance;

@property (nonatomic,copy) logPathBlock pathBlock;

//是否显示错误提示框 默认是不显示的
@property (nonatomic, copy) GALUncaughtExceptionHandler*(^showAlert)(BOOL yesOrNo);

//是否显示错误信息
@property (nonatomic, copy) GALUncaughtExceptionHandler*(^showErrorInfor)(BOOL yesOrNo);

//回调返回错误日志
@property (nonatomic, copy) GALUncaughtExceptionHandler*(^getlogPathBlock)(void(^ logPathBlock)(NSString *pathStr));

//错误日志路径
@property (nonatomic,strong) NSString *logFilePath;

GALUncaughtExceptionHandler * InstanceGALUncaughtExceptionHandler(void);


@end
