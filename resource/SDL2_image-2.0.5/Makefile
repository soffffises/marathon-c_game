# Makefile.in generated by automake 1.16 from Makefile.am.
# Makefile.  Generated from Makefile.in by configure.

# Copyright (C) 1994-2018 Free Software Foundation, Inc.

# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.



# Makefile.am for the SDL sample image loading library and viewer





am__is_gnu_make = { \
  if test -z '$(MAKELEVEL)'; then \
    false; \
  elif test -n '$(MAKE_HOST)'; then \
    true; \
  elif test -n '$(MAKE_VERSION)' && test -n '$(CURDIR)'; then \
    true; \
  else \
    false; \
  fi; \
}
am__make_running_with_option = \
  case $${target_option-} in \
      ?) ;; \
      *) echo "am__make_running_with_option: internal error: invalid" \
              "target option '$${target_option-}' specified" >&2; \
         exit 1;; \
  esac; \
  has_opt=no; \
  sane_makeflags=$$MAKEFLAGS; \
  if $(am__is_gnu_make); then \
    sane_makeflags=$$MFLAGS; \
  else \
    case $$MAKEFLAGS in \
      *\\[\ \	]*) \
        bs=\\; \
        sane_makeflags=`printf '%s\n' "$$MAKEFLAGS" \
          | sed "s/$$bs$$bs[$$bs $$bs	]*//g"`;; \
    esac; \
  fi; \
  skip_next=no; \
  strip_trailopt () \
  { \
    flg=`printf '%s\n' "$$flg" | sed "s/$$1.*$$//"`; \
  }; \
  for flg in $$sane_makeflags; do \
    test $$skip_next = yes && { skip_next=no; continue; }; \
    case $$flg in \
      *=*|--*) continue;; \
        -*I) strip_trailopt 'I'; skip_next=yes;; \
      -*I?*) strip_trailopt 'I';; \
        -*O) strip_trailopt 'O'; skip_next=yes;; \
      -*O?*) strip_trailopt 'O';; \
        -*l) strip_trailopt 'l'; skip_next=yes;; \
      -*l?*) strip_trailopt 'l';; \
      -[dEDm]) skip_next=yes;; \
      -[JT]) skip_next=yes;; \
    esac; \
    case $$flg in \
      *$$target_option*) has_opt=yes; break;; \
    esac; \
  done; \
  test $$has_opt = yes
am__make_dryrun = (target_option=n; $(am__make_running_with_option))
am__make_keepgoing = (target_option=k; $(am__make_running_with_option))
pkgdatadir = $(datadir)/SDL2_image
pkgincludedir = $(includedir)/SDL2_image
pkglibdir = $(libdir)/SDL2_image
pkglibexecdir = $(libexecdir)/SDL2_image
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_triplet = x86_64-pc-linux-gnu
host_triplet = x86_64-pc-linux-gnu
libSDL2_image_la_DEPENDENCIES =  \
	$(am__DEPENDENCIES_1)
noinst_PROGRAMS = showimage$(EXEEXT)
subdir = .
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/acinclude/libtool.m4 \
	$(top_srcdir)/acinclude/ltoptions.m4 \
	$(top_srcdir)/acinclude/ltsugar.m4 \
	$(top_srcdir)/acinclude/ltversion.m4 \
	$(top_srcdir)/acinclude/lt~obsolete.m4 \
	$(top_srcdir)/acinclude/pkg.m4 $(top_srcdir)/acinclude/sdl2.m4 \
	$(top_srcdir)/configure.in
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
DIST_COMMON = $(srcdir)/Makefile.am $(top_srcdir)/configure \
	$(am__configure_deps) $(libSDL2_imageinclude_HEADERS) \
	$(am__DIST_COMMON)
am__CONFIG_DISTCLEAN_FILES = config.status config.cache config.log \
 configure.lineno config.status.lineno
mkinstalldirs = $(install_sh) -d
CONFIG_CLEAN_FILES = SDL2_image.spec SDL2_image.pc
CONFIG_CLEAN_VPATH_FILES =
PROGRAMS = $(noinst_PROGRAMS)
am__vpath_adj_setup = srcdirstrip=`echo "$(srcdir)" | sed 's|.|.|g'`;
am__vpath_adj = case $$p in \
    $(srcdir)/*) f=`echo "$$p" | sed "s|^$$srcdirstrip/||"`;; \
    *) f=$$p;; \
  esac;
am__strip_dir = f=`echo $$p | sed -e 's|^.*/||'`;
am__install_max = 40
am__nobase_strip_setup = \
  srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*|]/\\\\&/g'`
am__nobase_strip = \
  for p in $$list; do echo "$$p"; done | sed -e "s|$$srcdirstrip/||"
am__nobase_list = $(am__nobase_strip_setup); \
  for p in $$list; do echo "$$p $$p"; done | \
  sed "s| $$srcdirstrip/| |;"' / .*\//!s/ .*/ ./; s,\( .*\)/[^/]*$$,\1,' | \
  $(AWK) 'BEGIN { files["."] = "" } { files[$$2] = files[$$2] " " $$1; \
    if (++n[$$2] == $(am__install_max)) \
      { print $$2, files[$$2]; n[$$2] = 0; files[$$2] = "" } } \
    END { for (dir in files) print dir, files[dir] }'
am__base_list = \
  sed '$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;s/\n/ /g' | \
  sed '$$!N;$$!N;$$!N;$$!N;s/\n/ /g'
am__uninstall_files_from_dir = { \
  test -z "$$files" \
    || { test ! -d "$$dir" && test ! -f "$$dir" && test ! -r "$$dir"; } \
    || { echo " ( cd '$$dir' && rm -f" $$files ")"; \
         $(am__cd) "$$dir" && rm -f $$files; }; \
  }
am__installdirs = "$(DESTDIR)$(libdir)" "$(DESTDIR)$(pkgconfigdir)" \
	"$(DESTDIR)$(libSDL2_imageincludedir)"
LTLIBRARIES = $(lib_LTLIBRARIES)
am__DEPENDENCIES_1 =
am__libSDL2_image_la_SOURCES_DIST = IMG.c IMG_bmp.c IMG_gif.c \
	IMG_jpg.c IMG_lbm.c IMG_pcx.c IMG_png.c IMG_pnm.c IMG_svg.c \
	IMG_tga.c IMG_tif.c IMG_xcf.c IMG_xpm.c IMG_xv.c IMG_webp.c \
	IMG_WIC.c IMG_ImageIO.m miniz.h nanosvg.h nanosvgrast.h
#am__objects_1 = IMG_ImageIO.lo
am_libSDL2_image_la_OBJECTS = IMG.lo IMG_bmp.lo IMG_gif.lo IMG_jpg.lo \
	IMG_lbm.lo IMG_pcx.lo IMG_png.lo IMG_pnm.lo IMG_svg.lo \
	IMG_tga.lo IMG_tif.lo IMG_xcf.lo IMG_xpm.lo IMG_xv.lo \
	IMG_webp.lo IMG_WIC.lo $(am__objects_1)
libSDL2_image_la_OBJECTS = $(am_libSDL2_image_la_OBJECTS)
AM_V_lt = $(am__v_lt_$(V))
am__v_lt_ = $(am__v_lt_$(AM_DEFAULT_VERBOSITY))
am__v_lt_0 = --silent
am__v_lt_1 = 
libSDL2_image_la_LINK = $(LIBTOOL) $(AM_V_lt) $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=link $(OBJCLD) $(AM_OBJCFLAGS) \
	$(OBJCFLAGS) $(libSDL2_image_la_LDFLAGS) $(LDFLAGS) -o $@
showimage_SOURCES = showimage.c
showimage_OBJECTS = showimage.$(OBJEXT)
showimage_DEPENDENCIES = libSDL2_image.la
AM_V_P = $(am__v_P_$(V))
am__v_P_ = $(am__v_P_$(AM_DEFAULT_VERBOSITY))
am__v_P_0 = false
am__v_P_1 = :
AM_V_GEN = $(am__v_GEN_$(V))
am__v_GEN_ = $(am__v_GEN_$(AM_DEFAULT_VERBOSITY))
am__v_GEN_0 = @echo "  GEN     " $@;
am__v_GEN_1 = 
AM_V_at = $(am__v_at_$(V))
am__v_at_ = $(am__v_at_$(AM_DEFAULT_VERBOSITY))
am__v_at_0 = @
am__v_at_1 = 
DEFAULT_INCLUDES = -I.
depcomp = $(SHELL) $(top_srcdir)/depcomp
am__maybe_remake_depfiles = depfiles
am__depfiles_remade = ./$(DEPDIR)/IMG.Plo ./$(DEPDIR)/IMG_ImageIO.Plo \
	./$(DEPDIR)/IMG_WIC.Plo ./$(DEPDIR)/IMG_bmp.Plo \
	./$(DEPDIR)/IMG_gif.Plo ./$(DEPDIR)/IMG_jpg.Plo \
	./$(DEPDIR)/IMG_lbm.Plo ./$(DEPDIR)/IMG_pcx.Plo \
	./$(DEPDIR)/IMG_png.Plo ./$(DEPDIR)/IMG_pnm.Plo \
	./$(DEPDIR)/IMG_svg.Plo ./$(DEPDIR)/IMG_tga.Plo \
	./$(DEPDIR)/IMG_tif.Plo ./$(DEPDIR)/IMG_webp.Plo \
	./$(DEPDIR)/IMG_xcf.Plo ./$(DEPDIR)/IMG_xpm.Plo \
	./$(DEPDIR)/IMG_xv.Plo ./$(DEPDIR)/showimage.Po
am__mv = mv -f
COMPILE = $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) \
	$(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
LTCOMPILE = $(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=compile $(CC) $(DEFS) \
	$(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) \
	$(AM_CFLAGS) $(CFLAGS)
AM_V_CC = $(am__v_CC_$(V))
am__v_CC_ = $(am__v_CC_$(AM_DEFAULT_VERBOSITY))
am__v_CC_0 = @echo "  CC      " $@;
am__v_CC_1 = 
CCLD = $(CC)
LINK = $(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=link $(CCLD) $(AM_CFLAGS) $(CFLAGS) \
	$(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_V_CCLD = $(am__v_CCLD_$(V))
am__v_CCLD_ = $(am__v_CCLD_$(AM_DEFAULT_VERBOSITY))
am__v_CCLD_0 = @echo "  CCLD    " $@;
am__v_CCLD_1 = 
OBJCCOMPILE = $(OBJC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) \
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_OBJCFLAGS) $(OBJCFLAGS)
LTOBJCCOMPILE = $(LIBTOOL) $(AM_V_lt) $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=compile $(OBJC) $(DEFS) \
	$(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) \
	$(AM_OBJCFLAGS) $(OBJCFLAGS)
AM_V_OBJC = $(am__v_OBJC_$(V))
am__v_OBJC_ = $(am__v_OBJC_$(AM_DEFAULT_VERBOSITY))
am__v_OBJC_0 = @echo "  OBJC    " $@;
am__v_OBJC_1 = 
OBJCLD = $(OBJC)
OBJCLINK = $(LIBTOOL) $(AM_V_lt) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) \
	--mode=link $(OBJCLD) $(AM_OBJCFLAGS) $(OBJCFLAGS) \
	$(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_V_OBJCLD = $(am__v_OBJCLD_$(V))
am__v_OBJCLD_ = $(am__v_OBJCLD_$(AM_DEFAULT_VERBOSITY))
am__v_OBJCLD_0 = @echo "  OBJCLD  " $@;
am__v_OBJCLD_1 = 
SOURCES = $(libSDL2_image_la_SOURCES) showimage.c
DIST_SOURCES = $(am__libSDL2_image_la_SOURCES_DIST) showimage.c
am__can_run_installinfo = \
  case $$AM_UPDATE_INFO_DIR in \
    n|no|NO) false;; \
    *) (install-info --version) >/dev/null 2>&1;; \
  esac
DATA = $(pkgconfig_DATA)
HEADERS = $(libSDL2_imageinclude_HEADERS)
am__tagged_files = $(HEADERS) $(SOURCES) $(TAGS_FILES) $(LISP)
# Read a list of newline-separated strings from the standard input,
# and print each of them once, without duplicates.  Input order is
# *not* preserved.
am__uniquify_input = $(AWK) '\
  BEGIN { nonempty = 0; } \
  { items[$$0] = 1; nonempty = 1; } \
  END { if (nonempty) { for (i in items) print i; }; } \
'
# Make sure the list of sources is unique.  This is necessary because,
# e.g., the same source file might be shared among _SOURCES variables
# for different programs/libraries.
am__define_uniq_tagged_files = \
  list='$(am__tagged_files)'; \
  unique=`for i in $$list; do \
    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
  done | $(am__uniquify_input)`
ETAGS = etags
CTAGS = ctags
CSCOPE = cscope
AM_RECURSIVE_TARGETS = cscope
am__DIST_COMMON = $(srcdir)/Makefile.in $(srcdir)/SDL2_image.pc.in \
	$(srcdir)/SDL2_image.spec.in compile config.guess config.sub \
	depcomp install-sh ltmain.sh missing
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
distdir = $(PACKAGE)-$(VERSION)
top_distdir = $(distdir)
am__remove_distdir = \
  if test -d "$(distdir)"; then \
    find "$(distdir)" -type d ! -perm -200 -exec chmod u+w {} ';' \
      && rm -rf "$(distdir)" \
      || { sleep 5 && rm -rf "$(distdir)"; }; \
  else :; fi
am__post_remove_distdir = $(am__remove_distdir)
DIST_ARCHIVES = $(distdir).tar.gz
GZIP_ENV = --best
DIST_TARGETS = dist-gzip
distuninstallcheck_listfiles = find . -type f -print
am__distuninstallcheck_listfiles = $(distuninstallcheck_listfiles) \
  | sed 's|^\./|$(prefix)/|' | grep -v '$(infodir)/dir$$'
distcleancheck_listfiles = find . -type f -print
ACLOCAL = ${SHELL} /home/vboxuser/Campus/rnikolenko-3681/resource/SDL2_image-2.0.5/missing aclocal-1.16
AMTAR = $${TAR-tar}
AM_DEFAULT_VERBOSITY = 1
AR = ar
AS = as
AUTOCONF = ${SHELL} /home/vboxuser/Campus/rnikolenko-3681/resource/SDL2_image-2.0.5/missing autoconf
AUTOHEADER = ${SHELL} /home/vboxuser/Campus/rnikolenko-3681/resource/SDL2_image-2.0.5/missing autoheader
AUTOMAKE = ${SHELL} /home/vboxuser/Campus/rnikolenko-3681/resource/SDL2_image-2.0.5/missing automake-1.16
AWK = mawk
BINARY_AGE = 5
CC = gcc
CCDEPMODE = depmode=gcc3
CFLAGS = -g -O2 -I/home/vboxuser/Campus/rnikolenko-3681/resource/SDL2_image-2.0.5/../libs/include/SDL2 -D_REENTRANT
CPP = gcc -E
CPPFLAGS = 
CYGPATH_W = echo
DEFS = -DPACKAGE_NAME=\"\" -DPACKAGE_TARNAME=\"\" -DPACKAGE_VERSION=\"\" -DPACKAGE_STRING=\"\" -DPACKAGE_BUGREPORT=\"\" -DPACKAGE_URL=\"\" -DSTDC_HEADERS=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_MEMORY_H=1 -DHAVE_STRINGS_H=1 -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_UNISTD_H=1 -DHAVE_DLFCN_H=1 -DLT_OBJDIR=\".libs/\" -DPACKAGE=\"SDL2_image\" -DVERSION=\"2.0.5\" -DLOAD_BMP=1 -DLOAD_GIF=1 -DLOAD_LBM=1 -DLOAD_PCX=1 -DLOAD_PNM=1 -DLOAD_SVG=1 -DLOAD_TGA=1 -DLOAD_XCF=1 -DLOAD_XPM=1 -DLOAD_XV=1
DEPDIR = .deps
DLLTOOL = dlltool
DSYMUTIL = 
DUMPBIN = 
ECHO_C = 
ECHO_N = -n
ECHO_T = 
EGREP = /usr/bin/grep -E
EXEEXT = 
FGREP = /usr/bin/grep -F
GREP = /usr/bin/grep
IMG_LIBS = 
INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
INTERFACE_AGE = 3
LD = /usr/bin/ld -m elf_x86_64
LDFLAGS = 
LIBOBJS = 
LIBPNG_CFLAGS = 
LIBPNG_LIBS = 
LIBS =  -L/home/vboxuser/Campus/rnikolenko-3681/resource/SDL2_image-2.0.5/../libs/lib -Wl,-rpath,/home/vboxuser/Campus/rnikolenko-3681/resource/SDL2-2.0.20/../libs/lib -Wl,--enable-new-dtags -lSDL2
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIBWEBP_CFLAGS = 
LIBWEBP_LIBS = 
LIPO = 
LN_S = ln -s
LTLIBOBJS = 
LT_AGE = 2
LT_CURRENT = 2
LT_RELEASE = 2.0
LT_REVISION = 3
MAJOR_VERSION = 2
MAKEINFO = ${SHELL} /home/vboxuser/Campus/rnikolenko-3681/resource/SDL2_image-2.0.5/missing makeinfo
MICRO_VERSION = 5
MINOR_VERSION = 0
MKDIR_P = /usr/bin/mkdir -p
NM = /usr/bin/nm -B
NMEDIT = 
OBJC = gcc
OBJCDEPMODE = depmode=gcc3
OBJCFLAGS = -g -O2 -I/home/vboxuser/Campus/rnikolenko-3681/resource/SDL2_image-2.0.5/../libs/include/SDL2 -D_REENTRANT
OBJDUMP = objdump
OBJEXT = o
OTOOL = 
OTOOL64 = 
PACKAGE = SDL2_image
PACKAGE_BUGREPORT = 
PACKAGE_NAME = 
PACKAGE_STRING = 
PACKAGE_TARNAME = 
PACKAGE_URL = 
PACKAGE_VERSION = 
PATH_SEPARATOR = :
PKG_CONFIG = /usr/bin/pkg-config
RANLIB = ranlib
SDL2_CONFIG = /home/vboxuser/Campus/rnikolenko-3681/resource/SDL2_image-2.0.5/../libs/bin/sdl2-config
SDL_CFLAGS = -I/home/vboxuser/Campus/rnikolenko-3681/resource/SDL2_image-2.0.5/../libs/include/SDL2 -D_REENTRANT
SDL_LIBS = -L/home/vboxuser/Campus/rnikolenko-3681/resource/SDL2_image-2.0.5/../libs/lib -Wl,-rpath,/home/vboxuser/Campus/rnikolenko-3681/resource/SDL2-2.0.20/../libs/lib -Wl,--enable-new-dtags -lSDL2
SDL_VERSION = 2.0.8
SED = /usr/bin/sed
SET_MAKE = 
SHELL = /bin/bash
STRIP = strip
VERSION = 2.0.5
WINDRES = 
abs_builddir = /home/vboxuser/Campus/rnikolenko-3681/resource/SDL2_image-2.0.5
abs_srcdir = /home/vboxuser/Campus/rnikolenko-3681/resource/SDL2_image-2.0.5
abs_top_builddir = /home/vboxuser/Campus/rnikolenko-3681/resource/SDL2_image-2.0.5
abs_top_srcdir = /home/vboxuser/Campus/rnikolenko-3681/resource/SDL2_image-2.0.5
ac_ct_CC = gcc
ac_ct_DUMPBIN = 
ac_ct_OBJC = gcc
am__include = include
am__leading_dot = .
am__quote = 
am__tar = $${TAR-tar} chof - "$$tardir"
am__untar = $${TAR-tar} xf -
bindir = ${exec_prefix}/bin
build = x86_64-pc-linux-gnu
build_alias = 
build_cpu = x86_64
build_os = linux-gnu
build_vendor = pc
builddir = .
datadir = ${datarootdir}
datarootdir = ${prefix}/share
docdir = ${datarootdir}/doc/${PACKAGE}
dvidir = ${docdir}
exec_prefix = ${prefix}
host = x86_64-pc-linux-gnu
host_alias = 
host_cpu = x86_64
host_os = linux-gnu
host_vendor = pc
htmldir = ${docdir}
includedir = ${prefix}/include
infodir = ${datarootdir}/info
install_sh = ${SHELL} /home/vboxuser/Campus/rnikolenko-3681/resource/SDL2_image-2.0.5/install-sh
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
localedir = ${datarootdir}/locale
localstatedir = ${prefix}/var
lt_ECHO = echo
mandir = ${datarootdir}/man
mkdir_p = $(MKDIR_P)
oldincludedir = /usr/include
pdfdir = ${docdir}
prefix = /home/vboxuser/Campus/rnikolenko-3681/resource/SDL2_image-2.0.5/../libs
program_transform_name = s,x,x,
psdir = ${docdir}
sbindir = ${exec_prefix}/sbin
sharedstatedir = ${prefix}/com
srcdir = .
sysconfdir = ${prefix}/etc
target_alias = 
top_build_prefix = 
top_builddir = .
top_srcdir = .
lib_LTLIBRARIES = libSDL2_image.la
libSDL2_imageincludedir = $(includedir)/SDL2
libSDL2_imageinclude_HEADERS = \
	SDL_image.h

#IMAGEIO_SOURCE = IMG_ImageIO.m
libSDL2_image_la_SOURCES = \
	IMG.c			\
	IMG_bmp.c		\
	IMG_gif.c		\
	IMG_jpg.c		\
	IMG_lbm.c		\
	IMG_pcx.c		\
	IMG_png.c		\
	IMG_pnm.c		\
	IMG_svg.c		\
	IMG_tga.c		\
	IMG_tif.c		\
	IMG_xcf.c		\
	IMG_xpm.c		\
	IMG_xv.c		\
	IMG_webp.c		\
	IMG_WIC.c		\
	$(IMAGEIO_SOURCE)	\
	miniz.h			\
	nanosvg.h		\
	nanosvgrast.h

EXTRA_DIST = \
	Android.mk		\
	debian			\
	external		\
	version.rc		\
	VisualC			\
	VisualCE		\
	VisualC-WinRT	\
	Xcode			\
	Xcode-iOS		\
	IMG_xxx.c		\
	$(srcdir)/*.m		\
	SDL2_image.spec		\
	gcc-fat.sh		\
	autogen.sh		\
	$(srcdir)/*.txt

libSDL2_image_la_LDFLAGS = \
	-no-undefined		\
	-release $(LT_RELEASE)	\
	-version-info $(LT_CURRENT):$(LT_REVISION):$(LT_AGE)

#libSDL2_image_la_LDFLAGS = \
#	-no-undefined		\
#	-release $(LT_RELEASE)	\
#	-version-info $(LT_CURRENT):$(LT_REVISION):$(LT_AGE) -Wl,version.o

libSDL2_image_la_LIBADD = $(IMG_LIBS)
#libSDL2_image_la_LIBADD = $(IMG_LIBS)
#libSDL2_image_la_DEPENDENCIES = version.o
pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = SDL2_image.pc
showimage_LDADD = libSDL2_image.la
all: all-am

.SUFFIXES:
.SUFFIXES: .c .lo .m .o .obj
am--refresh: Makefile
	@:
$(srcdir)/Makefile.in:  $(srcdir)/Makefile.am  $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      echo ' cd $(srcdir) && $(AUTOMAKE) --foreign'; \
	      $(am__cd) $(srcdir) && $(AUTOMAKE) --foreign \
		&& exit 0; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --foreign Makefile'; \
	$(am__cd) $(top_srcdir) && \
	  $(AUTOMAKE) --foreign Makefile
Makefile: $(srcdir)/Makefile.in $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    echo ' $(SHELL) ./config.status'; \
	    $(SHELL) ./config.status;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $@ $(am__maybe_remake_depfiles)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $@ $(am__maybe_remake_depfiles);; \
	esac;

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	$(SHELL) ./config.status --recheck

$(top_srcdir)/configure:  $(am__configure_deps)
	$(am__cd) $(srcdir) && $(AUTOCONF)
$(ACLOCAL_M4):  $(am__aclocal_m4_deps)
	$(am__cd) $(srcdir) && $(ACLOCAL) $(ACLOCAL_AMFLAGS)
$(am__aclocal_m4_deps):
SDL2_image.spec: $(top_builddir)/config.status $(srcdir)/SDL2_image.spec.in
	cd $(top_builddir) && $(SHELL) ./config.status $@
SDL2_image.pc: $(top_builddir)/config.status $(srcdir)/SDL2_image.pc.in
	cd $(top_builddir) && $(SHELL) ./config.status $@

clean-noinstPROGRAMS:
	@list='$(noinst_PROGRAMS)'; test -n "$$list" || exit 0; \
	echo " rm -f" $$list; \
	rm -f $$list || exit $$?; \
	test -n "$(EXEEXT)" || exit 0; \
	list=`for p in $$list; do echo "$$p"; done | sed 's/$(EXEEXT)$$//'`; \
	echo " rm -f" $$list; \
	rm -f $$list

install-libLTLIBRARIES: $(lib_LTLIBRARIES)
	@$(NORMAL_INSTALL)
	@list='$(lib_LTLIBRARIES)'; test -n "$(libdir)" || list=; \
	list2=; for p in $$list; do \
	  if test -f $$p; then \
	    list2="$$list2 $$p"; \
	  else :; fi; \
	done; \
	test -z "$$list2" || { \
	  echo " $(MKDIR_P) '$(DESTDIR)$(libdir)'"; \
	  $(MKDIR_P) "$(DESTDIR)$(libdir)" || exit 1; \
	  echo " $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=install $(INSTALL) $(INSTALL_STRIP_FLAG) $$list2 '$(DESTDIR)$(libdir)'"; \
	  $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=install $(INSTALL) $(INSTALL_STRIP_FLAG) $$list2 "$(DESTDIR)$(libdir)"; \
	}

uninstall-libLTLIBRARIES:
	@$(NORMAL_UNINSTALL)
	@list='$(lib_LTLIBRARIES)'; test -n "$(libdir)" || list=; \
	for p in $$list; do \
	  $(am__strip_dir) \
	  echo " $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=uninstall rm -f '$(DESTDIR)$(libdir)/$$f'"; \
	  $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=uninstall rm -f "$(DESTDIR)$(libdir)/$$f"; \
	done

clean-libLTLIBRARIES:
	-test -z "$(lib_LTLIBRARIES)" || rm -f $(lib_LTLIBRARIES)
	@list='$(lib_LTLIBRARIES)'; \
	locs=`for p in $$list; do echo $$p; done | \
	      sed 's|^[^/]*$$|.|; s|/[^/]*$$||; s|$$|/so_locations|' | \
	      sort -u`; \
	test -z "$$locs" || { \
	  echo rm -f $${locs}; \
	  rm -f $${locs}; \
	}

libSDL2_image.la: $(libSDL2_image_la_OBJECTS) $(libSDL2_image_la_DEPENDENCIES) $(EXTRA_libSDL2_image_la_DEPENDENCIES) 
	$(AM_V_OBJCLD)$(libSDL2_image_la_LINK) -rpath $(libdir) $(libSDL2_image_la_OBJECTS) $(libSDL2_image_la_LIBADD) $(LIBS)

showimage$(EXEEXT): $(showimage_OBJECTS) $(showimage_DEPENDENCIES) $(EXTRA_showimage_DEPENDENCIES) 
	@rm -f showimage$(EXEEXT)
	$(AM_V_CCLD)$(LINK) $(showimage_OBJECTS) $(showimage_LDADD) $(LIBS)

mostlyclean-compile:
	-rm -f *.$(OBJEXT)

distclean-compile:
	-rm -f *.tab.c

include ./$(DEPDIR)/IMG.Plo # am--include-marker
include ./$(DEPDIR)/IMG_ImageIO.Plo # am--include-marker
include ./$(DEPDIR)/IMG_WIC.Plo # am--include-marker
include ./$(DEPDIR)/IMG_bmp.Plo # am--include-marker
include ./$(DEPDIR)/IMG_gif.Plo # am--include-marker
include ./$(DEPDIR)/IMG_jpg.Plo # am--include-marker
include ./$(DEPDIR)/IMG_lbm.Plo # am--include-marker
include ./$(DEPDIR)/IMG_pcx.Plo # am--include-marker
include ./$(DEPDIR)/IMG_png.Plo # am--include-marker
include ./$(DEPDIR)/IMG_pnm.Plo # am--include-marker
include ./$(DEPDIR)/IMG_svg.Plo # am--include-marker
include ./$(DEPDIR)/IMG_tga.Plo # am--include-marker
include ./$(DEPDIR)/IMG_tif.Plo # am--include-marker
include ./$(DEPDIR)/IMG_webp.Plo # am--include-marker
include ./$(DEPDIR)/IMG_xcf.Plo # am--include-marker
include ./$(DEPDIR)/IMG_xpm.Plo # am--include-marker
include ./$(DEPDIR)/IMG_xv.Plo # am--include-marker
include ./$(DEPDIR)/showimage.Po # am--include-marker

$(am__depfiles_remade):
	@$(MKDIR_P) $(@D)
	@echo '# dummy' >$@-t && $(am__mv) $@-t $@

am--depfiles: $(am__depfiles_remade)

.c.o:
	$(AM_V_CC)$(COMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ $<
	$(AM_V_at)$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	$(AM_V_CC)source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(COMPILE) -c -o $@ $<

.c.obj:
	$(AM_V_CC)$(COMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ `$(CYGPATH_W) '$<'`
	$(AM_V_at)$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	$(AM_V_CC)source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(COMPILE) -c -o $@ `$(CYGPATH_W) '$<'`

.c.lo:
	$(AM_V_CC)$(LTCOMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ $<
	$(AM_V_at)$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Plo
#	$(AM_V_CC)source='$<' object='$@' libtool=yes \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(LTCOMPILE) -c -o $@ $<

.m.o:
	$(AM_V_OBJC)$(OBJCCOMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ $<
	$(AM_V_at)$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	$(AM_V_OBJC)source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(OBJCDEPMODE) $(depcomp) \
#	$(AM_V_OBJC_no)$(OBJCCOMPILE) -c -o $@ $<

.m.obj:
	$(AM_V_OBJC)$(OBJCCOMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ `$(CYGPATH_W) '$<'`
	$(AM_V_at)$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	$(AM_V_OBJC)source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(OBJCDEPMODE) $(depcomp) \
#	$(AM_V_OBJC_no)$(OBJCCOMPILE) -c -o $@ `$(CYGPATH_W) '$<'`

.m.lo:
	$(AM_V_OBJC)$(LTOBJCCOMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ $<
	$(AM_V_at)$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Plo
#	$(AM_V_OBJC)source='$<' object='$@' libtool=yes \
#	DEPDIR=$(DEPDIR) $(OBJCDEPMODE) $(depcomp) \
#	$(AM_V_OBJC_no)$(LTOBJCCOMPILE) -c -o $@ $<

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs

distclean-libtool:
	-rm -f libtool config.lt
install-pkgconfigDATA: $(pkgconfig_DATA)
	@$(NORMAL_INSTALL)
	@list='$(pkgconfig_DATA)'; test -n "$(pkgconfigdir)" || list=; \
	if test -n "$$list"; then \
	  echo " $(MKDIR_P) '$(DESTDIR)$(pkgconfigdir)'"; \
	  $(MKDIR_P) "$(DESTDIR)$(pkgconfigdir)" || exit 1; \
	fi; \
	for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  echo "$$d$$p"; \
	done | $(am__base_list) | \
	while read files; do \
	  echo " $(INSTALL_DATA) $$files '$(DESTDIR)$(pkgconfigdir)'"; \
	  $(INSTALL_DATA) $$files "$(DESTDIR)$(pkgconfigdir)" || exit $$?; \
	done

uninstall-pkgconfigDATA:
	@$(NORMAL_UNINSTALL)
	@list='$(pkgconfig_DATA)'; test -n "$(pkgconfigdir)" || list=; \
	files=`for p in $$list; do echo $$p; done | sed -e 's|^.*/||'`; \
	dir='$(DESTDIR)$(pkgconfigdir)'; $(am__uninstall_files_from_dir)
install-libSDL2_imageincludeHEADERS: $(libSDL2_imageinclude_HEADERS)
	@$(NORMAL_INSTALL)
	@list='$(libSDL2_imageinclude_HEADERS)'; test -n "$(libSDL2_imageincludedir)" || list=; \
	if test -n "$$list"; then \
	  echo " $(MKDIR_P) '$(DESTDIR)$(libSDL2_imageincludedir)'"; \
	  $(MKDIR_P) "$(DESTDIR)$(libSDL2_imageincludedir)" || exit 1; \
	fi; \
	for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  echo "$$d$$p"; \
	done | $(am__base_list) | \
	while read files; do \
	  echo " $(INSTALL_HEADER) $$files '$(DESTDIR)$(libSDL2_imageincludedir)'"; \
	  $(INSTALL_HEADER) $$files "$(DESTDIR)$(libSDL2_imageincludedir)" || exit $$?; \
	done

uninstall-libSDL2_imageincludeHEADERS:
	@$(NORMAL_UNINSTALL)
	@list='$(libSDL2_imageinclude_HEADERS)'; test -n "$(libSDL2_imageincludedir)" || list=; \
	files=`for p in $$list; do echo $$p; done | sed -e 's|^.*/||'`; \
	dir='$(DESTDIR)$(libSDL2_imageincludedir)'; $(am__uninstall_files_from_dir)

ID: $(am__tagged_files)
	$(am__define_uniq_tagged_files); mkid -fID $$unique
tags: tags-am
TAGS: tags

tags-am: $(TAGS_DEPENDENCIES) $(am__tagged_files)
	set x; \
	here=`pwd`; \
	$(am__define_uniq_tagged_files); \
	shift; \
	if test -z "$(ETAGS_ARGS)$$*$$unique"; then :; else \
	  test -n "$$unique" || unique=$$empty_fix; \
	  if test $$# -gt 0; then \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      "$$@" $$unique; \
	  else \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      $$unique; \
	  fi; \
	fi
ctags: ctags-am

CTAGS: ctags
ctags-am: $(TAGS_DEPENDENCIES) $(am__tagged_files)
	$(am__define_uniq_tagged_files); \
	test -z "$(CTAGS_ARGS)$$unique" \
	  || $(CTAGS) $(CTAGSFLAGS) $(AM_CTAGSFLAGS) $(CTAGS_ARGS) \
	     $$unique

GTAGS:
	here=`$(am__cd) $(top_builddir) && pwd` \
	  && $(am__cd) $(top_srcdir) \
	  && gtags -i $(GTAGS_ARGS) "$$here"
cscope: cscope.files
	test ! -s cscope.files \
	  || $(CSCOPE) -b -q $(AM_CSCOPEFLAGS) $(CSCOPEFLAGS) -i cscope.files $(CSCOPE_ARGS)
clean-cscope:
	-rm -f cscope.files
cscope.files: clean-cscope cscopelist
cscopelist: cscopelist-am

cscopelist-am: $(am__tagged_files)
	list='$(am__tagged_files)'; \
	case "$(srcdir)" in \
	  [\\/]* | ?:[\\/]*) sdir="$(srcdir)" ;; \
	  *) sdir=$(subdir)/$(srcdir) ;; \
	esac; \
	for i in $$list; do \
	  if test -f "$$i"; then \
	    echo "$(subdir)/$$i"; \
	  else \
	    echo "$$sdir/$$i"; \
	  fi; \
	done >> $(top_builddir)/cscope.files

distclean-tags:
	-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH tags
	-rm -f cscope.out cscope.in.out cscope.po.out cscope.files

distdir: $(BUILT_SOURCES)
	$(MAKE) $(AM_MAKEFLAGS) distdir-am

distdir-am: $(DISTFILES)
	$(am__remove_distdir)
	test -d "$(distdir)" || mkdir "$(distdir)"
	@srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	list='$(DISTFILES)'; \
	  dist_files=`for file in $$list; do echo $$file; done | \
	  sed -e "s|^$$srcdirstrip/||;t" \
	      -e "s|^$$topsrcdirstrip/|$(top_builddir)/|;t"`; \
	case $$dist_files in \
	  */*) $(MKDIR_P) `echo "$$dist_files" | \
			   sed '/\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \
			   sort -u` ;; \
	esac; \
	for file in $$dist_files; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    dir=`echo "/$$file" | sed -e 's,/[^/]*$$,,'`; \
	    if test -d "$(distdir)/$$file"; then \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -fpR $(srcdir)/$$file "$(distdir)$$dir" || exit 1; \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    cp -fpR $$d/$$file "$(distdir)$$dir" || exit 1; \
	  else \
	    test -f "$(distdir)/$$file" \
	    || cp -p $$d/$$file "$(distdir)/$$file" \
	    || exit 1; \
	  fi; \
	done
	-test -n "$(am__skip_mode_fix)" \
	|| find "$(distdir)" -type d ! -perm -755 \
		-exec chmod u+rwx,go+rx {} \; -o \
	  ! -type d ! -perm -444 -links 1 -exec chmod a+r {} \; -o \
	  ! -type d ! -perm -400 -exec chmod a+r {} \; -o \
	  ! -type d ! -perm -444 -exec $(install_sh) -c -m a+r {} {} \; \
	|| chmod -R a+r "$(distdir)"
dist-gzip: distdir
	tardir=$(distdir) && $(am__tar) | eval GZIP= gzip $(GZIP_ENV) -c >$(distdir).tar.gz
	$(am__post_remove_distdir)

dist-bzip2: distdir
	tardir=$(distdir) && $(am__tar) | BZIP2=$${BZIP2--9} bzip2 -c >$(distdir).tar.bz2
	$(am__post_remove_distdir)

dist-lzip: distdir
	tardir=$(distdir) && $(am__tar) | lzip -c $${LZIP_OPT--9} >$(distdir).tar.lz
	$(am__post_remove_distdir)

dist-xz: distdir
	tardir=$(distdir) && $(am__tar) | XZ_OPT=$${XZ_OPT--e} xz -c >$(distdir).tar.xz
	$(am__post_remove_distdir)

dist-tarZ: distdir
	@echo WARNING: "Support for distribution archives compressed with" \
		       "legacy program 'compress' is deprecated." >&2
	@echo WARNING: "It will be removed altogether in Automake 2.0" >&2
	tardir=$(distdir) && $(am__tar) | compress -c >$(distdir).tar.Z
	$(am__post_remove_distdir)

dist-shar: distdir
	@echo WARNING: "Support for shar distribution archives is" \
	               "deprecated." >&2
	@echo WARNING: "It will be removed altogether in Automake 2.0" >&2
	shar $(distdir) | eval GZIP= gzip $(GZIP_ENV) -c >$(distdir).shar.gz
	$(am__post_remove_distdir)

dist-zip: distdir
	-rm -f $(distdir).zip
	zip -rq $(distdir).zip $(distdir)
	$(am__post_remove_distdir)

dist dist-all:
	$(MAKE) $(AM_MAKEFLAGS) $(DIST_TARGETS) am__post_remove_distdir='@:'
	$(am__post_remove_distdir)

# This target untars the dist file and tries a VPATH configuration.  Then
# it guarantees that the distribution is self-contained by making another
# tarfile.
distcheck: dist
	case '$(DIST_ARCHIVES)' in \
	*.tar.gz*) \
	  eval GZIP= gzip $(GZIP_ENV) -dc $(distdir).tar.gz | $(am__untar) ;;\
	*.tar.bz2*) \
	  bzip2 -dc $(distdir).tar.bz2 | $(am__untar) ;;\
	*.tar.lz*) \
	  lzip -dc $(distdir).tar.lz | $(am__untar) ;;\
	*.tar.xz*) \
	  xz -dc $(distdir).tar.xz | $(am__untar) ;;\
	*.tar.Z*) \
	  uncompress -c $(distdir).tar.Z | $(am__untar) ;;\
	*.shar.gz*) \
	  eval GZIP= gzip $(GZIP_ENV) -dc $(distdir).shar.gz | unshar ;;\
	*.zip*) \
	  unzip $(distdir).zip ;;\
	esac
	chmod -R a-w $(distdir)
	chmod u+w $(distdir)
	mkdir $(distdir)/_build $(distdir)/_build/sub $(distdir)/_inst
	chmod a-w $(distdir)
	test -d $(distdir)/_build || exit 0; \
	dc_install_base=`$(am__cd) $(distdir)/_inst && pwd | sed -e 's,^[^:\\/]:[\\/],/,'` \
	  && dc_destdir="$${TMPDIR-/tmp}/am-dc-$$$$/" \
	  && am__cwd=`pwd` \
	  && $(am__cd) $(distdir)/_build/sub \
	  && ../../configure \
	    $(AM_DISTCHECK_CONFIGURE_FLAGS) \
	    $(DISTCHECK_CONFIGURE_FLAGS) \
	    --srcdir=../.. --prefix="$$dc_install_base" \
	  && $(MAKE) $(AM_MAKEFLAGS) \
	  && $(MAKE) $(AM_MAKEFLAGS) dvi \
	  && $(MAKE) $(AM_MAKEFLAGS) check \
	  && $(MAKE) $(AM_MAKEFLAGS) install \
	  && $(MAKE) $(AM_MAKEFLAGS) installcheck \
	  && $(MAKE) $(AM_MAKEFLAGS) uninstall \
	  && $(MAKE) $(AM_MAKEFLAGS) distuninstallcheck_dir="$$dc_install_base" \
	        distuninstallcheck \
	  && chmod -R a-w "$$dc_install_base" \
	  && ({ \
	       (cd ../.. && umask 077 && mkdir "$$dc_destdir") \
	       && $(MAKE) $(AM_MAKEFLAGS) DESTDIR="$$dc_destdir" install \
	       && $(MAKE) $(AM_MAKEFLAGS) DESTDIR="$$dc_destdir" uninstall \
	       && $(MAKE) $(AM_MAKEFLAGS) DESTDIR="$$dc_destdir" \
	            distuninstallcheck_dir="$$dc_destdir" distuninstallcheck; \
	      } || { rm -rf "$$dc_destdir"; exit 1; }) \
	  && rm -rf "$$dc_destdir" \
	  && $(MAKE) $(AM_MAKEFLAGS) dist \
	  && rm -rf $(DIST_ARCHIVES) \
	  && $(MAKE) $(AM_MAKEFLAGS) distcleancheck \
	  && cd "$$am__cwd" \
	  || exit 1
	$(am__post_remove_distdir)
	@(echo "$(distdir) archives ready for distribution: "; \
	  list='$(DIST_ARCHIVES)'; for i in $$list; do echo $$i; done) | \
	  sed -e 1h -e 1s/./=/g -e 1p -e 1x -e '$$p' -e '$$x'
distuninstallcheck:
	@test -n '$(distuninstallcheck_dir)' || { \
	  echo 'ERROR: trying to run $@ with an empty' \
	       '$$(distuninstallcheck_dir)' >&2; \
	  exit 1; \
	}; \
	$(am__cd) '$(distuninstallcheck_dir)' || { \
	  echo 'ERROR: cannot chdir into $(distuninstallcheck_dir)' >&2; \
	  exit 1; \
	}; \
	test `$(am__distuninstallcheck_listfiles) | wc -l` -eq 0 \
	   || { echo "ERROR: files left after uninstall:" ; \
	        if test -n "$(DESTDIR)"; then \
	          echo "  (check DESTDIR support)"; \
	        fi ; \
	        $(distuninstallcheck_listfiles) ; \
	        exit 1; } >&2
distcleancheck: distclean
	@if test '$(srcdir)' = . ; then \
	  echo "ERROR: distcleancheck can only run from a VPATH build" ; \
	  exit 1 ; \
	fi
	@test `$(distcleancheck_listfiles) | wc -l` -eq 0 \
	  || { echo "ERROR: files left in build directory after distclean:" ; \
	       $(distcleancheck_listfiles) ; \
	       exit 1; } >&2
check-am: all-am
check: check-am
all-am: Makefile $(PROGRAMS) $(LTLIBRARIES) $(DATA) $(HEADERS)
installdirs:
	for dir in "$(DESTDIR)$(libdir)" "$(DESTDIR)$(pkgconfigdir)" "$(DESTDIR)$(libSDL2_imageincludedir)"; do \
	  test -z "$$dir" || $(MKDIR_P) "$$dir"; \
	done
install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	if test -z '$(STRIP)'; then \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	      install; \
	else \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	    "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'" install; \
	fi
mostlyclean-generic:

clean-generic:

distclean-generic:
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)
	-test . = "$(srcdir)" || test -z "$(CONFIG_CLEAN_VPATH_FILES)" || rm -f $(CONFIG_CLEAN_VPATH_FILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
clean: clean-am

clean-am: clean-generic clean-libLTLIBRARIES clean-libtool \
	clean-noinstPROGRAMS mostlyclean-am

distclean: distclean-am
	-rm -f $(am__CONFIG_DISTCLEAN_FILES)
		-rm -f ./$(DEPDIR)/IMG.Plo
	-rm -f ./$(DEPDIR)/IMG_ImageIO.Plo
	-rm -f ./$(DEPDIR)/IMG_WIC.Plo
	-rm -f ./$(DEPDIR)/IMG_bmp.Plo
	-rm -f ./$(DEPDIR)/IMG_gif.Plo
	-rm -f ./$(DEPDIR)/IMG_jpg.Plo
	-rm -f ./$(DEPDIR)/IMG_lbm.Plo
	-rm -f ./$(DEPDIR)/IMG_pcx.Plo
	-rm -f ./$(DEPDIR)/IMG_png.Plo
	-rm -f ./$(DEPDIR)/IMG_pnm.Plo
	-rm -f ./$(DEPDIR)/IMG_svg.Plo
	-rm -f ./$(DEPDIR)/IMG_tga.Plo
	-rm -f ./$(DEPDIR)/IMG_tif.Plo
	-rm -f ./$(DEPDIR)/IMG_webp.Plo
	-rm -f ./$(DEPDIR)/IMG_xcf.Plo
	-rm -f ./$(DEPDIR)/IMG_xpm.Plo
	-rm -f ./$(DEPDIR)/IMG_xv.Plo
	-rm -f ./$(DEPDIR)/showimage.Po
	-rm -f Makefile
distclean-am: clean-am distclean-compile distclean-generic \
	distclean-libtool distclean-tags

dvi: dvi-am

dvi-am:

html: html-am

html-am:

info: info-am

info-am:

install-data-am: install-libSDL2_imageincludeHEADERS \
	install-pkgconfigDATA

install-dvi: install-dvi-am

install-dvi-am:

install-exec-am: install-libLTLIBRARIES

install-html: install-html-am

install-html-am:

install-info: install-info-am

install-info-am:

install-man:

install-pdf: install-pdf-am

install-pdf-am:

install-ps: install-ps-am

install-ps-am:

installcheck-am:

maintainer-clean: maintainer-clean-am
	-rm -f $(am__CONFIG_DISTCLEAN_FILES)
	-rm -rf $(top_srcdir)/autom4te.cache
		-rm -f ./$(DEPDIR)/IMG.Plo
	-rm -f ./$(DEPDIR)/IMG_ImageIO.Plo
	-rm -f ./$(DEPDIR)/IMG_WIC.Plo
	-rm -f ./$(DEPDIR)/IMG_bmp.Plo
	-rm -f ./$(DEPDIR)/IMG_gif.Plo
	-rm -f ./$(DEPDIR)/IMG_jpg.Plo
	-rm -f ./$(DEPDIR)/IMG_lbm.Plo
	-rm -f ./$(DEPDIR)/IMG_pcx.Plo
	-rm -f ./$(DEPDIR)/IMG_png.Plo
	-rm -f ./$(DEPDIR)/IMG_pnm.Plo
	-rm -f ./$(DEPDIR)/IMG_svg.Plo
	-rm -f ./$(DEPDIR)/IMG_tga.Plo
	-rm -f ./$(DEPDIR)/IMG_tif.Plo
	-rm -f ./$(DEPDIR)/IMG_webp.Plo
	-rm -f ./$(DEPDIR)/IMG_xcf.Plo
	-rm -f ./$(DEPDIR)/IMG_xpm.Plo
	-rm -f ./$(DEPDIR)/IMG_xv.Plo
	-rm -f ./$(DEPDIR)/showimage.Po
	-rm -f Makefile
maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-compile mostlyclean-generic \
	mostlyclean-libtool

pdf: pdf-am

pdf-am:

ps: ps-am

ps-am:

uninstall-am: uninstall-libLTLIBRARIES \
	uninstall-libSDL2_imageincludeHEADERS uninstall-pkgconfigDATA

.MAKE: install-am install-strip

.PHONY: CTAGS GTAGS TAGS all all-am am--depfiles am--refresh check \
	check-am clean clean-cscope clean-generic clean-libLTLIBRARIES \
	clean-libtool clean-noinstPROGRAMS cscope cscopelist-am ctags \
	ctags-am dist dist-all dist-bzip2 dist-gzip dist-lzip \
	dist-shar dist-tarZ dist-xz dist-zip distcheck distclean \
	distclean-compile distclean-generic distclean-libtool \
	distclean-tags distcleancheck distdir distuninstallcheck dvi \
	dvi-am html html-am info info-am install install-am \
	install-data install-data-am install-dvi install-dvi-am \
	install-exec install-exec-am install-html install-html-am \
	install-info install-info-am install-libLTLIBRARIES \
	install-libSDL2_imageincludeHEADERS install-man install-pdf \
	install-pdf-am install-pkgconfigDATA install-ps install-ps-am \
	install-strip installcheck installcheck-am installdirs \
	maintainer-clean maintainer-clean-generic mostlyclean \
	mostlyclean-compile mostlyclean-generic mostlyclean-libtool \
	pdf pdf-am ps ps-am tags tags-am uninstall uninstall-am \
	uninstall-libLTLIBRARIES uninstall-libSDL2_imageincludeHEADERS \
	uninstall-pkgconfigDATA

.PRECIOUS: Makefile


%.o : %.rc
	$(WINDRES) $< $@

# Rule to build tar-gzipped distribution package
$(PACKAGE)-$(VERSION).tar.gz: distcheck

# Rule to build RPM distribution package
rpm: $(PACKAGE)-$(VERSION).tar.gz
	rpmbuild -ta $(PACKAGE)-$(VERSION).tar.gz

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
