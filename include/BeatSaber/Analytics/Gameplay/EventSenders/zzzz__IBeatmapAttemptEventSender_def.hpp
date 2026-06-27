#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/IBeatmapAttemptEventSender.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IBeatmapAttemptEventSender)
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class GameAnalyticsBeatmapAttemptEventData;
}
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class GameAnalyticsBeatmapLevelData;
}
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class IBeatmapAttemptEventSender;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender);
// Dependencies 
namespace BeatSaber::Analytics::Gameplay::EventSenders {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.EventSenders.IBeatmapAttemptEventSender
class CORDL_TYPE IBeatmapAttemptEventSender {
public:
// Declarations
/// @brief Method SendAbortedLevel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendAbortedLevel(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*  levelData) ;

/// @brief Method SendFinishedLevel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendFinishedLevel(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*  eventData) ;

/// @brief Method SendStartedLevel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendStartedLevel(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*  levelData) ;

// Ctor Parameters [CppParam { name: "", ty: "IBeatmapAttemptEventSender", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBeatmapAttemptEventSender(IBeatmapAttemptEventSender const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22100};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatSaber::Analytics::Gameplay::EventSenders
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*, "BeatSaber.Analytics.Gameplay.EventSenders", "IBeatmapAttemptEventSender");
