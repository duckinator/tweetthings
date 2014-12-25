#!/bin/sh

rm -f a
nasm -fbin a.s && qemu-system-i386 -hdc a
