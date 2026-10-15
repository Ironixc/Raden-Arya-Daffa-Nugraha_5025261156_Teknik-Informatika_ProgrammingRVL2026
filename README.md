# Tugas_1
Project OOP tentang Game dan Player dimana<br>
Game :<br>
Public (Agar data Name dan GameD bisa diambil di method InfoPlayer())<br>
- Game Name (Name(String))
- Game Difficulty (Difficulty(int))
- Game Difficulty (GameD(String))

Cara Mendapatkan GameD dengan Difficulty int memakai if else

Player :<br>
Private(Karena Datanya hanya butuh di Player)<br>
- Player Name (Pname(String))
- Player Achievement (PAchievement(String))
- Player Rating (PRating(int))
- Player Rating (Rating(String))
- GamePlayed (Game*(Pointer))(Mengambil data dari Game)

Cara Mendapatkan Rating dengan PRating int memakai if else

Method InfoPlayer() :<br>
- Menampilkan semua data yang sudah di input kecuali int dari Game maupun Player

# Tugas_2
Menghitung posisi end effector nya (x,y) dengan<br>
L1 = 10cm<br>
L2 = 5 cm<br>
Θ₁ = 30°<br>
Θ₂ = 10°<br>
dengan menggunakan rumus FK<br>
X = L1 . cos(Θ₁) + L2 . cos(Θ₁ + Θ₂)<br>
Y = L1 . sin(Θ₁) + L2 . sin(Θ₁ + Θ₂)<br>

# Tugas_3
Mengkonversi rumus FK menjadi program c++