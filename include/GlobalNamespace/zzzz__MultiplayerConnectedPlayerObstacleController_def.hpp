#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerConnectedPlayerObstacleController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerObstacleController)
namespace GlobalNamespace {
class MultiplayerConnectedPlayerObstacleClippingController;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerObstacleController_Pool;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
struct ObstacleSpawnData;
}
namespace GlobalNamespace {
class SettingsManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerObstacleController;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerObstacleController_Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerObstacleController);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool);
// Dependencies Zenject.MonoMemoryPool`1<TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerConnectedPlayerObstacleController/Pool
class CORDL_TYPE MultiplayerConnectedPlayerObstacleController_Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController>> {
public:
  // Declarations
  /// @brief Field _settingsManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool* New_ctor();

  /// @brief Method OnCreated, addr 0x3bc01c0, size 0xa4, virtual true, abstract: false, final false
  inline void OnCreated(::GlobalNamespace::MultiplayerConnectedPlayerObstacleController* item);

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  /// @brief Method .ctor, addr 0x3bc0264, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerObstacleController_Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerObstacleController_Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerObstacleController_Pool(MultiplayerConnectedPlayerObstacleController_Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerObstacleController_Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerObstacleController_Pool(MultiplayerConnectedPlayerObstacleController_Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4503 };

  /// @brief Field _settingsManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool, ____settingsManager) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ObstacleController
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerConnectedPlayerObstacleController
class CORDL_TYPE MultiplayerConnectedPlayerObstacleController : public ::GlobalNamespace::ObstacleController {
public:
  // Declarations
  using Pool = ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool;

  /// @brief Field _multiplayerConnectedPlayerObstacleClippingController, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerConnectedPlayerObstacleClippingController,
                      put = __cordl_internal_set__multiplayerConnectedPlayerObstacleClippingController)) ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController>
      _multiplayerConnectedPlayerObstacleClippingController;

  /// @brief Method Init, addr 0x3bbffc4, size 0x1f4, virtual true, abstract: false, final false
  inline void Init(::GlobalNamespace::ObstacleData* obstacleData, ::ByRef<::GlobalNamespace::ObstacleSpawnData> obstacleSpawnData);

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController> const& __cordl_internal_get__multiplayerConnectedPlayerObstacleClippingController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController>& __cordl_internal_get__multiplayerConnectedPlayerObstacleClippingController();

  constexpr void __cordl_internal_set__multiplayerConnectedPlayerObstacleClippingController(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController> value);

  /// @brief Method .ctor, addr 0x3bc01b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerObstacleController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerObstacleController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerObstacleController(MultiplayerConnectedPlayerObstacleController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerObstacleController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerObstacleController(MultiplayerConnectedPlayerObstacleController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4504 };

  /// @brief Field _multiplayerConnectedPlayerObstacleClippingController, offset: 0x130, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController> ____multiplayerConnectedPlayerObstacleClippingController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerObstacleController, ____multiplayerConnectedPlayerObstacleClippingController) == 0x130, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController, 0x138>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerObstacleController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*, "", "MultiplayerConnectedPlayerObstacleController");
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool*, "", "MultiplayerConnectedPlayerObstacleController/Pool");
