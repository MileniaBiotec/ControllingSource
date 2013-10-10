//
//  mbDetailViewController.h
//  Controlling Source
//
//  Created by Ingo Schneider on 10.10.13.
//  Copyright (c) 2013 Ingo Schneider. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface mbDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
