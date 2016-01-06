//
//  MyUtils.m
//  MyMessenger
//
//  Created by SendBird Developers on 12/6/15.
//  Copyright © 2015 SENDBIRD.COM. All rights reserved.
//

#import "MyUtils.h"

#define kKeyUserName @"sendbird_comm_ios_username"
#define kKeyUserProfileImageUrl @"sendbird_comm_ios_userprofileimageurl"

@implementation MyUtils

+ (NSString *) lastMessageDateTime:(NSTimeInterval) interval
{
    NSDate *date = [NSDate dateWithTimeIntervalSince1970:interval];
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setLocale:[NSLocale currentLocale]];
    [formatter setTimeStyle:NSDateFormatterMediumStyle];
    [formatter setDateStyle:NSDateFormatterShortStyle];
    [formatter setTimeZone:[NSTimeZone localTimeZone]];
    
    return [formatter stringFromDate:date];
}

+ (void) setUserName:(NSString *)userName
{
    NSUserDefaults *preferences = [NSUserDefaults standardUserDefaults];
    [preferences setObject:userName forKey:kKeyUserName];
    [preferences synchronize];
}

+ (NSString *) getUserName
{
    NSUserDefaults *preferences = [NSUserDefaults standardUserDefaults];
    NSString *userName = @"";
    if ([preferences objectForKey:kKeyUserName] == nil) {
        userName = @"";
    }
    else {
        userName = (NSString *)[preferences objectForKey:kKeyUserName];
    }
    
    if ([userName length] == 0) {
        NSString *deviceId = [SendBird deviceUniqueID];
        userName = [NSString stringWithFormat:@"User-%@", [deviceId substringToIndex:5]];
    }
    
    return userName;
}

+ (void) setUserProfileImage:(NSString *)profileImageUrl
{
    NSUserDefaults *preferences = [NSUserDefaults standardUserDefaults];
    [preferences setObject:profileImageUrl forKey:kKeyUserProfileImageUrl];
    [preferences synchronize];
}

+ (NSString *) getUserProfileImage
{
    NSUserDefaults *preferences = [NSUserDefaults standardUserDefaults];
    if ([preferences objectForKey:kKeyUserProfileImageUrl] == nil) {
        [MyUtils setUserProfileImage:@"https://jiver.co/main/img/profiles/profile_01_512px.png"];
        return @"https://jiver.co/main/img/profiles/profile_01_512px.png";
    }
    else {
        return (NSString *)[preferences objectForKey:kKeyUserProfileImageUrl];
    }
}

+ (NSString *)generateMessagingTitle:(SendBirdMessagingChannel *)channel
{
    if ([[channel members] count] == 2) {
        NSString *title = @"";
        for (SendBirdMemberInMessagingChannel *member in [channel members]) {
            if (![[member guestId] isEqualToString:[SendBird getUserId]]) {
                title = [member name];
            }
        }
        return title;
    }
    else {
        return [NSString stringWithFormat:@"Group(%lu)", [[channel members] count]];
    }
}

+ (NSString *)generateMessagingChannelTitle:(SendBirdMessagingChannel *)channel
{
    if ([[channel members] count] == 2) {
        NSString *title = @"";
        for (SendBirdMemberInMessagingChannel *member in [channel members]) {
            if (![[member guestId] isEqualToString:[SendBird getUserId]]) {
                title = [member name];
            }
        }
        return title;
    }
    else {
        NSString *title = @"";
        NSMutableArray *names = [[NSMutableArray alloc] init];
        for (SendBirdMemberInMessagingChannel *member in [channel members]) {
            if (![[member guestId] isEqualToString:[SendBird getUserId]]) {
                [names addObject:[member name]];
            }
        }
        title = [names componentsJoinedByString:@", "];
        return title;
    }
}

+ (NSString *)generateTypingStatus:(NSMutableDictionary *)typeStatus
{
    NSArray *values = [typeStatus allKeys];
    
    return [NSString stringWithFormat:@"%lu Typing something cool...", [values count]];
}

@end
