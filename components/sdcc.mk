# SDCC Component

# Prevent multiple inclusion
ifneq ($(SDCCMKINCLUDE), 1)
SDCCMKINCLUDE = 1

# Flags to pass on to configure in the sdcc directory
SDCCCONFIGUREFLAGS += --program-suffix=$(EXEEXTENSION)
# Directory that the copy of sdcc is located in
SDCCDIR = $(SRCDIR)/sdcc
# Add sdcc to the list of source trees that need to be fetched
SRCTREES += sdcc
# PENDING
CLEANTARGETS += sdcc-clean sdcc-device-clean
# PENDING
INSTALLTARGETS += sdcc-install
# PENDING
CVSREPOSITORIES += cvs.sdcc.sourceforge.net:/cvsroot/sdcc

sdcc-configured: $(SDCCDIR)/sdccconf.h

$(SDCCDIR)/sdccconf.h:
	cd $(SDCCDIR); CC=$(TARGETCC) CXX=$(TARGETCXX) STRIP=$(TARGETSTRIP) RANLIB=$(TARGETRANLIB) CXXFLAGS=$(TARGETCXXFLAGS) ./configure $(SDCCCONFIGUREFLAGS) --host=$(HOSTOS) > $(NOISELOG)
	@echo -- Configured sdcc for $(TARGETOS), CC $(TARGETCC)

sdcc: sdcc-build

sdcc-build: sdcc-configured
	$(MAKE) $(MAKEJOBFLAGS) -k -C $(SDCCDIR) sdcc

# PENDING: Should depend on sdcc-build
sdcc-install: sdcc-targetos-install sdcc-fromhost-install

sdcc-targetos-install:
	$(MAKE) -k -C $(SDCCDIR) prefix=$(BUILDDIR) install

# Copies files from the native host that couldn't be compiled.
sdcc-fromhost-install:
ifeq ($(CROSSCOMPILING), 1)
	cd $(TOPDIR)/build/$(HOSTOS)/sdcc; cp -r doc share $(BUILDDIR)
endif

sdcc-device: sdcc-configured sdcc-build
	$(MAKE) $(MAKEJOBFLAGS) -C $(SDCCDIR) sdcc-device

sdcc-clean:
	echo Here
	$(MAKE) -C $(SDCCDIR) clean

sdcc-device-clean:

endif
