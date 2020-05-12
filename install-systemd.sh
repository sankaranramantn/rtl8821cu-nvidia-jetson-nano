set -x
sudo make install
sudo cp modeswitch.sh /usr/bin/modeswitch.sh
sudo chmod +x /usr/bin/modeswitch.sh
sudo cp dlink-171.service /etc/systemd/system/dlink-171.service
sudo chmod 644 /etc/systemd/system/dlink-171.service
