//
//  main.c
//  countbackwards
//
//  Created by Mars on 1/11/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>

int main (int argc, const char * argv[])
{

    // insert code here...
    int counter = 99;
    do{
        if(counter % 5 == 0)
        {
            printf("found one! size: %zu bytes\n", counter);
        }
        printf("%d\n",counter);
        
        counter--;
    }while(counter>0);
    return 0;
}

