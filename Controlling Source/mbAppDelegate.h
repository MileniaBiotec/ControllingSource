//
//  mbAppDelegate.h
//  Controlling Source
//
//  Created by Ingo Schneider on 10.10.13.
//  Copyright (c) 2013 Ingo Schneider. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface mbAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
