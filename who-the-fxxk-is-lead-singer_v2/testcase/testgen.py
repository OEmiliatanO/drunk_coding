import random
import sys

s_candiate = ["Bocchi", "boing", "dog", "cat", "Kitty", "bruh", "tac", "mv", "Amilia", "captain", "leader", "singer", "sign", "neural", "network", "search", "arch", "paper", "essay", "easy", "LOL", "smile", "is", "war", "bro", "can", "not", "yet", "yeee", "weeee", "drummer", "rock", "what", "guitarist", "idk", "who", "ID", "Oo..oO", "him", "it", "know", "uwu", "OooooO", "123", "e04", "204", "2077", "3080Ti", "i9", "ARM-V8", "?", "www", "kusa", "^_^", "uwwwwu", "nmmmmn", "oppppppo", "cpp", "god", "()()", "(())((()))", "apple", "suck", "dict", "angry", "master", "kappa", "nsysu", "money", "nekopara", "bar", "gaybar", "herobar", "rainbow", "r6", "rainbowsixsedige", "bubbletea", "hsiangisgay", "watame", "haachama", "vtpig", "uimama", "aquaQaway", "915", "john15", "berbboo", "content", "craving", "stay", "cool", "star", "starbrust", "elonma", "elonmusk", "twitter", "dodge", "aabbbab", "aaa", "a", "bbabba", "c8763", "DIO", "roadroller", "mask", "bba", "pytorch", "computer", "kamera", "keybroad", "cury", "light", "chat", "phone", "OSU!", "delete", "insert", "end", "home", "enter", "shift", "alt", "backspace", "printscreen", "google", "siri", "alex", "steve", "c+steve", "sega", "cloudy", "superhero", "cccheng", "biaoger", "data_structure", "if-else", "input", "train", "data", "torch", "loss", "weight", "model", "solution", "github", "pronhub", "wiki", "cornhub", "candid", "cmd", "=12=313-=123", "-66789210378329810)&*^", "(*0912", "120988*)(*(1", "_)(&_(IJNDKA", "|BHHDAKO", ")UY&^YGDP", ")(UG", "><MPA{{DL}!", "J*)OKDA"]

used = set()
unused = set(s_candiate)

cycle_maxlen = int(sys.argv[1])
cycle_n = int(sys.argv[2])
n = int(sys.argv[3])
m = int(sys.argv[4])
maxw = int(sys.argv[5])

print(n)
for _ in range(cycle_n):
    this_len = random.randint(2, cycle_maxlen)
    cycle_s = random.sample(list(unused), this_len)
    for i in range(this_len):
        print(f"{cycle_s[i]} {cycle_s[(i+1)%this_len]}")
        n -= 1
        unused.remove(cycle_s[i])
        used.add(cycle_s[i])

remains = random.sample(list(unused), 2*n)
for i in range(0, 2*n, 2):
    print(f"{remains[i]} {remains[i+1]}")
    unused.remove(remains[i])
    used.add(remains[i])

print()
print(m)
for _ in range(m):
    w = random.randint(2, maxw)
    if random.randint(0, 1):
        words = random.sample(list(unused), w//2)
        words += random.sample(list(used), w//2)
    else:
        words = random.sample(list(unused), w)
    for word in words:
        print(word, end=' ')
    print()
