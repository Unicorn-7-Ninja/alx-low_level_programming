#!/bin/bash
wget -P /tmp https://github.com/Unicron-7-Ninja/alx-low_level_programming/raw/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
