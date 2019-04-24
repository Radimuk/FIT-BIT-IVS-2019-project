# Makefile to create PDF documents from LaTeX files
# Needed Debian packages: texlive-lang-czechslovak and texlive-latex-base
# License: GNU GPL v2.0

PROJECT=dokumentace
TEX=pdflatex

all:
	$(TEX) $(PROJECT).tex
	# Rerun the LaTeX compiler due hyperref package
	$(TEX) $(PROJECT).tex
clean:
	rm -f *.aux *.dvi *.log *.out *.toc
cleanall: clean
	rm -f *.pdf
