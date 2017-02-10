#include <stdlib.h>
#include <stdio.h>
#include "loadata.h"
#include "loadimage.h"
#include "timer.h"
unsigned char * test_buf;
unsigned char * train_buf;
int predictions[NUM_TEST];
void main(){
	int p,error;
	test_buf = (unsigned char*) malloc ( sizeof(unsigned char) * 28*28 * NUM_TEST);
	train_buf = (unsigned char*) malloc ( sizeof(unsigned char) * 28*28 * NUM_TRAIN);
//load all images
    load_image(test_buf, train_buf);
//process all images function dut (hardware function)
    timer.start();
	dut();
	timer.stop();
//caculate the error rate
    for(p = 0; p < NUM_TEST; p++){
		if (expections[p] != predictions[p])
		{error++;}
	}
	printf("the error rate is %f" , error/NUM_TEST);
}