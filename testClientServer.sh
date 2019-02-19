#!/usr/bin/env bash
set -eu -o pipefail
#set +x

EXE_PATH="/home/vagrant/cpp/src"

clean () {
    echo "Cleaning directory..."
    make clean
}

build ()
{
    echo "BUilding project..."
    make
}

run_server() {
    echo "Running server in background..."
    $EXE_PATH/server &
}

run_client() {
    echo "Running clinet..."
    $EXE_PATH/client $EXE_PATH/Makefile 
}

clean
build
run_server
run_client
