from flask import Flask
from flask import url_for
from flask import request
from markupsafe import escape

app = Flask(__name__)

@app.route('/')
def index():
    return "index"

@app.route('/login',methods = ['GET','POST'])
def login():  # put application's code here
    if request.method == 'POST':
        return do_the_login()
    else:
        return show_the_login_form()

@app.route('/login/<username>')
def do_the_login(username):
    return f"{username} login!!!"

@app.route('/login/login_form')
def show_the_login_form():
    return "This profile is show login form!!!"

@app.route('/user/<username>')
def profile(username):  # put application's code here
    return f"{username}\'s profile"

with app.test_request_context():
    print(url_for('index'))
    print(url_for('login'))
    print(url_for('login',next='/'))
    print(url_for('profile',username='John Doe'))

if __name__ == '__main__':
    app.run()
