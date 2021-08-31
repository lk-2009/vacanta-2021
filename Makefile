.PHONY: clean All

All:
	@echo "----------Building project:[ 20210831_vec_min - Debug ]----------"
	@cd "20210831_vec_min" && "$(MAKE)" -f  "20210831_vec_min.mk"
clean:
	@echo "----------Cleaning project:[ 20210831_vec_min - Debug ]----------"
	@cd "20210831_vec_min" && "$(MAKE)" -f  "20210831_vec_min.mk" clean
