//
//  MessagingMembersInChannelViewController.h
//  MyMessenger
//
//  Created by SendBird Developers on 12/11/15.
//  Copyright © 2015 SENDBIRD.COM. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SendBirdSDK/SendBirdSDK.h>

#import "MessagingMemberTableViewCell.h"
#import "MyUtils.h"

@interface MessagingMembersInChannelViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITableView *messagingMemberTableView;

- (void)setSendBirdMessagingChannel:(SendBirdMessagingChannel *)channel;

@end
