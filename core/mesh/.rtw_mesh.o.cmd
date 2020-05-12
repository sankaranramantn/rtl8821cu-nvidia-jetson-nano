cmd_/home/jetson/Builds/sankaran/rtl8821cu-nvidia-jetson-nano/core/mesh/rtw_mesh.o := gcc -Wp,-MD,/home/jetson/Builds/sankaran/rtl8821cu-nvidia-jetson-nano/core/mesh/.rtw_mesh.o.d  -nostdinc -isystem /usr/lib/gcc/aarch64-linux-gnu/7/include -I./arch/arm64/include -I./arch/arm64/include/generated/uapi -I./arch/arm64/include/generated  -I./include -I./arch/arm64/include/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-PIE -mgeneral-regs-only -DCONFIG_AS_LSE=1 -fno-asynchronous-unwind-tables -mpc-relative-literal-loads -fno-pic -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-int-in-bool-context -O2 --param=allow-store-data-races=0 -DCC_HAVE_ASM_GOTO -Wframe-larger-than=2048 -fno-stack-protector -Wno-unused-but-set-variable -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -g -pg -fno-inline-functions-called-once -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -Werror=incompatible-pointer-types -O1 -Wno-unused-variable -Wno-unused-value -Wno-unused-label -Wno-unused-parameter -Wno-unused-function -Wno-unused -Wno-date-time -I/home/jetson/Builds/sankaran/rtl8821cu-nvidia-jetson-nano/include -I/home/jetson/Builds/sankaran/rtl8821cu-nvidia-jetson-nano/platform -I/home/jetson/Builds/sankaran/rtl8821cu-nvidia-jetson-nano/hal/btc -DCONFIG_MP_INCLUDED -DCONFIG_POWER_SAVING -DCONFIG_BT_COEXIST -DCONFIG_EFUSE_CONFIG_FILE -DEFUSE_MAP_PATH=\"/system/etc/wifi/wifi_efuse_8821cu.map\" -DWIFIMAC_PATH=\"/data/wifimac.txt\" -DCONFIG_LOAD_PHY_PARA_FROM_FILE -DREALTEK_CONFIG_PATH=\"/lib/firmware/\" -DCONFIG_TXPWR_BY_RATE_EN=1 -DCONFIG_TXPWR_LIMIT_EN=0 -DCONFIG_RTW_ADAPTIVITY_EN=0 -DCONFIG_RTW_ADAPTIVITY_MODE=0 -DHIGH_ACTIVE_HST2DEV=0 -DCONFIG_BR_EXT '-DCONFIG_BR_EXT_BRNAME="'br0'"' -DCONFIG_RTW_NAPI -DCONFIG_RTW_GRO -DCONFIG_RTW_NETIF_SG -DCONFIG_RTW_DEBUG -DRTW_LOG_LEVEL=4 -DDM_ODM_SUPPORT_TYPE=0x04 -DCONFIG_LITTLE_ENDIAN -DCONFIG_IOCTL_CFG80211 -DRTW_USE_CFG80211_STA_EVENT -I/home/jetson/Builds/sankaran/rtl8821cu-nvidia-jetson-nano/hal/phydm -DCONFIG_RTL8821C -I/usr/src/linux-headers-4.9.140-tegra-ubuntu18.04_aarch64/nvidia/include -I/usr/src/linux-headers-4.9.140-tegra-ubuntu18.04_aarch64/nvgpu/include -I/usr/src/linux-headers-4.9.140-tegra-ubuntu18.04_aarch64/nvgpu-next/include -I/usr/src/linux-headers-4.9.140-tegra-ubuntu18.04_aarch64/nvidia-t23x/include  -DMODULE -mcmodel=large  -DKBUILD_BASENAME='"rtw_mesh"'  -DKBUILD_MODNAME='"8821cu"' -c -o /home/jetson/Builds/sankaran/rtl8821cu-nvidia-jetson-nano/core/mesh/.tmp_rtw_mesh.o /home/jetson/Builds/sankaran/rtl8821cu-nvidia-jetson-nano/core/mesh/rtw_mesh.c

source_/home/jetson/Builds/sankaran/rtl8821cu-nvidia-jetson-nano/core/mesh/rtw_mesh.o := /home/jetson/Builds/sankaran/rtl8821cu-nvidia-jetson-nano/core/mesh/rtw_mesh.c

deps_/home/jetson/Builds/sankaran/rtl8821cu-nvidia-jetson-nano/core/mesh/rtw_mesh.o := \
    $(wildcard include/config/rtw/mesh.h) \
    $(wildcard include/config/rtw/mesh/peer/blacklist.h) \
    $(wildcard include/config/rtw/mesh/cto/mgate/blacklist.h) \
    $(wildcard include/config/rtw/macaddr/acl.h) \
    $(wildcard include/config/ioctl/cfg80211.h) \
    $(wildcard include/config/rtw/mesh/offch/cand.h) \
    $(wildcard include/config/concurrent/mode.h) \
    $(wildcard include/config/rtw/mpm/tx/ies/sync/bss.h) \
    $(wildcard include/config/rtw/mesh/aek.h) \
    $(wildcard include/config/rtw/mesh/driver/aid.h) \
    $(wildcard include/config/rtw/mesh/sta/del/disasoc.h) \
    $(wildcard include/config/slub.h) \
    $(wildcard include/config/slab.h) \
    $(wildcard include/config/rtw/mesh/add/root/chk.h) \
    $(wildcard include/config/rtw/mesh/data/bmc/to/uc.h) \

/home/jetson/Builds/sankaran/rtl8821cu-nvidia-jetson-nano/core/mesh/rtw_mesh.o: $(deps_/home/jetson/Builds/sankaran/rtl8821cu-nvidia-jetson-nano/core/mesh/rtw_mesh.o)

$(deps_/home/jetson/Builds/sankaran/rtl8821cu-nvidia-jetson-nano/core/mesh/rtw_mesh.o):
