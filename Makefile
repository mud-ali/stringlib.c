INPUT_FILES=src/main.c src/stringlib.c
TEST_BINARY=build/tester

$(TEST_BINARY): $(INPUT_FILES)
	gcc $(INPUT_FILES) -o $(TEST_BINARY)

clean:
	rm -r build