import sqlite3 

conn = sqlite3.connect('products.db')

c = conn.cursor()

#conn.execute('''CREATE TABLE prod (name text, review real, qty real, price real)''')
#conn.execute(" INSERT INTO prod VALUES ('IPhone 11' , '5', 87, 999)")


#c.execute("DELETE FROM prod WHERE name ='IPhone 11'")
c.execute("SELECT * FROM prod WHERE name = 'IPhone 11' ")
print(c.fetchall())



conn.commit()
conn.close()