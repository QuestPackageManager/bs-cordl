#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/GameAnalyticsBeatmapPracticeSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GameAnalyticsBeatmapPracticeSettings)
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class GameAnalyticsBeatmapPracticeSettings;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings);
// Dependencies System.Object
namespace BeatSaber::Analytics::Gameplay::EventSenders {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.EventSenders.GameAnalyticsBeatmapPracticeSettings
class CORDL_TYPE GameAnalyticsBeatmapPracticeSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field songSpeedMul, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_songSpeedMul, put = __cordl_internal_set_songSpeedMul)) float_t songSpeedMul;

  /// @brief Field startInAdvanceAndClearNotes, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_startInAdvanceAndClearNotes, put = __cordl_internal_set_startInAdvanceAndClearNotes)) bool startInAdvanceAndClearNotes;

  /// @brief Field startSongTime, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_startSongTime, put = __cordl_internal_set_startSongTime)) float_t startSongTime;

  static inline ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings* New_ctor();

  constexpr float_t const& __cordl_internal_get_songSpeedMul() const;

  constexpr float_t& __cordl_internal_get_songSpeedMul();

  constexpr bool const& __cordl_internal_get_startInAdvanceAndClearNotes() const;

  constexpr bool& __cordl_internal_get_startInAdvanceAndClearNotes();

  constexpr float_t const& __cordl_internal_get_startSongTime() const;

  constexpr float_t& __cordl_internal_get_startSongTime();

  constexpr void __cordl_internal_set_songSpeedMul(float_t value);

  constexpr void __cordl_internal_set_startInAdvanceAndClearNotes(bool value);

  constexpr void __cordl_internal_set_startSongTime(float_t value);

  /// @brief Method .ctor, addr 0x31cf868, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameAnalyticsBeatmapPracticeSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameAnalyticsBeatmapPracticeSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameAnalyticsBeatmapPracticeSettings(GameAnalyticsBeatmapPracticeSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameAnalyticsBeatmapPracticeSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameAnalyticsBeatmapPracticeSettings(GameAnalyticsBeatmapPracticeSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22092 };

  /// @brief Field startSongTime, offset: 0x10, size: 0x4, def value: None
  float_t ___startSongTime;

  /// @brief Field songSpeedMul, offset: 0x14, size: 0x4, def value: None
  float_t ___songSpeedMul;

  /// @brief Field startInAdvanceAndClearNotes, offset: 0x18, size: 0x1, def value: None
  bool ___startInAdvanceAndClearNotes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings, ___startSongTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings, ___songSpeedMul) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings, ___startInAdvanceAndClearNotes) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings, 0x20>, "Size mismatch!");

} // namespace BeatSaber::Analytics::Gameplay::EventSenders
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings*, "BeatSaber.Analytics.Gameplay.EventSenders", "GameAnalyticsBeatmapPracticeSettings");
