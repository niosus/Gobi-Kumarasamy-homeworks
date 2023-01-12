echo " ******** Current working directory ******** "
pwd
echo " -------- -------- -------- -------- -------- -------- -------- -------- -------- --------"

echo " ******** BUILD directory ******** "
rm -r build
mkdir build
echo " -------- -------- -------- -------- -------- -------- -------- -------- -------- --------"

echo " ******** CMAKE ******** "
cmake -S . -B build
cmake --build build     
echo " -------- -------- -------- -------- -------- -------- -------- -------- -------- --------"

echo " ******** Google Test ********"
GTEST_COLOR=1 ctest --test-dir build --output-on-failure
#GTEST_COLOR=1 ctest --test-dir build --verbose
echo " -------- -------- -------- -------- -------- -------- -------- -------- -------- --------"

#echo " ******** Run Binary ********"
#./build/examples/split_strings
echo " -------- -------- -------- -------- -------- -------- -------- -------- -------- --------"