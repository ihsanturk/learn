# NOTE: Two friends will meet in range of 1 hour (say 12:00 ~ 13:00). How many
# minutes should friends wait to make encounter happen. (Ex: If friends wait 60
# minutes the probability is 100% they will meet.)

import matplotlib.pyplot as plt

p = lambda a, x: (((pow(a, 2) - pow((a - x), 2)) * 100) / pow(a, 2))

result = [p(60, z) for z in range(60)]

plt.plot(result)
plt.title('The probability of two friends meeting in 1 hour range')
plt.ylabel('Chance of encounter')
plt.xlabel('Minutes both would wait')
plt.show()
