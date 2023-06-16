#ifndef _FLDB_H
#define _FLDB_H
#include<string>
#include"functions.hpp"
extern std::string FileClassDb(std::string s){
	s=all_to_small(s);
	if(s=="load"){
		return "text/html";
	}
	if(s=="123"){
		return "application/vnd.lotus-1-2-3";
	}
	if(s=="3ds"){
		return "image/x-3ds";
	}
	if(s=="3g2"){
		return "video/3gpp";
	}
	if(s=="3ga"){
		return "video/3gpp";
	}
	if(s=="3gp"){
		return "video/3gpp";
	}
	if(s=="3gpp"){
		return "video/3gpp";
	}
	if(s=="602"){
		return "application/x-t602";
	}
	if(s=="669"){
		return "audio/x-mod";
	}
	if(s=="7z"){
		return "application/x-7z-compressed";
	}
	if(s=="a"){
		return "application/x-archive";
	}
	if(s=="aac"){
		return "audio/mp4";
	}
	if(s=="abw"){
		return "application/x-abiword";
	}
	if(s=="ac3"){
		return "audio/ac3";
	}
	if(s=="ace"){
		return "application/x-ace";
	}
	if(s=="adb"){
		return "text/x-adasrc";
	}
	if(s=="ads"){
		return "text/x-adasrc";
	}
	if(s=="afm"){
		return "application/x-font-afm";
	}
	if(s=="ag"){
		return "image/x-applix-graphics";
	}
	if(s=="ai"){
		return "application/illustrator";
	}
	if(s=="aif"){
		return "audio/x-aiff";
	}
	if(s=="aifc"){
		return "audio/x-aiff";
	}
	if(s=="aiff"){
		return "audio/x-aiff";
	}
	if(s=="al"){
		return "application/x-perl";
	}
	if(s=="alz"){
		return "application/x-alz";
	}
	if(s=="amr"){
		return "audio/amr";
	}
	if(s=="ani"){
		return "application/x-navi-animation";
	}
	if(s=="anim"){
		return "video/x-anim";
	}
	if(s=="anx"){
		return "application/annodex";
	}
	if(s=="ape"){
		return "audio/x-ape";
	}
	if(s=="arj"){
		return "application/x-arj";
	}
	if(s=="arw"){
		return "image/x-sony-arw";
	}
	if(s=="as"){
		return "application/x-applix-spreadsheet";
	}
	if(s=="asc"){
		return "text/plain";
	}
	if(s=="asf"){
		return "video/x-ms-asf";
	}
	if(s=="asp"){
		return "application/x-asp";
	}
	if(s=="ass"){
		return "text/x-ssa";
	}
	if(s=="asx"){
		return "audio/x-ms-asx";
	}
	if(s=="atom"){
		return "application/atom+xml";
	}
	if(s=="au"){
		return "audio/basic";
	}
	if(s=="avi"){
		return "video/x-msvideo";
	}
	if(s=="aw"){
		return "application/x-applix-word";
	}
	if(s=="awb"){
		return "audio/amr-wb";
	}
	if(s=="awk"){
		return "application/x-awk";
	}
	if(s=="axa"){
		return "audio/annodex";
	}
	if(s=="axv"){
		return "video/annodex";
	}
	if(s=="bak"){
		return "application/x-trash";
	}
	if(s=="bcpio"){
		return "application/x-bcpio";
	}
	if(s=="bdf"){
		return "application/x-font-bdf";
	}
	if(s=="bib"){
		return "text/x-bibtex";
	}
	if(s=="bin"){
		return "application/octet-stream";
	}
	if(s=="blend"){
		return "application/x-blender";
	}
	if(s=="blender"){
		return "application/x-blender";
	}
	if(s=="bmp"){
		return "image/bmp";
	}
	if(s=="bz"){
		return "application/x-bzip";
	}
	if(s=="bz2"){
		return "application/x-bzip";
	}
	if(s=="c"){
		return "text/x-csrc";
	}
	if(s=="c++"){
		return "text/x-c++src";
	}
	if(s=="cab"){
		return "application/vnd.ms-cab-compressed";
	}
	if(s=="cb7"){
		return "application/x-cb7";
	}
	if(s=="cbr"){
		return "application/x-cbr";
	}
	if(s=="cbt"){
		return "application/x-cbt";
	}
	if(s=="cbz"){
		return "application/x-cbz";
	}
	if(s=="cc"){
		return "text/x-c++src";
	}
	if(s=="cdf"){
		return "application/x-netcdf";
	}
	if(s=="cdr"){
		return "application/vnd.corel-draw";
	}
	if(s=="cer"){
		return "application/x-x509-ca-cert";
	}
	if(s=="cert"){
		return "application/x-x509-ca-cert";
	}
	if(s=="cgm"){
		return "image/cgm";
	}
	if(s=="chm"){
		return "application/x-chm";
	}
	if(s=="chrt"){
		return "application/x-kchart";
	}
	if(s=="class"){
		return "application/x-java";
	}
	if(s=="cls"){
		return "text/x-tex";
	}
	if(s=="cmake"){
		return "text/x-cmake";
	}
	if(s=="cpio"){
		return "application/x-cpio";
	}
	if(s=="cpp"){
		return "text/x-c++src";
	}
	if(s=="cr2"){
		return "image/x-canon-cr2";
	}
	if(s=="crt"){
		return "application/x-x509-ca-cert";
	}
	if(s=="crw"){
		return "image/x-canon-crw";
	}
	if(s=="cs"){
		return "text/x-csharp";
	}
	if(s=="csh"){
		return "application/x-csh";
	}
	if(s=="css"){
		return "text/css";
	}
	if(s=="cssl"){
		return "text/css";
	}
	if(s=="csv"){
		return "text/csv";
	}
	if(s=="cue"){
		return "application/x-cue";
	}
	if(s=="cur"){
		return "image/x-win-bitmap";
	}
	if(s=="cxx"){
		return "text/x-c++src";
	}
	if(s=="d"){
		return "text/x-dsrc";
	}
	if(s=="dar"){
		return "application/x-dar";
	}
	if(s=="dbf"){
		return "application/x-dbf";
	}
	if(s=="dc"){
		return "application/x-dc-rom";
	}
	if(s=="dcl"){
		return "text/x-dcl";
	}
	if(s=="dcm"){
		return "application/dicom";
	}
	if(s=="dcr"){
		return "image/x-kodak-dcr";
	}
	if(s=="dds"){
		return "image/x-dds";
	}
	if(s=="deb"){
		return "application/x-deb";
	}
	if(s=="der"){
		return "application/x-x509-ca-cert";
	}
	if(s=="desktop"){
		return "application/x-desktop";
	}
	if(s=="dia"){
		return "application/x-dia-diagram";
	}
	if(s=="diff"){
		return "text/x-patch";
	}
	if(s=="divx"){
		return "video/x-msvideo";
	}
	if(s=="djv"){
		return "image/vnd.djvu";
	}
	if(s=="djvu"){
		return "image/vnd.djvu";
	}
	if(s=="dng"){
		return "image/x-adobe-dng";
	}
	if(s=="doc"){
		return "application/msword";
	}
	if(s=="docbook"){
		return "application/docbook+xml";
	}
	if(s=="docm"){
		return "application/vnd.openxmlformats-officedocument.wordprocessingml.document";
	}
	if(s=="docx"){
		return "application/vnd.openxmlformats-officedocument.wordprocessingml.document";
	}
	if(s=="dot"){
		return "text/vnd.graphviz";
	}
	if(s=="dsl"){
		return "text/x-dsl";
	}
	if(s=="dtd"){
		return "application/xml-dtd";
	}
	if(s=="dtx"){
		return "text/x-tex";
	}
	if(s=="dv"){
		return "video/dv";
	}
	if(s=="dvi"){
		return "application/x-dvi";
	}
	if(s=="dwg"){
		return "image/vnd.dwg";
	}
	if(s=="dxf"){
		return "image/vnd.dxf";
	}
	if(s=="e"){
		return "text/x-eiffel";
	}
	if(s=="egon"){
		return "application/x-egon";
	}
	if(s=="eif"){
		return "text/x-eiffel";
	}
	if(s=="el"){
		return "text/x-emacs-lisp";
	}
	if(s=="emf"){
		return "image/x-emf";
	}
	if(s=="emp"){
		return "application/vnd.emusic-emusic_package";
	}
	if(s=="ent"){
		return "application/xml-external-parsed-entity";
	}
	if(s=="eps"){
		return "image/x-eps";
	}
	if(s=="epsf"){
		return "image/x-eps";
	}
	if(s=="epsi"){
		return "image/x-eps";
	}
	if(s=="epub"){
		return "application/epub+zip";
	}
	if(s=="erl"){
		return "text/x-erlang";
	}
	if(s=="es"){
		return "application/ecmascript";
	}
	if(s=="etheme"){
		return "application/x-e-theme";
	}
	if(s=="etx"){
		return "text/x-setext";
	}
	if(s=="exe"){
		return "application/x-ms-dos-executable";
	}
	if(s=="exr"){
		return "image/x-exr";
	}
	if(s=="ez"){
		return "application/andrew-inset";
	}
	if(s=="f"){
		return "text/x-fortran";
	}
	if(s=="f90"){
		return "text/x-fortran";
	}
	if(s=="f95"){
		return "text/x-fortran";
	}
	if(s=="fb2"){
		return "application/x-fictionbook+xml";
	}
	if(s=="fig"){
		return "image/x-xfig";
	}
	if(s=="fits"){
		return "image/fits";
	}
	if(s=="fl"){
		return "application/x-fluid";
	}
	if(s=="flac"){
		return "audio/x-flac";
	}
	if(s=="flc"){
		return "video/x-flic";
	}
	if(s=="fli"){
		return "video/x-flic";
	}
	if(s=="flv"){
		return "video/x-flv";
	}
	if(s=="flw"){
		return "application/x-kivio";
	}
	if(s=="fo"){
		return "text/x-xslfo";
	}
	if(s=="for"){
		return "text/x-fortran";
	}
	if(s=="g3"){
		return "image/fax-g3";
	}
	if(s=="gb"){
		return "application/x-gameboy-rom";
	}
	if(s=="gba"){
		return "application/x-gba-rom";
	}
	if(s=="gcrd"){
		return "text/directory";
	}
	if(s=="ged"){
		return "application/x-gedcom";
	}
	if(s=="gedcom"){
		return "application/x-gedcom";
	}
	if(s=="gen"){
		return "application/x-genesis-rom";
	}
	if(s=="gf"){
		return "application/x-tex-gf";
	}
	if(s=="gg"){
		return "application/x-sms-rom";
	}
	if(s=="gif"){
		return "image/gif";
	}
	if(s=="glade"){
		return "application/x-glade";
	}
	if(s=="gmo"){
		return "application/x-gettext-translation";
	}
	if(s=="gnc"){
		return "application/x-gnucash";
	}
	if(s=="gnd"){
		return "application/gnunet-directory";
	}
	if(s=="gnucash"){
		return "application/x-gnucash";
	}
	if(s=="gnumeric"){
		return "application/x-gnumeric";
	}
	if(s=="gnuplot"){
		return "application/x-gnuplot";
	}
	if(s=="gp"){
		return "application/x-gnuplot";
	}
	if(s=="gpg"){
		return "application/pgp-encrypted";
	}
	if(s=="gplt"){
		return "application/x-gnuplot";
	}
	if(s=="gra"){
		return "application/x-graphite";
	}
	if(s=="gsf"){
		return "application/x-font-type1";
	}
	if(s=="gsm"){
		return "audio/x-gsm";
	}
	if(s=="gtar"){
		return "application/x-tar";
	}
	if(s=="gv"){
		return "text/vnd.graphviz";
	}
	if(s=="gvp"){
		return "text/x-google-video-pointer";
	}
	if(s=="gz"){
		return "application/x-gzip";
	}
	if(s=="h"){
		return "text/x-chdr";
	}
	if(s=="h++"){
		return "text/x-c++hdr";
	}
	if(s=="hdf"){
		return "application/x-hdf";
	}
	if(s=="hh"){
		return "text/x-c++hdr";
	}
	if(s=="hp"){
		return "text/x-c++hdr";
	}
	if(s=="hpgl"){
		return "application/vnd.hp-hpgl";
	}
	if(s=="hpp"){
		return "text/x-c++hdr";
	}
	if(s=="hs"){
		return "text/x-haskell";
	}
	if(s=="htm"){
		return "text/html";
	}
	if(s=="html"){
		return "text/html";
	}
	if(s=="hwp"){
		return "application/x-hwp";
	}
	if(s=="hwt"){
		return "application/x-hwt";
	}
	if(s=="hxx"){
		return "text/x-c++hdr";
	}
	if(s=="ica"){
		return "application/x-ica";
	}
	if(s=="icb"){
		return "image/x-tga";
	}
	if(s=="icns"){
		return "image/x-icns";
	}
	if(s=="ico"||s=="icon"){
		return "image/vnd.microsoft.icon";
	}
	if(s=="ics"){
		return "text/calendar";
	}
	if(s=="idl"){
		return "text/x-idl";
	}
	if(s=="ief"){
		return "image/ief";
	}
	if(s=="iff"){
		return "image/x-iff";
	}
	if(s=="ilbm"){
		return "image/x-ilbm";
	}
	if(s=="ime"){
		return "text/x-imelody";
	}
	if(s=="imy"){
		return "text/x-imelody";
	}
	if(s=="ins"){
		return "text/x-tex";
	}
	if(s=="iptables"){
		return "text/x-iptables";
	}
	if(s=="iso"){
		return "application/x-cd-image";
	}
	if(s=="iso9660"){
		return "application/x-cd-image";
	}
	if(s=="it"){
		return "audio/x-it";
	}
	if(s=="j2k"){
		return "image/jp2";
	}
	if(s=="jad"){
		return "text/vnd.sun.j2me.app-descriptor";
	}
	if(s=="jar"){
		return "application/x-java-archive";
	}
	if(s=="java"){
		return "text/x-java";
	}
	if(s=="jng"){
		return "image/x-jng";
	}
	if(s=="jnlp"){
		return "application/x-java-jnlp-file";
	}
	if(s=="jp2"){
		return "image/jp2";
	}
	if(s=="jpc"){
		return "image/jp2";
	}
	if(s=="jpe"){
		return "image/jpeg";
	}
	if(s=="jpeg"){
		return "image/jpeg";
	}
	if(s=="jpf"){
		return "image/jp2";
	}
	if(s=="jpg"){
		return "image/jpeg";
	}
	if(s=="jpr"){
		return "application/x-jbuilder-project";
	}
	if(s=="jpx"){
		return "image/jp2";
	}
	if(s=="js"){
		return "application/javascript";
	}
	if(s=="json"){
		return "application/json";
	}
	if(s=="jsonp"){
		return "application/jsonp";
	}
	if(s=="k25"){
		return "image/x-kodak-k25";
	}
	if(s=="kar"){
		return "audio/midi";
	}
	if(s=="karbon"){
		return "application/x-karbon";
	}
	if(s=="kdc"){
		return "image/x-kodak-kdc";
	}
	if(s=="kdelnk"){
		return "application/x-desktop";
	}
	if(s=="kexi"){
		return "application/x-kexiproject-sqlite3";
	}
	if(s=="kexic"){
		return "application/x-kexi-connectiondata";
	}
	if(s=="kexis"){
		return "application/x-kexiproject-shortcut";
	}
	if(s=="kfo"){
		return "application/x-kformula";
	}
	if(s=="kil"){
		return "application/x-killustrator";
	}
	if(s=="kino"){
		return "application/smil";
	}
	if(s=="kml"){
		return "application/vnd.google-earth.kml+xml";
	}
	if(s=="kmz"){
		return "application/vnd.google-earth.kmz";
	}
	if(s=="kon"){
		return "application/x-kontour";
	}
	if(s=="kpm"){
		return "application/x-kpovmodeler";
	}
	if(s=="kpr"){
		return "application/x-kpresenter";
	}
	if(s=="kpt"){
		return "application/x-kpresenter";
	}
	if(s=="kra"){
		return "application/x-krita";
	}
	if(s=="ksp"){
		return "application/x-kspread";
	}
	if(s=="kud"){
		return "application/x-kugar";
	}
	if(s=="kwd"){
		return "application/x-kword";
	}
	if(s=="kwt"){
		return "application/x-kword";
	}
	if(s=="la"){
		return "application/x-shared-library-la";
	}
	if(s=="latex"){
		return "text/x-tex";
	}
	if(s=="ldif"){
		return "text/x-ldif";
	}
	if(s=="lha"){
		return "application/x-lha";
	}
	if(s=="lhs"){
		return "text/x-literate-haskell";
	}
	if(s=="lhz"){
		return "application/x-lhz";
	}
	if(s=="log"){
		return "text/x-log";
	}
	if(s=="ltx"){
		return "text/x-tex";
	}
	if(s=="lua"){
		return "text/x-lua";
	}
	if(s=="lwo"){
		return "image/x-lwo";
	}
	if(s=="lwob"){
		return "image/x-lwo";
	}
	if(s=="lws"){
		return "image/x-lws";
	}
	if(s=="ly"){
		return "text/x-lilypond";
	}
	if(s=="lyx"){
		return "application/x-lyx";
	}
	if(s=="lz"){
		return "application/x-lzip";
	}
	if(s=="lzh"){
		return "application/x-lha";
	}
	if(s=="lzma"){
		return "application/x-lzma";
	}
	if(s=="lzo"){
		return "application/x-lzop";
	}
	if(s=="m"){
		return "text/x-matlab";
	}
	if(s=="m15"){
		return "audio/x-mod";
	}
	if(s=="m2t"){
		return "video/mpeg";
	}
	if(s=="m3u"){
		return "audio/x-mpegurl";
	}
	if(s=="m3u8"){
		return "audio/x-mpegurl";
	}
	if(s=="m4"){
		return "application/x-m4";
	}
	if(s=="m4a"){
		return "audio/mp4";
	}
	if(s=="m4b"){
		return "audio/x-m4b";
	}
	if(s=="m4v"){
		return "video/mp4";
	}
	if(s=="mab"){
		return "application/x-markaby";
	}
	if(s=="man"){
		return "application/x-troff-man";
	}
	if(s=="mbox"){
		return "application/mbox";
	}
	if(s=="md"){
		return "application/x-genesis-rom";
	}
	if(s=="mdb"){
		return "application/vnd.ms-access";
	}
	if(s=="mdi"){
		return "image/vnd.ms-modi";
	}
	if(s=="me"){
		return "text/x-troff-me";
	}
	if(s=="med"){
		return "audio/x-mod";
	}
	if(s=="metalink"){
		return "application/metalink+xml";
	}
	if(s=="mgp"){
		return "application/x-magicpoint";
	}
	if(s=="mid"){
		return "audio/midi";
	}
	if(s=="midi"){
		return "audio/midi";
	}
	if(s=="mif"){
		return "application/x-mif";
	}
	if(s=="minipsf"){
		return "audio/x-minipsf";
	}
	if(s=="mka"){
		return "audio/x-matroska";
	}
	if(s=="mkv"){
		return "video/x-matroska";
	}
	if(s=="ml"){
		return "text/x-ocaml";
	}
	if(s=="mli"){
		return "text/x-ocaml";
	}
	if(s=="mm"){
		return "text/x-troff-mm";
	}
	if(s=="mmf"){
		return "application/x-smaf";
	}
	if(s=="mml"){
		return "text/mathml";
	}
	if(s=="mng"){
		return "video/x-mng";
	}
	if(s=="mo"){
		return "application/x-gettext-translation";
	}
	if(s=="mo3"){
		return "audio/x-mo3";
	}
	if(s=="moc"){
		return "text/x-moc";
	}
	if(s=="mod"){
		return "audio/x-mod";
	}
	if(s=="mof"){
		return "text/x-mof";
	}
	if(s=="moov"){
		return "video/quicktime";
	}
	if(s=="mov"){
		return "video/quicktime";
	}
	if(s=="movie"){
		return "video/x-sgi-movie";
	}
	if(s=="mp+"){
		return "audio/x-musepack";
	}
	if(s=="mp2"){
		return "video/mpeg";
	}
	if(s=="mp3"){
		return "audio/mpeg";
	}
	if(s=="mp4"){
		return "video/mp4";
	}
	if(s=="mpc"){
		return "audio/x-musepack";
	}
	if(s=="mpe"){
		return "video/mpeg";
	}
	if(s=="mpeg"){
		return "video/mpeg";
	}
	if(s=="mpg"){
		return "video/mpeg";
	}
	if(s=="mpga"){
		return "audio/mpeg";
	}
	if(s=="mpp"){
		return "audio/x-musepack";
	}
	if(s=="mrl"){
		return "text/x-mrml";
	}
	if(s=="mrml"){
		return "text/x-mrml";
	}
	if(s=="mrw"){
		return "image/x-minolta-mrw";
	}
	if(s=="ms"){
		return "text/x-troff-ms";
	}
	if(s=="msi"){
		return "application/x-msi";
	}
	if(s=="msod"){
		return "image/x-msod";
	}
	if(s=="msx"){
		return "application/x-msx-rom";
	}
	if(s=="mtm"){
		return "audio/x-mod";
	}
	if(s=="mup"){
		return "text/x-mup";
	}
	if(s=="mxf"){
		return "application/mxf";
	}
	if(s=="n64"){
		return "application/x-n64-rom";
	}
	if(s=="nb"){
		return "application/mathematica";
	}
	if(s=="nc"){
		return "application/x-netcdf";
	}
	if(s=="nds"){
		return "application/x-nintendo-ds-rom";
	}
	if(s=="nef"){
		return "image/x-nikon-nef";
	}
	if(s=="nes"){
		return "application/x-nes-rom";
	}
	if(s=="nfo"){
		return "text/x-nfo";
	}
	if(s=="not"){
		return "text/x-mup";
	}
	if(s=="nsc"){
		return "application/x-netshow-channel";
	}
	if(s=="nsv"){
		return "video/x-nsv";
	}
	if(s=="o"){
		return "application/x-object";
	}
	if(s=="obj"){
		return "application/x-tgif";
	}
	if(s=="ocl"){
		return "text/x-ocl";
	}
	if(s=="oda"){
		return "application/oda";
	}
	if(s=="odb"){
		return "application/vnd.oasis.opendocument.database";
	}
	if(s=="odc"){
		return "application/vnd.oasis.opendocument.chart";
	}
	if(s=="odf"){
		return "application/vnd.oasis.opendocument.formula";
	}
	if(s=="odg"){
		return "application/vnd.oasis.opendocument.graphics";
	}
	if(s=="odi"){
		return "application/vnd.oasis.opendocument.image";
	}
	if(s=="odm"){
		return "application/vnd.oasis.opendocument.text-master";
	}
	if(s=="odp"){
		return "application/vnd.oasis.opendocument.presentation";
	}
	if(s=="ods"){
		return "application/vnd.oasis.opendocument.spreadsheet";
	}
	if(s=="odt"){
		return "application/vnd.oasis.opendocument.text";
	}
	if(s=="oga"){
		return "audio/ogg";
	}
	if(s=="ogg"){
		return "video/x-theora+ogg";
	}
	if(s=="ogm"){
		return "video/x-ogm+ogg";
	}
	if(s=="ogv"){
		return "video/ogg";
	}
	if(s=="ogx"){
		return "application/ogg";
	}
	if(s=="old"){
		return "application/x-trash";
	}
	if(s=="oleo"){
		return "application/x-oleo";
	}
	if(s=="opml"){
		return "text/x-opml+xml";
	}
	if(s=="ora"){
		return "image/openraster";
	}
	if(s=="orf"){
		return "image/x-olympus-orf";
	}
	if(s=="otc"){
		return "application/vnd.oasis.opendocument.chart-template";
	}
	if(s=="otf"){
		return "application/x-font-otf";
	}
	if(s=="otg"){
		return "application/vnd.oasis.opendocument.graphics-template";
	}
	if(s=="oth"){
		return "application/vnd.oasis.opendocument.text-web";
	}
	if(s=="otp"){
		return "application/vnd.oasis.opendocument.presentation-template";
	}
	if(s=="ots"){
		return "application/vnd.oasis.opendocument.spreadsheet-template";
	}
	if(s=="ott"){
		return "application/vnd.oasis.opendocument.text-template";
	}
	if(s=="owl"){
		return "application/rdf+xml";
	}
	if(s=="oxt"){
		return "application/vnd.openofficeorg.extension";
	}
	if(s=="p"){
		return "text/x-pascal";
	}
	if(s=="p10"){
		return "application/pkcs10";
	}
	if(s=="p12"){
		return "application/x-pkcs12";
	}
	if(s=="p7b"){
		return "application/x-pkcs7-certificates";
	}
	if(s=="p7s"){
		return "application/pkcs7-signature";
	}
	if(s=="pack"){
		return "application/x-java-pack200";
	}
	if(s=="pak"){
		return "application/x-pak";
	}
	if(s=="par2"){
		return "application/x-par2";
	}
	if(s=="pas"){
		return "text/x-pascal";
	}
	if(s=="patch"){
		return "text/x-patch";
	}
	if(s=="pbm"){
		return "image/x-portable-bitmap";
	}
	if(s=="pcd"){
		return "image/x-photo-cd";
	}
	if(s=="pcf"){
		return "application/x-cisco-vpn-settings";
	}
	if(s=="pcl"){
		return "application/vnd.hp-pcl";
	}
	if(s=="pcx"){
		return "image/x-pcx";
	}
	if(s=="pdb"){
		return "chemical/x-pdb";
	}
	if(s=="pdc"){
		return "application/x-aportisdoc";
	}
	if(s=="pdf"){
		return "application/pdf";
	}
	if(s=="pef"){
		return "image/x-pentax-pef";
	}
	if(s=="pem"){
		return "application/x-x509-ca-cert";
	}
	if(s=="perl"){
		return "application/x-perl";
	}
	if(s=="pfa"){
		return "application/x-font-type1";
	}
	if(s=="pfb"){
		return "application/x-font-type1";
	}
	if(s=="pfx"){
		return "application/x-pkcs12";
	}
	if(s=="pgm"){
		return "image/x-portable-graymap";
	}
	if(s=="pgn"){
		return "application/x-chess-pgn";
	}
	if(s=="pgp"){
		return "application/pgp-encrypted";
	}
	if(s=="php"){
		return "application/x-php";
	}
	if(s=="php3"){
		return "application/x-php";
	}
	if(s=="php4"){
		return "application/x-php";
	}
	if(s=="pict"){
		return "image/x-pict";
	}
	if(s=="pict1"){
		return "image/x-pict";
	}
	if(s=="pict2"){
		return "image/x-pict";
	}
	if(s=="pickle"){
		return "application/python-pickle";
	}
	if(s=="pk"){
		return "application/x-tex-pk";
	}
	if(s=="pkipath"){
		return "application/pkix-pkipath";
	}
	if(s=="pkr"){
		return "application/pgp-keys";
	}
	if(s=="pl"){
		return "application/x-perl";
	}
	if(s=="pla"){
		return "audio/x-iriver-pla";
	}
	if(s=="pln"){
		return "application/x-planperfect";
	}
	if(s=="pls"){
		return "audio/x-scpls";
	}
	if(s=="pm"){
		return "application/x-perl";
	}
	if(s=="png"){
		return "image/png";
	}
	if(s=="pnm"){
		return "image/x-portable-anymap";
	}
	if(s=="pntg"){
		return "image/x-macpaint";
	}
	if(s=="po"){
		return "text/x-gettext-translation";
	}
	if(s=="por"){
		return "application/x-spss-por";
	}
	if(s=="pot"){
		return "text/x-gettext-translation-template";
	}
	if(s=="ppm"){
		return "image/x-portable-pixmap";
	}
	if(s=="pps"){
		return "application/vnd.ms-powerpoint";
	}
	if(s=="ppt"){
		return "application/vnd.ms-powerpoint";
	}
	if(s=="pptm"){
		return "application/vnd.openxmlformats-officedocument.presentationml.presentation";
	}
	if(s=="pptx"){
		return "application/vnd.openxmlformats-officedocument.presentationml.presentation";
	}
	if(s=="ppz"){
		return "application/vnd.ms-powerpoint";
	}
	if(s=="prc"){
		return "application/x-palm-database";
	}
	if(s=="ps"){
		return "application/postscript";
	}
	if(s=="psd"){
		return "image/vnd.adobe.photoshop";
	}
	if(s=="psf"){
		return "audio/x-psf";
	}
	if(s=="psflib"){
		return "audio/x-psflib";
	}
	if(s=="psid"){
		return "audio/prs.sid";
	}
	if(s=="psw"){
		return "application/x-pocket-word";
	}
	if(s=="pw"){
		return "application/x-pw";
	}
	if(s=="py"){
		return "text/x-python";
	}
	if(s=="pyc"){
		return "application/x-python-bytecode";
	}
	if(s=="pyo"){
		return "application/x-python-bytecode";
	}
	if(s=="qif"){
		return "image/x-quicktime";
	}
	if(s=="qt"){
		return "video/quicktime";
	}
	if(s=="qtif"){
		return "image/x-quicktime";
	}
	if(s=="qtl"){
		return "application/x-quicktime-media-link";
	}
	if(s=="qtvr"){
		return "video/quicktime";
	}
	if(s=="ra"){
		return "audio/vnd.rn-realaudio";
	}
	if(s=="raf"){
		return "image/x-fuji-raf";
	}
	if(s=="ram"){
		return "application/ram";
	}
	if(s=="rar"){
		return "application/x-rar";
	}
	if(s=="ras"){
		return "image/x-cmu-raster";
	}
	if(s=="raw"){
		return "image/x-panasonic-raw";
	}
	if(s=="rax"){
		return "audio/vnd.rn-realaudio";
	}
	if(s=="rb"){
		return "application/x-ruby";
	}
	if(s=="rdf"){
		return "application/rdf+xml";
	}
	if(s=="rdfs"){
		return "application/rdf+xml";
	}
	if(s=="reg"){
		return "text/x-ms-regedit";
	}
	if(s=="rej"){
		return "application/x-reject";
	}
	if(s=="rgb"){
		return "image/x-rgb";
	}
	if(s=="rle"){
		return "image/rle";
	}
	if(s=="rm"){
		return "application/vnd.rn-realmedia";
	}
	if(s=="rmj"){
		return "application/vnd.rn-realmedia";
	}
	if(s=="rmm"){
		return "application/vnd.rn-realmedia";
	}
	if(s=="rms"){
		return "application/vnd.rn-realmedia";
	}
	if(s=="rmvb"){
		return "application/vnd.rn-realmedia";
	}
	if(s=="rmx"){
		return "application/vnd.rn-realmedia";
	}
	if(s=="roff"){
		return "text/troff";
	}
	if(s=="rp"){
		return "image/vnd.rn-realpix";
	}
	if(s=="rpm"){
		return "application/x-rpm";
	}
	if(s=="rss"){
		return "application/rss+xml";
	}
	if(s=="rt"){
		return "text/vnd.rn-realtext";
	}
	if(s=="rtf"){
		return "application/rtf";
	}
	if(s=="rtx"){
		return "text/richtext";
	}
	if(s=="rv"){
		return "video/vnd.rn-realvideo";
	}
	if(s=="rvx"){
		return "video/vnd.rn-realvideo";
	}
	if(s=="s3m"){
		return "audio/x-s3m";
	}
	if(s=="sam"){
		return "application/x-amipro";
	}
	if(s=="sami"){
		return "application/x-sami";
	}
	if(s=="sav"){
		return "application/x-spss-sav";
	}
	if(s=="scm"){
		return "text/x-scheme";
	}
	if(s=="sda"){
		return "application/vnd.stardivision.draw";
	}
	if(s=="sdc"){
		return "application/vnd.stardivision.calc";
	}
	if(s=="sdd"){
		return "application/vnd.stardivision.impress";
	}
	if(s=="sdp"){
		return "application/sdp";
	}
	if(s=="sds"){
		return "application/vnd.stardivision.chart";
	}
	if(s=="sdw"){
		return "application/vnd.stardivision.writer";
	}
	if(s=="sgf"){
		return "application/x-go-sgf";
	}
	if(s=="sgi"){
		return "image/x-sgi";
	}
	if(s=="sgl"){
		return "application/vnd.stardivision.writer";
	}
	if(s=="sgm"){
		return "text/sgml";
	}
	if(s=="sgml"){
		return "text/sgml";
	}
	if(s=="sh"){
		return "application/x-shellscript";
	}
	if(s=="shar"){
		return "application/x-shar";
	}
	if(s=="shn"){
		return "application/x-shorten";
	}
	if(s=="siag"){
		return "application/x-siag";
	}
	if(s=="sid"){
		return "audio/prs.sid";
	}
	if(s=="sik"){
		return "application/x-trash";
	}
	if(s=="sis"){
		return "application/vnd.symbian.install";
	}
	if(s=="sisx"){
		return "x-epoc/x-sisx-app";
	}
	if(s=="sit"){
		return "application/x-stuffit";
	}
	if(s=="siv"){
		return "application/sieve";
	}
	if(s=="sk"){
		return "image/x-skencil";
	}
	if(s=="sk1"){
		return "image/x-skencil";
	}
	if(s=="skr"){
		return "application/pgp-keys";
	}
	if(s=="slk"){
		return "text/spreadsheet";
	}
	if(s=="smaf"){
		return "application/x-smaf";
	}
	if(s=="smc"){
		return "application/x-snes-rom";
	}
	if(s=="smd"){
		return "application/vnd.stardivision.mail";
	}
	if(s=="smf"){
		return "application/vnd.stardivision.math";
	}
	if(s=="smi"){
		return "application/x-sami";
	}
	if(s=="smil"){
		return "application/smil";
	}
	if(s=="sml"){
		return "application/smil";
	}
	if(s=="sms"){
		return "application/x-sms-rom";
	}
	if(s=="snd"){
		return "audio/basic";
	}
	if(s=="so"){
		return "application/x-sharedlib";
	}
	if(s=="spc"){
		return "application/x-pkcs7-certificates";
	}
	if(s=="spd"){
		return "application/x-font-speedo";
	}
	if(s=="spec"){
		return "text/x-rpm-spec";
	}
	if(s=="spl"){
		return "application/x-shockwave-flash";
	}
	if(s=="spx"){
		return "audio/x-speex";
	}
	if(s=="sql"){
		return "text/x-sql";
	}
	if(s=="sr2"){
		return "image/x-sony-sr2";
	}
	if(s=="src"){
		return "application/x-wais-source";
	}
	if(s=="srf"){
		return "image/x-sony-srf";
	}
	if(s=="srt"){
		return "application/x-subrip";
	}
	if(s=="ssa"){
		return "text/x-ssa";
	}
	if(s=="stc"){
		return "application/vnd.sun.xml.calc.template";
	}
	if(s=="std"){
		return "application/vnd.sun.xml.draw.template";
	}
	if(s=="sti"){
		return "application/vnd.sun.xml.impress.template";
	}
	if(s=="stm"){
		return "audio/x-stm";
	}
	if(s=="stw"){
		return "application/vnd.sun.xml.writer.template";
	}
	if(s=="sty"){
		return "text/x-tex";
	}
	if(s=="sub"){
		return "text/x-subviewer";
	}
	if(s=="sun"){
		return "image/x-sun-raster";
	}
	if(s=="sv4cpio"){
		return "application/x-sv4cpio";
	}
	if(s=="sv4crc"){
		return "application/x-sv4crc";
	}
	if(s=="svg"){
		return "image/svg+xml";
	}
	if(s=="svgz"){
		return "image/svg+xml-compressed";
	}
	if(s=="swf"){
		return "application/x-shockwave-flash";
	}
	if(s=="sxc"){
		return "application/vnd.sun.xml.calc";
	}
	if(s=="sxd"){
		return "application/vnd.sun.xml.draw";
	}
	if(s=="sxg"){
		return "application/vnd.sun.xml.writer.global";
	}
	if(s=="sxi"){
		return "application/vnd.sun.xml.impress";
	}
	if(s=="sxm"){
		return "application/vnd.sun.xml.math";
	}
	if(s=="sxw"){
		return "application/vnd.sun.xml.writer";
	}
	if(s=="sylk"){
		return "text/spreadsheet";
	}
	if(s=="t"){
		return "text/troff";
	}
	if(s=="t2t"){
		return "text/x-txt2tags";
	}
	if(s=="tar"){
		return "application/x-tar";
	}
	if(s=="tbz"){
		return "application/x-bzip-compressed-tar";
	}
	if(s=="tbz2"){
		return "application/x-bzip-compressed-tar";
	}
	if(s=="tcl"){
		return "text/x-tcl";
	}
	if(s=="tex"){
		return "text/x-tex";
	}
	if(s=="texi"){
		return "text/x-texinfo";
	}
	if(s=="texinfo"){
		return "text/x-texinfo";
	}
	if(s=="tga"){
		return "image/x-tga";
	}
	if(s=="tgz"){
		return "application/x-compressed-tar";
	}
	if(s=="theme"){
		return "application/x-theme";
	}
	if(s=="themepack"){
		return "application/x-windows-themepack";
	}
	if(s=="tif"){
		return "image/tiff";
	}
	if(s=="tiff"){
		return "image/tiff";
	}
	if(s=="tk"){
		return "text/x-tcl";
	}
	if(s=="tlz"){
		return "application/x-lzma-compressed-tar";
	}
	if(s=="tnef"){
		return "application/vnd.ms-tnef";
	}
	if(s=="tnf"){
		return "application/vnd.ms-tnef";
	}
	if(s=="toc"){
		return "application/x-cdrdao-toc";
	}
	if(s=="torrent"){
		return "application/x-bittorrent";
	}
	if(s=="tpic"){
		return "image/x-tga";
	}
	if(s=="tr"){
		return "text/troff";
	}
	if(s=="ts"){
		return "application/x-linguist";
	}
	if(s=="tsv"){
		return "text/tab-separated-values";
	}
	if(s=="tta"){
		return "audio/x-tta";
	}
	if(s=="ttc"){
		return "application/x-font-ttf";
	}
	if(s=="ttf"){
		return "application/x-font-ttf";
	}
	if(s=="ttx"){
		return "application/x-font-ttx";
	}
	if(s=="txt"){
		return "text/plain";
	}
	if(s=="txz"){
		return "application/x-xz-compressed-tar";
	}
	if(s=="tzo"){
		return "application/x-tzo";
	}
	if(s=="ufraw"){
		return "application/x-ufraw";
	}
	if(s=="ui"){
		return "application/x-designer";
	}
	if(s=="uil"){
		return "text/x-uil";
	}
	if(s=="ult"){
		return "audio/x-mod";
	}
	if(s=="uni"){
		return "audio/x-mod";
	}
	if(s=="uri"){
		return "text/x-uri";
	}
	if(s=="url"){
		return "text/x-uri";
	}
	if(s=="ustar"){
		return "application/x-ustar";
	}
	if(s=="vala"){
		return "text/x-vala";
	}
	if(s=="vapi"){
		return "text/x-vala";
	}
	if(s=="vcf"){
		return "text/directory";
	}
	if(s=="vcs"){
		return "text/calendar";
	}
	if(s=="vct"){
		return "text/directory";
	}
	if(s=="vda"){
		return "image/x-tga";
	}
	if(s=="vhd"){
		return "text/x-vhdl";
	}
	if(s=="vhdl"){
		return "text/x-vhdl";
	}
	if(s=="viv"){
		return "video/vivo";
	}
	if(s=="vivo"){
		return "video/vivo";
	}
	if(s=="vlc"){
		return "audio/x-mpegurl";
	}
	if(s=="vob"){
		return "video/mpeg";
	}
	if(s=="voc"){
		return "audio/x-voc";
	}
	if(s=="vor"){
		return "application/vnd.stardivision.writer";
	}
	if(s=="vst"){
		return "image/x-tga";
	}
	if(s=="wav"){
		return "audio/x-wav";
	}
	if(s=="wax"){
		return "audio/x-ms-asx";
	}
	if(s=="wb1"){
		return "application/x-quattropro";
	}
	if(s=="wb2"){
		return "application/x-quattropro";
	}
	if(s=="wb3"){
		return "application/x-quattropro";
	}
	if(s=="wbmp"){
		return "image/vnd.wap.wbmp";
	}
	if(s=="wcm"){
		return "application/vnd.ms-works";
	}
	if(s=="wdb"){
		return "application/vnd.ms-works";
	}
	if(s=="webm"){
		return "video/webm";
	}
	if(s=="wk1"){
		return "application/vnd.lotus-1-2-3";
	}
	if(s=="wk3"){
		return "application/vnd.lotus-1-2-3";
	}
	if(s=="wk4"){
		return "application/vnd.lotus-1-2-3";
	}
	if(s=="wks"){
		return "application/vnd.ms-works";
	}
	if(s=="wma"){
		return "audio/x-ms-wma";
	}
	if(s=="wmf"){
		return "image/x-wmf";
	}
	if(s=="wml"){
		return "text/vnd.wap.wml";
	}
	if(s=="wmls"){
		return "text/vnd.wap.wmlscript";
	}
	if(s=="wmv"){
		return "video/x-ms-wmv";
	}
	if(s=="wmx"){
		return "audio/x-ms-asx";
	}
	if(s=="wp"){
		return "application/vnd.wordperfect";
	}
	if(s=="wp4"){
		return "application/vnd.wordperfect";
	}
	if(s=="wp5"){
		return "application/vnd.wordperfect";
	}
	if(s=="wp6"){
		return "application/vnd.wordperfect";
	}
	if(s=="wpd"){
		return "application/vnd.wordperfect";
	}
	if(s=="wpg"){
		return "application/x-wpg";
	}
	if(s=="wpl"){
		return "application/vnd.ms-wpl";
	}
	if(s=="wpp"){
		return "application/vnd.wordperfect";
	}
	if(s=="wps"){
		return "application/vnd.ms-works";
	}
	if(s=="wri"){
		return "application/x-mswrite";
	}
	if(s=="wrl"){
		return "model/vrml";
	}
	if(s=="wv"){
		return "audio/x-wavpack";
	}
	if(s=="wvc"){
		return "audio/x-wavpack-correction";
	}
	if(s=="wvp"){
		return "audio/x-wavpack";
	}
	if(s=="wvx"){
		return "audio/x-ms-asx";
	}
	if(s=="x3f"){
		return "image/x-sigma-x3f";
	}
	if(s=="xac"){
		return "application/x-gnucash";
	}
	if(s=="xbel"){
		return "application/x-xbel";
	}
	if(s=="xbl"){
		return "application/xml";
	}
	if(s=="xbm"){
		return "image/x-xbitmap";
	}
	if(s=="xcf"){
		return "image/x-xcf";
	}
	if(s=="xhtml"){
		return "application/xhtml+xml";
	}
	if(s=="xi"){
		return "audio/x-xi";
	}
	if(s=="xla"){
		return "application/vnd.ms-excel";
	}
	if(s=="xlc"){
		return "application/vnd.ms-excel";
	}
	if(s=="xld"){
		return "application/vnd.ms-excel";
	}
	if(s=="xlf"){
		return "application/x-xliff";
	}
	if(s=="xliff"){
		return "application/x-xliff";
	}
	if(s=="xll"){
		return "application/vnd.ms-excel";
	}
	if(s=="xlm"){
		return "application/vnd.ms-excel";
	}
	if(s=="xls"){
		return "application/vnd.ms-excel";
	}
	if(s=="xlsm"){
		return "application/vnd.openxmlformats-officedocument.spreadsheetml.sheet";
	}
	if(s=="xlsx"){
		return "application/vnd.openxmlformats-officedocument.spreadsheetml.sheet";
	}
	if(s=="xlt"){
		return "application/vnd.ms-excel";
	}
	if(s=="xlw"){
		return "application/vnd.ms-excel";
	}
	if(s=="xm"){
		return "audio/x-xm";
	}
	if(s=="xmf"){
		return "audio/x-xmf";
	}
	if(s=="xmi"){
		return "text/x-xmi";
	}
	if(s=="xml"){
		return "application/xml";
	}
	if(s=="xpm"){
		return "image/x-xpixmap";
	}
	if(s=="xps"){
		return "application/vnd.ms-xpsdocument";
	}
	if(s=="xsl"){
		return "application/xml";
	}
	if(s=="xslfo"){
		return "text/x-xslfo";
	}
	if(s=="xslt"){
		return "application/xml";
	}
	if(s=="xspf"){
		return "application/xspf+xml";
	}
	if(s=="xul"){
		return "application/vnd.mozilla.xul+xml";
	}
	if(s=="xwd"){
		return "image/x-xwindowdump";
	}
	if(s=="xyz"){
		return "chemical/x-pdb";
	}
	if(s=="xz"){
		return "application/x-xz";
	}
	if(s=="w2p"){
		return "application/w2p";
	}
	if(s=="z"){
		return "application/x-compress";
	}
	if(s=="zabw"){
		return "application/x-abiword";
	}
	if(s=="zip"){
		return "application/zip";
	}
	return "application/octet-stream";
}
#endif
