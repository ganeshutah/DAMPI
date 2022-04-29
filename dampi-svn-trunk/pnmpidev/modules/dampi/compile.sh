#!/bin/bash

make -C /home/avo/research/pnmpi/pnmpi/modules/requests clean
make -C /home/avo/research/pnmpi/pnmpi/modules/status clean
make -C /home/avo/research/pnmpi/pnmpi/modules/requests
make -C /home/avo/research/pnmpi/pnmpi/modules/status
make clean
make
