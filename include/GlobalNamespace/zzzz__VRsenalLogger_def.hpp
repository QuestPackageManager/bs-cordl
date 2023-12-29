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
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class VRsenalScoreLogger;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3997))
// CS Name: ::VRsenalLogger*
class CORDL_TYPE VRsenalLogger : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _standardLevelScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __get__standardLevelScenesTransitionSetupData,
                      put = __set__standardLevelScenesTransitionSetupData))::GlobalNamespace::ScenesTransitionSetupDataSO* _standardLevelScenesTransitionSetupData;

  /// @brief Field _tutorialScenesTransitionSetupData, offset 0x20, size 0x8
  __declspec(property(get = __get__tutorialScenesTransitionSetupData,
                      put = __set__tutorialScenesTransitionSetupData))::GlobalNamespace::ScenesTransitionSetupDataSO* _tutorialScenesTransitionSetupData;

  /// @brief Field _playerNameWasEnteredSignal, offset 0x28, size 0x8
  __declspec(property(get = __get__playerNameWasEnteredSignal, put = __set__playerNameWasEnteredSignal))::GlobalNamespace::StringSignal* _playerNameWasEnteredSignal;

  /// @brief Field _vRsenalScoreLoggerPrefab, offset 0x30, size 0x8
  __declspec(property(get = __get__vRsenalScoreLoggerPrefab, put = __set__vRsenalScoreLoggerPrefab))::GlobalNamespace::VRsenalScoreLogger* _vRsenalScoreLoggerPrefab;

  /// @brief Field _gameScenesManager, offset 0x38, size 0x8
  __declspec(property(get = __get__gameScenesManager, put = __set__gameScenesManager))::GlobalNamespace::GameScenesManager* _gameScenesManager;

  constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO*& __get__standardLevelScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> const& __get__standardLevelScenesTransitionSetupData() const;

  constexpr void __set__standardLevelScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO*& __get__tutorialScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> const& __get__tutorialScenesTransitionSetupData() const;

  constexpr void __set__tutorialScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::StringSignal*& __get__playerNameWasEnteredSignal();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StringSignal*> const& __get__playerNameWasEnteredSignal() const;

  constexpr void __set__playerNameWasEnteredSignal(::GlobalNamespace::StringSignal* value);

  constexpr ::GlobalNamespace::VRsenalScoreLogger*& __get__vRsenalScoreLoggerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRsenalScoreLogger*> const& __get__vRsenalScoreLoggerPrefab() const;

  constexpr void __set__vRsenalScoreLoggerPrefab(::GlobalNamespace::VRsenalScoreLogger* value);

  constexpr ::GlobalNamespace::GameScenesManager*& __get__gameScenesManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& __get__gameScenesManager() const;

  constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager* value);

  /// @brief Method Awake addr 0x20c1498 size 0x108 virtual false final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x20c15a0 size 0x108 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleGameScenesManagerInstallEarlyBindings addr 0x20c16a8 size 0x14c virtual false final false
  inline void HandleGameScenesManagerInstallEarlyBindings(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, ::Zenject::DiContainer* container);

  /// @brief Method HandlePlayerNameWasEntered addr 0x20c17f4 size 0x8c virtual false final false
  inline void HandlePlayerNameWasEntered(::StringW playerName);

  static inline ::GlobalNamespace::VRsenalLogger* New_ctor();

  /// @brief Method .ctor addr 0x20c1880 size 0x8 virtual false final false
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
  ::GlobalNamespace::ScenesTransitionSetupDataSO* ____standardLevelScenesTransitionSetupData;

  /// @brief Field _tutorialScenesTransitionSetupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ScenesTransitionSetupDataSO* ____tutorialScenesTransitionSetupData;

  /// @brief Field _playerNameWasEnteredSignal, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::StringSignal* ____playerNameWasEnteredSignal;

  /// @brief Field _vRsenalScoreLoggerPrefab, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::VRsenalScoreLogger* ____vRsenalScoreLoggerPrefab;

  /// @brief Field _gameScenesManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager* ____gameScenesManager;

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
