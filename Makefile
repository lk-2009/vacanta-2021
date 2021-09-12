.PHONY: clean All

All:
	@echo "----------Building project:[ pg101_ex9 - Debug ]----------"
	@cd "pg101_ex9" && "$(MAKE)" -f  "pg101_ex9.mk"
clean:
	@echo "----------Cleaning project:[ pg101_ex9 - Debug ]----------"
	@cd "pg101_ex9" && "$(MAKE)" -f  "pg101_ex9.mk" clean
