#ifdef __cpp_modules
module;
#endif

#pragma once
#include "BeatSaber/GameSettings/Audio.hpp"
#include "BeatSaber/GameSettings/Controllers.hpp"
#include "BeatSaber/GameSettings/CustomServer.hpp"
#include "BeatSaber/GameSettings/DebugSettings.hpp"
#include "BeatSaber/GameSettings/GraphicSettings.hpp"
#include "BeatSaber/GameSettings/GraphicSettingsHandler.hpp"
#include "BeatSaber/GameSettings/LanguageHelper.hpp"
#include "BeatSaber/GameSettings/LegacyModelConverter.hpp"
#include "BeatSaber/GameSettings/LegacySettingsModel.hpp"
#include "BeatSaber/GameSettings/MainSettings.hpp"
#include "BeatSaber/GameSettings/MainSettingsHandler.hpp"
#include "BeatSaber/GameSettings/PredefinedSettings.hpp"
#include "BeatSaber/GameSettings/SmoothCamera.hpp"
#include "BeatSaber/GameSettings/WindowMode.hpp"
#ifdef __cpp_modules
export module GameSettings;
#endif
