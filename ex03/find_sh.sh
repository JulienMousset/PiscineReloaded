#!/bin/sh
find . -type file -name "*.sh" -exec basename {} \; | sed 's/.\{3\}$//'
