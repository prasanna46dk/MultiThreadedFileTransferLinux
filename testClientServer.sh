#!/usr/bin/env bash
set -eu -o pipefail

EXE_PATH="/home/vagrant/cpp/src"

run_server() {
    $EXE_PATH/server &
}

run_client() {
    $EXE_PATH/client $EXE_PATH/Makefile 
}

run_server
run_client
