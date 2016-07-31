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
    int array[5] = {5,4,3,2,1};
    
    while(array[0] > array[1] || array[1] > array[2]  || array[2] > array[3]|| array[3] > array[4])
        {
            for(int x = 0; x < 4; x++)
            {
        
                if(array[x] > array[x + 1])
                {
                    int placeholder0 = array[x];
                    int placeholder1 = array[x + 1];
                    array[x] = placeholder1;
                    array[x+1] = placeholder0;
                    for(int x = 0; x < 5; x++)
                        {
                            printf("%i\n", array[x]);
                        }
                    printf("\n");
                }
            }
        }
}




#endif /* Header_h */
