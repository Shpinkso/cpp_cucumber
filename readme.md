cucumber cpp fun

Environment:

# cucumber-cpp
https://github.com/cucumber/cucumber-cpp v0.5

# Boost
# from https://www.boost.org/users/history/version_1_71_0.html

# Tried to install as boost website suggests /usr/local$ sudo tar --bzip2 -xf ./boost_1_71_0.tar.bz2
#  ---- but just doing that makes cppspec moan that it can't find boost, so tried this
#       and it seems to install a different version but at least it can be found -----
sudo apt-get install cmake libblkid-dev e2fslibs-dev libboost-all-dev libaudit-dev

# Gtest
# from https://www.eriksmistad.no/getting-started-with-google-test-on-ubuntu/
sudo apt-get install libgtest-dev
sudo apt-get install cmake
cd /usr/src/gtest
sudo cmake CMakeLists.txt
sudo make
# copy or symlink libgtest.a and libgtest_main.a to your /usr/lib folder
sudo cp *.a /usr/lib

# Cppspec

https://github.com/tpuronen/cppspec v0.5

sudo cmake CMakeLists.txt
sudo make

# GMock - do nothing, apparently part of google test anyway

# Cucumber-Ruby
sudo apt install ruby-dev
sudo apt install ruby
sudo gem install bundler
cd <cucumber-cpp clone dir>
bundle install


