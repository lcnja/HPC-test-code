HCOMPILER = mpCC
HFLAGS = -qarch=pwr7 -qtune=pwr7 -O3 -qhot -q64
HLIBDIRS = 
HLIBS =  
HINCLUDEDIRS =

H : H.o
	$(HCOMPILER) $(HFLAGS) H.o -o H $(HLIBDIRS) $(HLIBS)

H.o : H.cpp
	$(HCOMPILER) $(HFLAGS) -c H.cpp $(HINCLUDEDIRS)

