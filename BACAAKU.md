# Tugas_1
Project OOP tentang Game dan Player dimana<br>
Game :<br>
Public (Agar data Name dan GameD bisa diambil di method InfoPlayer())<br>
- Game Name (Name(String))
- Game Difficulty (Difficulty(int))
- Game Difficulty (GameD(String))

Cara Mendapatkan GameD dengan Difficulty int memakai if else

Player :<br>
Private(Karena Datanya hanya butuh di Player<br>
- Player Name (Pname(String))
- Player Achievement (PAchievement(String))
- Player Rating (PRating(int))
- Player Rating (Rating(String))
- GamePlayed (Game*(Pointer))(Mengambil data dari Game)

Cara Mendapatkan Rating dengan PRating int memakai if else

Method InfoPlayer() :<br>
- Menampilkan semua data yang sudah di input kecuali int dari Game maupun Player

# Tugas_2
Menghitung posisi end effector nya (x,y) dengan
L1 = 10cm
L2 = 5 cm
Θ₁ = 30°
Θ₂ = 10°
dengan menggunakan rumus FK
X = L1 . cos(Θ₁) + L2 . cos(Θ₁ + Θ₂)
Y = L1 . sin(Θ₁) + L2 . sin(Θ₁ + Θ₂)

# Tugas_3
Mengkonversi rumus FK menjadi program c++