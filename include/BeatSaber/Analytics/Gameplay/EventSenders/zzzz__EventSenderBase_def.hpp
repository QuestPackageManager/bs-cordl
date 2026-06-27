#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/EventSenderBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EventSenderBase)
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class GameAnalyticsBeatmapLevelData;
}
namespace BeatSaber::Analytics::Gameplay {
class EventsBuilder;
}
namespace OSCE::Analytics {
class AnalyticsManager;
}
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class EventSenderBase;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase);
// Dependencies System.Object
namespace BeatSaber::Analytics::Gameplay::EventSenders {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.EventSenders.EventSenderBase
class CORDL_TYPE EventSenderBase : public ::System::Object {
public:
// Declarations
/// @brief Field _analyticsManager, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__analyticsManager, put=__cordl_internal_set__analyticsManager)) ::UnityW<::OSCE::Analytics::AnalyticsManager>  _analyticsManager;

/// @brief Method GetSegmentName, addr 0x31cfca0, size 0xd8, virtual false, abstract: false, final false
static inline ::StringW GetSegmentName(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*  levelData) ;

static inline ::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase* New_ctor(::OSCE::Analytics::AnalyticsManager*  analyticsManager) ;

/// @brief Method SendEventsBatch, addr 0x31cfd78, size 0x98, virtual false, abstract: false, final false
inline void SendEventsBatch(::BeatSaber::Analytics::Gameplay::EventsBuilder*  eventsBuilder) ;

constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager> const& __cordl_internal_get__analyticsManager() const;

constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager>& __cordl_internal_get__analyticsManager() ;

constexpr void __cordl_internal_set__analyticsManager(::UnityW<::OSCE::Analytics::AnalyticsManager>  value) ;

/// @brief Method .ctor, addr 0x31cf98c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::OSCE::Analytics::AnalyticsManager*  analyticsManager) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventSenderBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventSenderBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventSenderBase(EventSenderBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventSenderBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventSenderBase(EventSenderBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22098};

/// @brief Field _analyticsManager, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::OSCE::Analytics::AnalyticsManager>  ____analyticsManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase, ____analyticsManager) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase, 0x18>, "Size mismatch!");

} // namespace end def BeatSaber::Analytics::Gameplay::EventSenders
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase*, "BeatSaber.Analytics.Gameplay.EventSenders", "EventSenderBase");
