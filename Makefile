
all:
	@mkdir -p target
	@cd target 							&& \
		cmake .. -G "MSYS Makefiles" 	&& \
		make 							&& \
		make test 						&& \
		./main

clean:
	@rm -rf target

