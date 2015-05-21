//
//  AddCourseViewController.h
//  CDiOSCourses
//
//  Created by Michael Vilabrera on 5/21/15.
//  Copyright (c) 2015 Giving Tree. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Course.h"

@protocol AddCourseViewControllerDelegate;

@interface AddCourseViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *titleField;
@property (weak, nonatomic) IBOutlet UITextField *authorField;
@property (weak, nonatomic) IBOutlet UITextField *dateField;

@property (nonatomic) Course *currentCourse;

@property (weak, nonatomic) id <AddCourseViewControllerDelegate> delegate;

- (IBAction)cancel:(UIBarButtonItem *)sender;
- (IBAction)save:(UIBarButtonItem *)sender;

@end

@protocol AddCourseViewControllerDelegate

- (void) addCourseViewControllerDidSave;
- (void) addCourseViewControllerDidCancel:(Course *)courseToDelete;

@end
