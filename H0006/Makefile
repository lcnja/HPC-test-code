HCOMPILER = mpixlcxx_r
HFLAGS = -O3 -qarch=450d -qtune=450
HLIBDIRS = 
HLIBS =  
HINCLUDEDIRS =

H : H.o
	$(HCOMPILER) $(HFLAGS) H.o -o H $(HLIBDIRS) $(HLIBS)

H.o : H.cpp
	$(HCOMPILER) $(HFLAGS) -c H.cpp $(HINCLUDEDIRS)

