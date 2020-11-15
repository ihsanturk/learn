{ pkgs ? import <nixpkgs> {} }: with pkgs;
let
	lib = pkgs.lib;
	# mach-nix = import (builtins.fetchGit {
	# 	url = "https://github.com/DavHau/mach-nix";
		# ref = "refs/heads/master";
		# rev = "3acbfc2ebd0b826cd046925493714a5e2f146d73";
	# }) {};
	# confusables = mach-nix.buildPythonPackage {
	# 	src = "https://github.com/woodgern/confusables/tarball/master";
	# };
in
mkShell {
	name = "dev";
	buildInputs = [
		python38Packages.asyncio
	];
}
