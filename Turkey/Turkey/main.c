//
//  main.c
//  Turkey
//
//  Created by Mars on 1/10/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>



void nineninebottles(int bottles)
{
    int counter = bottles;
    
    if (counter>=0) {
        
        printf("%d bottles of beer on the wall, %d bottles of beer \n", counter, counter);
        counter--;
        nineninebottles(counter);
    }
      
   
}

int main (int argc, const char * argv[])
{
    nineninebottles(99);  
    
    
    return 0;
}

