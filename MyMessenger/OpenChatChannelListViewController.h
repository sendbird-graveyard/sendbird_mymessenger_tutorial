//
//  OpenChatChannelListViewController.h
//  MyMessenger
//
//  Created by SendBird Developers on 12/4/15.
//  Copyright © 2015 SENDBIRD.COM. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SendBirdSDK/SendBirdSDK.h>

#import "OpenChatChannelListTableViewCell.h"
#import "OpenChatChattingViewController.h"
#import "MyUtils.h"

@interface OpenChatChannelListViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITableView *openChatChannelListTableView;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *openChatChannelListLoadingIndicator;
@property (weak, nonatomic) IBOutlet UISearchBar *channelSearchBar;

@end

