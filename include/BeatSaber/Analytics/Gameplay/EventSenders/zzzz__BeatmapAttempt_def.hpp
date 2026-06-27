#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/BeatmapAttempt.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__EventSenderBase_def.hpp"
CORDL_MODULE_EXPORT(BeatmapAttempt)
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class GameAnalyticsBeatmapAttemptEventData;
}
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class GameAnalyticsBeatmapLevelData;
}
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class IBeatmapAttemptEventSender;
}
namespace BeatSaber::Analytics::Gameplay {
class EventsBuilderFactory;
}
namespace BeatSaber::Analytics::Gameplay {
class EventsBuilder;
}
namespace OSCE::Analytics {
class AnalyticsManager;
}
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class BeatmapAttempt;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt);
// Dependencies BeatSaber.Analytics.Gameplay.EventSenders.EventSenderBase
namespace BeatSaber::Analytics::Gameplay::EventSenders {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.EventSenders.BeatmapAttempt
class CORDL_TYPE BeatmapAttempt : public ::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase {
public:
// Declarations
/// @brief Field _eventsBuilderFactory, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__eventsBuilderFactory, put=__cordl_internal_set__eventsBuilderFactory)) ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*  _eventsBuilderFactory;

/// @brief Convert operator to "::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender"
constexpr operator  ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*() noexcept;

/// @brief Method GetBuilderForBeatmapAttempt, addr 0x31cff6c, size 0x434, virtual false, abstract: false, final false
inline ::BeatSaber::Analytics::Gameplay::EventsBuilder* GetBuilderForBeatmapAttempt(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*  eventData) ;

/// @brief Method NewEventsBuilder, addr 0x31cf978, size 0x14, virtual false, abstract: false, final false
inline ::BeatSaber::Analytics::Gameplay::EventsBuilder* NewEventsBuilder() ;

static inline ::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt* New_ctor(::OSCE::Analytics::AnalyticsManager*  analyticsManager, ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*  eventsBuilderFactory) ;

/// @brief Method SendAbortedLevel, addr 0x31d03a0, size 0x178, virtual true, abstract: false, final true
inline void SendAbortedLevel(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*  levelData) ;

/// @brief Method SendFinishedLevel, addr 0x31cfe10, size 0x15c, virtual true, abstract: false, final true
inline void SendFinishedLevel(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*  eventData) ;

/// @brief Method SendStartedLevel, addr 0x31cf994, size 0x308, virtual true, abstract: false, final true
inline void SendStartedLevel(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*  levelData) ;

constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* const& __cordl_internal_get__eventsBuilderFactory() const;

constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*& __cordl_internal_get__eventsBuilderFactory() ;

constexpr void __cordl_internal_set__eventsBuilderFactory(::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*  value) ;

/// @brief Method .ctor, addr 0x31cf704, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::OSCE::Analytics::AnalyticsManager*  analyticsManager, ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*  eventsBuilderFactory) ;

/// @brief Convert to "::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender"
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender* i___BeatSaber__Analytics__Gameplay__EventSenders__IBeatmapAttemptEventSender() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BeatmapAttempt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BeatmapAttempt", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapAttempt(BeatmapAttempt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapAttempt", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapAttempt(BeatmapAttempt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22092};

/// @brief Field _eventsBuilderFactory, offset: 0x18, size: 0x8, def value: None
 ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*  ____eventsBuilderFactory;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt, ____eventsBuilderFactory) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt, 0x20>, "Size mismatch!");

} // namespace end def BeatSaber::Analytics::Gameplay::EventSenders
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*, "BeatSaber.Analytics.Gameplay.EventSenders", "BeatmapAttempt");
