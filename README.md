# Custom keyboard
Repository to save the configuration of different custom keyboards mainly with QMK

# Corne Keyboard (CRKBD)

Also known (incorrectly) as the `HeliDox`. 
A split keyboard with 3x6 vertically staggered keys and 3 thumb keys.

![Filter](img/crkbd/crkbd_1.png)

![Filter](img/crkbd/crkbd_2.png)


Hardware Supported: Crkbd PCB, Pro Micro  
Hardware Availability: [PCB & Case Data](https://github.com/foostan/crkbd)


# BM60_ISO

![Filter](img/bm60_iso/bm60_iso_1.png)

A 60% ISO hotswap inswitch RGB keyboard.

* Hardware Supported: BM60HSRGB_ISO
* Hardware Availability: [KP Republic](https://kprepublic.com/products/bm60-rgb-iso-uk-eu-rgb-60-hot-swappable-pcb-qmk-firmware-rgb-underglow-type-c)

To check which board revision you have, check the PCB. If it has BM60v2-ISO printed on it, it's rev2. Otherwise it's rev1.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

# BM40HSRGB

![Filter](img/bm40hsrgb/bm40hsrgb_1.png)

An ortholinear 40% hotswap keyboard with per-key RGB in-switch LEDs and RGB Backlighting, from KP Republic.

This firmware was originally taken from a kbfirmware.json and manually converted. You may find the original `.json` files [here](https://drive.google.com/drive/folders/1tlTHQIFcluK2mjZ4UbbKCsdRLgSRSPw6).

* Hardware Supported: bm40hsrgb PCB
* Hardware Availability: [KPRepublic](https://www.aliexpress.com/item/4001147779116.html)


See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

# SICK-68

![Filter](img/sick-68/sick-68_1.png)

The SiCK-68 is a custom mechanical keyboard built from scratch without the price tag often associated with one.

https://www.thingiverse.com/thing:3478494



# QMK COMMANDS IN LINUX

git clone https://github.com/qmk/qmk_firmware.git

sudo apt install qmk

python3 -m pip install --user qmk

qmk setup

qmk list-keyboards

qmk compile -kb keyboard_name -km keymap
Example:
* qmk compile -kb keychron/v6/iso_encoder -km default
* qmk compile -kb crkbd -km jarierca_mouse


qmk flash -kb keyboard_name -km keymap
Example: 
* qmk flash -kb keychron/v6/iso_encoder -km default
* qmk flash -kb crkbd -km jarierca_mouse



