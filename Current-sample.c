/*Code to capture chaging ranges*/
#include "Current-sample.h"

Charge_Range sampling_Input(int* current_sample,int NoOfSample)
{
  Charge_Range_Ver Charge_Range;
  int Lower_cnt;
  /*processing input values*/
  for(i=0;(current_sample[i]<NoOfSample);i++)
  {
    if((current_sample[i]>=3)&&(current_sample[i]<=5))
     Charge_Range.Lower_cnt++;
  }
  return Charge_Range;
}
