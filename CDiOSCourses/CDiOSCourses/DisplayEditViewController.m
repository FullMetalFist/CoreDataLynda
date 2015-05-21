//
//  DisplayEditViewController.m
//  CDiOSCourses
//
//  Created by Michael Vilabrera on 5/21/15.
//  Copyright (c) 2015 Giving Tree. All rights reserved.
//

#import "DisplayEditViewController.h"

@interface DisplayEditViewController ()

@end

@implementation DisplayEditViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.titleField.text = self.currentCourse.title;
    self.authorField.text = self.currentCourse.author;
    
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:@"yyyy-MM-dd"];
    self.dateField.text = [dateFormatter stringFromDate:self.currentCourse.releaseDate];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
