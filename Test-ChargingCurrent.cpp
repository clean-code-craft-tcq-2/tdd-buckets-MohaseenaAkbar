#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"

/*Test case for current sampling input*/
TEST_CASE("Current sampling input test") {
  int current_sample_array[5]={2,2,3,4,5};
  REQUIRE(sampling_Input(&current_sample_array,5) == 3);
}
