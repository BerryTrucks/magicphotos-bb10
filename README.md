# Don't Forget
A photo filter app for Blackberry 10

# Build
Setup your blackberry development environment and check to see if you
have your _author.p12_, _bbidtoken.csk_ and _debugtoken.bar_ in your
_~/.rim_ folder.
Then go your project folder using a terminal emulator and type "make" to
build the libraries and then enter this command-

`blackberry-nativepackager -package <package_name>.bar -sign -storepass <your_keystorepass> -configuration Device-Release bar-descriptor.xml`
