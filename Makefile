# -*- Mode: makefile; -*- #

TARG ?= $(shell uname)

include Makefile-defs.$(TARG)

prefix     ?= /usr/local
bindir     ?= $(prefix)/bin
libexecdir ?= $(prefix)/libexec
datadir    ?= $(prefix)/share

define uses_cmds
CPPFLAGS += $(shell PKG_CONFIG_PATH=$(pkg_config_path) pkg-config --cflags $(1))
LDLIBS += $(shell PKG_CONFIG_PATH=$(pkg_config_path) pkg-config --libs $(1))
endef

$(foreach u,$(USES),$(eval $(call use_cmds,$(u))))

all::
	@echo done with $@

check::
	@echo done with $@

install::
	@echo done with $@

.PHONY:: all check install
