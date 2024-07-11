#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayLevelSceneTransitionEvents.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
class MissionLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MultiplayerResultsData;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayLevelSceneTransitionEvents;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayLevelSceneTransitionEvents);
// Type: ::GameplayLevelSceneTransitionEvents
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameplayLevelSceneTransitionEvents*
class CORDL_TYPE GameplayLevelSceneTransitionEvents : public ::System::Object {
public:
  // Declarations
  /// @brief Field _missionLevelScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__missionLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__missionLevelScenesTransitionSetupData))::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> _missionLevelScenesTransitionSetupData;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__multiplayerLevelScenesTransitionSetupData,
      put = __cordl_internal_set__multiplayerLevelScenesTransitionSetupData))::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> _multiplayerLevelScenesTransitionSetupData;

  /// @brief Field _standardLevelScenesTransitionSetupData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__standardLevelScenesTransitionSetupData))::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> _standardLevelScenesTransitionSetupData;

  /// @brief Field anyGameplayLevelDidFinishEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_anyGameplayLevelDidFinishEvent, put = __cordl_internal_set_anyGameplayLevelDidFinishEvent))::System::Action* anyGameplayLevelDidFinishEvent;

  /// @brief Method Finalize, addr 0x26d2bac, size 0x250, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method HandleMissionLevelDidFinish, addr 0x26d312c, size 0x1c, virtual false, abstract: false, final false
  inline void HandleMissionLevelDidFinish(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData,
                                          ::GlobalNamespace::MissionCompletionResults* missionCompletionResults);

  /// @brief Method HandleMultiplayerLevelDidDisconnect, addr 0x26d3110, size 0x1c, virtual false, abstract: false, final false
  inline void HandleMultiplayerLevelDidDisconnect(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData,
                                                  ::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method HandleMultiplayerLevelDidFinish, addr 0x26d30f4, size 0x1c, virtual false, abstract: false, final false
  inline void HandleMultiplayerLevelDidFinish(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData,
                                              ::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData);

  /// @brief Method HandleStandardLevelDidFinish, addr 0x26d30bc, size 0x1c, virtual false, abstract: false, final false
  inline void HandleStandardLevelDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData,
                                           ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method InvokeAnyGameplayLevelDidFinish, addr 0x26d30d8, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeAnyGameplayLevelDidFinish();

  static inline ::GlobalNamespace::GameplayLevelSceneTransitionEvents* New_ctor(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData,
                                                                                ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData,
                                                                                ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData);

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__missionLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>& __cordl_internal_get__missionLevelScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__multiplayerLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>& __cordl_internal_get__multiplayerLevelScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__standardLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>& __cordl_internal_get__standardLevelScenesTransitionSetupData();

  constexpr ::System::Action*& __cordl_internal_get_anyGameplayLevelDidFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_anyGameplayLevelDidFinishEvent() const;

  constexpr void __cordl_internal_set__missionLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__multiplayerLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__standardLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set_anyGameplayLevelDidFinishEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x26d2724, size 0x1c8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData,
                    ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData,
                    ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData);

  /// @brief Method add_anyGameplayLevelDidFinishEvent, addr 0x26c1c90, size 0x9c, virtual false, abstract: false, final false
  inline void add_anyGameplayLevelDidFinishEvent(::System::Action* value);

  /// @brief Method remove_anyGameplayLevelDidFinishEvent, addr 0x26c1f64, size 0x9c, virtual false, abstract: false, final false
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

  /// @brief Field _standardLevelScenesTransitionSetupData, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> ____standardLevelScenesTransitionSetupData;

  /// @brief Field _missionLevelScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> ____missionLevelScenesTransitionSetupData;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> ____multiplayerLevelScenesTransitionSetupData;

  /// @brief Field anyGameplayLevelDidFinishEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___anyGameplayLevelDidFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayLevelSceneTransitionEvents, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayLevelSceneTransitionEvents, ____standardLevelScenesTransitionSetupData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayLevelSceneTransitionEvents, ____missionLevelScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayLevelSceneTransitionEvents, ____multiplayerLevelScenesTransitionSetupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayLevelSceneTransitionEvents, ___anyGameplayLevelDidFinishEvent) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayLevelSceneTransitionEvents);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayLevelSceneTransitionEvents*, "", "GameplayLevelSceneTransitionEvents");
