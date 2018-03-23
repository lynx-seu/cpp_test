
all:
	@mkdir -p target
	@cd target 							&& \
		cmake .. -G "MSYS Makefiles" 	&& \
		make 							&& \
		./main

clean:
	rm -rf target

