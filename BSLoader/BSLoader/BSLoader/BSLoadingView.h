//
//  BSLoadingView.h
//  BSLoader
//
//  Created by Bisma on 08/08/2017.
//  Copyright © 2017 Bisma. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BSLoadingView : UIView<CAAnimationDelegate>

-(id)init;
-(id)initWithFrame:(CGRect)frame;

@property (nonatomic,strong) CAShapeLayer *circleLayerOne;
@property (nonatomic,strong) CAShapeLayer *circleLayerTwo;
@property (nonatomic,strong) CAShapeLayer *circleLayerThree;
@property (nonatomic,strong) CAShapeLayer *circleLayerFour;
@property (nonatomic,strong) CAShapeLayer *circleLayerFive;

@end
