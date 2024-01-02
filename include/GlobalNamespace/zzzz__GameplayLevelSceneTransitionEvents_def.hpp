#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GameplayLevelSceneTransitionEvents)
namespace System {
class Action;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MultiplayerResultsData;
}
namespace GlobalNamespace {
class MissionCompletionResults;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6064))
// CS Name: ::GameplayLevelSceneTransitionEvents*
class CORDL_TYPE GameplayLevelSceneTransitionEvents : public ::System::Object {
public:
  // Declarations
  /// @brief Field _standardLevelScenesTransitionSetupData, offset 0x10, size 0x8
  __declspec(property(get = __get__standardLevelScenesTransitionSetupData,
                      put = __set__standardLevelScenesTransitionSetupData))::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* _standardLevelScenesTransitionSetupData;

  /// @brief Field _missionLevelScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __get__missionLevelScenesTransitionSetupData,
                      put = __set__missionLevelScenesTransitionSetupData))::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* _missionLevelScenesTransitionSetupData;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset 0x20, size 0x8
  __declspec(property(get = __get__multiplayerLevelScenesTransitionSetupData,
                      put = __set__multiplayerLevelScenesTransitionSetupData))::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* _multiplayerLevelScenesTransitionSetupData;

  /// @brief Field anyGameplayLevelDidFinishEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_anyGameplayLevelDidFinishEvent, put = __set_anyGameplayLevelDidFinishEvent))::System::Action* anyGameplayLevelDidFinishEvent;

  constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*& __get__standardLevelScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*> const& __get__standardLevelScenesTransitionSetupData() const;

  constexpr void __set__standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*& __get__missionLevelScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*> const& __get__missionLevelScenesTransitionSetupData() const;

  constexpr void __set__missionLevelScenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*& __get__multiplayerLevelScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*> const& __get__multiplayerLevelScenesTransitionSetupData() const;

  constexpr void __set__multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* value);

  constexpr ::System::Action*& __get_anyGameplayLevelDidFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_anyGameplayLevelDidFinishEvent() const;

  constexpr void __set_anyGameplayLevelDidFinishEvent(::System::Action* value);

  /// @brief Method add_anyGameplayLevelDidFinishEvent, addr 0x231d424, size 0x9c, virtual false, abstract: false, final false
  inline void add_anyGameplayLevelDidFinishEvent(::System::Action* value);

  /// @brief Method remove_anyGameplayLevelDidFinishEvent, addr 0x231d4c0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_anyGameplayLevelDidFinishEvent(::System::Action* value);

  static inline ::GlobalNamespace::GameplayLevelSceneTransitionEvents* New_ctor(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData,
                                                                                ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData,
                                                                                ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData);

  /// @brief Method .ctor, addr 0x231d55c, size 0x16c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData,
                    ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData,
                    ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData);

  /// @brief Method Finalize, addr 0x231d8d8, size 0x1e4, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method HandleStandardLevelDidFinish, addr 0x231dccc, size 0x1c, virtual false, abstract: false, final false
  inline void HandleStandardLevelDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData,
                                           ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method HandleMultiplayerLevelDidFinish, addr 0x231dd04, size 0x1c, virtual false, abstract: false, final false
  inline void HandleMultiplayerLevelDidFinish(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData,
                                              ::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData);

  /// @brief Method HandleMissionLevelDidFinish, addr 0x231dd20, size 0x1c, virtual false, abstract: false, final false
  inline void HandleMissionLevelDidFinish(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData,
                                          ::GlobalNamespace::MissionCompletionResults* missionCompletionResults);

  /// @brief Method InvokeAnyGameplayLevelDidFinish, addr 0x231dce8, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeAnyGameplayLevelDidFinish();

  // Ctor Parameters [CppParam { name: "", ty: "GameplayLevelSceneTransitionEvents", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayLevelSceneTransitionEvents(GameplayLevelSceneTransitionEvents&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayLevelSceneTransitionEvents", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayLevelSceneTransitionEvents(GameplayLevelSceneTransitionEvents const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayLevelSceneTransitionEvents();

public:
  /// @brief Field _standardLevelScenesTransitionSetupData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* ____standardLevelScenesTransitionSetupData;

  /// @brief Field _missionLevelScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* ____missionLevelScenesTransitionSetupData;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* ____multiplayerLevelScenesTransitionSetupData;

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
