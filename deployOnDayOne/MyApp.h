//
//  MyApp.h
//  deployOnDayOne
//
//  Created by Zachary Drossman on 1/28/15.
//  Copyright (c) 2015 Zachary Drossman. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface MyApp : NSObject

@property (strong, nonatomic) NSString *currentUser;
@property (strong, nonatomic) NSMutableDictionary *catagoriesAndQuestions;
@property (strong, nonatomic) NSMutableDictionary *pastUsersInformation;

-(void)execute;

-(NSString *) logInScreen;

@end
