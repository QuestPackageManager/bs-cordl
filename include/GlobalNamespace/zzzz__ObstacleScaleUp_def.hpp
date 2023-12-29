#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ObstacleScaleUp)
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
class ObstacleScaleUp;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObstacleScaleUp);
// Type: ::ObstacleScaleUp
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4916))
// CS Name: ::ObstacleScaleUp*
class CORDL_TYPE ObstacleScaleUp : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _fullScalePart, offset 0x18, size 0x4
  __declspec(property(get = __get__fullScalePart, put = __set__fullScalePart)) float_t _fullScalePart;

  /// @brief Field _targetTransform, offset 0x20, size 0x8
  __declspec(property(get = __get__targetTransform, put = __set__targetTransform))::UnityEngine::Transform* _targetTransform;

  /// @brief Field _obstacleController, offset 0x28, size 0x8
  __declspec(property(get = __get__obstacleController, put = __set__obstacleController))::GlobalNamespace::ObstacleController* _obstacleController;

  constexpr float_t& __get__fullScalePart();

  constexpr float_t const& __get__fullScalePart() const;

  constexpr void __set__fullScalePart(float_t value);

  constexpr ::UnityEngine::Transform*& __get__targetTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__targetTransform() const;

  constexpr void __set__targetTransform(::UnityEngine::Transform* value);

  constexpr ::GlobalNamespace::ObstacleController*& __get__obstacleController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObstacleController*> const& __get__obstacleController() const;

  constexpr void __set__obstacleController(::GlobalNamespace::ObstacleController* value);

  /// @brief Method Awake addr 0x225a164 size 0x94 virtual false final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x225a314 size 0x138 virtual false final false
  inline void OnDestroy();

  /// @brief Method UpdateScale addr 0x225a1f8 size 0x11c virtual false final false
  inline void UpdateScale(float_t progress);

  /// @brief Method HandleObstacleControllerDidUpdateProgress addr 0x225a44c size 0x28 virtual false final false
  inline void HandleObstacleControllerDidUpdateProgress(::GlobalNamespace::ObstacleController* obstacleController, float_t time);

  /// @brief Method HandleObstacleControllerDidInit addr 0x225a474 size 0xd0 virtual false final false
  inline void HandleObstacleControllerDidInit(::GlobalNamespace::ObstacleControllerBase* obstacleController);

  static inline ::GlobalNamespace::ObstacleScaleUp* New_ctor();

  /// @brief Method .ctor addr 0x225a544 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleScaleUp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObstacleScaleUp(ObstacleScaleUp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleScaleUp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObstacleScaleUp(ObstacleScaleUp const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleScaleUp();

public:
  /// @brief Field _fullScalePart, offset: 0x18, size: 0x4, def value: None
  float_t ____fullScalePart;

  /// @brief Field _targetTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ____targetTransform;

  /// @brief Field _obstacleController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ObstacleController* ____obstacleController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleScaleUp, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleScaleUp, ____fullScalePart) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleScaleUp, ____targetTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleScaleUp, ____obstacleController) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleScaleUp);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleScaleUp*, "", "ObstacleScaleUp");
