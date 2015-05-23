//
//  FriendsViewController.h
//  PicChat
//
//  Created by Lohit Talasila on 2015-05-22.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface FriendsViewController : UITableViewController

@property (nonatomic, strong) PFRelation *friendsRelation;
@property (nonatomic, strong) NSArray *friends;

@end