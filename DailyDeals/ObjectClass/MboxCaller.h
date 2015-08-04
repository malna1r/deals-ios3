//
//  MboxCaller.h
//  DailyDeals
//
//  Created by Pratyusha Javangula on 7/29/15.
//  Copyright (c) 2015 Teknowledge Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ADBMobile.h"

@interface MboxCaller : NSObject

- (void) makeMboxCall: (NSString*)mbox :(NSString*)defaultContent :(NSDictionary*)parameters :((void (^)(NSString* content))targetCallback;
                                                                                               
- (void) makeMboxConfirm: (NSString*) name :(NSString*)orderId :(NSString*) orderTotal :(NSString*)productPurchasedId :(NSDictionary*)parameters :(void (^)(NSString *content))targetCallback;
                                                                                               
@end