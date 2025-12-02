#ifdef __cpp_modules
module;
#endif

#pragma once
#include "BeatSaber/Destinations/AppQuitRequestedException.hpp"
#include "BeatSaber/Destinations/AppRestartRequestedException.hpp"
#include "BeatSaber/Destinations/BeatmapCharacteristic.hpp"
#include "BeatSaber/Destinations/BeatmapCharacteristicExtensions.hpp"
#include "BeatSaber/Destinations/Destination.hpp"
#include "BeatSaber/Destinations/DestinationSource.hpp"
#include "BeatSaber/Destinations/DestinationTarget.hpp"
#include "BeatSaber/Destinations/GameMode.hpp"
#include "BeatSaber/Destinations/GameStageExtensions.hpp"
#include "BeatSaber/Destinations/GameplayAdditionalInformation.hpp"
#include "BeatSaber/Destinations/GameplayEnvironmentOverride.hpp"
#include "BeatSaber/Destinations/IInitialDestinationResolver.hpp"
#include "BeatSaber/Destinations/InitialDestinationController.hpp"
#include "BeatSaber/Destinations/InitialDestinationException.hpp"
#include "BeatSaber/Destinations/LevelStartDestinationParameters.hpp"
#include "BeatSaber/Destinations/SceneNames.hpp"
#include "BeatSaber/Destinations/SerializableBeatmapKey.hpp"
#ifdef __cpp_modules
export module Destinations;
#endif
