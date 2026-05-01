#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/NoopBeatmapAttemptEventSender.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NoopBeatmapAttemptEventSender)
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class GameAnalyticsBeatmapAttemptEventData;
}
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class GameAnalyticsBeatmapLevelData;
}
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class IBeatmapAttemptEventSender;
}
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class NoopBeatmapAttemptEventSender;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender);
// Dependencies System.Object
namespace BeatSaber::Analytics::Gameplay::EventSenders {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.EventSenders.NoopBeatmapAttemptEventSender
class CORDL_TYPE NoopBeatmapAttemptEventSender : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender"
  constexpr operator ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*() noexcept;

  static inline ::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender* New_ctor();

  /// @brief Method SendAbortedLevel, addr 0x31d0010, size 0x4, virtual true, abstract: false, final true
  inline void SendAbortedLevel(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData* levelData);

  /// @brief Method SendFinishedLevel, addr 0x31d000c, size 0x4, virtual true, abstract: false, final true
  inline void SendFinishedLevel(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData* eventData);

  /// @brief Method SendStartedLevel, addr 0x31d0008, size 0x4, virtual true, abstract: false, final true
  inline void SendStartedLevel(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData* levelData);

  /// @brief Method .ctor, addr 0x31ce1c8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender"
  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender* i___BeatSaber__Analytics__Gameplay__EventSenders__IBeatmapAttemptEventSender() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoopBeatmapAttemptEventSender();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoopBeatmapAttemptEventSender", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoopBeatmapAttemptEventSender(NoopBeatmapAttemptEventSender&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoopBeatmapAttemptEventSender", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoopBeatmapAttemptEventSender(NoopBeatmapAttemptEventSender const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22099 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender, 0x10>, "Size mismatch!");

} // namespace BeatSaber::Analytics::Gameplay::EventSenders
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender*, "BeatSaber.Analytics.Gameplay.EventSenders", "NoopBeatmapAttemptEventSender");
