//
//  MessagingMemberTableViewCell.h
//  MyMessenger
//
//  Created by SendBird Developers on 12/11/15.
//  Copyright © 2015 SENDBIRD.COM. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AFNetworking/AFNetworking.h>
#import <AFNetworking/UIImageView+AFNetworking.h>
#import <SendBirdSDK/SendBirdSDK.h>

#import "MyUtils.h"

@interface MessagingMemberTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *profileImageView;
@property (weak, nonatomic) IBOutlet UILabel *nicknameLabel;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *profileImageViewHeight;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *profileImageViewWidth;

- (void) setSendBirdMember:(SendBirdMemberInMessagingChannel *)mbr;

@end
