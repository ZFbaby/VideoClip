//
//  FMLClipFrameView.h
//  VideoClip
//
//  Created by samo on 16/7/27.
//  Copyright © 2016年 Collion. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface FMLClipFrameView : UIView

@property (nonatomic, copy) void (^didDragView)(UIImage *image);

- (instancetype)initWithAsset:(AVAsset *)asset minSeconds:(Float64)seconds;

@end