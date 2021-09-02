.PHONY: clean All

All:
	@echo "----------Building project:[ 20210902_vec_permutare - Debug ]----------"
	@cd "20210902_vec_mutare" && "$(MAKE)" -f  "20210902_vec_permutare.mk"
clean:
	@echo "----------Cleaning project:[ 20210902_vec_permutare - Debug ]----------"
	@cd "20210902_vec_mutare" && "$(MAKE)" -f  "20210902_vec_permutare.mk" clean
