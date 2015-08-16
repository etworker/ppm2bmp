# ppm2bmp

## Introduction

I cannot find any command line tool to convert image file from ppm to bmp under Windows, so I have to write my tool.

This tool can convert image file from [ppm format](http://netpbm.sourceforge.net/doc/ppm.html) to bmp format.

## Usage

Syntax:

```ppm2bmp.exe <ppm filename> <bmp filename>```

Example:

```ppm2bmp.exe c:\a.ppm c:\a.bmp```

## Note

Only support ppm file with magic number is `P6` and maximum color value is `255`.

## Develop environment:

- Windows 8.1 64bit
- Visual Studio 2013
- Pure C code without any 3rd lib

## For developer

If you are working under Linux, maybe [Netpbm](http://netpbm.sourceforge.net/doc/index.html) is better than this tool.

If you need integrate this function into your application, please look at the function

```ErrorID ppm2bmp(char *ppmFilename, char *bmpFilename);```