#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionObjectiveCheckersManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MissionObjectiveCheckersManager)
namespace GlobalNamespace {
class ILevelEndActions;
}
namespace GlobalNamespace {
class MissionObjectiveChecker;
}
namespace GlobalNamespace {
class MissionObjectiveResult;
}
namespace GlobalNamespace {
class MissionObjectiveTypeSO;
}
namespace GlobalNamespace {
class MissionObjective;
}
namespace GlobalNamespace {
class __MissionObjectiveCheckersManager__InitData;
}
namespace System {
class Action;
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionObjectiveCheckersManager::InitData*
class CORDL_TYPE __MissionObjectiveCheckersManager__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field missionObjectives, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_missionObjectives,
                      put = __cordl_internal_set_missionObjectives)) ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>
      missionObjectives;

  static inline ::GlobalNamespace::__MissionObjectiveCheckersManager__InitData*
  New_ctor(::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> missionObjectives);

  constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> const& __cordl_internal_get_missionObjectives() const;

  constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>& __cordl_internal_get_missionObjectives();

  constexpr void __cordl_internal_set_missionObjectives(::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> value);

  /// @brief Method .ctor, addr 0x3b3940c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> missionObjectives);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionObjectiveCheckersManager__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MissionObjectiveCheckersManager__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionObjectiveCheckersManager__InitData(__MissionObjectiveCheckersManager__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionObjectiveCheckersManager__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionObjectiveCheckersManager__InitData(__MissionObjectiveCheckersManager__InitData const&) = delete;

  /// @brief Field missionObjectives, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> ___missionObjectives;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4452 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionObjectiveCheckersManager__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionObjectiveCheckersManager__InitData, ___missionObjectives) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MissionObjectiveCheckersManager
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionObjectiveCheckersManager*
class CORDL_TYPE MissionObjectiveCheckersManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__MissionObjectiveCheckersManager__InitData;

  /// @brief Field _activeMissionObjectiveCheckers, offset 0x50, size 0x8
  __declspec(property(
      get = __cordl_internal_get__activeMissionObjectiveCheckers,
      put = __cordl_internal_set__activeMissionObjectiveCheckers)) ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>, ::Array<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*>
      _activeMissionObjectiveCheckers;

  /// @brief Field _gameplayManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayManager, put = __cordl_internal_set__gameplayManager)) ::GlobalNamespace::ILevelEndActions* _gameplayManager;

  /// @brief Field _initData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::__MissionObjectiveCheckersManager__InitData* _initData;

  /// @brief Field _missionObjectiveCheckers, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__missionObjectiveCheckers,
      put = __cordl_internal_set__missionObjectiveCheckers)) ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>, ::Array<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*>
      _missionObjectiveCheckers;

  __declspec(property(get = get_activeMissionObjectiveCheckers)) ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>, ::Array<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*>
      activeMissionObjectiveCheckers;

  /// @brief Field objectiveDidFailEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_objectiveDidFailEvent, put = __cordl_internal_set_objectiveDidFailEvent)) ::System::Action* objectiveDidFailEvent;

  /// @brief Field objectiveWasClearedEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_objectiveWasClearedEvent, put = __cordl_internal_set_objectiveWasClearedEvent)) ::System::Action* objectiveWasClearedEvent;

  /// @brief Field objectivesListDidChangeEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_objectivesListDidChangeEvent, put = __cordl_internal_set_objectivesListDidChangeEvent)) ::System::Action* objectivesListDidChangeEvent;

  /// @brief Method GetMissionObjectiveChecker, addr 0x3b39210, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MissionObjectiveChecker> GetMissionObjectiveChecker(::GlobalNamespace::MissionObjectiveTypeSO* missionObjectiveType);

  /// @brief Method GetResults, addr 0x3b35b14, size 0x194, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*> GetResults();

  /// @brief Method HandleLevelFailed, addr 0x3b392d8, size 0x4, virtual false, abstract: false, final false
  inline void HandleLevelFailed();

  /// @brief Method HandleLevelFinished, addr 0x3b393b0, size 0x4, virtual false, abstract: false, final false
  inline void HandleLevelFinished();

  /// @brief Method HandleMissionObjectiveCheckerStatusDidChange, addr 0x3b391c4, size 0x4c, virtual false, abstract: false, final false
  inline void HandleMissionObjectiveCheckerStatusDidChange(::GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker);

  static inline ::GlobalNamespace::MissionObjectiveCheckersManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b3901c, size 0x1a8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3b38a54, size 0x5c8, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StopChecking, addr 0x3b392dc, size 0xd4, virtual false, abstract: false, final false
  inline void StopChecking();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>, ::Array<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*> const&
  __cordl_internal_get__activeMissionObjectiveCheckers() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>, ::Array<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*>& __cordl_internal_get__activeMissionObjectiveCheckers();

  constexpr ::GlobalNamespace::ILevelEndActions*& __cordl_internal_get__gameplayManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelEndActions*> const& __cordl_internal_get__gameplayManager() const;

  constexpr ::GlobalNamespace::__MissionObjectiveCheckersManager__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MissionObjectiveCheckersManager__InitData*> const& __cordl_internal_get__initData() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>, ::Array<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*> const&
  __cordl_internal_get__missionObjectiveCheckers() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>, ::Array<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*>& __cordl_internal_get__missionObjectiveCheckers();

  constexpr ::System::Action*& __cordl_internal_get_objectiveDidFailEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_objectiveDidFailEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_objectiveWasClearedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_objectiveWasClearedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_objectivesListDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_objectivesListDidChangeEvent() const;

  constexpr void
  __cordl_internal_set__activeMissionObjectiveCheckers(::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>, ::Array<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*> value);

  constexpr void __cordl_internal_set__gameplayManager(::GlobalNamespace::ILevelEndActions* value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__MissionObjectiveCheckersManager__InitData* value);

  constexpr void __cordl_internal_set__missionObjectiveCheckers(::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>, ::Array<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*> value);

  constexpr void __cordl_internal_set_objectiveDidFailEvent(::System::Action* value);

  constexpr void __cordl_internal_set_objectiveWasClearedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_objectivesListDidChangeEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3b393b4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_objectiveDidFailEvent, addr 0x3b2a180, size 0x9c, virtual false, abstract: false, final false
  inline void add_objectiveDidFailEvent(::System::Action* value);

  /// @brief Method add_objectiveWasClearedEvent, addr 0x3b38914, size 0x9c, virtual false, abstract: false, final false
  inline void add_objectiveWasClearedEvent(::System::Action* value);

  /// @brief Method add_objectivesListDidChangeEvent, addr 0x3b2d440, size 0x9c, virtual false, abstract: false, final false
  inline void add_objectivesListDidChangeEvent(::System::Action* value);

  /// @brief Method get_activeMissionObjectiveCheckers, addr 0x3b38a4c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>, ::Array<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*> get_activeMissionObjectiveCheckers();

  /// @brief Method remove_objectiveDidFailEvent, addr 0x3b29a04, size 0x9c, virtual false, abstract: false, final false
  inline void remove_objectiveDidFailEvent(::System::Action* value);

  /// @brief Method remove_objectiveWasClearedEvent, addr 0x3b389b0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_objectiveWasClearedEvent(::System::Action* value);

  /// @brief Method remove_objectivesListDidChangeEvent, addr 0x3b2d940, size 0x9c, virtual false, abstract: false, final false
  inline void remove_objectivesListDidChangeEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionObjectiveCheckersManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveCheckersManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionObjectiveCheckersManager(MissionObjectiveCheckersManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveCheckersManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionObjectiveCheckersManager(MissionObjectiveCheckersManager const&) = delete;

  /// @brief Field _missionObjectiveCheckers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>, ::Array<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*> ____missionObjectiveCheckers;

  /// @brief Field _initData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__MissionObjectiveCheckersManager__InitData* ____initData;

  /// @brief Field _gameplayManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ILevelEndActions* ____gameplayManager;

  /// @brief Field objectiveDidFailEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___objectiveDidFailEvent;

  /// @brief Field objectiveWasClearedEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___objectiveWasClearedEvent;

  /// @brief Field objectivesListDidChangeEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___objectivesListDidChangeEvent;

  /// @brief Field _activeMissionObjectiveCheckers, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>, ::Array<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*> ____activeMissionObjectiveCheckers;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4453 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionObjectiveCheckersManager, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveCheckersManager, ____missionObjectiveCheckers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveCheckersManager, ____initData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveCheckersManager, ____gameplayManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveCheckersManager, ___objectiveDidFailEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveCheckersManager, ___objectiveWasClearedEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveCheckersManager, ___objectivesListDidChangeEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveCheckersManager, ____activeMissionObjectiveCheckers) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionObjectiveCheckersManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionObjectiveCheckersManager*, "", "MissionObjectiveCheckersManager");
NEED_NO_BOX(::GlobalNamespace::__MissionObjectiveCheckersManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionObjectiveCheckersManager__InitData*, "", "MissionObjectiveCheckersManager/InitData");
