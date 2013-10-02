HCOMPILER = mpCC_r
HFLAGS = -qarch=pwr6 -qtune=pwr6 -qhot -O3 -qcpluscmt -q64
HLIBDIRS = 
HLIBS =  
HINCLUDEDIRS =

H : H.o
	$(HCOMPILER) $(HFLAGS) H.o -o H $(HLIBDIRS) $(HLIBS)

H.o : H.cpp
	$(HCOMPILER) $(HFLAGS) -c H.cpp $(HINCLUDEDIRS)

