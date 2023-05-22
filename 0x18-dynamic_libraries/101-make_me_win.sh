#!/bin/bash
wget -O /tmp/win.so https://github.com/kirounan/alx-low_level_programming/tree/master/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so
