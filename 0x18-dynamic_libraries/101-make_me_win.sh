#!/bin/bash
wget -P .. https://github.com/Medayoubadri/alx-low_level_programming/raw/main/0x18-dynamic_libraries/Betting_Regrets.so
export LD_PRELOAD="$PWD/../Betting_Regrets.so"
