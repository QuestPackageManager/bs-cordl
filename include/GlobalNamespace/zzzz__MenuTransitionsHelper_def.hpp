#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__TutorialScenesTransitionSetupDataSO_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MenuTransitionsHelper)
namespace GlobalNamespace {
class MissionCompletionResults;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class __MenuTransitionsHelper____c__DisplayClass31_0;
}
namespace GlobalNamespace {
class __MenuTransitionsHelper____c;
}
namespace GlobalNamespace {
class BeatmapEditorScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MissionObjective;
}
namespace GlobalNamespace {
class __MenuTransitionsHelper____c__DisplayClass36_0;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class PracticeSettings;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class OverrideEnvironmentSettings;
}
namespace GlobalNamespace {
class AppInitScenesTransitionSetupDataContainerSO;
}
namespace BeatmapEditor3D {
class BeatmapEditorStandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class __MenuTransitionsHelper____c__DisplayClass29_0;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class BeatmapDataCache;
}
namespace GlobalNamespace {
struct __TutorialScenesTransitionSetupDataSO__TutorialEndStateType;
}
namespace GlobalNamespace {
class __MenuTransitionsHelper____c__DisplayClass30_0;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class __MenuTransitionsHelper____c__DisplayClass32_0;
}
namespace GlobalNamespace {
class __MenuTransitionsHelper____c__DisplayClass33_0;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class CreditsScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MultiplayerResultsData;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class LevelScenesTransitionSetupDataSO;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
class TutorialScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
class __MenuTransitionsHelper____c;
}
namespace GlobalNamespace {
class __MenuTransitionsHelper____c__DisplayClass29_0;
}
namespace GlobalNamespace {
class __MenuTransitionsHelper____c__DisplayClass30_0;
}
namespace GlobalNamespace {
class __MenuTransitionsHelper____c__DisplayClass31_0;
}
namespace GlobalNamespace {
class __MenuTransitionsHelper____c__DisplayClass32_0;
}
namespace GlobalNamespace {
class __MenuTransitionsHelper____c__DisplayClass33_0;
}
namespace GlobalNamespace {
class __MenuTransitionsHelper____c__DisplayClass36_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MenuTransitionsHelper);
MARK_REF_PTR_T(::GlobalNamespace::__MenuTransitionsHelper____c);
MARK_REF_PTR_T(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0);
MARK_REF_PTR_T(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0);
MARK_REF_PTR_T(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0);
MARK_REF_PTR_T(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0);
MARK_REF_PTR_T(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0);
MARK_REF_PTR_T(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6127))
// CS Name: ::MenuTransitionsHelper::<>c*
class CORDL_TYPE __MenuTransitionsHelper____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__MenuTransitionsHelper____c* __9;

  /// @brief Field <>9__26_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__26_0, put = setStaticF___9__26_0))::System::Action* __9__26_0;

  static inline void setStaticF___9(::GlobalNamespace::__MenuTransitionsHelper____c* value);

  static inline ::GlobalNamespace::__MenuTransitionsHelper____c* getStaticF___9();

  static inline void setStaticF___9__26_0(::System::Action* value);

  static inline ::System::Action* getStaticF___9__26_0();

  static inline ::GlobalNamespace::__MenuTransitionsHelper____c* New_ctor();

  /// @brief Method .ctor addr 0x21e5610 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <StartBeatmapEditor>b__26_0 addr 0x21e5618 size 0x24 virtual false final false
  inline void _StartBeatmapEditor_b__26_0();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuTransitionsHelper____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuTransitionsHelper____c(__MenuTransitionsHelper____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuTransitionsHelper____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuTransitionsHelper____c(__MenuTransitionsHelper____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuTransitionsHelper____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuTransitionsHelper____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass29_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6128))
// CS Name: ::MenuTransitionsHelper::<>c__DisplayClass29_0*
class CORDL_TYPE __MenuTransitionsHelper____c__DisplayClass29_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MenuTransitionsHelper* __4__this;

  /// @brief Field standardLevelScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __get_standardLevelScenesTransitionSetupData,
                      put = __set_standardLevelScenesTransitionSetupData))::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData;

  /// @brief Field levelCompletionResults, offset 0x20, size 0x8
  __declspec(property(get = __get_levelCompletionResults, put = __set_levelCompletionResults))::GlobalNamespace::LevelCompletionResults* levelCompletionResults;

  constexpr ::GlobalNamespace::MenuTransitionsHelper*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MenuTransitionsHelper* value);

  constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*& __get_standardLevelScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*> const& __get_standardLevelScenesTransitionSetupData() const;

  constexpr void __set_standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::LevelCompletionResults*& __get_levelCompletionResults();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCompletionResults*> const& __get_levelCompletionResults() const;

  constexpr void __set_levelCompletionResults(::GlobalNamespace::LevelCompletionResults* value);

  static inline ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0* New_ctor();

  /// @brief Method .ctor addr 0x21e4be0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <HandleMainGameSceneDidFinish>b__0 addr 0x21e563c size 0x38 virtual false final false
  inline void _HandleMainGameSceneDidFinish_b__0(::Zenject::DiContainer* container);

  // Ctor Parameters [CppParam { name: "", ty: "__MenuTransitionsHelper____c__DisplayClass29_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuTransitionsHelper____c__DisplayClass29_0(__MenuTransitionsHelper____c__DisplayClass29_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuTransitionsHelper____c__DisplayClass29_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuTransitionsHelper____c__DisplayClass29_0(__MenuTransitionsHelper____c__DisplayClass29_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuTransitionsHelper____c__DisplayClass29_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::MenuTransitionsHelper* _____4__this;

  /// @brief Field standardLevelScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* ___standardLevelScenesTransitionSetupData;

  /// @brief Field levelCompletionResults, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LevelCompletionResults* ___levelCompletionResults;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0, ___standardLevelScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0, ___levelCompletionResults) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass30_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6129))
// CS Name: ::MenuTransitionsHelper::<>c__DisplayClass30_0*
class CORDL_TYPE __MenuTransitionsHelper____c__DisplayClass30_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MenuTransitionsHelper* __4__this;

  /// @brief Field multiplayerLevelScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __get_multiplayerLevelScenesTransitionSetupData,
                      put = __set_multiplayerLevelScenesTransitionSetupData))::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData;

  /// @brief Field multiplayerResultsData, offset 0x20, size 0x8
  __declspec(property(get = __get_multiplayerResultsData, put = __set_multiplayerResultsData))::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData;

  constexpr ::GlobalNamespace::MenuTransitionsHelper*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MenuTransitionsHelper* value);

  constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*& __get_multiplayerLevelScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*> const& __get_multiplayerLevelScenesTransitionSetupData() const;

  constexpr void __set_multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::MultiplayerResultsData*& __get_multiplayerResultsData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerResultsData*> const& __get_multiplayerResultsData() const;

  constexpr void __set_multiplayerResultsData(::GlobalNamespace::MultiplayerResultsData* value);

  static inline ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0* New_ctor();

  /// @brief Method .ctor addr 0x21e4db8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <HandleMultiplayerLevelDidFinish>b__0 addr 0x21e5674 size 0x38 virtual false final false
  inline void _HandleMultiplayerLevelDidFinish_b__0(::Zenject::DiContainer* container);

  // Ctor Parameters [CppParam { name: "", ty: "__MenuTransitionsHelper____c__DisplayClass30_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuTransitionsHelper____c__DisplayClass30_0(__MenuTransitionsHelper____c__DisplayClass30_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuTransitionsHelper____c__DisplayClass30_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuTransitionsHelper____c__DisplayClass30_0(__MenuTransitionsHelper____c__DisplayClass30_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuTransitionsHelper____c__DisplayClass30_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::MenuTransitionsHelper* _____4__this;

  /// @brief Field multiplayerLevelScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* ___multiplayerLevelScenesTransitionSetupData;

  /// @brief Field multiplayerResultsData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerResultsData* ___multiplayerResultsData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0, ___multiplayerLevelScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0, ___multiplayerResultsData) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass31_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12648)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6130))
// CS Name: ::MenuTransitionsHelper::<>c__DisplayClass31_0*
class CORDL_TYPE __MenuTransitionsHelper____c__DisplayClass31_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MenuTransitionsHelper* __4__this;

  /// @brief Field disconnectedReason, offset 0x18, size 0x4
  __declspec(property(get = __get_disconnectedReason, put = __set_disconnectedReason))::GlobalNamespace::DisconnectedReason disconnectedReason;

  constexpr ::GlobalNamespace::MenuTransitionsHelper*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MenuTransitionsHelper* value);

  constexpr ::GlobalNamespace::DisconnectedReason& __get_disconnectedReason();

  constexpr ::GlobalNamespace::DisconnectedReason const& __get_disconnectedReason() const;

  constexpr void __set_disconnectedReason(::GlobalNamespace::DisconnectedReason value);

  static inline ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0* New_ctor();

  /// @brief Method .ctor addr 0x21e4f48 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <HandleMultiplayerLevelDidDisconnect>b__0 addr 0x21e56ac size 0x38 virtual false final false
  inline void _HandleMultiplayerLevelDidDisconnect_b__0(::Zenject::DiContainer* container);

  // Ctor Parameters [CppParam { name: "", ty: "__MenuTransitionsHelper____c__DisplayClass31_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuTransitionsHelper____c__DisplayClass31_0(__MenuTransitionsHelper____c__DisplayClass31_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuTransitionsHelper____c__DisplayClass31_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuTransitionsHelper____c__DisplayClass31_0(__MenuTransitionsHelper____c__DisplayClass31_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuTransitionsHelper____c__DisplayClass31_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::MenuTransitionsHelper* _____4__this;

  /// @brief Field disconnectedReason, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::DisconnectedReason ___disconnectedReason;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0, ___disconnectedReason) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass32_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6131))
// CS Name: ::MenuTransitionsHelper::<>c__DisplayClass32_0*
class CORDL_TYPE __MenuTransitionsHelper____c__DisplayClass32_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MenuTransitionsHelper* __4__this;

  /// @brief Field missionLevelScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __get_missionLevelScenesTransitionSetupData,
                      put = __set_missionLevelScenesTransitionSetupData))::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData;

  /// @brief Field missionCompletionResults, offset 0x20, size 0x8
  __declspec(property(get = __get_missionCompletionResults, put = __set_missionCompletionResults))::GlobalNamespace::MissionCompletionResults* missionCompletionResults;

  constexpr ::GlobalNamespace::MenuTransitionsHelper*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MenuTransitionsHelper* value);

  constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*& __get_missionLevelScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*> const& __get_missionLevelScenesTransitionSetupData() const;

  constexpr void __set_missionLevelScenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::MissionCompletionResults*& __get_missionCompletionResults();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionCompletionResults*> const& __get_missionCompletionResults() const;

  constexpr void __set_missionCompletionResults(::GlobalNamespace::MissionCompletionResults* value);

  static inline ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0* New_ctor();

  /// @brief Method .ctor addr 0x21e5110 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <HandleMissionLevelSceneDidFinish>b__0 addr 0x21e56e4 size 0x38 virtual false final false
  inline void _HandleMissionLevelSceneDidFinish_b__0(::Zenject::DiContainer* container);

  // Ctor Parameters [CppParam { name: "", ty: "__MenuTransitionsHelper____c__DisplayClass32_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuTransitionsHelper____c__DisplayClass32_0(__MenuTransitionsHelper____c__DisplayClass32_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuTransitionsHelper____c__DisplayClass32_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuTransitionsHelper____c__DisplayClass32_0(__MenuTransitionsHelper____c__DisplayClass32_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuTransitionsHelper____c__DisplayClass32_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::MenuTransitionsHelper* _____4__this;

  /// @brief Field missionLevelScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* ___missionLevelScenesTransitionSetupData;

  /// @brief Field missionCompletionResults, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MissionCompletionResults* ___missionCompletionResults;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0, ___missionLevelScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0, ___missionCompletionResults) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass33_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(6140))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6132))
// CS Name: ::MenuTransitionsHelper::<>c__DisplayClass33_0*
class CORDL_TYPE __MenuTransitionsHelper____c__DisplayClass33_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field endState, offset 0x10, size 0x4
  __declspec(property(get = __get_endState, put = __set_endState))::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType endState;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MenuTransitionsHelper* __4__this;

  /// @brief Field tutorialSceneTransitionSetupData, offset 0x20, size 0x8
  __declspec(property(get = __get_tutorialSceneTransitionSetupData,
                      put = __set_tutorialSceneTransitionSetupData))::GlobalNamespace::TutorialScenesTransitionSetupDataSO* tutorialSceneTransitionSetupData;

  constexpr ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType& __get_endState();

  constexpr ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType const& __get_endState() const;

  constexpr void __set_endState(::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType value);

  constexpr ::GlobalNamespace::MenuTransitionsHelper*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MenuTransitionsHelper* value);

  constexpr ::GlobalNamespace::TutorialScenesTransitionSetupDataSO*& __get_tutorialSceneTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*> const& __get_tutorialSceneTransitionSetupData() const;

  constexpr void __set_tutorialSceneTransitionSetupData(::GlobalNamespace::TutorialScenesTransitionSetupDataSO* value);

  static inline ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0* New_ctor();

  /// @brief Method .ctor addr 0x21e525c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <HandleTutorialSceneDidFinish>b__0 addr 0x21e571c size 0x3c virtual false final false
  inline void _HandleTutorialSceneDidFinish_b__0(::Zenject::DiContainer* container);

  // Ctor Parameters [CppParam { name: "", ty: "__MenuTransitionsHelper____c__DisplayClass33_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuTransitionsHelper____c__DisplayClass33_0(__MenuTransitionsHelper____c__DisplayClass33_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuTransitionsHelper____c__DisplayClass33_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuTransitionsHelper____c__DisplayClass33_0(__MenuTransitionsHelper____c__DisplayClass33_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuTransitionsHelper____c__DisplayClass33_0();

public:
  /// @brief Field endState, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType ___endState;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MenuTransitionsHelper* _____4__this;

  /// @brief Field tutorialSceneTransitionSetupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::TutorialScenesTransitionSetupDataSO* ___tutorialSceneTransitionSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0, ___endState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0, ___tutorialSceneTransitionSetupData) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass36_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6133))
// CS Name: ::MenuTransitionsHelper::<>c__DisplayClass36_0*
class CORDL_TYPE __MenuTransitionsHelper____c__DisplayClass36_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MenuTransitionsHelper* __4__this;

  /// @brief Field beatmapEditorStandardLevelScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(
      get = __get_beatmapEditorStandardLevelScenesTransitionSetupData,
      put = __set_beatmapEditorStandardLevelScenesTransitionSetupData))::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO* beatmapEditorStandardLevelScenesTransitionSetupData;

  /// @brief Field levelCompletionResults, offset 0x20, size 0x8
  __declspec(property(get = __get_levelCompletionResults, put = __set_levelCompletionResults))::GlobalNamespace::LevelCompletionResults* levelCompletionResults;

  constexpr ::GlobalNamespace::MenuTransitionsHelper*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MenuTransitionsHelper* value);

  constexpr ::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*& __get_beatmapEditorStandardLevelScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*> const& __get_beatmapEditorStandardLevelScenesTransitionSetupData() const;

  constexpr void __set_beatmapEditorStandardLevelScenesTransitionSetupData(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::LevelCompletionResults*& __get_levelCompletionResults();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCompletionResults*> const& __get_levelCompletionResults() const;

  constexpr void __set_levelCompletionResults(::GlobalNamespace::LevelCompletionResults* value);

  static inline ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0* New_ctor();

  /// @brief Method .ctor addr 0x21e5580 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <HandleBeatmapEditorGameSceneDidFinish>b__0 addr 0x21e5758 size 0x30 virtual false final false
  inline void _HandleBeatmapEditorGameSceneDidFinish_b__0(::Zenject::DiContainer* container);

  // Ctor Parameters [CppParam { name: "", ty: "__MenuTransitionsHelper____c__DisplayClass36_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuTransitionsHelper____c__DisplayClass36_0(__MenuTransitionsHelper____c__DisplayClass36_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuTransitionsHelper____c__DisplayClass36_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuTransitionsHelper____c__DisplayClass36_0(__MenuTransitionsHelper____c__DisplayClass36_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuTransitionsHelper____c__DisplayClass36_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::MenuTransitionsHelper* _____4__this;

  /// @brief Field beatmapEditorStandardLevelScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO* ___beatmapEditorStandardLevelScenesTransitionSetupData;

  /// @brief Field levelCompletionResults, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LevelCompletionResults* ___levelCompletionResults;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0, ___beatmapEditorStandardLevelScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0, ___levelCompletionResults) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MenuTransitionsHelper
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6134))
// CS Name: ::MenuTransitionsHelper*
class CORDL_TYPE MenuTransitionsHelper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass36_0 = ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0;

  using __c__DisplayClass33_0 = ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0;

  using __c__DisplayClass32_0 = ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0;

  using __c__DisplayClass31_0 = ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0;

  using __c__DisplayClass30_0 = ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0;

  using __c__DisplayClass29_0 = ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0;

  using __c = ::GlobalNamespace::__MenuTransitionsHelper____c;

  /// @brief Field _appInitScenesTransitionSetupDataContainer, offset 0x18, size 0x8
  __declspec(property(get = __get__appInitScenesTransitionSetupDataContainer,
                      put = __set__appInitScenesTransitionSetupDataContainer))::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* _appInitScenesTransitionSetupDataContainer;

  /// @brief Field _standardLevelScenesTransitionSetupData, offset 0x20, size 0x8
  __declspec(property(get = __get__standardLevelScenesTransitionSetupData,
                      put = __set__standardLevelScenesTransitionSetupData))::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* _standardLevelScenesTransitionSetupData;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset 0x28, size 0x8
  __declspec(property(get = __get__multiplayerLevelScenesTransitionSetupData,
                      put = __set__multiplayerLevelScenesTransitionSetupData))::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* _multiplayerLevelScenesTransitionSetupData;

  /// @brief Field _missionLevelScenesTransitionSetupData, offset 0x30, size 0x8
  __declspec(property(get = __get__missionLevelScenesTransitionSetupData,
                      put = __set__missionLevelScenesTransitionSetupData))::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* _missionLevelScenesTransitionSetupData;

  /// @brief Field _tutorialScenesTransitionSetupData, offset 0x38, size 0x8
  __declspec(property(get = __get__tutorialScenesTransitionSetupData,
                      put = __set__tutorialScenesTransitionSetupData))::GlobalNamespace::TutorialScenesTransitionSetupDataSO* _tutorialScenesTransitionSetupData;

  /// @brief Field _creditsScenesTransitionSetupData, offset 0x40, size 0x8
  __declspec(property(get = __get__creditsScenesTransitionSetupData,
                      put = __set__creditsScenesTransitionSetupData))::GlobalNamespace::CreditsScenesTransitionSetupDataSO* _creditsScenesTransitionSetupData;

  /// @brief Field _beatmapEditorScenesTransitionSetupData, offset 0x48, size 0x8
  __declspec(property(get = __get__beatmapEditorScenesTransitionSetupData,
                      put = __set__beatmapEditorScenesTransitionSetupData))::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO* _beatmapEditorScenesTransitionSetupData;

  /// @brief Field _beatmapEditorStandardLevelScenesTransitionSetupData, offset 0x50, size 0x8
  __declspec(property(
      get = __get__beatmapEditorStandardLevelScenesTransitionSetupData,
      put = __set__beatmapEditorStandardLevelScenesTransitionSetupData))::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO* _beatmapEditorStandardLevelScenesTransitionSetupData;

  /// @brief Field _mainSettingsModel, offset 0x58, size 0x8
  __declspec(property(get = __get__mainSettingsModel, put = __set__mainSettingsModel))::GlobalNamespace::MainSettingsModelSO* _mainSettingsModel;

  /// @brief Field _gameScenesManager, offset 0x60, size 0x8
  __declspec(property(get = __get__gameScenesManager, put = __set__gameScenesManager))::GlobalNamespace::GameScenesManager* _gameScenesManager;

  /// @brief Field _beatmapDataCache, offset 0x68, size 0x8
  __declspec(property(get = __get__beatmapDataCache, put = __set__beatmapDataCache))::GlobalNamespace::BeatmapDataCache* _beatmapDataCache;

  /// @brief Field _standardLevelFinishedCallback, offset 0x70, size 0x8
  __declspec(property(get = __get__standardLevelFinishedCallback,
                      put = __set__standardLevelFinishedCallback))::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,
                                                                                     ::GlobalNamespace::LevelCompletionResults*>* _standardLevelFinishedCallback;

  /// @brief Field _standardLevelRestartedCallback, offset 0x78, size 0x8
  __declspec(property(get = __get__standardLevelRestartedCallback,
                      put = __set__standardLevelRestartedCallback))::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO*,
                                                                                      ::GlobalNamespace::LevelCompletionResults*>* _standardLevelRestartedCallback;

  /// @brief Field _multiplayerLevelFinishedCallback, offset 0x80, size 0x8
  __declspec(property(get = __get__multiplayerLevelFinishedCallback,
                      put = __set__multiplayerLevelFinishedCallback))::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,
                                                                                        ::GlobalNamespace::MultiplayerResultsData*>* _multiplayerLevelFinishedCallback;

  /// @brief Field _multiplayerDidDisconnectCallback, offset 0x88, size 0x8
  __declspec(property(get = __get__multiplayerDidDisconnectCallback,
                      put = __set__multiplayerDidDisconnectCallback))::System::Action_1<::GlobalNamespace::DisconnectedReason>* _multiplayerDidDisconnectCallback;

  /// @brief Field _missionLevelFinishedCallback, offset 0x90, size 0x8
  __declspec(property(get = __get__missionLevelFinishedCallback,
                      put = __set__missionLevelFinishedCallback))::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,
                                                                                    ::GlobalNamespace::MissionCompletionResults*>* _missionLevelFinishedCallback;

  /// @brief Field _missionLevelRestartedCallback, offset 0x98, size 0x8
  __declspec(property(get = __get__missionLevelRestartedCallback,
                      put = __set__missionLevelRestartedCallback))::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,
                                                                                     ::GlobalNamespace::MissionCompletionResults*>* _missionLevelRestartedCallback;

  /// @brief Field _beatmapEditorFinishedCallback, offset 0xa0, size 0x8
  __declspec(property(get = __get__beatmapEditorFinishedCallback, put = __set__beatmapEditorFinishedCallback))::System::Action* _beatmapEditorFinishedCallback;

  /// @brief Field _beatmapEditorGameplayLevelFinishedCallback, offset 0xa8, size 0x8
  __declspec(property(get = __get__beatmapEditorGameplayLevelFinishedCallback,
                      put = __set__beatmapEditorGameplayLevelFinishedCallback))::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*,
                                                                                                  ::GlobalNamespace::LevelCompletionResults*>* _beatmapEditorGameplayLevelFinishedCallback;

  constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*& __get__appInitScenesTransitionSetupDataContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*> const& __get__appInitScenesTransitionSetupDataContainer() const;

  constexpr void __set__appInitScenesTransitionSetupDataContainer(::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* value);

  constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*& __get__standardLevelScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*> const& __get__standardLevelScenesTransitionSetupData() const;

  constexpr void __set__standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*& __get__multiplayerLevelScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*> const& __get__multiplayerLevelScenesTransitionSetupData() const;

  constexpr void __set__multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*& __get__missionLevelScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*> const& __get__missionLevelScenesTransitionSetupData() const;

  constexpr void __set__missionLevelScenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::TutorialScenesTransitionSetupDataSO*& __get__tutorialScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*> const& __get__tutorialScenesTransitionSetupData() const;

  constexpr void __set__tutorialScenesTransitionSetupData(::GlobalNamespace::TutorialScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::CreditsScenesTransitionSetupDataSO*& __get__creditsScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*> const& __get__creditsScenesTransitionSetupData() const;

  constexpr void __set__creditsScenesTransitionSetupData(::GlobalNamespace::CreditsScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*& __get__beatmapEditorScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*> const& __get__beatmapEditorScenesTransitionSetupData() const;

  constexpr void __set__beatmapEditorScenesTransitionSetupData(::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO* value);

  constexpr ::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*& __get__beatmapEditorStandardLevelScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*> const& __get__beatmapEditorStandardLevelScenesTransitionSetupData() const;

  constexpr void __set__beatmapEditorStandardLevelScenesTransitionSetupData(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::MainSettingsModelSO*& __get__mainSettingsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> const& __get__mainSettingsModel() const;

  constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO* value);

  constexpr ::GlobalNamespace::GameScenesManager*& __get__gameScenesManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& __get__gameScenesManager() const;

  constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager* value);

  constexpr ::GlobalNamespace::BeatmapDataCache*& __get__beatmapDataCache();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCache*> const& __get__beatmapDataCache() const;

  constexpr void __set__beatmapDataCache(::GlobalNamespace::BeatmapDataCache* value);

  constexpr ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>*& __get__standardLevelFinishedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>*> const&
  __get__standardLevelFinishedCallback() const;

  constexpr void __set__standardLevelFinishedCallback(::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>* value);

  constexpr ::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>*& __get__standardLevelRestartedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>*> const&
  __get__standardLevelRestartedCallback() const;

  constexpr void __set__standardLevelRestartedCallback(::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>* value);

  constexpr ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MultiplayerResultsData*>*& __get__multiplayerLevelFinishedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MultiplayerResultsData*>*> const&
  __get__multiplayerLevelFinishedCallback() const;

  constexpr void __set__multiplayerLevelFinishedCallback(::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MultiplayerResultsData*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& __get__multiplayerDidDisconnectCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::DisconnectedReason>*> const& __get__multiplayerDidDisconnectCallback() const;

  constexpr void __set__multiplayerDidDisconnectCallback(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  constexpr ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MissionCompletionResults*>*& __get__missionLevelFinishedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MissionCompletionResults*>*> const&
  __get__missionLevelFinishedCallback() const;

  constexpr void __set__missionLevelFinishedCallback(::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MissionCompletionResults*>* value);

  constexpr ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MissionCompletionResults*>*& __get__missionLevelRestartedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MissionCompletionResults*>*> const&
  __get__missionLevelRestartedCallback() const;

  constexpr void __set__missionLevelRestartedCallback(::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MissionCompletionResults*>* value);

  constexpr ::System::Action*& __get__beatmapEditorFinishedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get__beatmapEditorFinishedCallback() const;

  constexpr void __set__beatmapEditorFinishedCallback(::System::Action* value);

  constexpr ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>*&
  __get__beatmapEditorGameplayLevelFinishedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>*> const&
  __get__beatmapEditorGameplayLevelFinishedCallback() const;

  constexpr void
  __set__beatmapEditorGameplayLevelFinishedCallback(::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>* value);

  /// @brief Method StartStandardLevel addr 0x21e2438 size 0x48 virtual false final false
  inline void StartStandardLevel(::StringW gameMode, ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                 ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings, ::GlobalNamespace::ColorScheme* overrideColorScheme,
                                 ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                 ::GlobalNamespace::PracticeSettings* practiceSettings, ::StringW backButtonText, bool useTestNoteCutSoundEffects, bool startPaused,
                                 ::System::Action* beforeSceneSwitchCallback,
                                 ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>* levelFinishedCallback,
                                 ::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>* levelRestartedCallback);

  /// @brief Method StartStandardLevel addr 0x21e2480 size 0x178 virtual false final false
  inline void StartStandardLevel(::StringW gameMode, ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                 ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings, ::GlobalNamespace::ColorScheme* overrideColorScheme,
                                 ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                 ::GlobalNamespace::PracticeSettings* practiceSettings, ::StringW backButtonText, bool useTestNoteCutSoundEffects, bool startPaused,
                                 ::System::Action* beforeSceneSwitchCallback, ::System::Action_1<::Zenject::DiContainer*>* afterSceneSwitchCallback,
                                 ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>* levelFinishedCallback,
                                 ::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>* levelRestartedCallback);

  /// @brief Method StartMissionLevel addr 0x21e2c00 size 0x180 virtual false final false
  inline void StartMissionLevel(::StringW missionId, ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                ::GlobalNamespace::ColorScheme* overrideColorScheme, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> missionObjectives,
                                ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::System::Action* beforeSceneSwitchCallback,
                                ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MissionCompletionResults*>* levelFinishedCallback,
                                ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MissionCompletionResults*>* levelRestartedCallback);

  /// @brief Method StartMultiplayerLevel addr 0x21e3294 size 0x3c virtual false final false
  inline void StartMultiplayerLevel(::StringW gameMode, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                    ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap,
                                    ::GlobalNamespace::ColorScheme* overrideColorScheme, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings, ::StringW backButtonText,
                                    bool useTestNoteCutSoundEffects, ::System::Action* beforeSceneSwitchCallback,
                                    ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MultiplayerResultsData*>* levelFinishedCallback,
                                    ::System::Action_1<::GlobalNamespace::DisconnectedReason>* didDisconnectCallback);

  /// @brief Method StartMultiplayerLevel addr 0x21e32d0 size 0x1f4 virtual false final false
  inline void StartMultiplayerLevel(::StringW gameMode, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                    ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap,
                                    ::GlobalNamespace::ColorScheme* overrideColorScheme, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings, ::StringW backButtonText,
                                    bool useTestNoteCutSoundEffects, ::System::Action* beforeSceneSwitchCallback, ::System::Action_1<::Zenject::DiContainer*>* afterSceneSwitchCallback,
                                    ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MultiplayerResultsData*>* levelFinishedCallback,
                                    ::System::Action_1<::GlobalNamespace::DisconnectedReason>* didDisconnectCallback);

  /// @brief Method StartTutorial addr 0x21e3998 size 0x108 virtual false final false
  inline void StartTutorial(::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::System::Action* beforeSceneSwitchCallback);

  /// @brief Method ShowCredits addr 0x21e3e84 size 0x100 virtual false final false
  inline void ShowCredits();

  /// @brief Method StartBeatmapEditor addr 0x21e3f84 size 0x1b4 virtual false final false
  inline void StartBeatmapEditor(::System::Action* beatmapEditorFinishedCallback);

  /// @brief Method StartBeatmapEditorStandardLevel addr 0x21e4138 size 0x150 virtual false final false
  inline void
  StartBeatmapEditorStandardLevel(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                  ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                  ::GlobalNamespace::PracticeSettings* practiceSettings, bool useFirstPersonFlyingController, ::System::Action* beforeSceneSwitchCallback,
                                  ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>* levelFinishedCallback);

  /// @brief Method RestartGame addr 0x21e49c8 size 0x64 virtual false final false
  inline void RestartGame(::System::Action_1<::Zenject::DiContainer*>* finishCallback);

  /// @brief Method HandleMainGameSceneDidFinish addr 0x21e4a2c size 0x1b4 virtual false final false
  inline void HandleMainGameSceneDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData,
                                           ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method HandleMultiplayerLevelDidFinish addr 0x21e4be8 size 0x1d0 virtual false final false
  inline void HandleMultiplayerLevelDidFinish(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData,
                                              ::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData);

  /// @brief Method HandleMultiplayerLevelDidDisconnect addr 0x21e4dc0 size 0x188 virtual false final false
  inline void HandleMultiplayerLevelDidDisconnect(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData,
                                                  ::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method HandleMissionLevelSceneDidFinish addr 0x21e4f50 size 0x1c0 virtual false final false
  inline void HandleMissionLevelSceneDidFinish(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData,
                                               ::GlobalNamespace::MissionCompletionResults* missionCompletionResults);

  /// @brief Method HandleTutorialSceneDidFinish addr 0x21e5118 size 0x144 virtual false final false
  inline void HandleTutorialSceneDidFinish(::GlobalNamespace::TutorialScenesTransitionSetupDataSO* tutorialSceneTransitionSetupData,
                                           ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType endState);

  /// @brief Method HandleCreditsSceneDidFinish addr 0x21e5264 size 0xb4 virtual false final false
  inline void HandleCreditsSceneDidFinish(::GlobalNamespace::CreditsScenesTransitionSetupDataSO* creditsSceneTransitionSetupData);

  /// @brief Method HandleBeatmapEditorSceneDidFinish addr 0x21e5318 size 0x134 virtual false final false
  inline void HandleBeatmapEditorSceneDidFinish(::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO* beatmapEditorScenesTransitionSetupData);

  /// @brief Method HandleBeatmapEditorGameSceneDidFinish addr 0x21e544c size 0x134 virtual false final false
  inline void HandleBeatmapEditorGameSceneDidFinish(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO* beatmapEditorStandardLevelScenesTransitionSetupData,
                                                    ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  static inline ::GlobalNamespace::MenuTransitionsHelper* New_ctor();

  /// @brief Method .ctor addr 0x21e5588 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <HandleBeatmapEditorSceneDidFinish>b__35_0 addr 0x21e5590 size 0x1c virtual false final false
  inline void _HandleBeatmapEditorSceneDidFinish_b__35_0(::Zenject::DiContainer* container);

  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuTransitionsHelper(MenuTransitionsHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuTransitionsHelper(MenuTransitionsHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuTransitionsHelper();

public:
  /// @brief Field _appInitScenesTransitionSetupDataContainer, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* ____appInitScenesTransitionSetupDataContainer;

  /// @brief Field _standardLevelScenesTransitionSetupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* ____standardLevelScenesTransitionSetupData;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* ____multiplayerLevelScenesTransitionSetupData;

  /// @brief Field _missionLevelScenesTransitionSetupData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* ____missionLevelScenesTransitionSetupData;

  /// @brief Field _tutorialScenesTransitionSetupData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::TutorialScenesTransitionSetupDataSO* ____tutorialScenesTransitionSetupData;

  /// @brief Field _creditsScenesTransitionSetupData, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::CreditsScenesTransitionSetupDataSO* ____creditsScenesTransitionSetupData;

  /// @brief Field _beatmapEditorScenesTransitionSetupData, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO* ____beatmapEditorScenesTransitionSetupData;

  /// @brief Field _beatmapEditorStandardLevelScenesTransitionSetupData, offset: 0x50, size: 0x8, def value: None
  ::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO* ____beatmapEditorStandardLevelScenesTransitionSetupData;

  /// @brief Field _mainSettingsModel, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::MainSettingsModelSO* ____mainSettingsModel;

  /// @brief Field _gameScenesManager, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager* ____gameScenesManager;

  /// @brief Field _beatmapDataCache, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCache* ____beatmapDataCache;

  /// @brief Field _standardLevelFinishedCallback, offset: 0x70, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>* ____standardLevelFinishedCallback;

  /// @brief Field _standardLevelRestartedCallback, offset: 0x78, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>* ____standardLevelRestartedCallback;

  /// @brief Field _multiplayerLevelFinishedCallback, offset: 0x80, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MultiplayerResultsData*>* ____multiplayerLevelFinishedCallback;

  /// @brief Field _multiplayerDidDisconnectCallback, offset: 0x88, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::DisconnectedReason>* ____multiplayerDidDisconnectCallback;

  /// @brief Field _missionLevelFinishedCallback, offset: 0x90, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MissionCompletionResults*>* ____missionLevelFinishedCallback;

  /// @brief Field _missionLevelRestartedCallback, offset: 0x98, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MissionCompletionResults*>* ____missionLevelRestartedCallback;

  /// @brief Field _beatmapEditorFinishedCallback, offset: 0xa0, size: 0x8, def value: None
  ::System::Action* ____beatmapEditorFinishedCallback;

  /// @brief Field _beatmapEditorGameplayLevelFinishedCallback, offset: 0xa8, size: 0x8, def value: None
  ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>* ____beatmapEditorGameplayLevelFinishedCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuTransitionsHelper, 0xb0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____appInitScenesTransitionSetupDataContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____standardLevelScenesTransitionSetupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____multiplayerLevelScenesTransitionSetupData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____missionLevelScenesTransitionSetupData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____tutorialScenesTransitionSetupData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____creditsScenesTransitionSetupData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____beatmapEditorScenesTransitionSetupData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____beatmapEditorStandardLevelScenesTransitionSetupData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____mainSettingsModel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____gameScenesManager) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____beatmapDataCache) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____standardLevelFinishedCallback) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____standardLevelRestartedCallback) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____multiplayerLevelFinishedCallback) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____multiplayerDidDisconnectCallback) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____missionLevelFinishedCallback) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____missionLevelRestartedCallback) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____beatmapEditorFinishedCallback) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____beatmapEditorGameplayLevelFinishedCallback) == 0xa8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MenuTransitionsHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuTransitionsHelper*, "", "MenuTransitionsHelper");
NEED_NO_BOX(::GlobalNamespace::__MenuTransitionsHelper____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuTransitionsHelper____c*, "", "MenuTransitionsHelper/<>c");
NEED_NO_BOX(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0*, "", "MenuTransitionsHelper/<>c__DisplayClass29_0");
NEED_NO_BOX(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0*, "", "MenuTransitionsHelper/<>c__DisplayClass30_0");
NEED_NO_BOX(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0*, "", "MenuTransitionsHelper/<>c__DisplayClass31_0");
NEED_NO_BOX(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0*, "", "MenuTransitionsHelper/<>c__DisplayClass32_0");
NEED_NO_BOX(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0*, "", "MenuTransitionsHelper/<>c__DisplayClass33_0");
NEED_NO_BOX(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0*, "", "MenuTransitionsHelper/<>c__DisplayClass36_0");
