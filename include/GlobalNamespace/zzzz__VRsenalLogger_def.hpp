#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VRsenalLogger)
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class StringSignal;
}
namespace GlobalNamespace {
class VRsenalScoreLogger;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class VRsenalLogger;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VRsenalLogger);
// Type: ::VRsenalLogger
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4014))
// CS Name: ::VRsenalLogger*
class CORDL_TYPE VRsenalLogger : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _standardLevelScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__standardLevelScenesTransitionSetupData))::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> _standardLevelScenesTransitionSetupData;

  /// @brief Field _tutorialScenesTransitionSetupData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__tutorialScenesTransitionSetupData,
                      put = __cordl_internal_set__tutorialScenesTransitionSetupData))::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> _tutorialScenesTransitionSetupData;

  /// @brief Field _playerNameWasEnteredSignal, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__playerNameWasEnteredSignal,
                      put = __cordl_internal_set__playerNameWasEnteredSignal))::UnityW<::GlobalNamespace::StringSignal> _playerNameWasEnteredSignal;

  /// @brief Field _vRsenalScoreLoggerPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__vRsenalScoreLoggerPrefab,
                      put = __cordl_internal_set__vRsenalScoreLoggerPrefab))::UnityW<::GlobalNamespace::VRsenalScoreLogger> _vRsenalScoreLoggerPrefab;

  /// @brief Field _gameScenesManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager))::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& __cordl_internal_get__standardLevelScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& __cordl_internal_get__standardLevelScenesTransitionSetupData() const;

  constexpr void __cordl_internal_set__standardLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value);

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& __cordl_internal_get__tutorialScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& __cordl_internal_get__tutorialScenesTransitionSetupData() const;

  constexpr void __cordl_internal_set__tutorialScenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value);

  constexpr ::UnityW<::GlobalNamespace::StringSignal>& __cordl_internal_get__playerNameWasEnteredSignal();

  constexpr ::UnityW<::GlobalNamespace::StringSignal> const& __cordl_internal_get__playerNameWasEnteredSignal() const;

  constexpr void __cordl_internal_set__playerNameWasEnteredSignal(::UnityW<::GlobalNamespace::StringSignal> value);

  constexpr ::UnityW<::GlobalNamespace::VRsenalScoreLogger>& __cordl_internal_get__vRsenalScoreLoggerPrefab();

  constexpr ::UnityW<::GlobalNamespace::VRsenalScoreLogger> const& __cordl_internal_get__vRsenalScoreLoggerPrefab() const;

  constexpr void __cordl_internal_set__vRsenalScoreLoggerPrefab(::UnityW<::GlobalNamespace::VRsenalScoreLogger> value);

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  /// @brief Method Awake, addr 0x2222b84, size 0x108, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDestroy, addr 0x2222c8c, size 0x108, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleGameScenesManagerInstallEarlyBindings, addr 0x2222d94, size 0x14c, virtual false, abstract: false, final false
  inline void HandleGameScenesManagerInstallEarlyBindings(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, ::Zenject::DiContainer* container);

  /// @brief Method HandlePlayerNameWasEntered, addr 0x2222ee0, size 0x8c, virtual false, abstract: false, final false
  inline void HandlePlayerNameWasEntered(::StringW playerName);

  static inline ::GlobalNamespace::VRsenalLogger* New_ctor();

  /// @brief Method .ctor, addr 0x2222f6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VRsenalLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRsenalLogger(VRsenalLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRsenalLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRsenalLogger(VRsenalLogger const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRsenalLogger();

public:
  /// @brief Field _standardLevelScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> ____standardLevelScenesTransitionSetupData;

  /// @brief Field _tutorialScenesTransitionSetupData, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> ____tutorialScenesTransitionSetupData;

  /// @brief Field _playerNameWasEnteredSignal, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StringSignal> ____playerNameWasEnteredSignal;

  /// @brief Field _vRsenalScoreLoggerPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VRsenalScoreLogger> ____vRsenalScoreLoggerPrefab;

  /// @brief Field _gameScenesManager, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRsenalLogger, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VRsenalLogger, ____standardLevelScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRsenalLogger, ____tutorialScenesTransitionSetupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRsenalLogger, ____playerNameWasEnteredSignal) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRsenalLogger, ____vRsenalScoreLoggerPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRsenalLogger, ____gameScenesManager) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VRsenalLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRsenalLogger*, "", "VRsenalLogger");
