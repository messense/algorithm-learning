efault: build

.DEFAULT:
	@echo Entering directory src.
	cd src && $(MAKE) $@
	@echo Leaving directory src.