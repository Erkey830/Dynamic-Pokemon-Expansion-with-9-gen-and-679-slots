#include "defines.h"
#include "../include/graphics.h"

const struct MonCoords gMonBackPicCoords[NUM_SPECIES] =
{
	[SPECIES_NONE] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_BULBASAUR] =
	{
		.size = 0x64,
		.y_offset = 0xe,
	},
	[SPECIES_IVYSAUR] =
	{
		.size = 0x76,
		.y_offset = 0x8,
	},
	[SPECIES_VENUSAUR] =
	{
		.size = 0x86,
		.y_offset = 0xa,
	},
	[SPECIES_CHARMANDER] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_CHARMELEON] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_CHARIZARD] =
	{
		.size = 0x87,
		.y_offset = 0x1,
	},
	[SPECIES_SQUIRTLE] =
	{
		.size = 0x75,
		.y_offset = 0xa,
	},
	[SPECIES_WARTORTLE] =
	{
		.size = 0x86,
		.y_offset = 0x6,
	},
	[SPECIES_BLASTOISE] =
	{
		.size = 0x86,
		.y_offset = 0x7,
	},
	[SPECIES_CATERPIE] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_METAPOD] =
	{
		.size = 0x65,
		.y_offset = 0x8,
	},
	[SPECIES_BUTTERFREE] =
	{
		.size = 0x87,
		.y_offset = 0x5,
	},
	[SPECIES_WEEDLE] =
	{
		.size = 0x56,
		.y_offset = 0x7,
	},
	[SPECIES_KAKUNA] =
	{
		.size = 0x46,
		.y_offset = 0xc,
	},
	[SPECIES_BEEDRILL] =
	{
		.size = 0x86,
		.y_offset = 0x5,
	},
	[SPECIES_PIDGEY] =
	{
		.size = 0x66,
		.y_offset = 0xb,
	},
	[SPECIES_PIDGEOTTO] =
	{
		.size = 0x85,
		.y_offset = 0x6,
	},
	[SPECIES_PIDGEOT] =
	{
		.size = 0x87,
		.y_offset = 0x7,
	},
	[SPECIES_RATTATA] =
	{
		.size = 0x75,
		.y_offset = 0x7,
	},
	[SPECIES_RATICATE] =
	{
		.size = 0x75,
		.y_offset = 0xa,
	},
	[SPECIES_SPEAROW] =
	{
		.size = 0x65,
		.y_offset = 0x6,
	},
	[SPECIES_FEAROW] =
	{
		.size = 0x87,
		.y_offset = 0x4,
	},
	[SPECIES_EKANS] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_ARBOK] =
	{
		.size = 0x77,
		.y_offset = 0x1,
	},
	[SPECIES_PIKACHU] =
	{
		.size = 0x77,
		.y_offset = 0x4,
	},
	[SPECIES_RAICHU] =
	{
		.size = 0x66,
		.y_offset = 0x6,
	},
	[SPECIES_SANDSHREW] =
	{
		.size = 0x65,
		.y_offset = 0xd,
	},
	[SPECIES_SANDSLASH] =
	{
		.size = 0x86,
		.y_offset = 0xb,
	},
	[SPECIES_NIDORAN_F] =
	{
		.size = 0x55,
		.y_offset = 0xd,
	},
	[SPECIES_NIDORINA] =
	{
		.size = 0x86,
		.y_offset = 0x5,
	},
	[SPECIES_NIDOQUEEN] =
	{
		.size = 0x77,
		.y_offset = 0x5,
	},
	[SPECIES_NIDORAN_M] =
	{
		.size = 0x56,
		.y_offset = 0x9,
	},
	[SPECIES_NIDORINO] =
	{
		.size = 0x86,
		.y_offset = 0x8,
	},
	[SPECIES_NIDOKING] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_CLEFAIRY] =
	{
		.size = 0x65,
		.y_offset = 0xe,
	},
	[SPECIES_CLEFABLE] =
	{
		.size = 0x76,
		.y_offset = 0xa,
	},
	[SPECIES_VULPIX] =
	{
		.size = 0x76,
		.y_offset = 0x9,
	},
	[SPECIES_NINETALES] =
	{
		.size = 0x87,
		.y_offset = 0x5,
	},
	[SPECIES_JIGGLYPUFF] =
	{
		.size = 0x65,
		.y_offset = 0x0,
	},
	[SPECIES_WIGGLYTUFF] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_ZUBAT] =
	{
		.size = 0x76,
		.y_offset = 0x7,
	},
	[SPECIES_GOLBAT] =
	{
		.size = 0x87,
		.y_offset = 0xd,
	},
	[SPECIES_ODDISH] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_GLOOM] =
	{
		.size = 0x76,
		.y_offset = 0xb,
	},
	[SPECIES_VILEPLUME] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_PARAS] =
	{
		.size = 0x63,
		.y_offset = 0x12,
	},
	[SPECIES_PARASECT] =
	{
		.size = 0x87,
		.y_offset = 0xd,
	},
	[SPECIES_VENONAT] =
	{
		.size = 0x77,
		.y_offset = 0x5,
	},
	[SPECIES_VENOMOTH] =
	{
		.size = 0x77,
		.y_offset = 0x4,
	},
	[SPECIES_DIGLETT] =
	{
		.size = 0x54,
		.y_offset = 0xe,
	},
	[SPECIES_DUGTRIO] =
	{
		.size = 0x66,
		.y_offset = 0x11,
	},
	[SPECIES_MEOWTH] =
	{
		.size = 0x65,
		.y_offset = 0x6,
	},
	[SPECIES_PERSIAN] =
	{
		.size = 0x87,
		.y_offset = 0x7,
	},
	[SPECIES_PSYDUCK] =
	{
		.size = 0x67,
		.y_offset = 0x9,
	},
	[SPECIES_GOLDUCK] =
	{
		.size = 0x77,
		.y_offset = 0x3,
	},
	[SPECIES_MANKEY] =
	{
		.size = 0x76,
		.y_offset = 0x8,
	},
	[SPECIES_PRIMEAPE] =
	{
		.size = 0x77,
		.y_offset = 0xa,
	},
	[SPECIES_GROWLITHE] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_ARCANINE] =
	{
		.size = 0x87,
		.y_offset = 0x4,
	},
	[SPECIES_POLIWAG] =
	{
		.size = 0x74,
		.y_offset = 0x13,
	},
	[SPECIES_POLIWHIRL] =
	{
		.size = 0x65,
		.y_offset = 0xd,
	},
	[SPECIES_POLIWRATH] =
	{
		.size = 0x86,
		.y_offset = 0x7,
	},
	[SPECIES_ABRA] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_KADABRA] =
	{
		.size = 0x86,
		.y_offset = 0x8,
	},
	[SPECIES_ALAKAZAM] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_MACHOP] =
	{
		.size = 0x65,
		.y_offset = 0x6,
	},
	[SPECIES_MACHOKE] =
	{
		.size = 0x76,
		.y_offset = 0x8,
	},
	[SPECIES_MACHAMP] =
	{
		.size = 0x67,
		.y_offset = 0x7,
	},
	[SPECIES_BELLSPROUT] =
	{
		.size = 0x66,
		.y_offset = 0xb,
	},
	[SPECIES_WEEPINBELL] =
	{
		.size = 0x66,
		.y_offset = 0xb,
	},
	[SPECIES_VICTREEBEL] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_TENTACOOL] =
	{
		.size = 0x56,
		.y_offset = 0x9,
	},
	[SPECIES_TENTACRUEL] =
	{
		.size = 0x86,
		.y_offset = 0xb,
	},
	[SPECIES_GEODUDE] =
	{
		.size = 0x66,
		.y_offset = 0xb,
	},
	[SPECIES_GRAVELER] =
	{
		.size = 0x75,
		.y_offset = 0xa,
	},
	[SPECIES_GOLEM] =
	{
		.size = 0x84,
		.y_offset = 0xb,
	},
	[SPECIES_PONYTA] =
	{
		.size = 0x66,
		.y_offset = 0x4,
	},
	[SPECIES_RAPIDASH] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_SLOWPOKE] =
	{
		.size = 0x85,
		.y_offset = 0xd,
	},
	[SPECIES_SLOWBRO] =
	{
		.size = 0x86,
		.y_offset = 0x9,
	},
	[SPECIES_MAGNEMITE] =
	{
		.size = 0x43,
		.y_offset = 0x6,
	},
	[SPECIES_MAGNETON] =
	{
		.size = 0x66,
		.y_offset = 0x6,
	},
	[SPECIES_FARFETCHD] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_DODUO] =
	{
		.size = 0x66,
		.y_offset = 0x6,
	},
	[SPECIES_DODRIO] =
	{
		.size = 0x88,
		.y_offset = 0x3,
	},
	[SPECIES_SEEL] =
	{
		.size = 0x66,
		.y_offset = 0xd,
	},
	[SPECIES_DEWGONG] =
	{
		.size = 0x77,
		.y_offset = 0x5,
	},
	[SPECIES_GRIMER] =
	{
		.size = 0x75,
		.y_offset = 0xd,
	},
	[SPECIES_MUK] =
	{
		.size = 0x85,
		.y_offset = 0x8,
	},
	[SPECIES_SHELLDER] =
	{
		.size = 0x76,
		.y_offset = 0x16,
	},
	[SPECIES_CLOYSTER] =
	{
		.size = 0x87,
		.y_offset = 0x7,
	},
	[SPECIES_GASTLY] =
	{
		.size = 0x85,
		.y_offset = 0x6,
	},
	[SPECIES_HAUNTER] =
	{
		.size = 0x76,
		.y_offset = 0x4,
	},
	[SPECIES_GENGAR] =
	{
		.size = 0x86,
		.y_offset = 0x8,
	},
	[SPECIES_ONIX] =
	{
		.size = 0x78,
		.y_offset = 0x0,
	},
	[SPECIES_DROWZEE] =
	{
		.size = 0x65,
		.y_offset = 0x9,
	},
	[SPECIES_HYPNO] =
	{
		.size = 0x66,
		.y_offset = 0x5,
	},
	[SPECIES_KRABBY] =
	{
		.size = 0x66,
		.y_offset = 0xf,
	},
	[SPECIES_KINGLER] =
	{
		.size = 0x77,
		.y_offset = 0x5,
	},
	[SPECIES_VOLTORB] =
	{
		.size = 0x55,
		.y_offset = 0xa,
	},
	[SPECIES_ELECTRODE] =
	{
		.size = 0x65,
		.y_offset = 0x7,
	},
	[SPECIES_EXEGGCUTE] =
	{
		.size = 0x65,
		.y_offset = 0x12,
	},
	[SPECIES_EXEGGUTOR] =
	{
		.size = 0x87,
		.y_offset = 0x8,
	},
	[SPECIES_CUBONE] =
	{
		.size = 0x76,
		.y_offset = 0xa,
	},
	[SPECIES_MAROWAK] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_HITMONLEE] =
	{
		.size = 0x65,
		.y_offset = 0x4,
	},
	[SPECIES_HITMONCHAN] =
	{
		.size = 0x65,
		.y_offset = 0x6,
	},
	[SPECIES_LICKITUNG] =
	{
		.size = 0x85,
		.y_offset = 0xd,
	},
	[SPECIES_KOFFING] =
	{
		.size = 0x66,
		.y_offset = 0x3,
	},
	[SPECIES_WEEZING] =
	{
		.size = 0x85,
		.y_offset = 0x9,
	},
	[SPECIES_RHYHORN] =
	{
		.size = 0x85,
		.y_offset = 0xb,
	},
	[SPECIES_RHYDON] =
	{
		.size = 0x88,
		.y_offset = 0x5,
	},
	[SPECIES_CHANSEY] =
	{
		.size = 0x85,
		.y_offset = 0xb,
	},
	[SPECIES_TANGELA] =
	{
		.size = 0x85,
		.y_offset = 0x14,
	},
	[SPECIES_KANGASKHAN] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_HORSEA] =
	{
		.size = 0x66,
		.y_offset = 0xe,
	},
	[SPECIES_SEADRA] =
	{
		.size = 0x66,
		.y_offset = 0x6,
	},
	[SPECIES_GOLDEEN] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_SEAKING] =
	{
		.size = 0x76,
		.y_offset = 0x6,
	},
	[SPECIES_STARYU] =
	{
		.size = 0x75,
		.y_offset = 0x6,
	},
	[SPECIES_STARMIE] =
	{
		.size = 0x85,
		.y_offset = 0x4,
	},
	[SPECIES_MR_MIME] =
	{
		.size = 0x85,
		.y_offset = 0x8,
	},
	[SPECIES_SCYTHER] =
	{
		.size = 0x87,
		.y_offset = 0x3,
	},
	[SPECIES_JYNX] =
	{
		.size = 0x85,
		.y_offset = 0x3,
	},
	[SPECIES_ELECTABUZZ] =
	{
		.size = 0x66,
		.y_offset = 0x4,
	},
	[SPECIES_MAGMAR] =
	{
		.size = 0x77,
		.y_offset = 0x2,
	},
	[SPECIES_PINSIR] =
	{
		.size = 0x66,
		.y_offset = 0x6,
	},
	[SPECIES_TAUROS] =
	{
		.size = 0x85,
		.y_offset = 0xd,
	},
	[SPECIES_MAGIKARP] =
	{
		.size = 0x76,
		.y_offset = 0x6,
	},
	[SPECIES_GYARADOS] =
	{
		.size = 0x88,
		.y_offset = 0x5,
	},
	[SPECIES_LAPRAS] =
	{
		.size = 0x77,
		.y_offset = 0x3,
	},
	[SPECIES_DITTO] =
	{
		.size = 0x54,
		.y_offset = 0x12,
	},
	[SPECIES_EEVEE] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_VAPOREON] =
	{
		.size = 0x66,
		.y_offset = 0x5,
	},
	[SPECIES_JOLTEON] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_FLAREON] =
	{
		.size = 0x67,
		.y_offset = 0x9,
	},
	[SPECIES_PORYGON] =
	{
		.size = 0x65,
		.y_offset = 0xd,
	},
	[SPECIES_OMANYTE] =
	{
		.size = 0x66,
		.y_offset = 0xc,
	},
	[SPECIES_OMASTAR] =
	{
		.size = 0x66,
		.y_offset = 0x7,
	},
	[SPECIES_KABUTO] =
	{
		.size = 0x65,
		.y_offset = 0x11,
	},
	[SPECIES_KABUTOPS] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_AERODACTYL] =
	{
		.size = 0x86,
		.y_offset = 0xa,
	},
	[SPECIES_SNORLAX] =
	{
		.size = 0x86,
		.y_offset = 0xd,
	},
	[SPECIES_ARTICUNO] =
	{
		.size = 0x65,
		.y_offset = 0x5,
	},
	[SPECIES_ZAPDOS] =
	{
		.size = 0x76,
		.y_offset = 0xc,
	},
	[SPECIES_MOLTRES] =
	{
		.size = 0x87,
		.y_offset = 0x5,
	},
	[SPECIES_DRATINI] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_DRAGONAIR] =
	{
		.size = 0x78,
		.y_offset = 0x4,
	},
	[SPECIES_DRAGONITE] =
	{
		.size = 0x87,
		.y_offset = 0x1,
	},
	[SPECIES_MEWTWO] =
	{
		.size = 0x78,
		.y_offset = 0x1,
	},
	[SPECIES_MEW] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CHIKORITA] =
	{
		.size = 0x56,
		.y_offset = 0xa,
	},
	[SPECIES_BAYLEEF] =
	{
		.size = 0x66,
		.y_offset = 0x5,
	},
	[SPECIES_MEGANIUM] =
	{
		.size = 0x78,
		.y_offset = 0x2,
	},
	[SPECIES_CYNDAQUIL] =
	{
		.size = 0x76,
		.y_offset = 0x3,
	},
	[SPECIES_QUILAVA] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_TYPHLOSION] =
	{
		.size = 0x87,
		.y_offset = 0x3,
	},
	[SPECIES_TOTODILE] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_CROCONAW] =
	{
		.size = 0x67,
		.y_offset = 0x2,
	},
	[SPECIES_FERALIGATR] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_SENTRET] =
	{
		.size = 0x67,
		.y_offset = 0x0,
	},
	[SPECIES_FURRET] =
	{
		.size = 0x66,
		.y_offset = 0x6,
	},
	[SPECIES_HOOTHOOT] =
	{
		.size = 0x66,
		.y_offset = 0x4,
	},
	[SPECIES_NOCTOWL] =
	{
		.size = 0x68,
		.y_offset = 0x3,
	},
	[SPECIES_LEDYBA] =
	{
		.size = 0x76,
		.y_offset = 0x8,
	},
	[SPECIES_LEDIAN] =
	{
		.size = 0x77,
		.y_offset = 0x3,
	},
	[SPECIES_SPINARAK] =
	{
		.size = 0x73,
		.y_offset = 0x12,
	},
	[SPECIES_ARIADOS] =
	{
		.size = 0x86,
		.y_offset = 0x9,
	},
	[SPECIES_CROBAT] =
	{
		.size = 0x87,
		.y_offset = 0x1,
	},
	[SPECIES_CHINCHOU] =
	{
		.size = 0x86,
		.y_offset = 0xb,
	},
	[SPECIES_LANTURN] =
	{
		.size = 0x86,
		.y_offset = 0x6,
	},
	[SPECIES_PICHU] =
	{
		.size = 0x66,
		.y_offset = 0x6,
	},
	[SPECIES_CLEFFA] =
	{
		.size = 0x65,
		.y_offset = 0x8,
	},
	[SPECIES_IGGLYBUFF] =
	{
		.size = 0x66,
		.y_offset = 0xd,
	},
	[SPECIES_TOGEPI] =
	{
		.size = 0x54,
		.y_offset = 0xd,
	},
	[SPECIES_TOGETIC] =
	{
		.size = 0x66,
		.y_offset = 0x6,
	},
	[SPECIES_NATU] =
	{
		.size = 0x54,
		.y_offset = 0xf,
	},
	[SPECIES_XATU] =
	{
		.size = 0x76,
		.y_offset = 0x6,
	},
	[SPECIES_MAREEP] =
	{
		.size = 0x66,
		.y_offset = 0xf,
	},
	[SPECIES_FLAAFFY] =
	{
		.size = 0x66,
		.y_offset = 0x7,
	},
	[SPECIES_AMPHAROS] =
	{
		.size = 0x88,
		.y_offset = 0x3,
	},
	[SPECIES_BELLOSSOM] =
	{
		.size = 0x66,
		.y_offset = 0xc,
	},
	[SPECIES_MARILL] =
	{
		.size = 0x75,
		.y_offset = 0xd,
	},
	[SPECIES_AZUMARILL] =
	{
		.size = 0x86,
		.y_offset = 0x0,
	},
	[SPECIES_SUDOWOODO] =
	{
		.size = 0x66,
		.y_offset = 0x5,
	},
	[SPECIES_POLITOED] =
	{
		.size = 0x66,
		.y_offset = 0x5,
	},
	[SPECIES_HOPPIP] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_SKIPLOOM] =
	{
		.size = 0x65,
		.y_offset = 0x3,
	},
	[SPECIES_JUMPLUFF] =
	{
		.size = 0x87,
		.y_offset = 0x3,
	},
	[SPECIES_AIPOM] =
	{
		.size = 0x66,
		.y_offset = 0x3,
	},
	[SPECIES_SUNKERN] =
	{
		.size = 0x56,
		.y_offset = 0xa,
	},
	[SPECIES_SUNFLORA] =
	{
		.size = 0x66,
		.y_offset = 0x7,
	},
	[SPECIES_YANMA] =
	{
		.size = 0x77,
		.y_offset = 0x0,
	},
	[SPECIES_WOOPER] =
	{
		.size = 0x85,
		.y_offset = 0xc,
	},
	[SPECIES_QUAGSIRE] =
	{
		.size = 0x76,
		.y_offset = 0x5,
	},
	[SPECIES_ESPEON] =
	{
		.size = 0x76,
		.y_offset = 0x6,
	},
	[SPECIES_UMBREON] =
	{
		.size = 0x87,
		.y_offset = 0x2,
	},
	[SPECIES_MURKROW] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_SLOWKING] =
	{
		.size = 0x66,
		.y_offset = 0x3,
	},
	[SPECIES_MISDREAVUS] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_UNOWN] =
	{
		.size = 0x36,
		.y_offset = 0x8,
	},
	[SPECIES_WOBBUFFET] =
	{
		.size = 0x75,
		.y_offset = 0xa,
	},
	[SPECIES_GIRAFARIG] =
	{
		.size = 0x87,
		.y_offset = 0x1,
	},
	[SPECIES_PINECO] =
	{
		.size = 0x65,
		.y_offset = 0xd,
	},
	[SPECIES_FORRETRESS] =
	{
		.size = 0x84,
		.y_offset = 0x10,
	},
	[SPECIES_DUNSPARCE] =
	{
		.size = 0x85,
		.y_offset = 0x11,
	},
	[SPECIES_GLIGAR] =
	{
		.size = 0x87,
		.y_offset = 0x2,
	},
	[SPECIES_STEELIX] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SNUBBULL] =
	{
		.size = 0x76,
		.y_offset = 0xc,
	},
	[SPECIES_GRANBULL] =
	{
		.size = 0x87,
		.y_offset = 0x8,
	},
	[SPECIES_QWILFISH] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_SCIZOR] =
	{
		.size = 0x77,
		.y_offset = 0x4,
	},
	[SPECIES_SHUCKLE] =
	{
		.size = 0x56,
		.y_offset = 0xb,
	},
	[SPECIES_HERACROSS] =
	{
		.size = 0x77,
		.y_offset = 0x2,
	},
	[SPECIES_SNEASEL] =
	{
		.size = 0x66,
		.y_offset = 0x3,
	},
	[SPECIES_TEDDIURSA] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_URSARING] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_SLUGMA] =
	{
		.size = 0x66,
		.y_offset = 0x6,
	},
	[SPECIES_MAGCARGO] =
	{
		.size = 0x76,
		.y_offset = 0x7,
	},
	[SPECIES_SWINUB] =
	{
		.size = 0x63,
		.y_offset = 0xf,
	},
	[SPECIES_PILOSWINE] =
	{
		.size = 0x75,
		.y_offset = 0x8,
	},
	[SPECIES_CORSOLA] =
	{
		.size = 0x65,
		.y_offset = 0x8,
	},
	[SPECIES_REMORAID] =
	{
		.size = 0x75,
		.y_offset = 0xc,
	},
	[SPECIES_OCTILLERY] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_DELIBIRD] =
	{
		.size = 0x67,
		.y_offset = 0x6,
	},
	[SPECIES_MANTINE] =
	{
		.size = 0x87,
		.y_offset = 0x2,
	},
	[SPECIES_SKARMORY] =
	{
		.size = 0x87,
		.y_offset = 0x1,
	},
	[SPECIES_HOUNDOUR] =
	{
		.size = 0x55,
		.y_offset = 0xa,
	},
	[SPECIES_HOUNDOOM] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_KINGDRA] =
	{
		.size = 0x87,
		.y_offset = 0x7,
	},
	[SPECIES_PHANPY] =
	{
		.size = 0x65,
		.y_offset = 0xc,
	},
	[SPECIES_DONPHAN] =
	{
		.size = 0x85,
		.y_offset = 0x9,
	},
	[SPECIES_PORYGON2] =
	{
		.size = 0x76,
		.y_offset = 0xb,
	},
	[SPECIES_STANTLER] =
	{
		.size = 0x78,
		.y_offset = 0x1,
	},
	[SPECIES_SMEARGLE] =
	{
		.size = 0x76,
		.y_offset = 0x9,
	},
	[SPECIES_TYROGUE] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_HITMONTOP] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_SMOOCHUM] =
	{
		.size = 0x56,
		.y_offset = 0x9,
	},
	[SPECIES_ELEKID] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_MAGBY] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_MILTANK] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_BLISSEY] =
	{
		.size = 0x85,
		.y_offset = 0x10,
	},
	[SPECIES_RAIKOU] =
	{
		.size = 0x86,
		.y_offset = 0x6,
	},
	[SPECIES_ENTEI] =
	{
		.size = 0x87,
		.y_offset = 0xb,
	},
	[SPECIES_SUICUNE] =
	{
		.size = 0x88,
		.y_offset = 0x3,
	},
	[SPECIES_LARVITAR] =
	{
		.size = 0x66,
		.y_offset = 0x6,
	},
	[SPECIES_PUPITAR] =
	{
		.size = 0x67,
		.y_offset = 0x8,
	},
	[SPECIES_TYRANITAR] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_LUGIA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_HO_OH] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_CELEBI] =
	{
		.size = 0x66,
		.y_offset = 0x7,
	},
	[252] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[253] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[254] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[255] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[256] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[257] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[258] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[259] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[260] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[261] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[262] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[263] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[264] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[265] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[266] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[267] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[268] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[269] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[270] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[271] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[272] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[273] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[274] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[275] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[276] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_TREECKO] =
	{
		.size = 0x87,
		.y_offset = 0x9,
	},
	[SPECIES_GROVYLE] =
	{
		.size = 0x86,
		.y_offset = 0x6,
	},
	[SPECIES_SCEPTILE] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[SPECIES_TORCHIC] =
	{
		.size = 0x67,
		.y_offset = 0xa,
	},
	[SPECIES_COMBUSKEN] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_BLAZIKEN] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_MUDKIP] =
	{
		.size = 0x77,
		.y_offset = 0xa,
	},
	[SPECIES_MARSHTOMP] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_SWAMPERT] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_POOCHYENA] =
	{
		.size = 0x76,
		.y_offset = 0x0,
	},
	[SPECIES_MIGHTYENA] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_ZIGZAGOON] =
	{
		.size = 0x76,
		.y_offset = 0x6,
	},
	[SPECIES_LINOONE] =
	{
		.size = 0x85,
		.y_offset = 0x6,
	},
	[SPECIES_WURMPLE] =
	{
		.size = 0x76,
		.y_offset = 0x6,
	},
	[SPECIES_SILCOON] =
	{
		.size = 0x83,
		.y_offset = 0xd,
	},
	[SPECIES_BEAUTIFLY] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CASCOON] =
	{
		.size = 0x73,
		.y_offset = 0x6,
	},
	[SPECIES_DUSTOX] =
	{
		.size = 0x83,
		.y_offset = 0x0,
	},
	[SPECIES_LOTAD] =
	{
		.size = 0x75,
		.y_offset = 0xc,
	},
	[SPECIES_LOMBRE] =
	{
		.size = 0x86,
		.y_offset = 0x6,
	},
	[SPECIES_LUDICOLO] =
	{
		.size = 0x86,
		.y_offset = 0x6,
	},
	[SPECIES_SEEDOT] =
	{
		.size = 0x86,
		.y_offset = 0x6,
	},
	[SPECIES_NUZLEAF] =
	{
		.size = 0x76,
		.y_offset = 0x6,
	},
	[SPECIES_SHIFTRY] =
	{
		.size = 0x86,
		.y_offset = 0x9,
	},
	[SPECIES_NINCADA] =
	{
		.size = 0x83,
		.y_offset = 0x13,
	},
	[SPECIES_NINJASK] =
	{
		.size = 0x86,
		.y_offset = 0xd,
	},
	[SPECIES_SHEDINJA] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_TAILLOW] =
	{
		.size = 0x64,
		.y_offset = 0x10,
	},
	[SPECIES_SWELLOW] =
	{
		.size = 0x86,
		.y_offset = 0x6,
	},
	[SPECIES_SHROOMISH] =
	{
		.size = 0x85,
		.y_offset = 0x4,
	},
	[SPECIES_BRELOOM] =
	{
		.size = 0x87,
		.y_offset = 0x3,
	},
	[SPECIES_SPINDA] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_WINGULL] =
	{
		.size = 0x85,
		.y_offset = 0xd,
	},
	[SPECIES_PELIPPER] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_SURSKIT] =
	{
		.size = 0x86,
		.y_offset = 0x9,
	},
	[SPECIES_MASQUERAIN] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_WAILMER] =
	{
		.size = 0x83,
		.y_offset = 0x8,
	},
	[SPECIES_WAILORD] =
	{
		.size = 0x83,
		.y_offset = 0xe,
	},
	[SPECIES_SKITTY] =
	{
		.size = 0x86,
		.y_offset = 0x6,
	},
	[SPECIES_DELCATTY] =
	{
		.size = 0x86,
		.y_offset = 0x0,
	},
	[SPECIES_KECLEON] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_BALTOY] =
	{
		.size = 0x86,
		.y_offset = 0x8,
	},
	[SPECIES_CLAYDOL] =
	{
		.size = 0x87,
		.y_offset = 0x7,
	},
	[SPECIES_NOSEPASS] =
	{
		.size = 0x85,
		.y_offset = 0xa,
	},
	[SPECIES_TORKOAL] =
	{
		.size = 0x86,
		.y_offset = 0x8,
	},
	[SPECIES_SABLEYE] =
	{
		.size = 0x76,
		.y_offset = 0xd,
	},
	[SPECIES_BARBOACH] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_WHISCASH] =
	{
		.size = 0x86,
		.y_offset = 0xb,
	},
	[SPECIES_LUVDISC] =
	{
		.size = 0x46,
		.y_offset = 0xa,
	},
	[SPECIES_CORPHISH] =
	{
		.size = 0x77,
		.y_offset = 0x8,
	},
	[SPECIES_CRAWDAUNT] =
	{
		.size = 0x87,
		.y_offset = 0x7,
	},
	[SPECIES_FEEBAS] =
	{
		.size = 0x67,
		.y_offset = 0x6,
	},
	[SPECIES_MILOTIC] =
	{
		.size = 0x68,
		.y_offset = 0x0,
	},
	[SPECIES_CARVANHA] =
	{
		.size = 0x87,
		.y_offset = 0xa,
	},
	[SPECIES_SHARPEDO] =
	{
		.size = 0x88,
		.y_offset = 0x3,
	},
	[SPECIES_TRAPINCH] =
	{
		.size = 0x75,
		.y_offset = 0xa,
	},
	[SPECIES_VIBRAVA] =
	{
		.size = 0x74,
		.y_offset = 0xc,
	},
	[SPECIES_FLYGON] =
	{
		.size = 0x88,
		.y_offset = 0x3,
	},
	[SPECIES_MAKUHITA] =
	{
		.size = 0x76,
		.y_offset = 0x6,
	},
	[SPECIES_HARIYAMA] =
	{
		.size = 0x87,
		.y_offset = 0x4,
	},
	[SPECIES_ELECTRIKE] =
	{
		.size = 0x84,
		.y_offset = 0xd,
	},
	[SPECIES_MANECTRIC] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_NUMEL] =
	{
		.size = 0x86,
		.y_offset = 0x6,
	},
	[SPECIES_CAMERUPT] =
	{
		.size = 0x84,
		.y_offset = 0xd,
	},
	[SPECIES_SPHEAL] =
	{
		.size = 0x64,
		.y_offset = 0xc,
	},
	[SPECIES_SEALEO] =
	{
		.size = 0x86,
		.y_offset = 0xb,
	},
	[SPECIES_WALREIN] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_CACNEA] =
	{
		.size = 0x85,
		.y_offset = 0xc,
	},
	[SPECIES_CACTURNE] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_SNORUNT] =
	{
		.size = 0x76,
		.y_offset = 0xa,
	},
	[SPECIES_GLALIE] =
	{
		.size = 0x85,
		.y_offset = 0xa,
	},
	[SPECIES_LUNATONE] =
	{
		.size = 0x87,
		.y_offset = 0x8,
	},
	[SPECIES_SOLROCK] =
	{
		.size = 0x87,
		.y_offset = 0x2,
	},
	[SPECIES_AZURILL] =
	{
		.size = 0x86,
		.y_offset = 0x6,
	},
	[SPECIES_SPOINK] =
	{
		.size = 0x56,
		.y_offset = 0x4,
	},
	[SPECIES_GRUMPIG] =
	{
		.size = 0x87,
		.y_offset = 0x2,
	},
	[SPECIES_PLUSLE] =
	{
		.size = 0x76,
		.y_offset = 0x3,
	},
	[SPECIES_MINUN] =
	{
		.size = 0x76,
		.y_offset = 0x4,
	},
	[SPECIES_MAWILE] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_MEDITITE] =
	{
		.size = 0x76,
		.y_offset = 0x9,
	},
	[SPECIES_MEDICHAM] =
	{
		.size = 0x68,
		.y_offset = 0x0,
	},
	[SPECIES_SWABLU] =
	{
		.size = 0x86,
		.y_offset = 0xb,
	},
	[SPECIES_ALTARIA] =
	{
		.size = 0x87,
		.y_offset = 0xa,
	},
	[SPECIES_WYNAUT] =
	{
		.size = 0x77,
		.y_offset = 0xb,
	},
	[SPECIES_DUSKULL] =
	{
		.size = 0x66,
		.y_offset = 0x7,
	},
	[SPECIES_DUSCLOPS] =
	{
		.size = 0x86,
		.y_offset = 0x2,
	},
	[SPECIES_ROSELIA] =
	{
		.size = 0x86,
		.y_offset = 0x7,
	},
	[SPECIES_SLAKOTH] =
	{
		.size = 0x85,
		.y_offset = 0xd,
	},
	[SPECIES_VIGOROTH] =
	{
		.size = 0x86,
		.y_offset = 0x0,
	},
	[SPECIES_SLAKING] =
	{
		.size = 0x86,
		.y_offset = 0x6,
	},
	[SPECIES_GULPIN] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_SWALOT] =
	{
		.size = 0x77,
		.y_offset = 0x2,
	},
	[SPECIES_TROPIUS] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_WHISMUR] =
	{
		.size = 0x85,
		.y_offset = 0xc,
	},
	[SPECIES_LOUDRED] =
	{
		.size = 0x86,
		.y_offset = 0x8,
	},
	[SPECIES_EXPLOUD] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CLAMPERL] =
	{
		.size = 0x85,
		.y_offset = 0xc,
	},
	[SPECIES_HUNTAIL] =
	{
		.size = 0x68,
		.y_offset = 0x4,
	},
	[SPECIES_GOREBYSS] =
	{
		.size = 0x77,
		.y_offset = 0x9,
	},
	[SPECIES_ABSOL] =
	{
		.size = 0x78,
		.y_offset = 0x3,
	},
	[SPECIES_SHUPPET] =
	{
		.size = 0x77,
		.y_offset = 0x5,
	},
	[SPECIES_BANETTE] =
	{
		.size = 0x65,
		.y_offset = 0x5,
	},
	[SPECIES_SEVIPER] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_ZANGOOSE] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[SPECIES_RELICANTH] =
	{
		.size = 0x86,
		.y_offset = 0xc,
	},
	[SPECIES_ARON] =
	{
		.size = 0x54,
		.y_offset = 0x8,
	},
	[SPECIES_LAIRON] =
	{
		.size = 0x84,
		.y_offset = 0xf,
	},
	[SPECIES_AGGRON] =
	{
		.size = 0x87,
		.y_offset = 0x5,
	},
	[SPECIES_CASTFORM] =
	{
		.size = 0x45,
		.y_offset = 0x0,
	},
	[SPECIES_VOLBEAT] =
	{
		.size = 0x76,
		.y_offset = 0x3,
	},
	[SPECIES_ILLUMISE] =
	{
		.size = 0x67,
		.y_offset = 0x8,
	},
	[SPECIES_LILEEP] =
	{
		.size = 0x86,
		.y_offset = 0x8,
	},
	[SPECIES_CRADILY] =
	{
		.size = 0x77,
		.y_offset = 0x0,
	},
	[SPECIES_ANORITH] =
	{
		.size = 0x83,
		.y_offset = 0x13,
	},
	[SPECIES_ARMALDO] =
	{
		.size = 0x77,
		.y_offset = 0x0,
	},
	[SPECIES_RALTS] =
	{
		.size = 0x45,
		.y_offset = 0xd,
	},
	[SPECIES_KIRLIA] =
	{
		.size = 0x57,
		.y_offset = 0x6,
	},
	[SPECIES_GARDEVOIR] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_BAGON] =
	{
		.size = 0x66,
		.y_offset = 0x6,
	},
	[SPECIES_SHELGON] =
	{
		.size = 0x85,
		.y_offset = 0xc,
	},
	[SPECIES_SALAMENCE] =
	{
		.size = 0x77,
		.y_offset = 0x4,
	},
	[SPECIES_BELDUM] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_METANG] =
	{
		.size = 0x84,
		.y_offset = 0xd,
	},
	[SPECIES_METAGROSS] =
	{
		.size = 0x83,
		.y_offset = 0x6,
	},
	[SPECIES_REGIROCK] =
	{
		.size = 0x86,
		.y_offset = 0xa,
	},
	[SPECIES_REGICE] =
	{
		.size = 0x85,
		.y_offset = 0xb,
	},
	[SPECIES_REGISTEEL] =
	{
		.size = 0x85,
		.y_offset = 0xb,
	},
	[SPECIES_KYOGRE] =
	{
		.size = 0x84,
		.y_offset = 0x12,
	},
	[SPECIES_GROUDON] =
	{
		.size = 0x87,
		.y_offset = 0x8,
	},
	[SPECIES_RAYQUAZA] =
	{
		.size = 0x78,
		.y_offset = 0x0,
	},
	[SPECIES_LATIAS] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_LATIOS] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_JIRACHI] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_DEOXYS] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_CHIMECHO] =
	{
		.size = 0x47,
		.y_offset = 0x9,
	},
	[SPECIES_EGG] =
	{
		.size = 0x36,
		.y_offset = 0x0,
	},
	[SPECIES_UNOWN_B] =
	{
		.size = 0x56,
		.y_offset = 0x9,
	},
	[SPECIES_UNOWN_C] =
	{
		.size = 0x67,
		.y_offset = 0x6,
	},
	[SPECIES_UNOWN_D] =
	{
		.size = 0x56,
		.y_offset = 0x8,
	},
	[SPECIES_UNOWN_E] =
	{
		.size = 0x56,
		.y_offset = 0xa,
	},
	[SPECIES_UNOWN_F] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_UNOWN_G] =
	{
		.size = 0x57,
		.y_offset = 0x5,
	},
	[SPECIES_UNOWN_H] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_UNOWN_I] =
	{
		.size = 0x37,
		.y_offset = 0x7,
	},
	[SPECIES_UNOWN_J] =
	{
		.size = 0x46,
		.y_offset = 0x9,
	},
	[SPECIES_UNOWN_K] =
	{
		.size = 0x57,
		.y_offset = 0x7,
	},
	[SPECIES_UNOWN_L] =
	{
		.size = 0x46,
		.y_offset = 0xa,
	},
	[SPECIES_UNOWN_M] =
	{
		.size = 0x65,
		.y_offset = 0xd,
	},
	[SPECIES_UNOWN_N] =
	{
		.size = 0x65,
		.y_offset = 0xd,
	},
	[SPECIES_UNOWN_O] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_UNOWN_P] =
	{
		.size = 0x46,
		.y_offset = 0xa,
	},
	[SPECIES_UNOWN_Q] =
	{
		.size = 0x55,
		.y_offset = 0xf,
	},
	[SPECIES_UNOWN_R] =
	{
		.size = 0x45,
		.y_offset = 0xc,
	},
	[SPECIES_UNOWN_S] =
	{
		.size = 0x57,
		.y_offset = 0x4,
	},
	[SPECIES_UNOWN_T] =
	{
		.size = 0x45,
		.y_offset = 0xd,
	},
	[SPECIES_UNOWN_U] =
	{
		.size = 0x65,
		.y_offset = 0xd,
	},
	[SPECIES_UNOWN_V] =
	{
		.size = 0x56,
		.y_offset = 0xb,
	},
	[SPECIES_UNOWN_W] =
	{
		.size = 0x55,
		.y_offset = 0xd,
	},
	[SPECIES_UNOWN_X] =
	{
		.size = 0x55,
		.y_offset = 0xf,
	},
	[SPECIES_UNOWN_Y] =
	{
		.size = 0x46,
		.y_offset = 0xa,
	},
	[SPECIES_UNOWN_Z] =
	{
		.size = 0x46,
		.y_offset = 0xa,
	},
	[SPECIES_UNOWN_EXCLAMATION] =
	{
		.size = 0x37,
		.y_offset = 0x6,
	},
	[SPECIES_UNOWN_QUESTION] =
	{
		.size = 0x47,
		.y_offset = 0x6,
	},
	[SPECIES_TURTWIG] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_GROTLE] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_TORTERRA] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_CHIMCHAR] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_MONFERNO] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_INFERNAPE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PIPLUP] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_PRINPLUP] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_EMPOLEON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_STARLY] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_STARAVIA] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_STARAPTOR] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_BIDOOF] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_BIBAREL] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_KRICKETOT] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_KRICKETUNE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SHINX] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_LUXIO] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LUXRAY] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BUDEW] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_ROSERADE] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_CRANIDOS] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_RAMPARDOS] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_SHIELDON] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_BASTIODON] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_BURMY] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_WORMADAM] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_MOTHIM] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_COMBEE] =
	{
		.size = 0x0,
		.y_offset = 0x16,
	},
	[SPECIES_VESPIQUEN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PACHIRISU] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_BUIZEL] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_FLOATZEL] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_CHERUBI] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_CHERRIM] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_SHELLOS] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_GASTRODON] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_AMBIPOM] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_DRIFLOON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_DRIFBLIM] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_BUNEARY] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LOPUNNY] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MISMAGIUS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_HONCHKROW] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_GLAMEOW] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_PURUGLY] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CHINGLING] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_STUNKY] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_SKUNTANK] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BRONZOR] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_BRONZONG] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_BONSLY] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_MIME_JR] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_HAPPINY] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_CHATOT] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_SPIRITOMB] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_GIBLE] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_GABITE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GARCHOMP] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MUNCHLAX] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_RIOLU] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_LUCARIO] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_HIPPOPOTAS] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_HIPPOWDON] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_SKORUPI] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_DRAPION] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_CROAGUNK] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_TOXICROAK] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_CARNIVINE] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_FINNEON] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_LUMINEON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MANTYKE] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_SNOVER] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_ABOMASNOW] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_WEAVILE] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_MAGNEZONE] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_LICKILICKY] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_RHYPERIOR] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TANGROWTH] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_ELECTIVIRE] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_MAGMORTAR] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_TOGEKISS] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_YANMEGA] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_LEAFEON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GLACEON] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_GLISCOR] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_MAMOSWINE] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_PORYGON_Z] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_GALLADE] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_PROBOPASS] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_DUSKNOIR] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_FROSLASS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ROTOM] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_UXIE] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_MESPRIT] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_AZELF] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_DIALGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PALKIA] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_HEATRAN] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_REGIGIGAS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GIRATINA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CRESSELIA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PHIONE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_MANAPHY] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_DARKRAI] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SHAYMIN] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_ARCEUS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VICTINI] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_SNIVY] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_SERVINE] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_SERPERIOR] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TEPIG] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_PIGNITE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_EMBOAR] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_OSHAWOTT] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_DEWOTT] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_SAMUROTT] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_PATRAT] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_WATCHOG] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_LILLIPUP] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_HERDIER] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_STOUTLAND] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_PURRLOIN] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_LIEPARD] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PANSAGE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_SIMISAGE] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_PANSEAR] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_SIMISEAR] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_PANPOUR] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_SIMIPOUR] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_MUNNA] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_MUSHARNA] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_PIDOVE] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_TRANQUILL] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_UNFEZANT] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_BLITZLE] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_ZEBSTRIKA] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_ROGGENROLA] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_BOLDORE] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_GIGALITH] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_WOOBAT] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_SWOOBAT] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_DRILBUR] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_EXCADRILL] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_AUDINO] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_TIMBURR] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_GURDURR] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_CONKELDURR] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_TYMPOLE] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_PALPITOAD] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_SEISMITOAD] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_THROH] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_SAWK] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_SEWADDLE] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_SWADLOON] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_LEAVANNY] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VENIPEDE] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_WHIRLIPEDE] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_SCOLIPEDE] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_COTTONEE] =
	{
		.size = 0x0,
		.y_offset = 0x12,
	},
	[SPECIES_WHIMSICOTT] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PETILIL] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_LILLIGANT] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_BASCULIN_RED] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_SANDILE] =
	{
		.size = 0x0,
		.y_offset = 0x12,
	},
	[SPECIES_KROKOROK] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_KROOKODILE] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_DARUMAKA] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_DARMANITAN] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_MARACTUS] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_DWEBBLE] =
	{
		.size = 0x0,
		.y_offset = 0x15,
	},
	[SPECIES_CRUSTLE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_SCRAGGY] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_SCRAFTY] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_SIGILYPH] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_YAMASK] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_COFAGRIGUS] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_TIRTOUGA] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_CARRACOSTA] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_ARCHEN] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_ARCHEOPS] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_TRUBBISH] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_GARBODOR] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_ZORUA] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_ZOROARK] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_MINCCINO] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_CINCCINO] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_GOTHITA] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_GOTHORITA] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_GOTHITELLE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SOLOSIS] =
	{
		.size = 0x0,
		.y_offset = 0x14,
	},
	[SPECIES_DUOSION] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_REUNICLUS] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_DUCKLETT] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_SWANNA] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_VANILLITE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_VANILLISH] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_VANILLUXE] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_DEERLING] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_SAWSBUCK] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_EMOLGA] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_KARRABLAST] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_ESCAVALIER] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_FOONGUS] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_AMOONGUSS] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_FRILLISH] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_JELLICENT] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_ALOMOMOLA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_JOLTIK] =
	{
		.size = 0x0,
		.y_offset = 0x16,
	},
	[SPECIES_GALVANTULA] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_FERROSEED] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_FERROTHORN] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_KLINK] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_KLANG] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_KLINKLANG] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_TYNAMO] =
	{
		.size = 0x0,
		.y_offset = 0x16,
	},
	[SPECIES_EELEKTRIK] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_EELEKTROSS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ELGYEM] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_BEHEEYEM] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LITWICK] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_LAMPENT] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_CHANDELURE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_AXEW] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_FRAXURE] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_HAXORUS] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_CUBCHOO] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_BEARTIC] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CRYOGONAL] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_SHELMET] =
	{
		.size = 0x0,
		.y_offset = 0x13,
	},
	[SPECIES_ACCELGOR] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_STUNFISK] =
	{
		.size = 0x0,
		.y_offset = 0x18,
	},
	[SPECIES_MIENFOO] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_MIENSHAO] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_DRUDDIGON] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_GOLETT] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_GOLURK] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_PAWNIARD] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_BISHARP] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_BOUFFALANT] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_RUFFLET] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_BRAVIARY] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_VULLABY] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_MANDIBUZZ] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_HEATMOR] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_DURANT] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_DEINO] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_ZWEILOUS] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_HYDREIGON] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_LARVESTA] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_VOLCARONA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_COBALION] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_TERRAKION] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_VIRIZION] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_TORNADUS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_THUNDURUS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_RESHIRAM] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_ZEKROM] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_LANDORUS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_KYUREM] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_KELDEO] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MELOETTA] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_GENESECT] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_UNFEZANT_F] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_FRILLISH_F] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_JELLICENT_F] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_SHADOW_WARRIOR] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BURMY_SANDY] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_BURMY_TRASH] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_WORMADAM_SANDY] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_WORMADAM_TRASH] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_SHELLOS_EAST] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_GASTRODON_EAST] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_ROTOM_HEAT] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_ROTOM_WASH] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_ROTOM_FROST] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_ROTOM_FAN] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_ROTOM_MOW] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_GIRATINA_ORIGIN] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_SHAYMIN_SKY] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_ARCEUS_FIGHT] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_FLYING] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_POISON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_GROUND] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_ROCK] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_BUG] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_GHOST] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_STEEL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_FIRE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_WATER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_GRASS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_ELECTRIC] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_PSYCHIC] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_ICE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_DRAGON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_DARK] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BASCULIN_BLUE] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_DARMANITANZEN] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_DEERLING_SUMMER] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_DEERLING_AUTUMN] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_DEERLING_WINTER] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_SAWSBUCK_SUMMER] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_SAWSBUCK_AUTUMN] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_SAWSBUCK_WINTER] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_HIPPOPOTAS_F] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_HIPPOWDON_F] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_MELOETTA_PIROUETTE] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_GENESECT_SHOCK] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_GENESECT_BURN] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_GENESECT_CHILL] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_GENESECT_DOUSE] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_CHERRIM_SUN] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_KYUREM_BLACK] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_KYUREM_WHITE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TORNADUS_THERIAN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_THUNDURUS_THERIAN] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_LANDORUS_THERIAN] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_KELDEO_RESOLUTE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CHESPIN] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_QUILLADIN] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_CHESNAUGHT] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_FENNEKIN] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_BRAIXEN] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_DELPHOX] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_FROAKIE] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_FROGADIER] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_GRENINJA] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_BUNNELBY] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_DIGGERSBY] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_FLETCHLING] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_FLETCHINDER] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_TALONFLAME] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_SCATTERBUG] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_SPEWPA] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_VIVILLON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LITLEO] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PYROAR] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_FLABEBE] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_FLOETTE] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_FLORGES] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_SKIDDO] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_GOGOAT] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PANCHAM] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PANGORO] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_FURFROU] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ESPURR] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_MEOWSTIC] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_HONEDGE] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_DOUBLADE] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_AEGISLASH] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_SPRITZEE] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_AROMATISSE] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_SWIRLIX] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_SLURPUFF] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_INKAY] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_MALAMAR] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_BINACLE] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_BARBARACLE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SKRELP] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_DRAGALGE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CLAUNCHER] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_CLAWITZER] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_HELIOPTILE] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_HELIOLISK] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_TYRUNT] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_TYRANTRUM] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_AMAURA] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_AURORUS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SYLVEON] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_HAWLUCHA] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_DEDENNE] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_CARBINK] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_GOOMY] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_SLIGGOO] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GOODRA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_KLEFKI] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_PHANTUMP] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_TREVENANT] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_PUMPKABOO] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_GOURGEIST] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_BERGMITE] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_AVALUGG] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_NOIBAT] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_NOIVERN] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_XERNEAS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_YVELTAL] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_ZYGARDE] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_DIANCIE] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_HOOPA] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_HOOPA_UNBOUND] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VOLCANION] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_PYROAR_FEMALE] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_MEOWSTIC_FEMALE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_AEGISLASH_BLADE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_ARCEUS_FAIRY] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ZYGARDE_CELL] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_ZYGARDE_CORE] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_ZYGARDE_10] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_ZYGARDE_COMPLETE] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_ASHGRENINJA] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_FLABEBE_BLUE] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_FLABEBE_ORANGE] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_FLABEBE_YELLOW] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_FLABEBE_WHITE] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_FLOETTE_BLUE] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_FLOETTE_ORANGE] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_FLOETTE_YELLOW] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_FLOETTE_WHITE] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_FLOETTE_ETERNAL] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_FLORGES_BLUE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_FLORGES_ORANGE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_FLORGES_YELLOW] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_FLORGES_WHITE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PUMPKABOO_XL] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_PUMPKABOO_L] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_PUMPKABOO_M] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_GOURGEIST_XL] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_GOURGEIST_L] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_GOURGEIST_M] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_FURFROU_HEART] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FURFROU_DIAMOND] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FURFROU_STAR] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FURFROU_PHAROAH] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FURFROU_KABUKI] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FURFROU_LA_REINE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FURFROU_MATRON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FURFROU_DANDY] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FURFROU_DEBUTANTE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_FANCY] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VENUSAUR_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_CHARIZARD_MEGA_X] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_CHARIZARD_MEGA_Y] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_BLASTOISE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_BEEDRILL_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_PIDGEOT_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_ALAKAZAM_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SLOWBRO_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_GENGAR_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_KANGASKHAN_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_PINSIR_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_GYARADOS_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_AERODACTYL_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_MEWTWO_MEGA_X] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_MEWTWO_MEGA_Y] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_AMPHAROS_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_STEELIX_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SCIZOR_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_HERACROSS_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_HOUNDOOM_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TYRANITAR_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SCEPTILE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_BLAZIKEN_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SWAMPERT_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_GARDEVOIR_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_SABLEYE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_MAWILE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_AGGRON_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_MEDICHAM_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MANECTRIC_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SHARPEDO_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_CAMERUPT_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_ALTARIA_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_BANETTE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ABSOL_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GLALIE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_SALAMENCE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_METAGROSS_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_LATIAS_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_LATIOS_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_GROUDON_PRIMAL] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_KYOGRE_PRIMAL] =
	{
		.size = 0x0,
		.y_offset = 0x13,
	},
	[SPECIES_RAYQUAZA_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LOPUNNY_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_GARCHOMP_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LUCARIO_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_ABOMASNOW_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GALLADE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_AUDINO_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_DIANCIE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_DIALGA_ORIGIN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PALKIA_ORIGIN] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_VIVILLON_ARCHIPELAGO] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_CONTINENTAL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_ELEGANT] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_GARDEN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_HIGH_PLAINS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_ICY_SNOW] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_JUNGLE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_MARINE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_MODERN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_MONSOON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_OCEAN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_POKEBALL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_POLAR] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_RIVER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_SANDSTORM] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_SAVANNA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_SUN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_TUNDRA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ROWLET] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_DARTRIX] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_DECIDUEYE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LITTEN] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_TORRACAT] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_INCINEROAR] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_POPPLIO] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_BRIONNE] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_PRIMARINA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PIKIPEK] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_TRUMBEAK] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_TOUCANNON] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_YUNGOOS] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_GUMSHOOS] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_GRUBBIN] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_CHARJABUG] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_VIKAVOLT] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_CRABRAWLER] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_CRABOMINABLE] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_ORICORIO] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CUTIEFLY] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_RIBOMBEE] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_ROCKRUFF] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_LYCANROC] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_WISHIWASHI] =
	{
		.size = 0x0,
		.y_offset = 0x12,
	},
	[SPECIES_MAREANIE] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_TOXAPEX] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_MUDBRAY] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_MUDSDALE] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_DEWPIDER] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_ARAQUANID] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_FOMANTIS] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_LURANTIS] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_MORELULL] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_SHIINOTIC] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_SALANDIT] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_SALAZZLE] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_STUFFUL] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_BEWEAR] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_BOUNSWEET] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_STEENEE] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_TSAREENA] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_COMFEY] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_ORANGURU] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_PASSIMIAN] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_WIMPOD] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_GOLISOPOD] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_SANDYGAST] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_PALOSSAND] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_PYUKUMUKU] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_TYPE_NULL] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_SILVALLY] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MINIOR_SHIELD] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_KOMALA] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_TURTONATOR] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_TOGEDEMARU] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_MIMIKYU] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_BRUXISH] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_DRAMPA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_DHELMISE] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_JANGMO_O] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_HAKAMO_O] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_KOMMO_O] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_TAPU_KOKO] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_TAPU_LELE] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_TAPU_BULU] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_TAPU_FINI] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_COSMOG] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_COSMOEM] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_SOLGALEO] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_LUNALA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_NIHILEGO] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_BUZZWOLE] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_PHEROMOSA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_XURKITREE] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_CELESTEELA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_KARTANA] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_GUZZLORD] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_NECROZMA] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_MAGEARNA] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_MARSHADOW] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_RATTATA_A] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_RATICATE_A] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_RAICHU_A] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_SANDSHREW_A] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_SANDSLASH_A] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_VULPIX_A] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_NINETALES_A] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_DIGLETT_A] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_DUGTRIO_A] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_MEOWTH_A] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_PERSIAN_A] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_GEODUDE_A] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_GRAVELER_A] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_GOLEM_A] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_GRIMER_A] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_MUK_A] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_EXEGGCUTE_A] =
	{
		.size = 0x0,
		.y_offset = 0x12,
	},
	[SPECIES_EXEGGUTOR_A] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CUBONE_A] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_MAROWAK_A] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_DEOXYS_ATTACK] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_DEOXYS_DEFENSE] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_DEOXYS_SPEED] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ORICORIO_Y] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ORICORIO_P] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ORICORIO_S] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LYCANROC_N] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_WISHIWASHI_S] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_SILVALLY_FIGHT] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_FLYING] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_POISON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_GROUND] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_ROCK] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_BUG] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_GHOST] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_STEEL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_FIRE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_WATER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_GRASS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_ELECTRIC] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_PSYCHIC] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_ICE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_DRAGON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_DARK] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_FAIRY] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MINIOR_RED] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_MINIOR_BLUE] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_MINIOR_ORANGE] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_MINIOR_YELLOW] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_MINIOR_INDIGO] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_MINIOR_GREEN] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_MINIOR_VIOLET] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_MIMIKYU_BUSTED] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_MAGEARNA_P] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_POIPOLE] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_NAGANADEL] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_STAKATAKA] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_BLACEPHALON] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_ZERAORA] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_NECROZMA_DUSK_MANE] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_NECROZMA_DAWN_WINGS] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_NECROZMA_ULTRA] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_LYCANROC_DUSK] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_MELTAN] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_MELMETAL] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_PIKACHU_SURFING] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_PIKACHU_FLYING] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PIKACHU_COSPLAY] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_PIKACHU_LIBRE] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_PIKACHU_POP_STAR] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_PIKACHU_ROCK_STAR] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_PIKACHU_BELLE] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_PIKACHU_PHD] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_PIKACHU_CAP_ORIGINAL] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_PIKACHU_CAP_HOENN] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_PIKACHU_CAP_SINNOH] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_PIKACHU_CAP_UNOVA] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_PIKACHU_CAP_KALOS] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_PIKACHU_CAP_ALOLA] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_PIKACHU_CAP_PARTNER] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_PICHU_SPIKY] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_XERNEAS_NATURAL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GROOKEY] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_THWACKEY] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_RILLABOOM] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_SCORBUNNY] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_RABOOT] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_CINDERACE] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_SOBBLE] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_DRIZZILE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_INTELEON] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_SKWOVET] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_GREEDENT] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_ROOKIDEE] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_CORVISQUIRE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_CORVIKNIGHT] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_BLIPBUG] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_DOTTLER] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_ORBEETLE] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_NICKIT] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_THIEVUL] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_GOSSIFLEUR] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_ELDEGOSS] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_WOOLOO] =
	{
		.size = 0x0,
		.y_offset = 0x12,
	},
	[SPECIES_DUBWOOL] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_CHEWTLE] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_DREDNAW] =
	{
		.size = 0x0,
		.y_offset = 0x12,
	},
	[SPECIES_YAMPER] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_BOLTUND] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_ROLYCOLY] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_CARKOL] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_COALOSSAL] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_APPLIN] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_FLAPPLE] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_APPLETUN] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_SILICOBRA] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_SANDACONDA] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_CRAMORANT] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_ARROKUDA] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_BARRASKEWDA] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_TOXEL] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_TOXTRICITY] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SIZZLIPEDE] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_CENTISKORCH] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_CLOBBOPUS] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_GRAPPLOCT] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_SINISTEA] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_POLTEAGEIST] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_HATENNA] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_HATTREM] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_HATTERENE] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_IMPIDIMP] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_MORGREM] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_GRIMMSNARL] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_OBSTAGOON] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_PERRSERKER] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_CURSOLA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_SIRFETCHD] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_MR_RIME] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_RUNERIGUS] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_MILCERY] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_ALCREMIE_STRAWBERRY] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_FALINKS] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_PINCURCHIN] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_SNOM] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_FROSMOTH] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_STONJOURNER] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_EISCUE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_INDEEDEE] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_MORPEKO] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_CUFANT] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_COPPERAJAH] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_DRACOZOLT] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_ARCTOZOLT] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_DRACOVISH] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_ARCTOVISH] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_DURALUDON] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_DREEPY] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_DRAKLOAK] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_DRAGAPULT] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_ZACIAN] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_ZAMAZENTA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_ETERNATUS] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_KUBFU] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_URSHIFU_SINGLE] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_ZARUDE] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_REGIELEKI] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_REGIDRAGO] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_GLASTRIER] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_SPECTRIER] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_CALYREX] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_CRAMORANT_GULPING] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_CRAMORANT_GORGING] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_TOXTRICITY_LOW_KEY] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SINISTEA_CHIPPED] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_POLTEAGEIST_CHIPPED] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_ALCREMIE_BERRY] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_ALCREMIE_CLOVER] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_ALCREMIE_FLOWER] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_ALCREMIE_LOVE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_ALCREMIE_RIBBON] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_ALCREMIE_STAR] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_EISCUE_NOICE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_INDEEDEE_FEMALE] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_MORPEKO_HANGRY] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_ZACIAN_CROWNED] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_ZAMAZENTA_CROWNED] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_ETERNATUS_ETERNAMAX] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_URSHIFU_RAPID] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_ZARUDE_DADA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_CALYREX_ICE_RIDER] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_CALYREX_SHADOW_RIDER] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_MEOWTH_G] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_PONYTA_G] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_RAPIDASH_G] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_SLOWPOKE_G] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_SLOWBRO_G] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_FARFETCHD_G] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_KOFFING_G] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_WEEZING_G] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MR_MIME_G] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_ARTICUNO_G] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_ZAPDOS_G] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_MOLTRES_G] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_SLOWKING_G] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_CORSOLA_G] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_ZIGZAGOON_G] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_LINOONE_G] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_MIME_JR_G] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_DARUMAKA_G] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_DARMANITAN_G] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_DARMANITAN_G_ZEN] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_YAMASK_G] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_STUNFISK_G] =
	{
		.size = 0x0,
		.y_offset = 0x17,
	},
	[SPECIES_VENUSAUR_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_CHARIZARD_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_BLASTOISE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_BUTTERFREE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_PIKACHU_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MEOWTH_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_MACHAMP_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_GENGAR_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_KINGLER_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_LAPRAS_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_EEVEE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_SNORLAX_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_GARBODOR_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_MELMETAL_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_RILLABOOM_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_CINDERACE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_INTELEON_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_CORVIKNIGHT_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_ORBEETLE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_DREDNAW_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_COALOSSAL_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_FLAPPLE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_APPLETUN_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_SANDACONDA_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_TOXTRICITY_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TOXTRICITY_LOW_KEY_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CENTISKORCH_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_HATTERENE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_GRIMMSNARL_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_ALCREMIE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_COPPERAJAH_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_DURALUDON_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_URSHIFU_SINGLE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_URSHIFU_RAPID_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_MISSINGNO] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_WYRDEER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VOLTORB_H] =
	{
		.size = 0x0,
		.y_offset = 0xA,
	},
	[SPECIES_ELECTRODE_H] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_URSALUNA] =
	{
		.size = 0x0,
		.y_offset = 0xE,
	},
	[SPECIES_BRAVIARY_H] =
	{
		.size = 0x0,
		.y_offset = 0xA,
	},
	[SPECIES_QWILFISH_H] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_OVERQWIL] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_DECIDUEYE_H] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SAMUROTT_H] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TYPHLOSION_H] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SNEASEL_H] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_SNEASLER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ZORUA_H] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_ZOROARK_H] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_GROWLITHE_H] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_ARCANINE_H] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_BASCULIN_H] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_BASCULEGION] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_KLEAVOR] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LUGIA_S] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_AVALUGG_H] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_LILLIGANT_H] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_SLIGGOO_H] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GOODRA_H] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ENAMORUS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ENAMORUS_T] =
	{
		.size = 0x0,
		.y_offset = 0xE,
	},
	[SPECIES_BASCULEGION_F] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_S1] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S2] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S3] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S4] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S5] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S6] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S7] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S8] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S9] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S10] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S11] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S12] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S13] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S14] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S15] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S16] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S17] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S18] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S19] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S20] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S21] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S22] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S23] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S24] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S25] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S26] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S27] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S28] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S29] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S30] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S31] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S32] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S33] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S34] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S35] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S36] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S37] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S38] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S39] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S40] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S41] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S42] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S43] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S44] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S45] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S46] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S47] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S48] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S49] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S50] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S51] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S52] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S53] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S54] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S55] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S56] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S57] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S58] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S59] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S60] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S61] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S62] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S63] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S64] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S65] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S66] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S67] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S68] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S69] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S70] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S71] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S72] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S73] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S74] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S75] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S76] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S77] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S78] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S79] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S80] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S81] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S82] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S83] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S84] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S85] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S86] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S87] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S88] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S89] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S90] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S91] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S92] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S93] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S94] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S95] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S96] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S97] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S98] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S99] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S100] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S101] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S102] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S103] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S104] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S105] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S106] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S107] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S108] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S109] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S110] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S111] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S112] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S113] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S114] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S115] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S116] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S117] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S118] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S119] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S120] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S121] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S122] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S123] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S124] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S125] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S126] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S127] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S128] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S129] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S130] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S131] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S132] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S133] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S134] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S135] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S136] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S137] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S138] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S139] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S140] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S141] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S142] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S143] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S144] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S145] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S146] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S147] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S148] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S149] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S150] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S151] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S152] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S153] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S154] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S155] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S156] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S157] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S158] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S159] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S160] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S161] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S162] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S163] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S164] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S165] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S166] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S167] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S168] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S169] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S170] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S171] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S172] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S173] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S174] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S175] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S176] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S177] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S178] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S179] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S180] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S181] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S182] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S183] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S184] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S185] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S186] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S187] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S188] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S189] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S190] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S191] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S192] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S193] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S194] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S195] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S196] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S197] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S198] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S199] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S200] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S201] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S202] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S203] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S204] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S205] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S206] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S207] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S208] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S209] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S210] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S211] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S212] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S213] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S214] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S215] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S216] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S217] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S218] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S219] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S220] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S221] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S222] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S223] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S224] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S225] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S226] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S227] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S228] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S229] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S230] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S231] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S232] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S233] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S234] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S235] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S236] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S237] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S238] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S239] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S240] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S241] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S242] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S243] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S244] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S245] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S246] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S247] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S248] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S249] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S250] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S251] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S252] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S253] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S254] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S255] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S256] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S257] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S258] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S259] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S260] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S261] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S262] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S263] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S264] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S265] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S266] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S267] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S268] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S269] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S270] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S271] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S272] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S273] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S274] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S275] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S276] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S277] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S278] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S279] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S280] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S281] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S282] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S283] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S284] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S285] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S286] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S287] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S288] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S289] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S290] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S291] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S292] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S293] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S294] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S295] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S296] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S297] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S298] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S299] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S300] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S301] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S302] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S303] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S304] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S305] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S306] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S307] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S308] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S309] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S310] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S311] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S312] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S313] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S314] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S315] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S316] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S317] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S318] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S319] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S320] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S321] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S322] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S323] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S324] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S325] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S326] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S327] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S328] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S329] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S330] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S331] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S332] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S333] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S334] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S335] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S336] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S337] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S338] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S339] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S340] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S341] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S342] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S343] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S344] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S345] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S346] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S347] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S348] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S349] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S350] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S351] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S352] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S353] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S354] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S355] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S356] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S357] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S358] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S359] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S360] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S361] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S362] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S363] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S364] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S365] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S366] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S367] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S368] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S369] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S370] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S371] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S372] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S373] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S374] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S375] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S376] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S377] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S378] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S379] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S380] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S381] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S382] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S383] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S384] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S385] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S386] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S387] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S388] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S389] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S390] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S391] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S392] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S393] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S394] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S395] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S396] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S397] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S398] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S399] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S400] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S401] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S402] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S403] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S404] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S405] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S406] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S407] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S408] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S409] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S410] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S411] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S412] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S413] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S414] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S415] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S416] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S417] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S418] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S419] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S420] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S421] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S422] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S423] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S424] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S425] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S426] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S427] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S428] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S429] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S430] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S431] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S432] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S433] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S434] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S435] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S436] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S437] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S438] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S439] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S440] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S441] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S442] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S443] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S444] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S445] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S446] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S447] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S448] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S449] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S450] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S451] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S452] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S453] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S454] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S455] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S456] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S457] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S458] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S459] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S460] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S461] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S462] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S463] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S464] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S465] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S466] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S467] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S468] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S469] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S470] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S471] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S472] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S473] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S474] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S475] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S476] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S477] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S478] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S479] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S480] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S481] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S482] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S483] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S484] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S485] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S486] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S487] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S488] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S489] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S490] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S491] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S492] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S493] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S494] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S495] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S496] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S497] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S498] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S499] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S500] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S501] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S502] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S503] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S504] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S505] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S506] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S507] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S508] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S509] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S510] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S511] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S512] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S513] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S514] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S515] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S516] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S517] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S518] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S519] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S520] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S521] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S522] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S523] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S524] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S525] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S526] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S527] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S528] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S529] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S530] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S531] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S532] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S533] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S534] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S535] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S536] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S537] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S538] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S539] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S540] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S541] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S542] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S543] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S544] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S545] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S546] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S547] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S548] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S549] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S550] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S551] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S552] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S553] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S554] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S555] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S556] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S557] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S558] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S559] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S560] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S561] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S562] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S563] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S564] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S565] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S566] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S567] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S568] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S569] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S570] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S571] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S572] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S573] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S574] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S575] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S576] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S577] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S578] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S579] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S580] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S581] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S582] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S583] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S584] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S585] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S586] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S587] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S588] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S589] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S590] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S591] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S592] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S593] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S594] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S595] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S596] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S597] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S598] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S599] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S600] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S601] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S602] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S603] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S604] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S605] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S606] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S607] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S608] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S609] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S610] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S611] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S612] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S613] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S614] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S615] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S616] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S617] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S618] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S619] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S620] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S621] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S622] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S623] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S624] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S625] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S626] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S627] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S628] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S629] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S630] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S631] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S632] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S633] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S634] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S635] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S636] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S637] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S638] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S639] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S640] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S641] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S642] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S643] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S644] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S645] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S646] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S647] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S648] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S649] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S650] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S651] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S652] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S653] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S654] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S655] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S656] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S657] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S658] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S659] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S660] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S661] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S662] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S663] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S664] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S665] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S666] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S667] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S668] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S669] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S670] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S671] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S672] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S673] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S674] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S675] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S676] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S677] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S678] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S679] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S680] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S681] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S682] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S683] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S684] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S685] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S686] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S687] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S688] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S689] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S690] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S691] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S692] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S693] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S694] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S695] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S696] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S697] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S698] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S699] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S700] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S701] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S702] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S703] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S704] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S705] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S706] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S707] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S708] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S709] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S710] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S711] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S712] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S713] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S714] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S715] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S716] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S717] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S718] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S719] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S720] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S721] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S722] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S723] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S724] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S725] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S726] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S727] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S728] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S729] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S730] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S731] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S732] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S733] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S734] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S735] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S736] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S737] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S738] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S739] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S740] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S741] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S742] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S743] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S744] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S745] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S746] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S747] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S748] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S749] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S750] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S751] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S752] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S753] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S754] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S755] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S756] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S757] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S758] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S759] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S760] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S761] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S762] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S763] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S764] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S765] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S766] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S767] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S768] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S769] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S770] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S771] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S772] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S773] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S774] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S775] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S776] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S777] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S778] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S779] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S780] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S781] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S782] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S783] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S784] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S785] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S786] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S787] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S788] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S789] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S790] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S791] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S792] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S793] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S794] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S795] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S796] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S797] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S798] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S799] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S800] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
};
