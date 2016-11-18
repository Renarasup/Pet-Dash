//
//  GameViewController.h
//  COM4510Pair
//
//  Created by aca13ytw on 18/11/2016.
//  Copyright © 2016 aca13ytw. All rights reserved.
//

#import "BackgroundViewController.h"

@interface GameViewController : BackgroundViewController

@property (weak) IBOutlet UILabel* scoreLabel;
@property (weak) IBOutlet UILabel* timerLabel;
@property (weak) IBOutlet UIView* gameField;

-(void)initGame;
-(void)buttonClicked;
@end