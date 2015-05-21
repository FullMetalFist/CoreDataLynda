//
//  DisplayEditViewController.h
//  CDiOSCourses
//
//  Created by Michael Vilabrera on 5/21/15.
//  Copyright (c) 2015 Giving Tree. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "Course.h"

@interface DisplayEditViewController : UIViewController

@property (nonatomic) Course *currentCourse;
@property (weak, nonatomic) IBOutlet UITextField *authorField;
@property (weak, nonatomic) IBOutlet UITextField *titleField;
@property (weak, nonatomic) IBOutlet UITextField *dateField;

@property (weak, nonatomic) IBOutlet UIButton *editButton;
@property (weak, nonatomic) IBOutlet UIButton *doneButton;

- (IBAction)edit:(UIButton *)sender;
- (IBAction)done:(UIButton *)sender;

@end
