//
//  ViewController.h
//  Ex.2-5.4.7
//
//  Created by SDT-1 on 2014. 1. 16..
//  Copyright (c) 2014년 T. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>


@interface ViewController : UIViewController<UITableViewDataSource,UITableViewDelegate,AVAudioRecorderDelegate>

@property (weak, nonatomic) IBOutlet UITableView *table;
@property (weak, nonatomic) IBOutlet UILabel *status;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *toggleRecording;

@end
