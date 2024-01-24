default: help

help:
	@echo "Rasal makefile commands, run with make <command>"
	@echo
	@grep -E '^[a-zA-Z0-9 -]+:.*#'  Makefile | sort | while read -r l; do printf "\t\033[1;32m$$(echo $$l | cut -f 1 -d':')\033[00m:$$(echo $$l | cut -f 2- -d'#')\n"; done
	@echo

.PHONY: clean
clean:	# Clean your working directory.
	@printf "\033[36m ---------- $@: Cleaning workding directory ----------\033[0m\n"
	rm -rf .venv
	rm -rf .tox
	rm -rf build
	rm -rf *.egg-info
	rm -rf *.pyc

.PHONY: dev
dev: clean # Build and enter a dev environment.
	@printf "\033[36m ---------- $@: Building dev environment ----------\033[0m\n"
	python -m venv .venv;
	.venv/bin/pip install ./
	.venv/bin/python