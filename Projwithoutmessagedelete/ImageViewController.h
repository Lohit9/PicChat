//
//  ImageViewController.h
//  PicChat
//
//  Created by Lohit Talasila on 2015-05-22.
//

#import <UIKit/UIKit.h>

#import <Parse/Parse.h>

@interface ImageViewController : UIViewController

@property (nonatomic, strong) PFObject *message;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end
