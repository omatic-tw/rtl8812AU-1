#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

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
	{ 0x5634976f, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x79260d05, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x9a1dfd65, __VMLINUX_SYMBOL_STR(strpbrk) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xac9657d8, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x11ca391, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0x86bb6eff, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0x45016d6e, __VMLINUX_SYMBOL_STR(cfg80211_unlink_bss) },
	{ 0xe617d14, __VMLINUX_SYMBOL_STR(cfg80211_connect_done) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x1ad614be, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0x1eb07d1f, __VMLINUX_SYMBOL_STR(find_vpid) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0x536078cb, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x3fa32138, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xec4582ed, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x66513166, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x1afae5e7, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x86e466c2, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xbaefe039, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x535d9460, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x97a9030d, __VMLINUX_SYMBOL_STR(cfg80211_rx_mgmt) },
	{ 0x5dd1c518, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x5089ecb2, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2c3f1323, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0xea7a59b6, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x4e6c9c6b, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xe9388cf9, __VMLINUX_SYMBOL_STR(cfg80211_mgmt_tx_status) },
	{ 0xb0ca8e24, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x6fa50481, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x5f34c8f8, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x93de854a, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x8249512, __VMLINUX_SYMBOL_STR(iwe_stream_add_point) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x13308de9, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfc982daa, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x59e2a825, __VMLINUX_SYMBOL_STR(cfg80211_vendor_cmd_reply) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xcdf69ebc, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xdce6b889, __VMLINUX_SYMBOL_STR(netif_tx_stop_all_queues) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xcc9d31dd, __VMLINUX_SYMBOL_STR(cfg80211_get_bss) },
	{ 0xf7a4dd1c, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x6c49fc55, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4fac35fa, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x84c13970, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x458faddf, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x18650c66, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x38b5ecc9, __VMLINUX_SYMBOL_STR(cfg80211_del_sta_sinfo) },
	{ 0x33071de2, __VMLINUX_SYMBOL_STR(ieee80211_get_channel) },
	{ 0x7bc8fe67, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x72209466, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xd6803c2, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0x712eee6b, __VMLINUX_SYMBOL_STR(wiphy_apply_custom_regulatory) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xa38caae0, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x9e955596, __VMLINUX_SYMBOL_STR(kill_pid) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xad30e5a1, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x2f2be0b8, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x748347f3, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x351b3ff1, __VMLINUX_SYMBOL_STR(__cfg80211_send_event_skb) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x9922cd62, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0x2c3c3d97, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xa47c9b79, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x89418bfd, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x73fa3e29, __VMLINUX_SYMBOL_STR(cfg80211_roamed) },
	{ 0x40e084d4, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0x5cc47253, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x4b6a6984, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_event_skb) },
	{ 0xd3e69eee, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_reply_skb) },
	{ 0xa83bd9cf, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xb6bc80b7, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x4643e52, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x8ddd8aad, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x137d9631, __VMLINUX_SYMBOL_STR(cfg80211_ready_on_channel) },
	{ 0x869508e6, __VMLINUX_SYMBOL_STR(nla_put_nohdr) },
	{ 0xde336a4e, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0x90bc64f7, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x947a302, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x384169ed, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x45d0e376, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x1d51623c, __VMLINUX_SYMBOL_STR(cfg80211_new_sta) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0xe9b42e78, __VMLINUX_SYMBOL_STR(dev_alloc_name) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x60d39962, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xa96c6a09, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xd9a8f963, __VMLINUX_SYMBOL_STR(cfg80211_remain_on_channel_expired) },
	{ 0x25c9cbde, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x689e06e, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x1b14421b, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x8a394027, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0x4cba441d, __VMLINUX_SYMBOL_STR(iwe_stream_add_event) },
	{ 0x18acc87c, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x29dec96f, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x320e7b16, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x9cc1c934, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x48272d28, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0x3fb19cb0, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x2e0ceabc, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0xe3525924, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x575c5c0f, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_frame_data) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";

MODULE_ALIAS("usb:v0BDAp8812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0408d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0952d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3426d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p016Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0074d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1058p0632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3316d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB30d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p805Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA822d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A8D21A7CF2BB805A2609818");
