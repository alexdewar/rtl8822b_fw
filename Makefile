
rtl8822bu_nic.bin: write_fw
	./write_fw

write_fw: write_fw.c
	$(CC) -o write_fw write_fw.c
