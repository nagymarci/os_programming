#!/bin/sh
set -e
. $REPO_ROOT/iso.sh

qemu-system-$(./target-triplet-to-arch.sh $HOST) -cdrom myos.iso
