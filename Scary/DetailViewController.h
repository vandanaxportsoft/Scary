//
//  DetailViewController.h
//  Scary
//
//  Created by Vandana on 21/01/13.
//  Copyright (c) 2013 Sunil Ohri. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RateView.h"
#import "ScaryBugDoc.h"
@interface DetailViewController : UIViewController<UITextFieldDelegate,RateViewDelegate,UIImagePickerControllerDelegate,UINavigationBarDelegate>


@property (strong, nonatomic) ScaryBugDoc *detailItem;
@property (weak, nonatomic) IBOutlet UITextField *titleField;
- (IBAction)addPictureTapped:(id)sender;
@property (weak, nonatomic) IBOutlet RateView *rateView;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
- (IBAction)textFieldTextChanged:(id)sender;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@property (strong, nonatomic) UIImagePickerController * picker;
@end
