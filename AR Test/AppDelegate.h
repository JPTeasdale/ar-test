//
//  AppDelegate.h
//  AR Test
//
//  Created by John Teasdale on 9/6/17.
//  Copyright © 2017 Teasdale Games LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

