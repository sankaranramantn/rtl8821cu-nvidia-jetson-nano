# dlink-171-revC-jetson-nano
Wireless drivers for dlink 171 revision C for Nvidia Jetson Nano

This is a just a fork of the following repository with some additional scripts

 https://github.com/hlacik/rtl8821cu-nvidia-jetson-nano.git

Build

make clean


ARCH=arm64 make 


Install the built drivers

sudo make install

Systemd service for auto modeswitch

Install dlink-171 service along with usb modeswitch (for treating the dlink 171 usb c as wireless lan device instead of usb device)

./install-systemd.sh
