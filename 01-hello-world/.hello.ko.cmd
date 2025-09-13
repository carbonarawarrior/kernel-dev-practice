savedcmd_hello.ko := ld -r -m elf_x86_64 -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T /usr/src/linux-6.16.6-gentoo/scripts/module.lds -o hello.ko hello.o hello.mod.o .module-common.o
