//
//  UserData.h
//  DemokratiAppen
//
//  Created by Joakim Rydell on 2014-01-11.
//  Copyright (c) 2014 Demokratiappen
//

#import <Foundation/Foundation.h>

@interface UserData : NSObject


@property NSMutableArray *partyArray;
@property NSMutableArray *pageArray;
@property NSMutableArray *userTagsArray;


+ (UserData*) sharedUserData;
-(void)reloadData: (NSString*)className;

-(int) getNumURLs;
-(NSString*) getURLAtIndex:(int)index;
-(NSString*) getTitleAtIndex:(int)index;


-(int) getNumUserTags;
-(int) getPositiveCount:(int)index;
-(int) getNegativeCount:(int)index;
-(NSString*) getNameAtIndex:(int)index;


-(NSArray*) getPartyData;

@end

static UserData *mySharedUserData = nil;
