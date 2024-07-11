#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerConnectedPlayerObstacleController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerObstacleController)
namespace GlobalNamespace {
class MultiplayerConnectedPlayerObstacleClippingController;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class __MultiplayerConnectedPlayerObstacleController__Pool;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerObstacleController;
}
namespace GlobalNamespace {
class __MultiplayerConnectedPlayerObstacleController__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerObstacleController);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool);
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerConnectedPlayerObstacleController::Pool*
class CORDL_TYPE __MultiplayerConnectedPlayerObstacleController__Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController>> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool* New_ctor();

  /// @brief Method .ctor, addr 0x27204d0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerConnectedPlayerObstacleController__Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerConnectedPlayerObstacleController__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerConnectedPlayerObstacleController__Pool(__MultiplayerConnectedPlayerObstacleController__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerConnectedPlayerObstacleController__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerConnectedPlayerObstacleController__Pool(__MultiplayerConnectedPlayerObstacleController__Pool const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerConnectedPlayerObstacleController
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerConnectedPlayerObstacleController*
class CORDL_TYPE MultiplayerConnectedPlayerObstacleController : public ::GlobalNamespace::ObstacleController {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool;

  /// @brief Field _multiplayerConnectedPlayerObstacleClippingController, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerConnectedPlayerObstacleClippingController, put = __cordl_internal_set__multiplayerConnectedPlayerObstacleClippingController))::UnityW<
      ::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController> _multiplayerConnectedPlayerObstacleClippingController;

  /// @brief Method Init, addr 0x27202f8, size 0x1d0, virtual true, abstract: false, final false
  inline void Init(::GlobalNamespace::ObstacleData* obstacleData, float_t worldRotation, ::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 midPos, ::UnityEngine::Vector3 endPos,
                   float_t move1Duration, float_t move2Duration, float_t singleLineWidth, float_t height);

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController> const& __cordl_internal_get__multiplayerConnectedPlayerObstacleClippingController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController>& __cordl_internal_get__multiplayerConnectedPlayerObstacleClippingController();

  constexpr void __cordl_internal_set__multiplayerConnectedPlayerObstacleClippingController(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController> value);

  /// @brief Method .ctor, addr 0x27204c8, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _multiplayerConnectedPlayerObstacleClippingController, offset: 0x120, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController> ____multiplayerConnectedPlayerObstacleClippingController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController, 0x128>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerObstacleController, ____multiplayerConnectedPlayerObstacleClippingController) == 0x120, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerObstacleController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*, "", "MultiplayerConnectedPlayerObstacleController");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool*, "", "MultiplayerConnectedPlayerObstacleController/Pool");
