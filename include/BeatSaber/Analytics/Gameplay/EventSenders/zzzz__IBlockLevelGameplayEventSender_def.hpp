#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/IBlockLevelGameplayEventSender.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IBlockLevelGameplayEventSender)
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class GameAnalyticsBeatmapLevelData;
}
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class IBlockLevelGameplayEventSender;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender);
// Dependencies 
namespace BeatSaber::Analytics::Gameplay::EventSenders {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.EventSenders.IBlockLevelGameplayEventSender
class CORDL_TYPE IBlockLevelGameplayEventSender {
public:
// Declarations
/// @brief Method SendBlockLevelGameplayEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendBlockLevelGameplayEvent(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*  levelData, ::StringW  blockLevelJSON) ;

// Ctor Parameters [CppParam { name: "", ty: "IBlockLevelGameplayEventSender", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBlockLevelGameplayEventSender(IBlockLevelGameplayEventSender const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22101};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatSaber::Analytics::Gameplay::EventSenders
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*, "BeatSaber.Analytics.Gameplay.EventSenders", "IBlockLevelGameplayEventSender");
