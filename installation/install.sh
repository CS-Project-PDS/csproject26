gcc ../cmd_typist.c -o ../cmdtypist &&
sudo cp ../cmdtypist /usr/bin/cmdtypist &&
mkdir $HOME/cmdTypist && 
cp -r ../ $HOME/cmdTypist/ &&
sudo cp ../cmdtypist /usr/bin/cmdtypist &&
sudo chmod +x /usr/bin/cmdtypist &&
(echo "CMDTYPIST successfully compiled and installed, learn how to use cmdtypist commands by running 'cmdtypist --help'"; exit 0) ||
(c=$?; echo "CMDTYPIST was unable to install: "; (exit $c))