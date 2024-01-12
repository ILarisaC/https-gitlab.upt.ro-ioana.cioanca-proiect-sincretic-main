FROM gcc:latest
WORKDIR /usr/src/Matrice
COPY Matrice.c .
RUN gcc -o Matrice Matrice.c
CMD ["./Matrice"]
