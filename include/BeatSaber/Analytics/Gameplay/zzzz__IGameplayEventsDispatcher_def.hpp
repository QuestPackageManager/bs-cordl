#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/IGameplayEventsDispatcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGameplayEventsDispatcher)
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class IBeatmapAttemptEventSender;
}
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class IBlockLevelGameplayEventSender;
}
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class IHMDSessionEventSender;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay {
class IGameplayEventsDispatcher;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher);
// Dependencies
namespace BeatSaber::Analytics::Gameplay {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.IGameplayEventsDispatcher
class CORDL_TYPE IGameplayEventsDispatcher {
public:
  // Declarations
  __declspec(property(get = get_beatmapAttempt)) ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender* beatmapAttempt;

  __declspec(property(get = get_blockLevel)) ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender* blockLevel;

  __declspec(property(get = get_hmdSession)) ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender* hmdSession;

  /// @brief Method InitializeAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeAsync();

  /// @brief Method get_beatmapAttempt, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender* get_beatmapAttempt();

  /// @brief Method get_blockLevel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender* get_blockLevel();

  /// @brief Method get_hmdSession, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender* get_hmdSession();

  // Ctor Parameters [CppParam { name: "", ty: "IGameplayEventsDispatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGameplayEventsDispatcher(IGameplayEventsDispatcher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22086 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BeatSaber::Analytics::Gameplay
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*, "BeatSaber.Analytics.Gameplay", "IGameplayEventsDispatcher");
