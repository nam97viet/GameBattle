# Goblin Slayer RPG 🗡️🐲
A **text-based battle game** inspired by the *Goblin Slayer* manga.  
Create a hero, duel vicious goblins in turn-based combat, and grow strong enough to save the realm!

<p align="center">
  <!-- Replace the image / video thumbnail link below -->
  <a href="https://YOUR_DEMO_VIDEO_LINK">
    <img src="docs/banner.gif" alt="Watch Gameplay Video" width="450">
  </a>
</p>

---

## 📜 Table of Contents
1. [Introduction](#introduction)
2. [Getting Started](#getting-started)
   * [New Game](#new-game)
   * [Load Game](#load-game)
3. [Character Classes](#character-classes)
4. [Battle System](#battle-system)
5. [Save & Load](#save--load)
6. [Rest & Continue](#rest--continue)

---

## Introduction
**Goblin Slayer RPG** is a command-line adventure.  
You’ll:

* Roll a brand-new hero (or load an existing one).
* Face procedurally generated goblins in tactical, turn-based fights.
* Level up every 100 XP to boost your core stats.
* Decide whether to fight on, rest, or save & quit—your story, your pace.

---

## Getting Started
### ▶️ Running the Game
```bash
# Compile (if needed) and run
./goblin_slayer_rpg
```

### You’ll see three choices

| Option | Action                    |
| ------ | ------------------------- |
| **1 – New Game** | Create a fresh hero |
| **2 – Load Game** | Resume from `character.txt` |
| **3 – Exit**      | Quit the program |

---

### New Game
1. **Name** your character.  
2. **Choose a job:**  
   `1) Knight  2) Wizard  3) Barbarian  4) Rogue  5) DemonKing*`  
   \*Press **5** to unlock the secret **DemonKing** class.  
3. Review your starting stats and begin the adventure.

---

### Load Game
Select **Load Game** to import your last save from `character.txt`.

---

### Character Classes
| Class        | Play-style / Strengths           | HP | ATK | DEF |
|--------------|----------------------------------|:--:|:--:|:--:|
| **Knight**   | Armored defender, balanced dmg   | 120 | 10 | 14 |
| **Wizard**   | High burst magic, fragile armor  |  90 | 16 |  8 |
| **Barbarian**| Raw melee power, low defense     | 110 | 18 |  6 |
| **Rogue**    | Agile, crit-heavy strikes        | 100 | 12 | 10 |
| **DemonKing**| *Secret*, overwhelming force     | 150 | 20 | 15 |

*(Exact values can be tweaked in source.)*

---

### Battle System
- **Turn-based:** choose **Attack** or **Flee** each round.  
- **Potions:** heal on demand (if you have any).  
- **Fleeing** spawns a brand-new goblin with random stats.  
- Earn **XP** per kill; at **100 XP** ⇒ **Level Up** (ATK ↑, DEF ↑, HP ↑).

---

### Save & Load
- Select **Save & Exit** after a fight to write your hero data to `character.txt`.  
- Resume any time with **Load Game**.

---

### Rest & Continue
After combat you can **Rest & Continue** to fully restore HP before marching on.

---

