unset HISTFILE

amixer set Capture 0

if [ -z "$DISPLAY" ] && [ $(tty) = /dev/tty1 ]; then
  /usr/bin/startx
  logout
fi
