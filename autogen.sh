#!/bin/bash
aclocal
autoconf
automake --add-missing
echo Now you can run ./configure and make