from cs50 import SQL

db = SQL('sqlite:///favorites.db')

favorite = input('Favorite: ')

rows = db.execute("SELECT COUNT(*) AS n FROM favorites WHERE problem = ?", favorite) 
# Returns list of rows which are dictionaries
# f-string is bad because it it susceptible to SQL-injection

print(rows[0]['n'])