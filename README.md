# WBash Tools Repo

Add this to /etc/apt/sources.list
```bash
deb http://wbash.weebys.space master main
```

Then execute such commands
```bash
gpg --keyserver keyserver.ubuntu.com --recv-keys 375F4D7D0505A9B7FDD3FD530BF2D0B64EBAA63D
gpg --export 375F4D7D0505A9B7FDD3FD530BF2D0B64EBAA63D | apt-key add -
apt update
```
if it doesn't work, execute theese commands
```bash
wget http://wbash.weebys.space/key.gpg
cat key.gpg | apt-key add -
```

#Packages For GNU/Linux
```bash
WFCSearch - Program, which searches common strings in files and returns a list of files, where this string exists.
```
