.PHONY: clean All

All:
	@echo "----------Building project:[ 20210406_sort_3_nr - Debug ]----------"
	@cd "20210406_sort_3_nr" && "$(MAKE)" -f  "20210406_sort_3_nr.mk"
clean:
	@echo "----------Cleaning project:[ 20210406_sort_3_nr - Debug ]----------"
	@cd "20210406_sort_3_nr" && "$(MAKE)" -f  "20210406_sort_3_nr.mk" clean
