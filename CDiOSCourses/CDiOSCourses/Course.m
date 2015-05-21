//
//  Course.m
//  CDiOSCourses
//
//  Created by Michael Vilabrera on 5/21/15.
//  Copyright (c) 2015 Giving Tree. All rights reserved.
//

#import "Course.h"


@implementation Course

@dynamic title;
@dynamic releaseDate;
@dynamic author;

- (void) awakeFromInsert {
    [super awakeFromInsert];
    self.releaseDate = [NSDate date];       // customize default value to today's date
}

@end
