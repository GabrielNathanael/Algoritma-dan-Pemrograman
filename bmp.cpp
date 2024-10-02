#include "stdio.h"

FILE *fl;
FILE *flNeg;
char buf[256];
char pixel[3];

int main()
{

  fl = fopen("sample.BMP", "rb");
  flNeg = fopen("sampleFinal.BMP", "wb");
  

  fread(buf, 1, 54, fl);
  fwrite(buf, 1, 54, flNeg);

  while (fread(pixel, 1, 3, fl))
  {
    
    char temp = pixel[0];
    pixel[0] = pixel[2];
    pixel[2] = temp;

   
    for (int i = 0; i < 3; i++)
    {
      if (pixel[i] <= 200)
      {
        pixel[i] += 55;
      }
      else
      {
        pixel[i] = 255;
      }
    }

    fwrite(pixel, 1, 3, flNeg);
  }

  fclose(fl);
  fclose(flNeg);

  return 0;
}