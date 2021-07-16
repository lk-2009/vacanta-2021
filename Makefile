.PHONY: clean All

All:
	@echo "----------Building project:[ pg_33_7 - Debug ]----------"
	@cd "pg_33_7" && "$(MAKE)" -f  "pg_33_7.mk"
clean:
	@echo "----------Cleaning project:[ pg_33_7 - Debug ]----------"
	@cd "pg_33_7" && "$(MAKE)" -f  "pg_33_7.mk" clean
