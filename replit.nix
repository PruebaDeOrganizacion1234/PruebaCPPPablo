{ pkgs }: {
	deps = [
		pkgs.docker
  pkgs.systemd
  pkgs.docker
  pkgs.mariadb-client
  pkgs.sudo
  pkgs.twelf
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}