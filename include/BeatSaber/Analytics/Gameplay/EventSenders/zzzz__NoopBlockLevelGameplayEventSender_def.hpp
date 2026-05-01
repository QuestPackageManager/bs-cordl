#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/NoopBlockLevelGameplayEventSender.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NoopBlockLevelGameplayEventSender)
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class GameAnalyticsBeatmapLevelData;
}
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class IBlockLevelGameplayEventSender;
}
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class NoopBlockLevelGameplayEventSender;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::EventSenders::NoopBlockLevelGameplayEventSender);
// Dependencies System.Object
namespace BeatSaber::Analytics::Gameplay::EventSenders {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.EventSenders.NoopBlockLevelGameplayEventSender
class CORDL_TYPE NoopBlockLevelGameplayEventSender : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender"
  constexpr operator ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*() noexcept;

  static inline ::BeatSaber::Analytics::Gameplay::EventSenders::NoopBlockLevelGameplayEventSender* New_ctor();

  /// @brief Method SendBlockLevelGameplayEvent, addr 0x31d0014, size 0x4, virtual true, abstract: false, final true
  inline void SendBlockLevelGameplayEvent(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData* levelData, ::StringW blockLevelJSON);

  /// @brief Method .ctor, addr 0x31ce1cc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender"
  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender* i___BeatSaber__Analytics__Gameplay__EventSenders__IBlockLevelGameplayEventSender() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoopBlockLevelGameplayEventSender();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoopBlockLevelGameplayEventSender", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoopBlockLevelGameplayEventSender(NoopBlockLevelGameplayEventSender&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoopBlockLevelGameplayEventSender", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoopBlockLevelGameplayEventSender(NoopBlockLevelGameplayEventSender const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22100 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::EventSenders::NoopBlockLevelGameplayEventSender, 0x10>, "Size mismatch!");

} // namespace BeatSaber::Analytics::Gameplay::EventSenders
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::EventSenders::NoopBlockLevelGameplayEventSender);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::EventSenders::NoopBlockLevelGameplayEventSender*, "BeatSaber.Analytics.Gameplay.EventSenders", "NoopBlockLevelGameplayEventSender");
