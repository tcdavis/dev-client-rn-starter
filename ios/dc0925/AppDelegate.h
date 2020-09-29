#import <React/RCTBridgeDelegate.h>
#import <UIKit/UIKit.h>
#import <EXDevelopmentClientController.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, RCTBridgeDelegate, EXDevelopmentClientControllerDelegate>

@property (nonatomic, strong) UIWindow *window;

@end
