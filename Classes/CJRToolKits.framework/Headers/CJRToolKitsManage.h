
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CJRToolKitsManage : NSObject

+ (CJRToolKitsManage *)sharedManager;

- (void)CJRToolKitsbegin:(UIView *)view;

- (void)CJRToolKitsend:(UIView *)view;

@end

NS_ASSUME_NONNULL_END
