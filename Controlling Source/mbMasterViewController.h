//
//  mbMasterViewController.h
//  Controlling Source
//
//  Created by Ingo Schneider on 10.10.13.
//  Copyright (c) 2013 Ingo Schneider. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface mbMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
