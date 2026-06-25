#include <stdio.h>
#include <stdlib.h>
void get_temp_faher(float* tempretutres);

int main(){

    /*this is how we create a pointer (an address): type* var;
    we need allocate a size/space for our pointer because we cannot leave it for random
    the malloc allocation func returns a space of 64B with void*, hence we need to typecast it to float*.
    After that we store it*/  
    float* temp_f =  (float*)malloc(16 * sizeof(float));

    // Check if allocation worked
    if (temp_f == NULL) {
        return 1; 
    }
    get_temp_faher(temp_f);

    float tCelsius[16] ;
    for(int i = 0; i < 16; i++){
        tCelsius[i] =   (5* (temp_f[i] - 32)) / 9.0;
        printf("Fahrenheit:%.2f\tCelsius:%.2f\n", temp_f[i] , tCelsius[i]);
    }

     // 2. Free the space when you are completely done using it
    free(temp_f); 

    return 0;
}



void get_temp_faher(float* tempretutres){
    tempretutres[0] = 0;
    for(int i = 1; i < 16; i++)
        tempretutres[i] = tempretutres[i - 1] + 20;

    /*pointer way
    *tempretutres = 0;
    for(int i = 1; i < 16; i++)
        *(tempretutres + i) = *tempretutres + 20; 
    */
        

}