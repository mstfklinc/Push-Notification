//
//  SceneDelegate.h
//  Push Notification
//
//  Created by Mustafa Kılınç on 29.09.2021.
//

#import <UIKit/UIKit.h>
#import <UserNotifications/UserNotifications.h>
@interface SceneDelegate : UIResponder <UIWindowSceneDelegate, UNUserNotificationCenterDelegate>

@property (strong, nonatomic) UIWindow * window;

@end

