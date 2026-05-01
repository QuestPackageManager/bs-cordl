#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/NoopGameplayEventsDispatcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NoopGameplayEventsDispatcher)
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class IBeatmapAttemptEventSender;
}
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class IBlockLevelGameplayEventSender;
}
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class IHMDSessionEventSender;
}
namespace BeatSaber::Analytics::Gameplay {
class IGameplayEventsDispatcher;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay {
class NoopGameplayEventsDispatcher;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher);
// Dependencies System.Object
namespace BeatSaber::Analytics::Gameplay {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.NoopGameplayEventsDispatcher
class CORDL_TYPE NoopGameplayEventsDispatcher : public ::System::Object {
public:
  // Declarations
  /// @brief Field <beatmapAttempt>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapAttempt_k__BackingField,
                      put = __cordl_internal_set__beatmapAttempt_k__BackingField)) ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender* _beatmapAttempt_k__BackingField;

  /// @brief Field <blockLevel>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__blockLevel_k__BackingField,
                      put = __cordl_internal_set__blockLevel_k__BackingField)) ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender* _blockLevel_k__BackingField;

  /// @brief Field <hmdSession>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__hmdSession_k__BackingField,
                      put = __cordl_internal_set__hmdSession_k__BackingField)) ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender* _hmdSession_k__BackingField;

  __declspec(property(get = get_beatmapAttempt)) ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender* beatmapAttempt;

  __declspec(property(get = get_blockLevel)) ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender* blockLevel;

  __declspec(property(get = get_hmdSession)) ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender* hmdSession;

  /// @brief Convert operator to "::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher"
  constexpr operator ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*() noexcept;

  /// @brief Method InitializeAsync, addr 0x31ceb24, size 0x94, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* InitializeAsync();

  static inline ::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher* New_ctor();

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender* const& __cordl_internal_get__beatmapAttempt_k__BackingField() const;

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*& __cordl_internal_get__beatmapAttempt_k__BackingField();

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender* const& __cordl_internal_get__blockLevel_k__BackingField() const;

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*& __cordl_internal_get__blockLevel_k__BackingField();

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender* const& __cordl_internal_get__hmdSession_k__BackingField() const;

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*& __cordl_internal_get__hmdSession_k__BackingField();

  constexpr void __cordl_internal_set__beatmapAttempt_k__BackingField(::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender* value);

  constexpr void __cordl_internal_set__blockLevel_k__BackingField(::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender* value);

  constexpr void __cordl_internal_set__hmdSession_k__BackingField(::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender* value);

  /// @brief Method .ctor, addr 0x31cebb8, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_beatmapAttempt, addr 0x31ceb0c, size 0x8, virtual true, abstract: false, final true
  inline ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender* get_beatmapAttempt();

  /// @brief Method get_blockLevel, addr 0x31ceb14, size 0x8, virtual true, abstract: false, final true
  inline ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender* get_blockLevel();

  /// @brief Method get_hmdSession, addr 0x31ceb1c, size 0x8, virtual true, abstract: false, final true
  inline ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender* get_hmdSession();

  /// @brief Convert to "::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher"
  constexpr ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* i___BeatSaber__Analytics__Gameplay__IGameplayEventsDispatcher() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoopGameplayEventsDispatcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoopGameplayEventsDispatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoopGameplayEventsDispatcher(NoopGameplayEventsDispatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoopGameplayEventsDispatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoopGameplayEventsDispatcher(NoopGameplayEventsDispatcher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22087 };

  /// @brief Field <beatmapAttempt>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender* ____beatmapAttempt_k__BackingField;

  /// @brief Field <blockLevel>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender* ____blockLevel_k__BackingField;

  /// @brief Field <hmdSession>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender* ____hmdSession_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher, ____beatmapAttempt_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher, ____blockLevel_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher, ____hmdSession_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher, 0x28>, "Size mismatch!");

} // namespace BeatSaber::Analytics::Gameplay
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher*, "BeatSaber.Analytics.Gameplay", "NoopGameplayEventsDispatcher");
