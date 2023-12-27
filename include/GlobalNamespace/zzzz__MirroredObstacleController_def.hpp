#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObstacleControllerBase_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MirroredObstacleController)
namespace GlobalNamespace {
class StretchableObstacle;
}
namespace GlobalNamespace {
class __MirroredObstacleController__Pool;
}
namespace GlobalNamespace {
class ObstacleControllerBase;
}
namespace GlobalNamespace {
class ObstacleController;
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
// Type: ::MirroredObstacleController
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4793))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4789))
// CS Name: ::MirroredObstacleController*
class CORDL_TYPE MirroredObstacleController : public ::GlobalNamespace::ObstacleControllerBase {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__MirroredObstacleController__Pool;

  /// @brief Field _stretchableObstacle, offset 0x28, size 0x8
  __declspec(property(get = __get__stretchableObstacle, put = __set__stretchableObstacle))::GlobalNamespace::StretchableObstacle* _stretchableObstacle;

  /// @brief Field _followedObstacle, offset 0x30, size 0x8
  __declspec(property(get = __get__followedObstacle, put = __set__followedObstacle))::GlobalNamespace::ObstacleController* _followedObstacle;

  /// @brief Field _transform, offset 0x38, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::UnityEngine::Transform* _transform;

  /// @brief Field _followedTransform, offset 0x40, size 0x8
  __declspec(property(get = __get__followedTransform, put = __set__followedTransform))::UnityEngine::Transform* _followedTransform;

  __declspec(property(put = set_hide)) bool hide;

  constexpr ::GlobalNamespace::StretchableObstacle*& __get__stretchableObstacle();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StretchableObstacle*> const& __get__stretchableObstacle() const;

  constexpr void __set__stretchableObstacle(::GlobalNamespace::StretchableObstacle* value);

  constexpr ::GlobalNamespace::ObstacleController*& __get__followedObstacle();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObstacleController*> const& __get__followedObstacle() const;

  constexpr void __set__followedObstacle(::GlobalNamespace::ObstacleController* value);

  constexpr ::UnityEngine::Transform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform() const;

  constexpr void __set__transform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__followedTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__followedTransform() const;

  constexpr void __set__followedTransform(::UnityEngine::Transform* value);

  /// @brief Method set_hide addr 0x238c81c size 0x2c virtual false final false
  inline void set_hide(bool value);

  /// @brief Method Awake addr 0x238c848 size 0x1c virtual false final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x238c864 size 0x4 virtual false final false
  inline void OnDestroy();

  /// @brief Method Update addr 0x238c934 size 0x4 virtual false final false
  inline void Update();

  /// @brief Method RemoveListeners addr 0x238c868 size 0xcc virtual false final false
  inline void RemoveListeners();

  /// @brief Method UpdatePositionAndRotation addr 0x238c938 size 0x104 virtual false final false
  inline void UpdatePositionAndRotation();

  /// @brief Method Mirror addr 0x238caec size 0xf8 virtual false final false
  inline void Mirror(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method HandleDidStartDissolving addr 0x238d0bc size 0x20 virtual false final false
  inline void HandleDidStartDissolving(::GlobalNamespace::ObstacleControllerBase* obstacleController, float_t duration);

  static inline ::GlobalNamespace::MirroredObstacleController* New_ctor();

  /// @brief Method .ctor addr 0x238d0f8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MirroredObstacleController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirroredObstacleController(MirroredObstacleController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirroredObstacleController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirroredObstacleController(MirroredObstacleController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirroredObstacleController();

public:
  /// @brief Field _stretchableObstacle, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::StretchableObstacle* ____stretchableObstacle;

  /// @brief Field _followedObstacle, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ObstacleController* ____followedObstacle;

  /// @brief Field _transform, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transform;

  /// @brief Field _followedTransform, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Transform* ____followedTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MirroredObstacleController, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst: 2816 }), TypeDefinitionIndex(TypeDefinitionIndex(11050)),
// TypeDefinitionIndex(TypeDefinitionIndex(4789))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4788)) CS Name: ::MirroredObstacleController::Pool*
class CORDL_TYPE __MirroredObstacleController__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::MirroredObstacleController*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MirroredObstacleController__Pool* New_ctor();

  /// @brief Method .ctor addr 0x238d108 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MirroredObstacleController__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MirroredObstacleController__Pool(__MirroredObstacleController__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MirroredObstacleController__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MirroredObstacleController__Pool(__MirroredObstacleController__Pool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MirroredObstacleController__Pool();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MirroredObstacleController__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MirroredObstacleController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirroredObstacleController*, "", "MirroredObstacleController");
NEED_NO_BOX(::GlobalNamespace::__MirroredObstacleController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MirroredObstacleController__Pool*, "", "MirroredObstacleController/Pool");
