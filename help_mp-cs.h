// Translated by:  Jiri Svoboda, jiri.svoboda@seznam.cz
// Updated by:     Tomas Blaha,  tomas.blaha at kapsa.club.cz
// ========================= MPlayer help ===========================

#ifdef HELP_MP_DEFINE_STATIC
static char* banner_text=
"\n\n"
"MPlayer " VERSION "(C) 2000-2002 Arpad Gereoffy (viz DOCS!)\n"
"\n";

// P�eklad do �e�tiny Ji�� Svoboda

static char help_text[]=
#ifdef HAVE_NEW_GUI
"Pou�it�:   mplayer [-gui] [p�ep�na�e] [cesta/]jmenosouboru\n"
#else
"Pou�it�:   mplayer [p�ep�na�e] [cesta/]jmenosouboru\n"
#endif
"\n"
"P�ep�na�e:\n"
" -vo <drv[:dev]> v�b�r v�stupn�ho video ovlada�e&za��zen� (-vo help pro seznam)\n"
" -ao <drv[:dev]> v�b�r v�stupn�ho audio ovlada�e&za��zen� (-ao help pro seznam)\n"
" -vcd <trackno>  p�ehr�t VCD (video cd) stopu ze za��zen� m�sto ze souboru\n"
#ifdef HAVE_LIBCSS
" -dvdauth <dev>  ur�en� DVD za��zen� pro autentikaci (pro k�dovan� disky)\n"
#endif
#ifdef USE_DVDREAD
" -dvd <titleno>  p�ehr�t DVD titul/stopu ze za��zen� (mechaniky) m�sto souboru\n"
#endif
" -ss <timepos>   posun na pozici (sekundy nebo hh:mm:ss)\n"
" -nosound        p�ehr�vat beze zvuku\n"
#ifdef USE_FAKE_MONO
" -stereo <mode>  v�b�r audiokan�lu pro MPEG1 (0:stereo 1:lev� 2:prav�)\n"
#endif
" -channels <n>   c�lov� po�et zvukov�ch v�stupn�ch kan�l�\n"
" -fs -vm -zoom   volby pro p�ehr�v�n� p�es celou obrazovku (cel� obrazovka\n                 m�nit videore�im, softwarov� zoom)\n"
" -x <x> -y <y>   zv�t�en� obrazu na rozm�r <x>*<y> (pokud to um� -vo ovlada�!)\n"
" -sub <file>     volba souboru s titulky (viz tak� -subfps, -subdelay)\n"
" -playlist <file> ur�en� souboru se seznamem p�ehr�van�ch soubor�\n"
" -vid x -aid y   v�b�r ��sla video (x) a audio (y) proudu pro p�ehr�n�\n"
" -fps x -srate y volba pro zm�nu video (x fps) a audio (y Hz) frekvence\n"
" -pp <quality>   aktivace postprocesing filtru (0-4 pro DivX, 0-63 pro mpegy)\n"
" -nobps          pou��t alternativn� A-V synchroniza�n� metodu pro Avi soubory\n"
" -framedrop      povolit zahazov�n� sn�mk� (pro pomale stroje)\n"
" -wid <window id> pou��t existuj�c� okno pro v�stup videa\n"
"\n"
"Kl�vesy:\n"
" <-  nebo  ->    posun vzad/vp�ed o 10 sekund\n"
" nahoru �i dol�  posun vzad/vp�ed o  1 minutu\n"
" < nebo >        posun vzad/vp�ed v seznamu p�ehr�van�ch soubor�\n"
" p nebo mezern�k pauza p�i p�ehr�v�n� (pokra�ov�n� stiskem kter�koliv kl�vesy)\n"
" q nebo ESC      konec p�ehr�v�n� a ukon�en� programu\n"
" + nebo -        upravit zpo�d�n� zvuku v kroc�ch +/- 0.1 sekundy\n"
" o               cyklick� zm�na re�imu OSD:  nic / pozice / pozice+�as\n"
" * nebo /        p�idat nebo ubrat hlasitost (stiskem 'm' v�b�r master/pcm)\n"
" z nebo x        upravit zpo�d�n� titulk� v kroc�ch +/- 0.1 sekundy\n"
"\n"
" * * * * P�E�T�TE SI MAN STR�NKU PRO DETAILY (DAL�� VOLBY A KL�VESY)! * * * *\n"
"\n";
#endif

// ========================= MPlayer messages ===========================

// mplayer.c: 

#define MSGTR_Exiting "\nKon��m... (%s)\n"
#define MSGTR_Exit_frames "Po�adovan� po�et sn�mk� p�ehr�n"
#define MSGTR_Exit_quit "Konec"
#define MSGTR_Exit_eof "Konec souboru"
#define MSGTR_Exit_error "Z�va�n� chyba"
#define MSGTR_IntBySignal "\nMPlayer p�eru�en sign�lem %d v modulu: %s \n"
#define MSGTR_NoHomeDir "Nemohu nal�zt dom�c� (HOME) adres��\n"
#define MSGTR_GetpathProblem "get_path(\"config\") probl�m\n"
#define MSGTR_CreatingCfgFile "Vytv���m konfigura�n� soubor: %s\n"
#define MSGTR_InvalidVOdriver "Neplan� jm�no v�stupn�ho videoovlada�e: %s\nPou�ijte '-vo help' pro seznam dostupn�ch ovlada��.\n"
#define MSGTR_InvalidAOdriver "Neplan� jm�no v�stupn�ho audioovlada�e: %s\nPou�ijte '-ao help' pro seznam dostupn�ch ovlada��.\n"
#define MSGTR_CopyCodecsConf "(copy/ln etc/codecs.conf (ze zdrojov�ch k�d� MPlayeru) do ~/.mplayer/codecs.conf)\n"
#define MSGTR_CantLoadFont "Nemohu na��st font: %s\n"
#define MSGTR_CantLoadSub "Nemohu na��st titulky: %s\n"
#define MSGTR_ErrorDVDkey "Chyba p�i zpracov�n� kl��e DVD.\n"
#define MSGTR_CmdlineDVDkey "DVD kl�� po�adovan� na p��kazov� ��dce je uschov�n pro rozk�dov�n�.\n"
#define MSGTR_DVDauthOk "DVD autentika�n� sekvence vypad� vpo��dku.\n"
#define MSGTR_DumpSelectedSteramMissing "dump: FATAL: po�adovan� proud chyb�!\n"
#define MSGTR_CantOpenDumpfile "Nelze otev��t soubor pro dump!!!\n"
#define MSGTR_CoreDumped "j�dro vyps�no :)\n"
#define MSGTR_FPSnotspecified "V hlavi�ce souboru nen� ud�no (nebo je �patn�) FPS! Pou�ijte volbu -fps !\n"
#define MSGTR_NoVideoStream "Bohu�el, ��dn� videoproud... to se zat�m ned� p�ehr�t.\n"
#define MSGTR_TryForceAudioFmt "Pokou��m se vynutit rodinu audiokodeku %d ...\n"
#define MSGTR_CantFindAfmtFallback "Nemohu nal�zt audio kodek pro po�adovanou rodinu, pou�iji ostatn�.\n"
#define MSGTR_CantFindAudioCodec "Nemohu nal�zt kodek pro audio form�t 0x%X !\n"
#define MSGTR_TryUpgradeCodecsConfOrRTFM "*** Pokuste se upgradovat %s z etc/codecs.conf\n*** Pokud probl�m p�etrv�, pak si p�e�t�te DOCS/CODECS!\n"
#define MSGTR_CouldntInitAudioCodec "Nelze inicializovat audio kodek! -> beze zvuku\n"
#define MSGTR_TryForceVideoFmt "Poku��m se vynutit rodinu videokodeku %d ...\n"
#define MSGTR_CantFindVfmtFallback "Nemohu nal�zt video kodek pro po�adovanou rodinu, pou�iji ostatn�.\n"
#define MSGTR_CantFindVideoCodec "Nemohu nal�zt kodek pro video form�t 0x%X !\n"
#define MSGTR_VOincompCodec "Bohu�el, vybran� video_out za��zen� je nekompatibiln� s t�mto kodekem.\n"
#define MSGTR_CouldntInitVideoCodec "FATAL: Nemohu inicializovat videokodek :(\n"
#define MSGTR_EncodeFileExists "Soubor ji� existuje: %s (nep�epi�te si sv�j obl�ben� AVI soubor!)\n"
#define MSGTR_CantCreateEncodeFile "Nemohu vytvo�it soubor\n" // toto doopravit - need to be corrected
#define MSGTR_CannotInitVO "FATAL: Nemohu inicializovat video driver!\n"
#define MSGTR_CannotInitAO "nemohu otev��t/inicializovat audio driver -> TICHO\n"
#define MSGTR_StartPlaying "Za��n�m p�ehr�vat...\n"

#define MSGTR_SystemTooSlow "\n\n"\
"         ***********************************************************\n"\
"         ****  Na p�ehr�n� tohoto je v� syst�m p��li� POMAL�!  ****\n"\
"         ***********************************************************\n"\
"!!! Mo�n� p���iny, probl�my a �e�en�:\n"\
"- Nej�ast�j��: �patn�/chybn� _zvukov�_ ovlada�. �e�en�: zkuste -ao sdl nebo pou�ijte\n"\
"  ALSA 0.5 nebo oss emulaci z ALSA 0.9. v�ce tip� se dozv�te v DOCS/sound.html!\n"\
"- Pomal� video v�stup. Zkuste jin� -vo ovlada� (pro seznam: -vo help) nebo zkuste\n"\
"  s volbou -framedrop !  Tipy pro lad�n�/zrychlen� videa jsou v DOCS/video.html\n"\
"- Pomal� cpu. Nezkou�ejte p�ehr�vat velk� dvd/divx na pomal� cpu! Zkuste -hardframedrop\n"\
"- Po�kozen� soubor. Zkuste r�zn� kombinace t�chto voleb: -nobps  -ni  -mc 0  -forceidx\n"\
"Pokud nic z toho nen� pravda, p�e�t�te si DOCS/bugreports.html !\n\n"

#define MSGTR_NoGui "MPlayer byl p�elo�en BEZ podpory GUI!\n"
#define MSGTR_GuiNeedsX "MPlayer GUI vy�aduje X11!\n"
#define MSGTR_Playing "P�ehr�v�m %s\n"
#define MSGTR_NoSound "Audio: beze zvuku!!!\n"
#define MSGTR_FPSforced "FPS vynuceno na hodnotu %5.3f  (ftime: %5.3f)\n"

// open.c, stream.c:
#define MSGTR_CdDevNotfound "CD-ROM za��zen� '%s' nenalezeno!\n"
#define MSGTR_ErrTrackSelect "Chyba p�i v�b�ru VCD stopy!"
#define MSGTR_ReadSTDIN "�tu ze stdin...\n"
#define MSGTR_UnableOpenURL "Nelze otev��t URL: %s\n"
#define MSGTR_ConnToServer "P�ipojen k serveru: %s\n"
#define MSGTR_FileNotFound "Soubor nenalezen: '%s'\n"

#define MSGTR_CantOpenDVD "Nelze otev��t DVD za��zen�: %s\n"
#define MSGTR_DVDwait "�tu strukturu disku, pros�m �ekejte...\n"
#define MSGTR_DVDnumTitles "Na tomto DVD je %d titul�.\n"
#define MSGTR_DVDinvalidTitle "Neplatn� ��slo DVD titulu: %d\n"
#define MSGTR_DVDnumChapters "Na tomto DVD je %d kapitol.\n"
#define MSGTR_DVDinvalidChapter "Neplatn� ��slo kapitoly DVD: %d\n"
#define MSGTR_DVDnumAngles "Na tomto DVD je %d �hl� pohledu.\n"
#define MSGTR_DVDinvalidAngle "Neplatn� ��slo �hlu pohledu DVD: %d\n"
#define MSGTR_DVDnoIFO "Nemohu otev��t soubor IFO pro DVD titul %d.\n"
#define MSGTR_DVDnoVOBs "Nemohu otev��t VOB soubor (VTS_%02d_1.VOB).\n"
#define MSGTR_DVDopenOk "DVD �sp�n� otev�eno!\n"

// demuxer.c, demux_*.c:
#define MSGTR_AudioStreamRedefined "Upozorn�n�! Hlavi�ka audio proudu %d p�edefinov�na!\n"
#define MSGTR_VideoStreamRedefined "Upozorn�n�! Hlavi�ka video proudu %d p�edefinov�na!\n"
#define MSGTR_TooManyAudioInBuffer "\nDEMUXER: P��li� mnoho (%d v %d bajtech) audio paket� v bufferu!\n"
#define MSGTR_TooManyVideoInBuffer "\nDEMUXER: P��li� mnoho (%d v %d bajtech) video paket� v bufferu!\n"
#define MSGTR_MaybeNI "(mo�n� p�ehr�v�te neprokl�dan� proud/soubor nebo kodek selhal)\n"
#define MSGTR_DetectedFILMfile "Detekov�n FILM form�t souboru!\n"
#define MSGTR_DetectedFLIfile "Detekov�n FLI form�t souboru!\n"
#define MSGTR_DetectedROQfile "Detekov�n RoQ form�t souboru!\n"
#define MSGTR_DetectedREALfile "Detekov�n REAL form�t souboru!\n"
#define MSGTR_DetectedAVIfile "Detekov�n AVI form�t souboru!\n"
#define MSGTR_DetectedASFfile "Detekov�n ASF form�t souboru!\n"
#define MSGTR_DetectedMPEGPESfile "Detekov�n MPEG-PES form�t souboru!\n"
#define MSGTR_DetectedMPEGPSfile "Detekov�n MPEG-PS form�t souboru!\n"
#define MSGTR_DetectedMPEGESfile "Detekov�n MPEG-ES form�t souboru!\n"
#define MSGTR_DetectedQTMOVfile "Detekov�n QuickTime/MOV form�t souboru!\n"
#define MSGTR_MissingMpegVideo "Chyb�j�c� MPEG video proud!? Kontaktujte autora, mo�n� to je chyba (bug) :(\n"
#define MSGTR_InvalidMPEGES "Neplatn� MPEG-ES proud!? Kontaktuje autora, mo�n� to je chyba (bug) :(\n"
#define MSGTR_FormatNotRecognized "========== Bohu�el, tento form�t souboru nen� rozpozn�n/podporov�n =========\n"\
                                 "==== Pokud je tento soubor AVI, ASF nebo MPEG proud, kontaktuje autora! ====\n"
#define MSGTR_MissingVideoStream "��dn� video proud nenalezen!\n"
#define MSGTR_MissingAudioStream "��dn� audio proud nenalezen...  ->beze zvuku\n"
#define MSGTR_MissingVideoStreamBug "Chyb�j�c� video proud!? Kontaktuje autora, mo�n� to je chyba (bug) :(\n"

#define MSGTR_DoesntContainSelectedStream "demux: soubor neobsahuje vybran� audio nebo video proud\n"

#define MSGTR_NI_Forced "Vynucen"
#define MSGTR_NI_Detected "Detekov�n"
#define MSGTR_NI_Message "%s NEPROKL�DAN� form�t souboru AVI!\n"

#define MSGTR_UsingNINI "Pou��v�m NEPROKL�DAN� po�kozen� form�t souboru AVI!\n" //tohle taky n�jak opravit
#define MSGTR_CouldntDetFNo "Nemohu ur�it po�et sn�mk� (pro absolutn� posun)  \n"
#define MSGTR_CantSeekRawAVI "Nelze se posouvat v surov�ch (raw) .AVI proudech! (Pot�ebuji index, zkuste pou��t volbu -idx !)  \n"
#define MSGTR_CantSeekFile "Nemohu posouvat v tomto souboru!  \n"

#define MSGTR_EncryptedVOB "K�dovan� VOB soubor (p�elo�eno bez podpory libcss)! P�e�t�te si DOCS/DVD\n"
#define MSGTR_EncryptedVOBauth "Zak�dovan� proud, ale autentikaci jste nepo�adoval!!\n"

#define MSGTR_MOVcomprhdr "MOV: Komprimovan� hlavi�ky nejsou (je�t�) podporov�ny!\n"
#define MSGTR_MOVvariableFourCC "MOV: Upozorn�n�! prom�nn� FOURCC detekov�na!?\n"
#define MSGTR_MOVtooManyTrk "MOV: Upozorn�n�! P��li� mnoho stop!"
#define MSGTR_MOVnotyetsupp "\n****** Quicktime MOV form�t nen� je�t� podporov�n !!! *******\n"

// dec_video.c & dec_audio.c:
#define MSGTR_CantOpenCodec "nemohu otev��t kodek\n"
#define MSGTR_CantCloseCodec "nemohu uzav��t kodek\n"

#define MSGTR_MissingDLLcodec "CHYBA: Nemohu otev��t pot�ebn� DirectShow kodek: %s\n"
#define MSGTR_ACMiniterror "Nemohu na��st/inicializovat Win32/ACM AUDIO kodek (chyb�j�c� soubor DLL?)\n"
#define MSGTR_MissingLAVCcodec "Nemohu naj�t kodek '%s' v libavcodec...\n"

#define MSGTR_NoDShowSupport "MPlayer byl p�elo�en BEZ podpory directshow!\n"
#define MSGTR_NoWfvSupport "Podpora pro kodeky win32 neaktivn� nebo nedostupn� mimo platformy x86!\n"
#define MSGTR_NoDivx4Support "MPlayer byl p�elo�en BEZ podpory DivX4Linux (libdivxdecore.so)!\n"
#define MSGTR_NoLAVCsupport "MPlayer byl p�elo�en BEZ podpory ffmpeg/libavcodec!\n"
#define MSGTR_NoACMSupport "Win32/ACM audio kodek neaktivn� nebo nedostupn� mimo platformy x86 -> vynuceno beze zvuku :(\n"
#define MSGTR_NoDShowAudio "P�elo�eno BEZ podpory DirectShow -> vynuceno beze zvuku :(\n"
#define MSGTR_NoOggVorbis "OggVorbis audio kodek neaktivn� -> vynuceno beze zvuku :(\n"
#define MSGTR_NoXAnimSupport "MPlayer byl p�elo�en BEZ podpory XAnim!\n"

#define MSGTR_MpegPPhint "Upozorn�n�! Po�adujete video postprocesing pro MPEG 1/2, ale MPlayer byl\n" \
			 "         p�elo�en bez podpory posprocesingu MPEG 1/2!\n" \
			 "         #define MPEG12_POSTPROC v config.h a p�elo�te znovu libmpeg2!\n"
#define MSGTR_MpegNoSequHdr "MPEG: FATAL: EOF - konec souboru v pr�b�hu vyhled�v�n� hlavi�ky sekvence\n"
#define MSGTR_CannotReadMpegSequHdr "FATAL: Nelze p�e��st hlavi�ku sekvence!\n"
#define MSGTR_CannotReadMpegSequHdrEx "FATAL: Nelze p�e��st roz���en� hlavi�ky sekvence!\n"
#define MSGTR_BadMpegSequHdr "MPEG: �patn� hlavi�ka sekvence!\n"
#define MSGTR_BadMpegSequHdrEx "MPEG: �patn� roz���en� hlavi�ky sekvence!\n"

#define MSGTR_ShMemAllocFail "Nemohu alokovat sd�lenou pam�\n"
#define MSGTR_CantAllocAudioBuf "Nemohu alokovat pam� pro v�stupn� audio buffer\n"
#define MSGTR_NoMemForDecodedImage "nedostatek pam�ti pro buffer pro dek�dov�n� obrazu (%ld bytes)\n"

#define MSGTR_AC3notvalid "Neplatn� AC3 proud.\n"
#define MSGTR_AC3only48k "Pouze proudy o frekvenci 48000 Hz podporov�ny.\n"
#define MSGTR_UnknownAudio "Nezn�m�/chyb�j�c� audio form�t -> beze zvuku\n"

// LIRC:
#define MSGTR_SettingUpLIRC "Nastavuji podporu lirc ...\n"
#define MSGTR_LIRCdisabled "Nebudete moci pou��vat d�lkov� ovlada�.\n"
#define MSGTR_LIRCopenfailed "Selhal pokus o otev�en� podpory LIRC!\n"
#define MSGTR_LIRCsocketerr "N�jak� chyba se soketem lirc: %s\n"
#define MSGTR_LIRCcfgerr "Selhalo �ten� konfigura�n�ho souboru LIRC %s !\n"


// ====================== GUI messages/buttons ========================

#ifdef HAVE_NEW_GUI

// --- labels ---
#define MSGTR_About "O aplikaci"
#define MSGTR_FileSelect "V�b�r souboru ..."
#define MSGTR_SubtitleSelect "Vybrat titulky ..."
#define MSGTR_MessageBox "Zpr�va"
#define MSGTR_PlayList "Soubory pro p�ehr�n�"
#define MSGTR_SkinBrowser "Prohl��e� t�mat"
#define MSGTR_OtherSelect "Vybrat ..."

// --- buttons ---
#define MSGTR_Ok "Ok"
#define MSGTR_Cancel "Zru�it"
#define MSGTR_Add "P�idat"
#define MSGTR_Remove "Odebrat"

// --- error messages ---
#define MSGTR_NEMDB "Bohu�el, nedostatek pam�ti pro buffer pro kreslen�."
#define MSGTR_NEMFMR "Bohu�el, nedostatek pam�ti pro vytv��en� menu."
#define MSGTR_NEMFMM "Bohu�el, nedostatek pam�ti pro masku hlavn�ho okna."

// --- skin loader error messages
#define MSGTR_SKIN_ERRORMESSAGE "[t�mata] chyba v konfigura�n�m soubory t�mat %d: %s"
#define MSGTR_SKIN_WARNING1 "[t�mata] v konfigura�n�m soubory t�mat na ��dce %d: widget nalezen ale p�ed  \"section\" nenalezen ( %s )"
#define MSGTR_SKIN_WARNING2 "[t�mata] v konfigura�n�m soubory t�mat na ��dce %d: widget nalezen ale p�ed \"subsection\" nenalezen (%s)"
#define MSGTR_SKIN_BITMAP_16bit  "bitmapa s hloubkou 16 bitov� a m�n� nepodporov�na ( %s ).\n"
#define MSGTR_SKIN_BITMAP_FileNotFound  "soubor nenalezen ( %s )\n"
#define MSGTR_SKIN_BITMAP_BMPReadError "chyba �ten� bmp ( %s )\n"
#define MSGTR_SKIN_BITMAP_TGAReadError "chyba �ten� tga ( %s )\n"
#define MSGTR_SKIN_BITMAP_PNGReadError "chyba �ten� png ( %s )\n"
#define MSGTR_SKIN_BITMAP_RLENotSupported "form�t RLE packed tga nepodporov�n ( %s )\n"
#define MSGTR_SKIN_BITMAP_UnknownFileType "nezn�m� typ souboru ( %s )\n"
#define MSGTR_SKIN_BITMAP_ConvertError "chyba konverze z 24 bit do 32 bit ( %s )\n"
#define MSGTR_SKIN_BITMAP_UnknownMessage "nezn�m� zpr�va: %s\n"
#define MSGTR_SKIN_FONT_NotEnoughtMemory "nedostatek pam�ti\n"
#define MSGTR_SKIN_FONT_TooManyFontsDeclared "deklarov�no p��li� mnoho font�\n"
#define MSGTR_SKIN_FONT_FontFileNotFound "soubor fontu nenalezen\n"
#define MSGTR_SKIN_FONT_FontImageNotFound "soubor obraz� fontu nenalezen\n"
#define MSGTR_SKIN_FONT_NonExistentFontID "neexistuj�c� identifik�tor fontu ( %s )\n"
#define MSGTR_SKIN_UnknownParameter "nezn�m� parametr ( %s )\n"
#define MSGTR_SKINBROWSER_NotEnoughMemory "[prohl��e� t�mat] nedostatek pam�ti.\n"
#define MSGTR_SKIN_SKINCFG_SkinNotFound "Skin nenalezen ( %s ).\n"
#define MSGTR_SKIN_SKINCFG_SkinCfgReadError "Chyba p�i �ten� konfigura�n�ho souboru t�mat ( %s ).\n"
#define MSGTR_SKIN_LABEL "T�mata:"

// --- gtk menus
#define MSGTR_MENU_AboutMPlayer "O aplikaci MPlayer"
#define MSGTR_MENU_Open "Otev��t ..."
#define MSGTR_MENU_PlayFile "P�ehr�t soubor ..."
#define MSGTR_MENU_PlayVCD "P�ehr�t VCD ..."
#define MSGTR_MENU_PlayDVD "P�ehr�t DVD ..."
#define MSGTR_MENU_PlayURL "�ten� URL ..."
#define MSGTR_MENU_LoadSubtitle "Na��st titulky ..."
#define MSGTR_MENU_Playing "Ovl�d�n� p�ehr�v�n�"
#define MSGTR_MENU_Play "P�ehr�t"
#define MSGTR_MENU_Pause "Pauza"
#define MSGTR_MENU_Stop "Zastavit"
#define MSGTR_MENU_NextStream "Dal�� proud"
#define MSGTR_MENU_PrevStream "P�edchoz� proud"
#define MSGTR_MENU_Size "Velikost"
#define MSGTR_MENU_NormalSize "Norm�ln� velikost"
#define MSGTR_MENU_DoubleSize "Dvojn�sobn� velikost"
#define MSGTR_MENU_FullScreen "Cel� obrazovka"
#define MSGTR_MENU_DVD "DVD"
#define MSGTR_MENU_VCD "VCD"
#define MSGTR_MENU_PlayDisc "P�ehr�t disk ..."
#define MSGTR_MENU_ShowDVDMenu "Zobrazit DVD menu"
#define MSGTR_MENU_Titles "Tituly"
#define MSGTR_MENU_Title "Titul %2d"
#define MSGTR_MENU_None "(nic)"
#define MSGTR_MENU_Chapters "Kapitoly"
#define MSGTR_MENU_Chapter "Kapitola %2d"
#define MSGTR_MENU_AudioLanguages "Jazyk zvuku"
#define MSGTR_MENU_SubtitleLanguages "Jazyk titulk�"
#define MSGTR_MENU_PlayList "Soubory pro p�ehr�n�"
#define MSGTR_MENU_SkinBrowser "Prohli�e� t�mat"
#define MSGTR_MENU_Preferences "P�edvolby"
#define MSGTR_MENU_Exit "Konec ..."

// --- messagebox
#define MSGTR_MSGBOX_LABEL_FatalError "Fat�ln� chyba ..."
#define MSGTR_MSGBOX_LABEL_Error "Chyba ..."
#define MSGTR_MSGBOX_LABEL_Warning "Upozorn�n� ..."

#endif

