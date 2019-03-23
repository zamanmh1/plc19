#%%
import matplotlib.pyplot as plt
import matplotlib as mpl
import numpy as np

x = np.linspace(-1, 1, 1000)
plt.plot(x, np.sin(50*x))
plt.show()
