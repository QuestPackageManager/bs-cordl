#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MissionObjectiveCheckersManager)
namespace GlobalNamespace {
class __MissionObjectiveCheckersManager__InitData;
}
namespace GlobalNamespace {
class ILevelEndActions;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class MissionObjectiveChecker;
}
namespace GlobalNamespace {
class MissionObjectiveTypeSO;
}
namespace GlobalNamespace {
class MissionObjectiveResult;
}
namespace GlobalNamespace {
class MissionObjective;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionObjectiveCheckersManager;
}
namespace GlobalNamespace {
class __MissionObjectiveCheckersManager__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionObjectiveCheckersManager);
MARK_REF_PTR_T(::GlobalNamespace::__MissionObjectiveCheckersManager__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5094))
// CS Name: ::MissionObjectiveCheckersManager::InitData*
class CORDL_TYPE __MissionObjectiveCheckersManager__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field missionObjectives, offset 0x10, size 0x8
  __declspec(property(get = __get_missionObjectives, put = __set_missionObjectives))::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> missionObjectives;

  constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>& __get_missionObjectives();

  constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> const& __get_missionObjectives() const;

  constexpr void __set_missionObjectives(::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> value);

  static inline ::GlobalNamespace::__MissionObjectiveCheckersManager__InitData*
  New_ctor(::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> missionObjectives);

  /// @brief Method .ctor addr 0x23cd16c size 0x28 virtual false final false
  inline void _ctor(::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> missionObjectives);

  // Ctor Parameters [CppParam { name: "", ty: "__MissionObjectiveCheckersManager__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionObjectiveCheckersManager__InitData(__MissionObjectiveCheckersManager__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionObjectiveCheckersManager__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionObjectiveCheckersManager__InitData(__MissionObjectiveCheckersManager__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionObjectiveCheckersManager__InitData();

public:
  /// @brief Field missionObjectives, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> ___missionObjectives;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionObjectiveCheckersManager__InitData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MissionObjectiveCheckersManager
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5095))
// CS Name: ::MissionObjectiveCheckersManager*
class CORDL_TYPE MissionObjectiveCheckersManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__MissionObjectiveCheckersManager__InitData;

  /// @brief Field _missionObjectiveCheckers, offset 0x18, size 0x8
  __declspec(property(get = __get__missionObjectiveCheckers,
                      put = __set__missionObjectiveCheckers))::ArrayW<::GlobalNamespace::MissionObjectiveChecker*, ::Array<::GlobalNamespace::MissionObjectiveChecker*>*> _missionObjectiveCheckers;

  /// @brief Field _initData, offset 0x20, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__MissionObjectiveCheckersManager__InitData* _initData;

  /// @brief Field _gameplayManager, offset 0x28, size 0x8
  __declspec(property(get = __get__gameplayManager, put = __set__gameplayManager))::GlobalNamespace::ILevelEndActions* _gameplayManager;

  /// @brief Field objectiveDidFailEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_objectiveDidFailEvent, put = __set_objectiveDidFailEvent))::System::Action* objectiveDidFailEvent;

  /// @brief Field objectiveWasClearedEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_objectiveWasClearedEvent, put = __set_objectiveWasClearedEvent))::System::Action* objectiveWasClearedEvent;

  /// @brief Field objectivesListDidChangeEvent, offset 0x40, size 0x8
  __declspec(property(get = __get_objectivesListDidChangeEvent, put = __set_objectivesListDidChangeEvent))::System::Action* objectivesListDidChangeEvent;

  /// @brief Field _activeMissionObjectiveCheckers, offset 0x48, size 0x8
  __declspec(property(
      get = __get__activeMissionObjectiveCheckers,
      put = __set__activeMissionObjectiveCheckers))::ArrayW<::GlobalNamespace::MissionObjectiveChecker*, ::Array<::GlobalNamespace::MissionObjectiveChecker*>*> _activeMissionObjectiveCheckers;

  __declspec(
      property(get = get_activeMissionObjectiveCheckers))::ArrayW<::GlobalNamespace::MissionObjectiveChecker*, ::Array<::GlobalNamespace::MissionObjectiveChecker*>*> activeMissionObjectiveCheckers;

  constexpr ::ArrayW<::GlobalNamespace::MissionObjectiveChecker*, ::Array<::GlobalNamespace::MissionObjectiveChecker*>*>& __get__missionObjectiveCheckers();

  constexpr ::ArrayW<::GlobalNamespace::MissionObjectiveChecker*, ::Array<::GlobalNamespace::MissionObjectiveChecker*>*> const& __get__missionObjectiveCheckers() const;

  constexpr void __set__missionObjectiveCheckers(::ArrayW<::GlobalNamespace::MissionObjectiveChecker*, ::Array<::GlobalNamespace::MissionObjectiveChecker*>*> value);

  constexpr ::GlobalNamespace::__MissionObjectiveCheckersManager__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MissionObjectiveCheckersManager__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__MissionObjectiveCheckersManager__InitData* value);

  constexpr ::GlobalNamespace::ILevelEndActions*& __get__gameplayManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelEndActions*> const& __get__gameplayManager() const;

  constexpr void __set__gameplayManager(::GlobalNamespace::ILevelEndActions* value);

  constexpr ::System::Action*& __get_objectiveDidFailEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_objectiveDidFailEvent() const;

  constexpr void __set_objectiveDidFailEvent(::System::Action* value);

  constexpr ::System::Action*& __get_objectiveWasClearedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_objectiveWasClearedEvent() const;

  constexpr void __set_objectiveWasClearedEvent(::System::Action* value);

  constexpr ::System::Action*& __get_objectivesListDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_objectivesListDidChangeEvent() const;

  constexpr void __set_objectivesListDidChangeEvent(::System::Action* value);

  constexpr ::ArrayW<::GlobalNamespace::MissionObjectiveChecker*, ::Array<::GlobalNamespace::MissionObjectiveChecker*>*>& __get__activeMissionObjectiveCheckers();

  constexpr ::ArrayW<::GlobalNamespace::MissionObjectiveChecker*, ::Array<::GlobalNamespace::MissionObjectiveChecker*>*> const& __get__activeMissionObjectiveCheckers() const;

  constexpr void __set__activeMissionObjectiveCheckers(::ArrayW<::GlobalNamespace::MissionObjectiveChecker*, ::Array<::GlobalNamespace::MissionObjectiveChecker*>*> value);

  /// @brief Method add_objectiveDidFailEvent addr 0x23cc400 size 0x9c virtual false final false
  inline void add_objectiveDidFailEvent(::System::Action* value);

  /// @brief Method remove_objectiveDidFailEvent addr 0x23cc49c size 0x9c virtual false final false
  inline void remove_objectiveDidFailEvent(::System::Action* value);

  /// @brief Method add_objectiveWasClearedEvent addr 0x23cc538 size 0x9c virtual false final false
  inline void add_objectiveWasClearedEvent(::System::Action* value);

  /// @brief Method remove_objectiveWasClearedEvent addr 0x23cc5d4 size 0x9c virtual false final false
  inline void remove_objectiveWasClearedEvent(::System::Action* value);

  /// @brief Method add_objectivesListDidChangeEvent addr 0x23cc670 size 0x9c virtual false final false
  inline void add_objectivesListDidChangeEvent(::System::Action* value);

  /// @brief Method remove_objectivesListDidChangeEvent addr 0x23cc70c size 0x9c virtual false final false
  inline void remove_objectivesListDidChangeEvent(::System::Action* value);

  /// @brief Method get_activeMissionObjectiveCheckers addr 0x23cc7a8 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::MissionObjectiveChecker*, ::Array<::GlobalNamespace::MissionObjectiveChecker*>*> get_activeMissionObjectiveCheckers();

  /// @brief Method Start addr 0x23cc7b0 size 0x5cc virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x23ccd7c size 0x1a4 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleMissionObjectiveCheckerStatusDidChange addr 0x23ccf20 size 0x4c virtual false final false
  inline void HandleMissionObjectiveCheckerStatusDidChange(::GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker);

  /// @brief Method GetMissionObjectiveChecker addr 0x23ccf6c size 0xc8 virtual false final false
  inline ::GlobalNamespace::MissionObjectiveChecker* GetMissionObjectiveChecker(::GlobalNamespace::MissionObjectiveTypeSO* missionObjectiveType);

  /// @brief Method GetResults addr 0x23c95c4 size 0x194 virtual false final false
  inline ::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*> GetResults();

  /// @brief Method HandleLevelFailed addr 0x23cd034 size 0x4 virtual false final false
  inline void HandleLevelFailed();

  /// @brief Method HandleLevelFinished addr 0x23cd110 size 0x4 virtual false final false
  inline void HandleLevelFinished();

  /// @brief Method StopChecking addr 0x23cd038 size 0xd8 virtual false final false
  inline void StopChecking();

  static inline ::GlobalNamespace::MissionObjectiveCheckersManager* New_ctor();

  /// @brief Method .ctor addr 0x23cd114 size 0x58 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveCheckersManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionObjectiveCheckersManager(MissionObjectiveCheckersManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveCheckersManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionObjectiveCheckersManager(MissionObjectiveCheckersManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionObjectiveCheckersManager();

public:
  /// @brief Field _missionObjectiveCheckers, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MissionObjectiveChecker*, ::Array<::GlobalNamespace::MissionObjectiveChecker*>*> ____missionObjectiveCheckers;

  /// @brief Field _initData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__MissionObjectiveCheckersManager__InitData* ____initData;

  /// @brief Field _gameplayManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ILevelEndActions* ____gameplayManager;

  /// @brief Field objectiveDidFailEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___objectiveDidFailEvent;

  /// @brief Field objectiveWasClearedEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___objectiveWasClearedEvent;

  /// @brief Field objectivesListDidChangeEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___objectivesListDidChangeEvent;

  /// @brief Field _activeMissionObjectiveCheckers, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MissionObjectiveChecker*, ::Array<::GlobalNamespace::MissionObjectiveChecker*>*> ____activeMissionObjectiveCheckers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionObjectiveCheckersManager, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionObjectiveCheckersManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionObjectiveCheckersManager*, "", "MissionObjectiveCheckersManager");
NEED_NO_BOX(::GlobalNamespace::__MissionObjectiveCheckersManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionObjectiveCheckersManager__InitData*, "", "MissionObjectiveCheckersManager/InitData");
