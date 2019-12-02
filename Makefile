PREFIX=/usr/local

duplicates: main.cpp
	g++ -o duplicates main.cpp

install: duplicates
	mkdir -p $(PREFIX)/bin
	cp -f $< $(PREFIX)/bin/duplicates

uninstall:
	rm -f $(PREFIX)/bin/duplicates

clean: duplicates
	rm $<
