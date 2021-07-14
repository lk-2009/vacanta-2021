.PHONY: clean All

All:
	@echo "----------Building project:[ pbinfo_2695 - Debug ]----------"
	@cd "pbinfo_2695" && "$(MAKE)" -f  "pbinfo_2695.mk"
clean:
	@echo "----------Cleaning project:[ pbinfo_2695 - Debug ]----------"
	@cd "pbinfo_2695" && "$(MAKE)" -f  "pbinfo_2695.mk" clean
