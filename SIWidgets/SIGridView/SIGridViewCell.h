//
//  SIGridViewCell.h
//  SIKit
//
//  Created by Matias Pequeno on 9/15/12.
//  Copyright (c) 2012 Silicon Illusions, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SIGridViewCell : UIView

@property (nonatomic, readwrite, retain) IBOutlet UILabel *titleLabel;
@property (nonatomic, readwrite, retain) IBOutlet UIImageView *imageView;

@property (nonatomic, readwrite, copy) NSString *title;
@property (nonatomic, readwrite, copy) NSString *imageURL;

@property (nonatomic, readwrite, assign) BOOL horizontalModeEnabled;
@property (nonatomic, readwrite, assign) CGFloat imageHeight;
@property (nonatomic, readwrite, assign) CGFloat imageWidth;

- (void)updateCellInfo:(NSDictionary *)data;

@end
