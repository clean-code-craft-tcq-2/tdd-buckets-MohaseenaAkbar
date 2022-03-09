#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "Current-sample.h"

/*Test case for current sampling input*/
TEST_CASE("Current sampling input test for range 3-5") {
  int current_sample_array[5]={2,2,3,4,5};
  sampling_Input(&current_sample_array,5);
  //REQUIRE(sampling_Input(&current_sample_array,5) == 3);
}

#if 0
TEST_CASE("Current sampling input test for range 10-12") {
  int current_sample_array[5]={10,12,13,11,10};
  REQUIRE(sampling_Input(&current_sample_array,5) == 4);
}
#endif
