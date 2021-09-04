.PHONY: clean All

All:
	@echo "----------Building project:[ pg106_ex5 - Debug ]----------"
	@cd "pg98_ex4" && "$(MAKE)" -f  "pg106_ex5.mk"
clean:
	@echo "----------Cleaning project:[ pg106_ex5 - Debug ]----------"
	@cd "pg98_ex4" && "$(MAKE)" -f  "pg106_ex5.mk" clean
