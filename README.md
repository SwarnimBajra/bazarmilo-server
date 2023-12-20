# Bazarmilo Server
This is the server for the Bazarmilo Project. This project uses the framework `httplib` used as `httplib.h` & database `sqlite3`.

## How to run
- g++ main.cpp  -l sqlite3
```
If you haven't installed sqlite3 you should first install sqlite3.
```
Command to install `sqlite3` on `Debian` based systems:
```
sudo apt-get update && sudo apt-get install sqlite3 libsqlite3-dev
```

## APIs

### POST Requests

- `/login?username=xxxx&passsword=xxxxx`

After authentication, this will send the unique ID to user.

- `/location?ID=xxx`

This will send the current location to user.

- `/destination?ID=xxx`
This will send the destination `from` and `to` encoding in json as
```
{
    "from":"xxx,
    "to":"xxx"
}
```
- `/profile?ID=xxx`
This will send the `profile information` of the user 

- 