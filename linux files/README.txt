# Description of these Linux kernels
V1: Linux kernel with rootfile system stored in RAM
V2: Linux kernel with rootfile system stored in SD card
V3: V2 + settings compatiable with SDSoC 

-> image.ub: Linux kernel + devicetree + rootfile system
-> BOOT.bin: boot loader which contains zynq_fsbl.elf + bitstream + u-boot.elf
-> rootfs.cpio: compressed file for rootfile system
    bin; dev; home; lib; media; proc; run; sys; usr; boot; etc; init; lost+found; mnt; sbin; tmp; var;
