//
//  SettingsViewController.h
//  MyMessenger
//
//  Created by SendBird Developers on 12/7/15.
//  Copyright © 2015 SENDBIRD.COM. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AFNetworking/AFNetworking.h>
#import <AFNetworking/UIImageView+AFNetworking.h>
#import <SendBirdSDK/SendBirdSDK.h>

#import "MyUtils.h"

@interface SettingsViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *profileImageView;
@property (weak, nonatomic) IBOutlet UITextField *nicknameTextField;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *profileImageViewHeight;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *profileImageViewWidth;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *imageLoadingIndicator;

@end
