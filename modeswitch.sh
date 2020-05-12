set -x
KVER=$(uname -r)
echo $KVER
MODULE_ALREADY=$(lsmod | grep -c 8821cu)

echo $MODULE_ALREADY

if [ $MODULE_ALREADY -gt 0 ]; then
	echo "Module 8821cu already exists"
	echo "Removing existing module 8821cu"
	sudo rmmod -f 8821cu
fi

echo "Inserting module /lib/modules/$KVER/kernel/drivers/net/wireless/8821cu.ko"
sudo modprobe 8821cu

echo "Modeswitch change"
sudo usb_modeswitch -KW -v 0bda -p 1a2b
