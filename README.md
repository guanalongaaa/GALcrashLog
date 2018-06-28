# GALcrashLog

    @简单好用的单例类
     使用步骤：
     1.将文件导入工程
     2.在ApplicationDelegate中#import"GALUncaughtExceptionHandler.h"
     3.在didFinishLaunchingWithOptions方法中调用即可
     InstanceGALUncaughtExceptionHandler();
     //NSLog(@"日志收集地址：%@",InstanceGALUncaughtExceptionHandler().logFilePath);
     
     
     注意：链接Xcode使用时可根据日志地址查看log信息,若是查看真机上的log信息则需要在工程的info.plist中开启iTunes文件共享：既添加key：Application supports iTunes file sharing   value为YES. 之后可直接收集通过iTunes连接手机后在文件共享部分点击对应APP直接获取到.txt文件。
