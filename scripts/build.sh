if i686-elf-as boot.s -o boot.o; then
  echo building boot.s successful
else
  echo building boot.s FAILED
  exit 1
fi
if i686-elf-gcc -c kernel.c -o kernel.o -std=gnu99 -ffreestanding -O2 -Wall -Wextra; then
  echo building kernel successful
else
  echo building kernel FAILED
  exit 2
fi
if i686-elf-gcc -T linker.ld -o myos.bin -ffreestanding -O2 -nostdlib boot.o kernel.o -lgcc; then
  echo linking succesful
else
  echo linking FAILED
  exit 3
fi

if grub-file --is-x86-multiboot myos.bin; then
  echo multiboot confirmed
else
  echo the file is not multiboot
  exit 4
fi

cp myos.bin isodir/boot/

if grub-mkrescue -o myos.iso isodir; then
  echo iso generation successful
else
  echo iso generation FAILED
  exit 5
fi
