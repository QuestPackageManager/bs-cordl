#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/BlockLevelGameplayEventSender.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__EventSenderBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BlockLevelGameplayEventSender)
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class GameAnalyticsBeatmapLevelData;
}
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class IBlockLevelGameplayEventSender;
}
namespace BeatSaber::Analytics::Gameplay {
class EventsBuilderFactory;
}
namespace OSCE::Analytics {
class AnalyticsManager;
}
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class BlockLevelGameplayEventSender;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender);
// Dependencies BeatSaber.Analytics.Gameplay.EventSenders.EventSenderBase
namespace BeatSaber::Analytics::Gameplay::EventSenders {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.EventSenders.BlockLevelGameplayEventSender
class CORDL_TYPE BlockLevelGameplayEventSender : public ::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase {
public:
  // Declarations
  /// @brief Field _eventsBuilderFactory, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__eventsBuilderFactory,
                      put = __cordl_internal_set__eventsBuilderFactory)) ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* _eventsBuilderFactory;

  /// @brief Convert operator to "::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender"
  constexpr operator ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*() noexcept;

  static inline ::BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender* New_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager,
                                                                                                        ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* eventsBuilderFactory);

  /// @brief Method SendBlockLevelGameplayEvent, addr 0x31cf86c, size 0x334, virtual true, abstract: false, final true
  inline void SendBlockLevelGameplayEvent(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData* levelData, ::StringW blockLevelJSON);

  constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* const& __cordl_internal_get__eventsBuilderFactory() const;

  constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*& __cordl_internal_get__eventsBuilderFactory();

  constexpr void __cordl_internal_set__eventsBuilderFactory(::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* value);

  /// @brief Method .ctor, addr 0x31ce9ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager, ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* eventsBuilderFactory);

  /// @brief Convert to "::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender"
  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender* i___BeatSaber__Analytics__Gameplay__EventSenders__IBlockLevelGameplayEventSender() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BlockLevelGameplayEventSender();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BlockLevelGameplayEventSender", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BlockLevelGameplayEventSender(BlockLevelGameplayEventSender&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BlockLevelGameplayEventSender", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BlockLevelGameplayEventSender(BlockLevelGameplayEventSender const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22093 };

  /// @brief Field _eventsBuilderFactory, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* ____eventsBuilderFactory;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender, ____eventsBuilderFactory) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender, 0x20>, "Size mismatch!");

} // namespace BeatSaber::Analytics::Gameplay::EventSenders
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender*, "BeatSaber.Analytics.Gameplay.EventSenders", "BlockLevelGameplayEventSender");
