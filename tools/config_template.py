

#SETTINGS
serverPath = "C:\Program Files (x86)\Steam\steamapps\common\Arma 3 Server"
serverDevPath = f"{serverPath}\GENDEV"



MOD_LIST = [
    "E:\SteamLibrary\steamapps\common\Arma 3\!Workshop\@CBA_A3",
    "E:\SteamLibrary\steamapps\common\Arma 3\!Workshop\@ace",
    "E:\SteamLibrary\steamapps\common\Arma 3\!Workshop\@Task Force Arrowhead Radio (BETA!!!)",
    "F:\GITS\9GU\DataMod\Releases\Latest\@9GUGameData",
]

modName = "@9GUGameData"
BUILD_LIST = [
    'gen_data',
    'gen_markers'
]

addonBuilder = "C:\Program Files (x86)\Steam\steamapps\common\Arma 3 Tools\AddonBuilder\AddonBuilder.exe"
addonBuilder_IncludesPath = 'tools\\addonBuilder_Includes.txt'


#mods that dont need to be built but only signed
SIGN_LIST = [
    'afm_acre.pbo'
]

DSSignFile = "C:\Program Files (x86)\Steam\steamapps\common\Arma 3 Tools\DSSignFile\DSSignFile.exe"

privateKEY = "F:\GITS\9GU\SignKey\9GU.biprivatekey"
