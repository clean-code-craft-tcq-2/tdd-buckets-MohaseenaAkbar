#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "Current-sample.h"

/*Test case for sorting the Input array*/
TEST_CASE("sorting the Input array") 
{
  int current_sample_arr[]={2,8,10,15,3,4,5};
  int expected_sorted_arr[]={2,3,4,5,8,10,15};
  boolean isArrayEqual=true;
  Sort_Current_Samples(&current_sample_array,5);
  for (int i = 0; i < arr2.Length; i++) 
  {
      if (expected_sorted_arr[i] != current_sample_arr[i]) 
      {
          isArrayEqual = false;
      }
  }
  REQUIRE(isArrayEqual == true);
}

