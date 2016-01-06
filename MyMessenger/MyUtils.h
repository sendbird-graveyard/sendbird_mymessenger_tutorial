//
//  MyUtils.h
//  MyMessenger
//
//  Created by SendBird Developers on 12/6/15.
//  Copyright © 2015 SENDBIRD.COM. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SendBirdSDK/SendBirdSDK.h>

@interface MyUtils : NSObject

+ (NSString *) lastMessageDateTime:(NSTimeInterval) interval;
+ (void) setUserName:(NSString *)userName;
+ (NSString *) getUserName;
+ (void) setUserProfileImage:(NSString *)profileImageUrl;
+ (NSString *) getUserProfileImage;
+ (NSString *)generateMessagingTitle:(SendBirdMessagingChannel *)channel;
+ (NSString *)generateMessagingChannelTitle:(SendBirdMessagingChannel *)channel;
+ (NSString *)generateTypingStatus:(NSMutableDictionary *)typeStatus;

@end
