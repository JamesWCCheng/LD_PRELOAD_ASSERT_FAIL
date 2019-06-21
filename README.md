# LD_PRELOAD_ASSERT_FAIL
try hooking assert_fail

g++ --shared -fPIC preload.cpp -o libpreload.so
g++ main.cpp
LD_PRELOAD="./libpreload.so" ./a.out
