# Makefile that uploades everything from $(HTDOCSDIR) to $(_SNAPSHOTDEST)

_DCFSNAPSHOTDIR=$(DCFHTDOCSDIR)/$(TARBALLBASE)
_DCFREGTESTDIR=$(DCFHTDOCSDIR)/$(REGTESTBASE)
_DCFCHANGELOGDIR=$(DCFHTDOCSDIR)/changelog_heads

# Location to copy the tarball to
_DCFSNAPSHOTDEST=$(DCFUSER)@$(DCFHOST):$(DCFHTDOCSDIR)

.PHONY: do-upload
do-upload:
	# copy files to the destination
	# make all files writable and searchable by group members on the destination
	# and remove them from source
	cd $(HTDOCSDIR); \
	DIR_LIST=`find * -type d -print 2>/dev/null`; \
	FILE_LIST=`find * -type f -print 2>/dev/null`; \
	if test -n "$$FILE_LIST"; \
	then \
	  rsync --relative --include='*.exe' -e ssh --size-only $$FILE_LIST $(_DCFSNAPSHOTDEST) && \
	  { \
	    ssh $(DCFUSER)@$(DCFHOST) cd $(DCFHTDOCSDIR)\; chmod g+wx $$DIR_LIST\; chmod g+w $$FILE_LIST; \
	    rm -rf $(HTDOCSDIR)/*; \
	  }; \
	fi