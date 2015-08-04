
//  MboxCaller.m
//  DailyDeals
//
//  Created by Pratyusha Javangula on 7/29/15.
//  Copyright (c) 2015 Teknowledge Software. All rights reserved.
//

#import "MboxCaller.h"
#import "ADBMobile.h"

@implementation MboxCaller


- (void) makeMboxCall: (NSString*)mbox :(NSString*)defaultContent :(NSDictionary*)parameters :((void (^)(NSString* content))targetCallback
//Problems: targetCallback<string> wtf is that, ^ thing block pointers wtf is that also
                                                                                               
{
    [ADBMobile targetClearCookies];
    
    ADBTargetLocationRequest* locationRequest = [ADBMobile targetCreateRequestWithName:mbox defaultContent:defaultContent parameters:parameters];
    
    [ADBMobile targetLoadRequest:locationRequest callback:(void (^)(NSString *content))targetCallback];
    
}
                                                                                               
- (void) makeMboxConfirm: (NSString*) name :(NSString*)orderId :(NSString*) orderTotal :(NSString*)productPurchasedId :(NSDictionary*)parameters :(void (^)(NSString *content))targetCallback
{
    [ADBMobile targetClearCookies];
    
    ADBTargetLocationRequest* orderConfirm = [ADBMobile targetCreateOrderConfirmRequestWithName:name orderId:orderId orderTotal:orderTotal productPurchasedId:productPurchasedId parameters:parameters];
    
    [ADBMobile targetLoadRequest:locationRequest callback:(void (^)(NSString *content))targetCallback];
    
}
                                                                                               
@end