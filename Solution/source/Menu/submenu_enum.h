/*
* Menyoo PC - Grand Theft Auto V single-player trainer mod
* Copyright (C) 2019  MAFINS
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/
#pragma once

namespace SUB {
	enum SUB : int
	{
		CLOSED,
		MAINMENU,

		SETTINGS,
		SETTINGS_MENUPOS,
		SETTINGS_THEMES,
		SETTINGS_COLOURS,
		SETTINGS_COLOURS2,
		SETTINGS_FONTS,
		SETTINGS_FONTS2,

		OBJECTSPAWNER_OBJS, // now used for object gun, etc.

		PLAYERSSUB,
		PLAYERSSUBAMENU,

		CLONECOMPANIONSUB,
		PEDEXPLOSIONSUB,
		ATTACHFUNNYOBJECTSUB,
		PTFXSUB,

		PLAYEROPS,

		ANIMATIONSUB,
		ANIMATIONSUB_SETTINGS,
		ANIMATIONSUB_FAVOURITES,
		ANIMATIONSUB_CUSTOM,
		ANIMATIONSUB_DEER,
		ANIMATIONSUB_SHARK,
		ANIMATIONSUB_MISSRAPPEL,
		ANIMATIONSUB_GESTSIT,
		ANIMATIONSUB_SWAT,
		ANIMATIONSUB_GUARDREAC,
		ANIMATIONSUB_RANDARREST,
		ANIMATIONSUB_ALLPEDANIMS,
		ANIMATIONSUB_ALLPEDANIMS_INDICT,
		ANIMATIONSUB_TASKSCENARIOS,
		ANIMATIONSUB_TASKSCENARIOS2,
		FACIALMOOD,
		MOVEMENTGROUP,

		MODELCHANGER,
		MODELCHANGER_FAVOURITES,
		MODELCHANGER_ANIMAL,
		MODELCHANGER_AMBFEMALES,
		MODELCHANGER_AMBMALES,
		MODELCHANGER_CS,
		MODELCHANGER_GANGFEMALES,
		MODELCHANGER_GANGMALES,
		MODELCHANGER_STORY,
		MODELCHANGER_MP,
		MODELCHANGER_SCENARIOFEMALES,
		MODELCHANGER_SCENARIOMALES,
		MODELCHANGER_ST_SCENARIOFEMALES,
		MODELCHANGER_ST_SCENARIOMALES,
		MODELCHANGER_OTHERS,

		COMPONENTS,
		COMPONENTS2,
		COMPONENTSPROPS,
		COMPONENTSPROPS2,
		COMPONENTS_OUTFITS,
		COMPONENTS_OUTFITS2,

		PEDDECALS_TYPES,
		PEDDECALS_ZONES,
		PEDDECALS_INZONE,

		VEHICLEOPS,
		PVOPS,
		VEHICLEWEAPONS,
		VEHICLEMULTIPLIERS,
		VEHICLESPEEDOS,
		VEHICLESPEEDOS_LIGHT,
		VEHICLESPEEDOS_DARK,
		MULTIPLATNEONS,
		VEHICLESLAM,
		SPAWNVEHICLE,
		SPAWNVEHICLE_OPTIONS,
		SPAWNVEHICLE_ALLCATS,
		SPAWNVEHICLE_FAVOURITES,
		FUNNYVEHICLES,

		MODSHOP,
		MS_BENNYS,
		MS_EMBLEM,
		MSWHEELS,
		MSWHEELS2,
		MSWHEELS3,
		MS_TYRESBURST,
		GETALLPAINTIDS,
		MSPAINTS,
		MSPAINTS2,
		MSPAINTS2_WHEELS,
		MSPAINTS2_ADDED,
		MSPAINTS2_CHROME,
		MSPAINTS2_MATTE,
		MSPAINTS2_NORMAL,
		MSPAINTS2_METALLIC,
		MSPAINTS2_METAL,
		MSPAINTS2_CHAMELEON,
		MSPAINTS2_PEARL,
		MSPAINTS2_UTIL,
		MSPAINTS2_WORN,
		MSPAINTS_RGB,
		MSCATALL,
		MSWINDOWS,
		MSDOORS,
		MSDOORS_OPEN,
		MSDOORS_CLOSE,
		MSNEONS,
		MSEXTRA,
		MSENGINESOUND,
		MSLIGHTS,

		TELEPORTOPS,
		TELEPORTOPS_CUSTOMCOORDS,
		TELEPORTOPS_SELECTEDCATEGORY,
		TELEPORTOPS_BLIPLIST,
		TELEPORTOPS_SAVEDLOCATIONS,
		TELEPORTOPS_OFFICEGARAGES,
		TELEPORTOPS_OFFICEGARAGES_INLOC,
		TELEPORTOPS_IEVEHICLEWAREHOUSES,
		TELEPORTOPS_IEVEHICLEWAREHOUSES_INLOC,
		TELEPORTOPS_BIKERCLUBHOUSES,
		TELEPORTOPS_BIKERCLUBHOUSES_INLOC,
		TELEPORTOPS_BUSINESSES,
		TELEPORTOPS_BUSINESSES_INLOC,
		TELEPORTOPS_BUNKERS,
		TELEPORTOPS_BUNKERS_INLOC,
		TELEPORTOPS_MOC,
		TELEPORTOPS_MOC_INLOC,
		TELEPORTOPS_HANGARS,
		TELEPORTOPS_HANGARS_INLOC,
		TELEPORTOPS_HANGARS_INOPTION,
		TELEPORTOPS_FACILITIES,
		TELEPORTOPS_FACILITIES_INLOC,
		TELEPORTOPS_FACILITIES_INOPTION,
		TELEPORTOPS_NIGHTCLUBS,
		TELEPORTOPS_ARENAWAR,
		TELEPORTOPS_YACHTS,
		TELEPORTOPS_YACHTS_INGRP,

		WEAPONOPS,
		WEAPONOPS_WEAPONFAVOURITES,
		WEAPONOPS_INDIVS_CATEGORIES,
		WEAPONOPS_INDIVS_CATEGORY,
		WEAPONOPS_INDIVS_ITEM,
		WEAPONOPS_INDIVS_ITEM_MODS,
		WEAPONOPS_LOADOUTS,
		WEAPONOPS_LOADOUTS_INITEM,
		WEAPONOPS_PARACHUTE,
		WEAPONOPS_LASERSIGHT,
		FORGEGUN,
		GRAVITYGUN,
		KABOOMGUN,
		TRIGGERFXGUN,
		BULLETGUN,
		PEDGUN,
		PEDGUN_ALLPEDS,
		OBJECTGUN,
		LIST_VEHICLECATS,

		WEATHEROPS,
		CLOUDOPS,
		WATERHACK,
		TIMEOPS,

		MISCOPS,
		MAPMODS,
		MAPMODS2,

		VOICECHANGER,
		SPEECHPLAYER,
		SPEECHPLAYER_INVOICE,
		BREATHESTUFF,

		VEHICLE_SAVER,
		VEHICLE_SAVER_INITEM,

		RADIOSUB,
		AUTODRIVESUB,

		CUTSCENEPLAYER,

		CLEARAREA,

		TIMECYCLES,

		PEDFLAGMANAGER_NAMEDLIST,
		PEDFLAGMANAGER_CUSTOM,
		GHOSTRIDERMODE,

		PEDDAMAGET_CATEGORYLIST,
		PEDDAMAGET_BONESELECTION,
		PEDDAMAGET_BLOOD,
		PEDDAMAGET_DAMAGEDECALS,
		PEDDAMAGET_DAMAGEPACKS,
		PED_HEADFEATURES_MAIN,
		PED_HEADFEATURES_HEADOVERLAYS,
		PED_HEADFEATURES_HEADOVERLAYS_INITEM,
		PED_HEADFEATURES_FACEFEATURES,
		PED_HEADFEATURES_SKINTONE,

		ENTITYALPHALEVEL,

		ANIMALRIDING,
		TVCHANNELSTUFF_TV,

		SPOONER_MAIN,
		SPOONER_SPAWN_CATEGORIES,
		SPOONER_SPAWN_PROP,
		SPOONER_SPAWN_PROP_FAVOURITES,
		SPOONER_SPAWN_PED,
		SPOONER_SPAWN_VEHICLE,
		SPOONER_MANAGEMARKERS,
		SPOONER_MANAGEMARKERS_REMOVAL,
		SPOONER_MANAGEMARKERS_INMARKER,
		SPOONER_MANAGEMARKERS_INMARKER_DEST2MARKER,
		SPOONER_MANAGEMARKERS_INMARKER_ATTACH,
		SPOONER_MANAGEDB,
		SPOONER_MANAGEDB_REMOVAL,
		//SPOONER_MANAGEDB_REMOVAL_FROMDB,
		SPOONER_SAVEFILES,
		SPOONER_SAVEFILES_LOAD,
		SPOONER_SAVEFILES_LOAD_LEGACYSP00N,
		SPOONER_VECTOR3_MANUALPLACEMENT,
		SPOONER_QUICKMANUALPLACEMENT,
		SPOONER_GROUPSPOON,
		SPOONER_GROUPSPOON_SELECTENTITIES,
		SPOONER_GROUPSPOON_ATTACHTO,
		SPOONER_SETTINGS,
		SPOONER_SELECTEDENTITYOPS,
		SPOONER_PEDOPS,
		SPOONER_PEDOPS_WEAPON,
		SPOONER_PEDOPS_WEAPON_INCATEGORY,
		SPOONER_ATTACHMENTOPS,
		SPOONER_ATTACHMENTOPS_ATTACHTO,
		SPOONER_ATTACHMENTOPS_SELECTBONE,
		SPOONER_MANUALPLACEMENT,
		SPOONER_TASKSEQUENCE_TASKLIST,
		SPOONER_TASKSEQUENCE_ADDTASK,
		SPOONER_TASKSEQUENCE_INTASK,
		SPOONER_TASKSEQUENCE_TASKSUB_SCENARIOACTION_LIST,
		SPOONER_TASKSEQUENCE_TASKSUB_PLAYANIMATION_SETTINGS,
		SPOONER_TASKSEQUENCE_TASKSUB_PLAYANIMATION_ALLPEDANIMS,
		SPOONER_TASKSEQUENCE_TASKSUB_PLAYANIMATION_ALLPEDANIMS_INDICT,
		SPOONER_TASKSEQUENCE_TASKSUB_PLAYSPEECHWITHVOICE_INVOICE,

		CLOCK,

		HUDOPTIONS,
		GAMECAMOPTIONS,

		SPSTATMANAGER,
		SPSTATMANAGER_INCHAR,
		SPSTATMANAGER_INCHAR_INLIST,

		MAX_SUBS
	};
}