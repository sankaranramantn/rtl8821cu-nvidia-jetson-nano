#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x59253af, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x955f9999, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x1d2b7125, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x9e70ca27, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x2688f80a, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0x6b6863b6, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xdbd1083c, __VMLINUX_SYMBOL_STR(__ll_sc___cmpxchg_case_mb_4) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x2e10886a, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x97f4b7a8, __VMLINUX_SYMBOL_STR(cfg80211_mgmt_tx_status) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbe3cf152, __VMLINUX_SYMBOL_STR(__pm_stay_awake) },
	{ 0x52e7e962, __VMLINUX_SYMBOL_STR(proc_mkdir_data) },
	{ 0x5650105e, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x5d9ac33e, __VMLINUX_SYMBOL_STR(wiphy_apply_custom_regulatory) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0xf6c2c967, __VMLINUX_SYMBOL_STR(cfg80211_rx_mgmt) },
	{ 0x1a3dcd0, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0x37993456, __VMLINUX_SYMBOL_STR(wakeup_source_remove) },
	{ 0xaabef437, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x90be3765, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_reply_skb) },
	{ 0x6b7ae41f, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xd5f5b829, __VMLINUX_SYMBOL_STR(__pskb_copy_fclone) },
	{ 0x1ebac2bd, __VMLINUX_SYMBOL_STR(getboottime64) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe116877b, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x34899cd8, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0xe17e2e72, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x60352082, __VMLINUX_SYMBOL_STR(register_inet6addr_notifier) },
	{ 0x3014b766, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x47271692, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x2080d9c8, __VMLINUX_SYMBOL_STR(cfg80211_new_sta) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xc1517ee9, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd73e02c, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xdbee1249, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_frame_data) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xf9dde891, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x99195078, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x20ddb991, __VMLINUX_SYMBOL_STR(dev_alloc_name) },
	{ 0xa5aad43a, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x537212b6, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xf66e49db, __VMLINUX_SYMBOL_STR(cfg80211_unlink_bss) },
	{ 0x53338a71, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x3007272, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x173607ee, __VMLINUX_SYMBOL_STR(find_vpid) },
	{ 0x4b1a6b9c, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x8a363b8e, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xf3a426a4, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xf1969a8e, __VMLINUX_SYMBOL_STR(__usecs_to_jiffies) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0x1b336b1d, __VMLINUX_SYMBOL_STR(kill_pid) },
	{ 0xfc624a33, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xfdf46eaf, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x324b3877, __VMLINUX_SYMBOL_STR(up) },
	{ 0x961dbae4, __VMLINUX_SYMBOL_STR(__pm_wakeup_event) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0xf9a3efb9, __VMLINUX_SYMBOL_STR(__ll_sc_atomic_sub) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0x3dd87329, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x1c4893c6, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0x2c18c949, __VMLINUX_SYMBOL_STR(cfg80211_roamed) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0x50173f48, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb18e9f9a, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x531537e, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbe55dad3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x7f9f8fc5, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x9d13d9a9, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x1c964c41, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x3480c240, __VMLINUX_SYMBOL_STR(__pm_relax) },
	{ 0x775d579a, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xc150a810, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x48c1af0a, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xe8df4735, __VMLINUX_SYMBOL_STR(wakeup_source_drop) },
	{ 0x5b3a7e6a, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d73b6d6, __VMLINUX_SYMBOL_STR(__vfs_read) },
	{ 0x59af4178, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x2bb8b1a9, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x415d00fa, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xfa28b9ff, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xde7a9c55, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x74b1e72, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x8b22beda, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x94effd3e, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0x22af5b79, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xccbad838, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xb2c0df05, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xa9e0440, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0xc72728d3, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x1d92d898, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0x5d4725bf, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0x4d65cbd5, __VMLINUX_SYMBOL_STR(csum_ipv6_magic) },
	{ 0xd92c70ef, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0x9a1dfd65, __VMLINUX_SYMBOL_STR(strpbrk) },
	{ 0x20cea915, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xe7c57001, __VMLINUX_SYMBOL_STR(__cfg80211_send_event_skb) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7c97c8a4, __VMLINUX_SYMBOL_STR(__ll_sc_atomic_add_return) },
	{ 0x784ce693, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x90b401f8, __VMLINUX_SYMBOL_STR(cfg80211_get_bss) },
	{ 0x1f7386be, __VMLINUX_SYMBOL_STR(__ll_sc_atomic_add) },
	{ 0xb222d7ce, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0x7ab86d23, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x9a908b80, __VMLINUX_SYMBOL_STR(test_and_clear_bit) },
	{ 0xec2ac905, __VMLINUX_SYMBOL_STR(__ll_sc_atomic_sub_return) },
	{ 0x48dc1635, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x6a4d19c, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xab6ff45, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0xfa91eb38, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x55cbe363, __VMLINUX_SYMBOL_STR(proc_get_parent_data) },
	{ 0xd8761868, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x3dae9bfa, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0xc4211b2e, __VMLINUX_SYMBOL_STR(cfg80211_ready_on_channel) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x360ec1a6, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x7543bf02, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x92526b10, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x5a9f1d63, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x9a9a0be9, __VMLINUX_SYMBOL_STR(cfg80211_ch_switch_notify) },
	{ 0xb949980d, __VMLINUX_SYMBOL_STR(wakeup_source_add) },
	{ 0xfd9660ef, __VMLINUX_SYMBOL_STR(netif_wake_subqueue) },
	{ 0x70d2da1f, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xbf58a035, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1aad7ebb, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf84e750a, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x14dc0a8b, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xa2adca66, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xd48837f5, __VMLINUX_SYMBOL_STR(cfg80211_connect_bss) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x7f052772, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0x5f618255, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x53e1436a, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0xd34a77ca, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x61744a52, __VMLINUX_SYMBOL_STR(netif_tx_stop_all_queues) },
	{ 0x1757a43b, __VMLINUX_SYMBOL_STR(cfg80211_del_sta_sinfo) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x6344d085, __VMLINUX_SYMBOL_STR(cfg80211_vendor_cmd_reply) },
	{ 0x11a6f63d, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x2b888e76, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xbb383a37, __VMLINUX_SYMBOL_STR(wakeup_source_prepare) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd2d276ae, __VMLINUX_SYMBOL_STR(nla_put_nohdr) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xbdcf4295, __VMLINUX_SYMBOL_STR(cfg80211_remain_on_channel_expired) },
	{ 0x62dbaee5, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xf70b5df6, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0x978185a9, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_event_skb) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xd07e59b0, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x2fe252cc, __VMLINUX_SYMBOL_STR(unregister_inet6addr_notifier) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x62c1629, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xbe004f54, __VMLINUX_SYMBOL_STR(skb_pull) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";

MODULE_ALIAS("usb:v0BDApB82Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApB820d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApC821d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApC820d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApC82Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApC82Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApC811d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp8811d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p331Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1840F235395A4C1DB288DE0");
