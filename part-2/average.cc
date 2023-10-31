// Gael Lemus
// gelemus@csu.fullerton.edu
// @GaelLemus
// Partners: @giovannyr23

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // XTODO: Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if (argc < 2) {
    std::cout << "error: you must supply at least one number";
    return 73;
  }
  int counter{0};
  double sum{0};
  bool flag = true;
  // XTODO: Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or double type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  for (std::string arg : arguments) {
    if (flag == true) {
      flag = false;
    } else {
      sum = sum + std::stod(arg);
      counter = counter + 1;
    }
  }
  // XTODO: After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.
  double average{sum / counter};
  // XTODO: Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.
  std::cout << average << "\n";
  return 0;
}
