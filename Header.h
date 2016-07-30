//
//  Header.h
//  SortArray
//
//  Created by Dominic Liebel on 30.07.16.
//  Copyright © 2016 Dominic Liebel. All rights reserved.
//

#ifndef Header_h
#define Header_h


void sortArray(void)
{
    
        int array[5] = {51,555446,2223,23,122};
    
    printf("Unsorted:\n");
    for(int x = 0; x < 5; x++){
        printf("%i\n", array[x]);
    }
        printf("\n Beginning Sorting process.. \n\n");
    while(array[0] > array[1] || array[1] > array[2]  || array[2] > array[3]|| array[3] > array[4]) {
    
    if(array[0] > array[1]) {
        int zwischenLager0 = array[0];
        int zwischenLager1 = array[1];
        
        array[0] = zwischenLager1;
        array[1] = zwischenLager0;
        for(int x = 0; x < 5; x++){
            printf("%i\n", array[x]);
        }
        printf("\n");
    }
        if(array[1] > array[2]) {
            int zwischenLager2 = array[1];
            int zwischenLager3 = array[2];
            
            array[1] = zwischenLager3;
            array[2] = zwischenLager2;
            for(int x = 0; x < 5; x++){
                printf("%i\n", array[x]);
            }
                printf("\n");
        }
    if(array[2] > array[3])
    {
        int zwischenLager4 = array[2];
        int zwischenLager5 = array[3];
        
        array[2] = zwischenLager5;
        array[3] = zwischenLager4;
        for(int x = 0; x < 5; x++)
        {
            printf("%i\n", array[x]);
        }
        printf("\n");
    }
    if(array[3] > array[4])
    {
        int zwischenLager6 = array[3];
        int zwischenLager7 = array[4];
        
        array[3] = zwischenLager7;
        array[4] = zwischenLager6;
        for(int x = 0; x < 5; x++)
        {
            printf("%i\n", array[x]);
        }
    }
    }
}




#endif /* Header_h */
