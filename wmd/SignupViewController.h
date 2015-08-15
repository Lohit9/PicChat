//
//  SignupViewController.h
//  PicChat
//
//  Created by Lohit Talasila on 2015-05-22.
//

#import <UIKit/UIKit.h>

@interface SignupViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *usernameField;

@property (strong, nonatomic) IBOutlet UITextField *passwordField;

@property (strong, nonatomic) IBOutlet UITextField *emailField;

@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;

- (IBAction)signup:(id)sender;
- (IBAction)dismiss:(id)sender;


@end
