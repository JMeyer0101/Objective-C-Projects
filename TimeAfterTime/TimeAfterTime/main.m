//
//  main.m
//  TimeAfterTime
//
//  Created by Mars on 1/13/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

int main (int argc, const char * argv[])
{

    @autoreleasepool {
        
        // insert code here...
        NSDate *now = [NSDate date];
        NSLog(@"the date is %@\n", now);
        double seconds = [now timeIntervalSince1970];
        NSLog(@"It has been %f seconds since the start of 1970.", seconds);
    }
    return 0;
}

