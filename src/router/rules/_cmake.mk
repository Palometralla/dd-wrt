export TMPDIR=/tmp
define CMakeConfigure 
	(cd $(strip $(1)); \
		CFLAGS="$(CFLAGS) $(EXTRA_CFLAGS) $(4)" \
		LDFLAGS="$(5)" \
		CXXFLAGS="$(CFLAGS) $(EXTRA_CFLAGS)" \
		cmake \
			--debug-output \
			-DCMAKE_SYSTEM_NAME=Linux \
			-DCMAKE_SYSTEM_VERSION=1 \
			-DCMAKE_SYSTEM_PROCESSOR=$(ARCH) \
			-DCMAKE_BUILD_TYPE=Release \
			-DCMAKE_C_FLAGS_RELEASE="-DNDEBUG" \
			-DCMAKE_CXX_FLAGS_RELEASE="-DNDEBUG" \
			-DCMAKE_C_COMPILER=$(CROSS_COMPILE)gcc \
			-DCMAKE_CXX_COMPILER=$(CROSS_COMPILE)g++ \
			-DCMAKE_EXE_LINKER_FLAGS="$(5)" \
			-DCMAKE_MODULE_LINKER_FLAGS="$(5)" \
			-DCMAKE_SHARED_LINKER_FLAGS="$(5)" \
			-DCMAKE_FIND_ROOT_PATH=$(2) \
			-DCMAKE_FIND_ROOT_PATH_MODE_PROGRAM=$(STAGING_DIR_HOST) \
			-DCMAKE_FIND_ROOT_PATH_MODE_LIBRARY=$(2) \
			-DCMAKE_FIND_ROOT_PATH_MODE_INCLUDE=$(2) \
			-DCMAKE_STRIP=: \
			-DCMAKE_INSTALL_PREFIX=/usr \
			$(3) \
			. \
	)
endef

define CMakeClean
	( rm -rf $(strip $(1))/CMakeCache.txt ;\
	rm -rf $(strip $(1))/cmake_install.cmake ;\
	rm -rf $(strip $(1))/CMakeFiles ;\
	rm -rf $(strip $(1))/Makefile ;\
	)	
endef
