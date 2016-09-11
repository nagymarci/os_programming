export REPO_ROOT=`pwd`

export PATH="$HOME/opt/cross/bin:$REPO_ROOT/test/embunit/tools:$PATH"

alias build=$REPO_ROOT/build.sh
alias test_unit=$REPO_ROOT/test.sh
alias test_emu=$REPO_ROOT/qemu.sh
