#!/bin/bash


output_library="liball.a"


c_sources=$(find . -maxdepth 1 -name "*.c")


if [ -z "$c_sources" ]; then
  echo "No .c files found in the current directory."
  exit 1
fi


for source in $c_sources; do
  gcc -Wall -pedantic -Werror -Wextra -c "$source"
done


ar -rc "$output_library" *.o


ranlib "$output_library"

echo "Static library $output_library created successfully."
