#pragma once
// IWYU pragma private; include "GlobalNamespace/MoveInDirectionEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MoveInDirectionEffect)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MoveInDirectionEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MoveInDirectionEffect);
// Dependencies FloatFxGroupEffectTarget, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: MoveInDirectionEffect
class CORDL_TYPE MoveInDirectionEffect : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
  // Declarations
  /// @brief Field _moveDirection, offset 0x44, size 0xc
  __declspec(property(get = __cordl_internal_get__moveDirection, put = __cordl_internal_set__moveDirection)) ::UnityEngine::Vector3 _moveDirection;

  /// @brief Field _moveOrigin, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get__moveOrigin, put = __cordl_internal_set__moveOrigin)) ::UnityEngine::Vector3 _moveOrigin;

  /// @brief Field _moveScale, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__moveScale, put = __cordl_internal_set__moveScale)) float_t _moveScale;

  /// @brief Field _startPosition, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get__startPosition, put = __cordl_internal_set__startPosition)) ::UnityEngine::Vector3 _startPosition;

  /// @brief Field _transform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Method Awake, addr 0x3b8e920, size 0x11c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Move, addr 0x3b8ea40, size 0x4c, virtual false, abstract: false, final false
  inline void Move(float_t value);

  static inline ::GlobalNamespace::MoveInDirectionEffect* New_ctor();

  /// @brief Method SetValue, addr 0x3b8ea3c, size 0x4, virtual true, abstract: false, final false
  inline void SetValue(int32_t groupId, int32_t elementId, float_t value);

  /// @brief Method TriggerValue, addr 0x3b8ea8c, size 0x4, virtual true, abstract: false, final false
  inline void TriggerValue(int32_t groupId, int32_t elementId, float_t value);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__moveDirection() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__moveDirection();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__moveOrigin() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__moveOrigin();

  constexpr float_t const& __cordl_internal_get__moveScale() const;

  constexpr float_t& __cordl_internal_get__moveScale();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__startPosition();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr void __cordl_internal_set__moveDirection(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__moveOrigin(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__moveScale(float_t value);

  constexpr void __cordl_internal_set__startPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x3b8ea90, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MoveInDirectionEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MoveInDirectionEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MoveInDirectionEffect(MoveInDirectionEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MoveInDirectionEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MoveInDirectionEffect(MoveInDirectionEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4276 };

  /// @brief Field _transform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  /// @brief Field _moveOrigin, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____moveOrigin;

  /// @brief Field _moveScale, offset: 0x34, size: 0x4, def value: None
  float_t ____moveScale;

  /// @brief Field _startPosition, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startPosition;

  /// @brief Field _moveDirection, offset: 0x44, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____moveDirection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MoveInDirectionEffect, ____transform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoveInDirectionEffect, ____moveOrigin) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoveInDirectionEffect, ____moveScale) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoveInDirectionEffect, ____startPosition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoveInDirectionEffect, ____moveDirection) == 0x44, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MoveInDirectionEffect, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MoveInDirectionEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MoveInDirectionEffect*, "", "MoveInDirectionEffect");
