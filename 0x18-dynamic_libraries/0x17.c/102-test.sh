#!/bin/bash
wget -q -O /tmp/gig.so "https://raw.githubusercontent.com/edward0rtiz/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/gig.so"
export LD_PRELOAD=/tmp/gig.so
