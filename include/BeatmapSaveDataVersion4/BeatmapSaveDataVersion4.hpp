#ifdef __cpp_modules
module;
#endif

#pragma once
#include "BeatmapSaveDataVersion4/Arc.hpp"
#include "BeatmapSaveDataVersion4/ArcBeatIndex.hpp"
#include "BeatmapSaveDataVersion4/BasicEvent.hpp"
#include "BeatmapSaveDataVersion4/BeatIndex.hpp"
#include "BeatmapSaveDataVersion4/BeatmapBeatIndex.hpp"
#include "BeatmapSaveDataVersion4/BeatmapSaveData.hpp"
#include "BeatmapSaveDataVersion4/BombNote.hpp"
#include "BeatmapSaveDataVersion4/Chain.hpp"
#include "BeatmapSaveDataVersion4/ChainBeatIndex.hpp"
#include "BeatmapSaveDataVersion4/ColorBoostEvent.hpp"
#include "BeatmapSaveDataVersion4/ColorNote.hpp"
#include "BeatmapSaveDataVersion4/EventBox.hpp"
#include "BeatmapSaveDataVersion4/EventBoxGroup.hpp"
#include "BeatmapSaveDataVersion4/EventBoxGroupType.hpp"
#include "BeatmapSaveDataVersion4/FloatFxEvent.hpp"
#include "BeatmapSaveDataVersion4/FxEventBox.hpp"
#include "BeatmapSaveDataVersion4/IndexFilter.hpp"
#include "BeatmapSaveDataVersion4/LightColorEvent.hpp"
#include "BeatmapSaveDataVersion4/LightColorEventBox.hpp"
#include "BeatmapSaveDataVersion4/LightRotationEvent.hpp"
#include "BeatmapSaveDataVersion4/LightRotationEventBox.hpp"
#include "BeatmapSaveDataVersion4/LightTranslationEvent.hpp"
#include "BeatmapSaveDataVersion4/LightTranslationEventBox.hpp"
#include "BeatmapSaveDataVersion4/LightshowSaveData.hpp"
#include "BeatmapSaveDataVersion4/NoteJumpMovementSpeedEvent.hpp"
#include "BeatmapSaveDataVersion4/Obstacle.hpp"
#include "BeatmapSaveDataVersion4/SpawnRotation.hpp"
#include "BeatmapSaveDataVersion4/Waypoint.hpp"
#ifdef __cpp_modules
export module BeatmapSaveDataVersion4;
#endif
