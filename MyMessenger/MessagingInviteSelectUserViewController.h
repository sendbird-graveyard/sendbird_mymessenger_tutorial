//
//  MessagingInviteSelectUserViewController.h
//  MyMessenger
//
//  Created by SendBird Developers on 12/10/15.
//  Copyright © 2015 SENDBIRD.COM. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SendBirdSDK/SendBirdSDK.h>

#import "MessagingInviteSelectUserTableViewCell.h"
#import "MyUtils.h"
#import "MessagingViewController.h"

@interface MessagingInviteSelectUserViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITableView *messagingInviteSelectUserTableView;

- (void)setChannel:(SendBirdChannel *)channel;

@end
