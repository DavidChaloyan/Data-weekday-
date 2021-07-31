all:
	mkdir bin/
	cd src && make 
	cd src && make clean
	cd ..
	cd bin && ./start
clean:
	rm -r bin
