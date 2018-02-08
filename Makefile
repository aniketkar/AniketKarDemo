CC=gcc
CXX=g++
RM=rm -f
CPPFLAGS=-g 
LDFLAGS=-g 

SRCS=acourse.cc acoursemath.cc
OBJS=$(subst .cc,.o,$(SRCS))

all: acourse

acourse: $(OBJS)
	$(CXX) $(LDFLAGS) -o acourse $(OBJS) $(LDLIBS)

depend: .depend

.depend: $(SRCS)
	$(RM) ./.depend
	$(CXX) $(CPPFLAGS) -MM $^>>./.depend;

clean:
	$(RM) $(OBJS)
	$(RM) acourse

distclean: clean
	$(RM) *~ .depend

include .depend
