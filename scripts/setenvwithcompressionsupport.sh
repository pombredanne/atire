#!/bin/bash

export CFLAGS="$CFLAGS -DANT_HAS_ZLIB -DANT_HAS_BZLIB"
export CXXFLAGS="$CXXFLAGS  -DANT_HAS_ZLIB -DANT_HAS_BZLIB"
