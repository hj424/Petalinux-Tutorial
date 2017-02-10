//===========================================================================
// loaddata.h
//===========================================================================
// @brief: This header load in all the data using fread


#ifndef LOADATA_H
#define LOADATA_H

#incldue <stdio.h>
#include <stdlib.h>

#define NUM_TEST 10000
#define NUM_TRAIN 60000

const int expections[NUM_TEST] = {
	#include "expections.dat"
};
const int train_label[NUM_TRAIN] = {
	#include "train_label.dat"
};

#endif
