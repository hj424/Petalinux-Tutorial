#include <stdlib.h>
#include <stdio.h>
#include "loadata.h"
#include "dut.h"
#define THREAS 20

int dut(){
	int i,j,k,q,confidence = 0;
	int temp = 0;
	unsigned char diff[784];
	unsigned char test_image[784];
	unsigned char train_image[784];
//process all the images
	for( k = 0; k < NUM_TEST; k++){
        //load the kth test image
		for( q = 0; q < 784; q++){test_image[q] = test_buf[k*784+q];}
		for ( j = 0; j < NUM_TRAIN; j++){
		//load the jth train image
		for (q = 0; q < 784; q++){train_image[q] = train_buf[j*784+q];}
			for (i = 0; i < 784; i++){
				diff[i] = abs(train_image[i] - test_image[i]);
				if £¨diff[i] <= THREAS)
				{confidence++;}
			}
				if (confidence > temp){
					temp = confidence;
					confidence = 0;
					index = j;}
		}
	predictions[k] = train_label[index]}
return 0;
}