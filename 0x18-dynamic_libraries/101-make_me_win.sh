#!/bin/bash
wget -P /tmp https://github.com/Medayoubadri/alx-low_level_programming/raw/main/0x18-dynamic_libraries/betting_regrets.so
export LD_PRELOAD=./betting_regrets.so
