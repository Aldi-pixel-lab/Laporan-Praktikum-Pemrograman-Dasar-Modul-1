import math

alas = 5
tinggi = 12

sisi_a = tinggi
sisi_c = alas
sisi_b = math.sqrt(alas**2 + tinggi**2)

keliling = sisi_a + sisi_b + sisi_c
luas = 0.5 * alas * tinggi

print("Diketahui :")
print("Alas = %d cm" % alas)
print("Tinggi = %d cm" % tinggi)
print("Jawab :")
print("Sisi A = %.0f cm" % sisi_a)
print("Sisi B = %.0f cm" % sisi_b)
print("Sisi C = %.0f cm" % sisi_c)
print("Keliling = %.0f cm" % keliling)
print("Luas = %.0f cm" % luas)