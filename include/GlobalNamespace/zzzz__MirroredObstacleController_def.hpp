#pragma once
// IWYU pragma private; include "GlobalNamespace/MirroredObstacleController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObstacleControllerBase_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MirroredObstacleController)
namespace GlobalNamespace {
class ObstacleControllerBase;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class StretchableObstacle;
}
namespace GlobalNamespace {
class __MirroredObstacleController__Pool;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MirroredObstacleController;
}
namespace GlobalNamespace {
class __MirroredObstacleController__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MirroredObstacleController);
MARK_REF_PTR_T(::GlobalNamespace::__MirroredObstacleController__Pool);
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MirroredObstacleController::Pool*
class CORDL_TYPE __MirroredObstacleController__Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::MirroredObstacleController>> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MirroredObstacleController__Pool* New_ctor();

  /// @brief Method .ctor, addr 0x3a95a48, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MirroredObstacleController__Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MirroredObstacleController__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MirroredObstacleController__Pool(__MirroredObstacleController__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MirroredObstacleController__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MirroredObstacleController__Pool(__MirroredObstacleController__Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4128 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MirroredObstacleController__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MirroredObstacleController
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MirroredObstacleController*
class CORDL_TYPE MirroredObstacleController : public ::GlobalNamespace::ObstacleControllerBase {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__MirroredObstacleController__Pool;

  /// @brief Field _followedObstacle, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__followedObstacle, put = __cordl_internal_set__followedObstacle)) ::UnityW<::GlobalNamespace::ObstacleController> _followedObstacle;

  /// @brief Field _followedTransform, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__followedTransform, put = __cordl_internal_set__followedTransform)) ::UnityW<::UnityEngine::Transform> _followedTransform;

  /// @brief Field _stretchableObstacle, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__stretchableObstacle, put = __cordl_internal_set__stretchableObstacle)) ::UnityW<::GlobalNamespace::StretchableObstacle> _stretchableObstacle;

  /// @brief Field _transform, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform> _transform;

  __declspec(property(put = set_hide)) bool hide;

  /// @brief Method Awake, addr 0x3a952bc, size 0x1c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleDidStartDissolving, addr 0x3a959fc, size 0x20, virtual false, abstract: false, final false
  inline void HandleDidStartDissolving(::GlobalNamespace::ObstacleControllerBase* obstacleController, float_t duration);

  /// @brief Method Mirror, addr 0x3a89cdc, size 0x104, virtual false, abstract: false, final false
  inline void Mirror(::GlobalNamespace::ObstacleController* obstacleController);

  static inline ::GlobalNamespace::MirroredObstacleController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3a952d8, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RemoveListeners, addr 0x3a952dc, size 0xc8, virtual false, abstract: false, final false
  inline void RemoveListeners();

  /// @brief Method Update, addr 0x3a953a4, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdatePositionAndRotation, addr 0x3a953a8, size 0x104, virtual false, abstract: false, final false
  inline void UpdatePositionAndRotation();

  constexpr ::UnityW<::GlobalNamespace::ObstacleController> const& __cordl_internal_get__followedObstacle() const;

  constexpr ::UnityW<::GlobalNamespace::ObstacleController>& __cordl_internal_get__followedObstacle();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__followedTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__followedTransform();

  constexpr ::UnityW<::GlobalNamespace::StretchableObstacle> const& __cordl_internal_get__stretchableObstacle() const;

  constexpr ::UnityW<::GlobalNamespace::StretchableObstacle>& __cordl_internal_get__stretchableObstacle();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr void __cordl_internal_set__followedObstacle(::UnityW<::GlobalNamespace::ObstacleController> value);

  constexpr void __cordl_internal_set__followedTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__stretchableObstacle(::UnityW<::GlobalNamespace::StretchableObstacle> value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x3a95a38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_hide, addr 0x3a8a8fc, size 0x2c, virtual false, abstract: false, final false
  inline void set_hide(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirroredObstacleController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MirroredObstacleController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirroredObstacleController(MirroredObstacleController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirroredObstacleController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirroredObstacleController(MirroredObstacleController const&) = delete;

  /// @brief Field _stretchableObstacle, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StretchableObstacle> ____stretchableObstacle;

  /// @brief Field _followedObstacle, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ObstacleController> ____followedObstacle;

  /// @brief Field _transform, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  /// @brief Field _followedTransform, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____followedTransform;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4129 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MirroredObstacleController, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredObstacleController, ____stretchableObstacle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredObstacleController, ____followedObstacle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredObstacleController, ____transform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredObstacleController, ____followedTransform) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MirroredObstacleController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirroredObstacleController*, "", "MirroredObstacleController");
NEED_NO_BOX(::GlobalNamespace::__MirroredObstacleController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MirroredObstacleController__Pool*, "", "MirroredObstacleController/Pool");
