#!/bin/bash 
#
# Install required packages
#

sudo apt-get update
sudo apt-get install -y build-essential libboost-all-dev libssl-dev libffi-dev python3-dev gcc-11 g++-11 git cmake librocksdb-dev cron rpcbind libboost-system1.74.0 libboost-filesystem1.74.0 libboost-thread1.74.0 libboost-date-time1.74.0 libboost-chrono1.74.0 libboost-regex1.74.0 libboost-serialization1.74.0 libboost-program-options1.74.0 libicu70 libgmp3-dev libmpfr-dev texinfo tzdata

# git flow
sudo apt-get install git-flow

# Install sphinx for documentation generation
apt-get install python3-sphinx