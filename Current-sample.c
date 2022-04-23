/*Code to capture chaging ranges*/
#include "Current-sample.h"

void Sort_Current_Samples(int* current_sample_arr,int NoOfSample)
{
  int current_sample1,current_sample2,swap_var;
  for (current_sample1 = 0 ; current_sample1 < size - 1; current_sample1++)
  {
      for (current_sample2 = 0 ; current_sample2 < size - current_sample1 - 1; current_sample2++)
      {
         if (current_sample[current_sample2] > current_sample[current_sample2+1]) /* For decreasing order use < */
         {
             swap_var        = current_sample_arr[current_sample2];
             current_sample_arr[current_sample2]   = current_sample_arr[current_sample2+1];
             current_sample_arr[current_sample2+1] = swap_var;
         }
      }
  }
}
