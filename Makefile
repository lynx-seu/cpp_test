
all:
	@mkdir -p target
	@cd target 							&& \
		cmake ..  						&& \
		make 							&& \
		./main

clean:
	rm -rf target

