//
//  main.c
//  structchallenge1
//
//  Created by Mars on 1/13/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>
#include <time.h>




int main (int argc, const char * argv[])
{

    // insert code here...
    long secondsSince1970 = time(NULL);
    long addfourMillion = secondsSince1970 + 4000000;
    struct tm now;
    localtime_r(&secondsSince1970, &now);
    printf("the time is %d : %d : %d \n", now.tm_hour, now.tm_min, now.tm_sec);
    
    printf("current date is %d-%d-%d\n", (now.tm_mon+1),now.tm_mday,now.tm_year +1900);

    struct tm then;
    localtime_r(&addfourMillion, &then);
    printf("in 4 million seconds, the date will be %d-%d-%d\n", (then.tm_mon+1),then.tm_mday,then.tm_year +1900);
           
    
    
    
    
    return 0;
}

