duplicates: main.cpp
	g++ -o duplicates main.cpp

install: duplicates
	cp $< ~/.local/bin/duplicates

uninstall:
	rm -f ~/.local/bin/duplicates

clean: duplicates
	rm $<
