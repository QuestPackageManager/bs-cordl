#pragma once
// IWYU pragma private; include "GlobalNamespace/ObstacleScaleUp.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ObstacleScaleUp)
namespace GlobalNamespace {
class IVariableMovementDataProvider;
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
class ObstacleScaleUp;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObstacleScaleUp);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ObstacleScaleUp
class CORDL_TYPE ObstacleScaleUp : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _fullScalePart, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__fullScalePart, put = __cordl_internal_set__fullScalePart)) float_t _fullScalePart;

  /// @brief Field _obstacleController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacleController, put = __cordl_internal_set__obstacleController)) ::UnityW<::GlobalNamespace::ObstacleController> _obstacleController;

  /// @brief Field _targetTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__targetTransform, put = __cordl_internal_set__targetTransform)) ::UnityW<::UnityEngine::Transform> _targetTransform;

  /// @brief Field _variableMovementDataProvider, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__variableMovementDataProvider,
                      put = __cordl_internal_set__variableMovementDataProvider)) ::GlobalNamespace::IVariableMovementDataProvider* _variableMovementDataProvider;

  /// @brief Method Awake, addr 0x572f4b0, size 0x98, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleObstacleControllerDidInit, addr 0x572f8ec, size 0xd0, virtual false, abstract: false, final false
  inline void HandleObstacleControllerDidInit(::GlobalNamespace::ObstacleControllerBase* obstacleController);

  /// @brief Method HandleObstacleControllerDidUpdateProgress, addr 0x572f7b8, size 0x134, virtual false, abstract: false, final false
  inline void HandleObstacleControllerDidUpdateProgress(::GlobalNamespace::ObstacleController* obstacleController, float_t time);

  static inline ::GlobalNamespace::ObstacleScaleUp* New_ctor();

  /// @brief Method OnDestroy, addr 0x572f680, size 0x138, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method UpdateScale, addr 0x572f548, size 0x138, virtual false, abstract: false, final false
  inline void UpdateScale(float_t progress);

  constexpr float_t const& __cordl_internal_get__fullScalePart() const;

  constexpr float_t& __cordl_internal_get__fullScalePart();

  constexpr ::UnityW<::GlobalNamespace::ObstacleController> const& __cordl_internal_get__obstacleController() const;

  constexpr ::UnityW<::GlobalNamespace::ObstacleController>& __cordl_internal_get__obstacleController();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__targetTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__targetTransform();

  constexpr ::GlobalNamespace::IVariableMovementDataProvider* const& __cordl_internal_get__variableMovementDataProvider() const;

  constexpr ::GlobalNamespace::IVariableMovementDataProvider*& __cordl_internal_get__variableMovementDataProvider();

  constexpr void __cordl_internal_set__fullScalePart(float_t value);

  constexpr void __cordl_internal_set__obstacleController(::UnityW<::GlobalNamespace::ObstacleController> value);

  constexpr void __cordl_internal_set__targetTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__variableMovementDataProvider(::GlobalNamespace::IVariableMovementDataProvider* value);

  /// @brief Method .ctor, addr 0x572f9bc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleScaleUp();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObstacleScaleUp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObstacleScaleUp(ObstacleScaleUp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleScaleUp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObstacleScaleUp(ObstacleScaleUp const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5714 };

  /// @brief Field _fullScalePart, offset: 0x20, size: 0x4, def value: None
  float_t ____fullScalePart;

  /// @brief Field _targetTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____targetTransform;

  /// @brief Field _obstacleController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ObstacleController> ____obstacleController;

  /// @brief Field _variableMovementDataProvider, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IVariableMovementDataProvider* ____variableMovementDataProvider;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObstacleScaleUp, ____fullScalePart) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleScaleUp, ____targetTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleScaleUp, ____obstacleController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleScaleUp, ____variableMovementDataProvider) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleScaleUp, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleScaleUp);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleScaleUp*, "", "ObstacleScaleUp");
