.PHONY: clean All

All:
	@echo "----------Building project:[ Aufzugsimulator - Debug ]----------"
	@cd "Aufzugsimulator" && "$(MAKE)" -f  "Aufzugsimulator.mk"
clean:
	@echo "----------Cleaning project:[ Aufzugsimulator - Debug ]----------"
	@cd "Aufzugsimulator" && "$(MAKE)" -f  "Aufzugsimulator.mk" clean
