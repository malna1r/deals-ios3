//
//  ViewController.h
//  DailyDeals
//
//  Created by MyAppTemplates Software on 07/04/14.
//  Copy/Users/subhashkrjha/Desktop/DailyDeals/DailyDeals/Base.lproj/Main.storyboard
//Users/subhashkrjha/Desktop/DailyDeals/DailyDeals/ViewController.h
//Users/subhashkrjha/Desktop/DailyDeals/DailyDeals/ViewController.mright (c) 2014 MyAppTemplates Software. All rights reserved.
//

#import <UIKit/UIKit.h>
<<<<<<< HEAD
#import "MboxCaller.h"
=======
>>>>>>> origin/master
#import "ADBMobile.h"

@interface ViewController : UIViewController<UITextFieldDelegate>
@property(nonatomic,strong)IBOutlet UIScrollView *scrollView;
@property(nonatomic,strong)IBOutlet UIButton *btnTwitter;
@property(nonatomic,strong)IBOutlet UIButton *btnFacebook;
@property(nonatomic,strong)IBOutlet UIButton *btnLogin;
@property(nonatomic,strong)IBOutlet UIButton *btnRegister;
@property(nonatomic,strong)IBOutlet UITextField *txtFieldEmail;
@property(nonatomic,strong)IBOutlet UITextField *txtFieldPassword;
<<<<<<< HEAD
@property(nonatomic,strong)IBOutlet UILabel *targetLabel1;
=======
@property (nonatomic, strong) IBOutlet UILabel *welcomeMessage;

-(void)welcomeMessageCampaign;
>>>>>>> origin/master
-(IBAction)btnLoginClk:(id)sender;
-(IBAction)btnFacebookLoginClk:(id)sender;
-(IBAction)btnTwitterClk:(id)sender;


@end
