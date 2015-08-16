#define _CRT_SECURE_NO_DEPRECATE
#pragma pack(1)

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef enum _ErrorID
{
	errOK,
	errParamError,
	errOpenPpmError,
	errReadPpmError,
	errOpenBmpError,
	errWriteBmpError,
	errMemoryError
} ErrorID;

// convert ppm file to bmp file
ErrorID ppm2bmp(char *ppmFilename, char *bmpFilename);