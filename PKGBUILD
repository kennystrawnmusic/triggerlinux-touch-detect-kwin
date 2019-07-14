pkgname=triggerlinux-touch-detect-kwin
_pkgname=touch-detect-kwin
pkgver=1.0
pkgrel=1
pkgdesc="TriggerLinux Touch Detection: Borderless Maximized Windows"
arch=('x86_64')
url="https://github.com/realKennyStrawn93/triggerlinux-touch-detect-kwin"
license=('GPL')
depends=('qtcreator')
source=("git+https://github.com/realKennyStrawn93/triggerlinux-touch-detect-kwin#branch=master")
cpucores="$(cat /proc/cpuinfo | grep cores | head -n1 | tail -c2)"
md5sums=('SKIP')

package() {
  qmake -o $srcdir/$pkgname/Makefile $srcdir/$pkgname/$_pkgname.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug
  cd $srcdir/$pkgname
  make -j$cpucores
  mkdir -p $pkgdir/usr/bin
  cp $_pkgname $pkgdir/usr/bin/$_pkgname
}
