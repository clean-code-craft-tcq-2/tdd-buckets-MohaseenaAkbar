#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "Current-sample.h"

/*Test case for sorting the Input array*/
TEST_CASE("sorting the Input array") 
{
  int current_sample_arr[]={2,8,10,15,3,4,5};
  int expected_sorted_arr[]={2,3,4,5,8,10,15};
  bool isArrayEqual=true;
  int Current_Sample,Sample_Size=5;
  Sort_Current_Samples(&current_sample_array,Sample_Size);
  for (int Current_Sample = 0; Current_Sample < Sample_Size; Current_Sample++) 
  {
      if (expected_sorted_arr[Current_Sample] != current_sample_arr[Current_Sample]) 
      {
          isArrayEqual = false;
      }
  }
  REQUIRE(isArrayEqual == true);
}

