#pragma once
// IWYU pragma private; include "GlobalNamespace\GameplayLevelSceneTransitionEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GameplayLevelSceneTransitionEvents)
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class MissionCompletionResults;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupData;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupData;
}
namespace GlobalNamespace {
class MultiplayerResultsData;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupData;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayLevelSceneTransitionEvents;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameplayLevelSceneTransitionEvents*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameplayLevelSceneTransitionEvents*, "", "GameplayLevelSceneTransitionEvents");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayLevelSceneTransitionEvents
class CORDL_TYPE GameplayLevelSceneTransitionEvents : public ::System::Object {
public:
  // Declarations
  /// @brief Field _missionLevelScenesTransitionSetupData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__missionLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__missionLevelScenesTransitionSetupData)) ::GlobalNamespace::MissionLevelScenesTransitionSetupData* _missionLevelScenesTransitionSetupData;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__multiplayerLevelScenesTransitionSetupData)) ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* _multiplayerLevelScenesTransitionSetupData;

  /// @brief Field _standardLevelScenesTransitionSetupData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__standardLevelScenesTransitionSetupData)) ::GlobalNamespace::StandardLevelScenesTransitionSetupData* _standardLevelScenesTransitionSetupData;

  /// @brief Field anyGameplayLevelDidFinishEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_anyGameplayLevelDidFinishEvent, put = __cordl_internal_set_anyGameplayLevelDidFinishEvent)) ::System::Action* anyGameplayLevelDidFinishEvent;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x590e770, size 0x1b0, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandleMissionLevelDidFinish, addr 0x590ebd0, size 0x1c, virtual false, abstract: false, final false
  inline void HandleMissionLevelDidFinish(::GlobalNamespace::MissionLevelScenesTransitionSetupData* missionLevelScenesTransitionSetupData,
                                          ::GlobalNamespace::MissionCompletionResults* missionCompletionResults);

  /// @brief Method HandleMultiplayerLevelDidDisconnect, addr 0x590ebb4, size 0x1c, virtual false, abstract: false, final false
  inline void HandleMultiplayerLevelDidDisconnect(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* multiplayerLevelScenesTransitionSetupData,
                                                  ::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method HandleMultiplayerLevelDidFinish, addr 0x590eb98, size 0x1c, virtual false, abstract: false, final false
  inline void HandleMultiplayerLevelDidFinish(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* multiplayerLevelScenesTransitionSetupData,
                                              ::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData);

  /// @brief Method HandleStandardLevelDidFinish, addr 0x590eb60, size 0x1c, virtual false, abstract: false, final false
  inline void HandleStandardLevelDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupData* standardLevelScenesTransitionSetupData,
                                           ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method InvokeAnyGameplayLevelDidFinish, addr 0x590eb7c, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeAnyGameplayLevelDidFinish();

  static inline ::GlobalNamespace::GameplayLevelSceneTransitionEvents* New_ctor(::GlobalNamespace::StandardLevelScenesTransitionSetupData* standardLevelScenesTransitionSetupData,
                                                                                ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* multiplayerLevelScenesTransitionSetupData,
                                                                                ::GlobalNamespace::MissionLevelScenesTransitionSetupData* missionLevelScenesTransitionSetupData);

  constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupData* const& __cordl_internal_get__missionLevelScenesTransitionSetupData() const;

  constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupData*& __cordl_internal_get__missionLevelScenesTransitionSetupData();

  constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* const& __cordl_internal_get__multiplayerLevelScenesTransitionSetupData() const;

  constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*& __cordl_internal_get__multiplayerLevelScenesTransitionSetupData();

  constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData* const& __cordl_internal_get__standardLevelScenesTransitionSetupData() const;

  constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData*& __cordl_internal_get__standardLevelScenesTransitionSetupData();

  constexpr ::System::Action* const& __cordl_internal_get_anyGameplayLevelDidFinishEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_anyGameplayLevelDidFinishEvent();

  constexpr void __cordl_internal_set__missionLevelScenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupData* value);

  constexpr void __cordl_internal_set__multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* value);

  constexpr void __cordl_internal_set__standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupData* value);

  constexpr void __cordl_internal_set_anyGameplayLevelDidFinishEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x590e364, size 0x1cc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::StandardLevelScenesTransitionSetupData* standardLevelScenesTransitionSetupData,
                    ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* multiplayerLevelScenesTransitionSetupData,
                    ::GlobalNamespace::MissionLevelScenesTransitionSetupData* missionLevelScenesTransitionSetupData);

  /// @brief Method add_anyGameplayLevelDidFinishEvent, addr 0x590e20c, size 0xac, virtual false, abstract: false, final false
  inline void add_anyGameplayLevelDidFinishEvent(::System::Action* value);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_anyGameplayLevelDidFinishEvent, addr 0x590e2b8, size 0xac, virtual false, abstract: false, final false
  inline void remove_anyGameplayLevelDidFinishEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayLevelSceneTransitionEvents();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayLevelSceneTransitionEvents", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayLevelSceneTransitionEvents(GameplayLevelSceneTransitionEvents&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayLevelSceneTransitionEvents", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayLevelSceneTransitionEvents(GameplayLevelSceneTransitionEvents const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6737 };

  /// @brief Field _standardLevelScenesTransitionSetupData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelScenesTransitionSetupData* ____standardLevelScenesTransitionSetupData;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* ____multiplayerLevelScenesTransitionSetupData;

  /// @brief Field _missionLevelScenesTransitionSetupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MissionLevelScenesTransitionSetupData* ____missionLevelScenesTransitionSetupData;

  /// @brief Field anyGameplayLevelDidFinishEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___anyGameplayLevelDidFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayLevelSceneTransitionEvents, ____standardLevelScenesTransitionSetupData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayLevelSceneTransitionEvents, ____multiplayerLevelScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayLevelSceneTransitionEvents, ____missionLevelScenesTransitionSetupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayLevelSceneTransitionEvents, ___anyGameplayLevelDidFinishEvent) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameplayLevelSceneTransitionEvents) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
