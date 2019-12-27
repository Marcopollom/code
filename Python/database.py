import sqlite3 

conn = sqlite3.connect('products.db')

c = conn.cursor()

#conn.execute('''CREATE TABLE prod (name text, review real, qty real, price real)''')

#c.execute("INSERT INTO prod VALUES ('InstantPot', 4.5, 100, 120)")

c.execute("SELECT review FROM prod WHERE price=999")

print(c.fetchall())

conn.commit()
conn.close()