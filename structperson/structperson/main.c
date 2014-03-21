//
//  main.c
//  structperson
//
//  Created by Mars on 1/13/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>
/*
struct Person
{
    float heightinmeters;
    int weightinkilos;
};
*/
typedef struct{
    float heightinmeters;
    int weightinkilos
}Person;

float bodyMass(Person p)
{
    return p.weightinkilos/(p.heightinmeters * p.heightinmeters);
    
};

int main (int argc, const char * argv[])
{

    // insert code here...
    Person personone;
    personone.weightinkilos = 96;
    personone.heightinmeters = 1.8;
    
    printf("person weighs %i kilograms and is %.2f meters tall\n",
    personone.weightinkilos, personone.heightinmeters);
    
    printf("person has a BMI of %.2f\n", bodyMass(personone));
    
   
    
    return 0;
}

