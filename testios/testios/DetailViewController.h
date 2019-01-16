//
//  DetailViewController.h
//  testios
//
//  Created by 365 on 1/16/19.
//  Copyright © 2019 365. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

