//
//  LoginViewController.h
//  PicChat
//
//  Created by Lohit Talasila on 2015-05-22.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *usernameField;
- (IBAction)login:(id)sender;

@property (strong, nonatomic) IBOutlet UITextField *passwordField;
@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;

@end
