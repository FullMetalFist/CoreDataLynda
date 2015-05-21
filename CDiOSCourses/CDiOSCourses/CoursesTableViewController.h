//
//  CoursesTableViewController.h
//  CDiOSCourses
//
//  Created by Michael Vilabrera on 5/21/15.
//  Copyright (c) 2015 Giving Tree. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

#import "AddCourseViewController.h"

@interface CoursesTableViewController : UITableViewController <AddCourseViewControllerDelegate>

@property (nonatomic) NSManagedObjectContext *managedObjectContext;

@property (nonatomic) NSFetchedResultsController *fetchedResultsController;

@end
