ROOT_DIR := $(dir $(realpath $(lastword $(MAKEFILE_LIST))))

.PHONY: build release install clean root

build:
	cmake --build build --config=Debug
	./build/Debug/randomhttp

release:
	cmake --build build --config=Release
	./build/Release/randomhttp

install: clean
	cmake -B build -G "Ninja Multi-Config" .
	ln -s $(ROOT_DIR)/build/compile_commands.json \
		$(ROOT_DIR)/compile_commands.json

clean:
	rm -rf build
	rm -rf $(ROOT_DIR)/compile_commands.json
	mkdir build

