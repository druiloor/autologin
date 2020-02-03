all:
	gcc -Wall -O2 autologin.c -o autologin
	strip --strip-all autologin

install:
	# Backup will be: /bin/autologin~
	install --backup autologin $(DESTDIR)/bin/autologin

uninstall:
	rm $(DESTDIR)/bin/autologin
