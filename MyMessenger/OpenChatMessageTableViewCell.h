//
//  OpenChatMessageTableViewCell.h
//  MyMessenger
//
//  Created by SendBird Developers on 12/4/15.
//  Copyright © 2015 SENDBIRD.COM. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SendBirdSDK/SendBirdSDK.h>

@interface OpenChatMessageTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *messageLabel;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *messageLabelLeftMargin;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *messageLabelRightMargin;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *messageLabelBottomMargin;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *messageLabelTopMargin;

- (void)setMessage:(SendBirdMessage *)msg;
- (CGFloat)getCellHeight;

@end
