# This file is part of the C++ dlopen mini HOWTO. You can find the complete
# HOWTO and/or updated versions at
# http://www.isotton.com/howtos/C++-dlopen-mini-HOWTO/
#
# Copyright 2002-2006 Aaron Isotton <aaron@isotton.com>
# Licensed under the GNU GPL.

example1: main.cpp hello.so
	$(CXX) $(CXXFLAGS) -o example1 main.cpp -ldl -g3

hello.so: hello.cpp
	$(CXX) $(CXXFLAGS) -shared -fPIC -o hello.so hello.cpp -g3

clean:
	rm -f example1 hello.so

.PHONY: clean
