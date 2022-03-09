/*Code to capture chaging ranges*/
#include "Current-sample.h"

Charge_Range sampling_Input(int* current_sample,int NoOfSample)
{
  int Lower_cnt;
  /*processing input values*/
  for(i=0;(current_sample[i]<NoOfSample);i++)
  {
    if((current_sample[i]>=3)&&(current_sample[i]<=5))
     Lower_cnt++;
  }
  return Lower_cnt;
}
