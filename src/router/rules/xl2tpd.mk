
xl2tpd-configure:
	@true

xl2tpd:
	$(MAKE) -C xl2tpd CFLAGS="$(COPTS) -O2 -fno-builtin -Wall -DSANITY -DLINUX -I$(TOP)/kernel_headers/$(KERNELRELEASE)/include -I$(LINUXDIR)/include/ -DUSE_KERNEL -DIP_ALLOCATION -I$(TOP)/libpcap_noring" LDFLAGS+="-L$(TOP)/libpcap_noring"

xl2tpd-clean:
	$(MAKE) -C xl2tpd clean

xl2tpd-install:
	mkdir -p $(INSTALLDIR)/xl2tpd/usr/sbin
	install -D xl2tpd/xl2tpd $(INSTALLDIR)/xl2tpd/usr/sbin/xl2tpd
	mkdir -p ${INSTALLDIR}/xl2tpd/etc/xl2tpd
	ln -sf /tmp/xl2tpd/xl2tpd.conf ${INSTALLDIR}/xl2tpd/etc/xl2tpd/xl2tpd.conf
