#!/bin/bash


mRun() {
  echo "$PROCESS"
  ./PthreadMatrizVector $PROCESS 8000000 8
  ./PthreadMatrizVector $PROCESS 80000 800
  ./PthreadMatrizVector $PROCESS 8000 8000
  ./PthreadMatrizVector $PROCESS 800 80000
  ./PthreadMatrizVector $PROCESS 8 8000000
}

PROCESS=1
mRun

PROCESS=2
mRun

PROCESS=4
mRun
PROCESS=8
mRun