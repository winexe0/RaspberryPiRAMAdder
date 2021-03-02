#!/bin/bash
echo KERNEL=="zram0", ATTR{disksize}="$ramsize",TAG+="systemd" >  /etc/udev/rules.d/99-zram.rules
