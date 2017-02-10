#ifndef LOADIMAGE_H
#define LOADIMAGE_H


#include <stdio.h>
#include <stdlib.h>
#include "loadata.h"

void load_image(unsigned char * test_buf, unsigned char * train_buf){
	int result;
	
	FILE * train_data;
	train_data = fopen("train-images-idx3-ubyte","r");
	result = fread(train_buf, sizeof(unsigned char), NUM_TRAIN *28*28,trian_data);
	
	FILE * test_data;
	test_data = fopen("t10k-images-idx3-ubyte","r");
	result = fread(test_buf, sizeof(unsigned char), NUM_TEST *28*28,test_data);
}

#endif