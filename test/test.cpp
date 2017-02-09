/* fread example: read an entire file */
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>

#define NUM_DATA 10008

int main () {
  FILE * pFile;
  FILE * fp_out;

  long lSize;
  char * buffer;
  size_t result;

  pFile = fopen ( "myfile.bin" , "rb" );
  if (pFile==NULL) {fputs ("File error",stderr); exit (1);}

  // obtain file size:
  fseek (pFile , 0 , SEEK_END);
  lSize = ftell (pFile);
  rewind (pFile);

  // allocate memory to contain the whole file:
  buffer = (char*) malloc (sizeof(char)*lSize);
  if (buffer == NULL) {fputs ("Memory error",stderr); exit (2);}

  // copy the file into the buffer:
  result = fread (buffer,1,lSize,pFile);
  if (result != lSize) {fputs ("Reading error",stderr); exit (3);}

  std::cout << result << std::endl;
  // open the output file
  fp_out = fopen("output.dat","w");
/*
  for (int i = 8; i < NUM_DATA; i++)
  { 
    fwrite
  }
*/
  fwrite (buffer,sizeof(char),result,fp_out);
  /* the whole file is now loaded in the memory buffer. */

  // terminate
  fclose (pFile); 
  fclose (fp_out);
  free (buffer);
  return 0;
}
