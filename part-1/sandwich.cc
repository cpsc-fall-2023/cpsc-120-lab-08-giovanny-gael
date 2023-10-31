// Gael Lemus
// gelemus@csu.fullerton.edu
// @GaelLemus
// Partners: @giovannyr23

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // XTODO: Validate that the number of arguments is correct.
  // If not, print an error message and return a non-zero value.
  if (argc != 4) {
    std::cout << "error: you must supply three arguments";
    return 73;
  }
  // XTODO: Declare three std::string variables to hold the
  // protein, bread, and condiment input.
  // Initialize each variable with an element of the arguments vector
  // declared above.
  std::string protein{arguments[1]};
  std::string bread{arguments[2]};
  std::string condiment{arguments[3]};
  // XTODO: Use cout to print output following the pattern
  // Your order: A *PROTEIN* sandwich on *BREAD* with *CONDIMENT*.
  // on its own line.
  std::cout << "Your order: A " << protein << " sandwich on " << bread
            << " with " << condiment;
  return 0;
}
