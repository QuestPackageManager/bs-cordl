#ifdef __cpp_modules
module;
#endif

#pragma once
#include "BeatSaber/Haptics/DefaultHapticImpulseTransmitter.hpp"
#include "BeatSaber/Haptics/HapticFeedbackManager.hpp"
#include "BeatSaber/Haptics/HapticPresetSO.hpp"
#include "BeatSaber/Haptics/IHapticFeedbackPlayer.hpp"
#include "BeatSaber/Haptics/IHapticImpulseTransmitter.hpp"
#include "BeatSaber/Haptics/KnucklesHapticImpulseTransmitter.hpp"
#include "BeatSaber/Haptics/OculusAdvancedHapticFeedbackPlayer.hpp"
#include "BeatSaber/Haptics/RumbleData.hpp"
#include "BeatSaber/Haptics/RumbleHapticFeedbackPlayer.hpp"
#include "BeatSaber/Haptics/UnsupportedAdvancedHapticsPlayer.hpp"
#ifdef __cpp_modules
export module Haptics;
#endif
