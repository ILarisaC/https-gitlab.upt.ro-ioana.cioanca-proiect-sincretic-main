FROM gcc:latest
WORKDIR https://gitlab.upt.ro/ioana.cioanca
COPY Matrice.c .
RUN gcc -o Matrice Matrice.c
CMD ["./Matrice"]
