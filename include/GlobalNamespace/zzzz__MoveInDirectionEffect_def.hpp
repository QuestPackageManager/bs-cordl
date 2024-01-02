#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
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
// Type: ::MoveInDirectionEffect
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4909)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4911))
// CS Name: ::MoveInDirectionEffect*
class CORDL_TYPE MoveInDirectionEffect : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
  // Declarations
  /// @brief Field _transform, offset 0x18, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::UnityEngine::Transform* _transform;

  /// @brief Field _moveOrigin, offset 0x20, size 0xc
  __declspec(property(get = __get__moveOrigin, put = __set__moveOrigin))::UnityEngine::Vector3 _moveOrigin;

  /// @brief Field _moveScale, offset 0x2c, size 0x4
  __declspec(property(get = __get__moveScale, put = __set__moveScale)) float_t _moveScale;

  /// @brief Field _startPosition, offset 0x30, size 0xc
  __declspec(property(get = __get__startPosition, put = __set__startPosition))::UnityEngine::Vector3 _startPosition;

  /// @brief Field _moveDirection, offset 0x3c, size 0xc
  __declspec(property(get = __get__moveDirection, put = __set__moveDirection))::UnityEngine::Vector3 _moveDirection;

  constexpr ::UnityEngine::Transform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform() const;

  constexpr void __set__transform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Vector3& __get__moveOrigin();

  constexpr ::UnityEngine::Vector3 const& __get__moveOrigin() const;

  constexpr void __set__moveOrigin(::UnityEngine::Vector3 value);

  constexpr float_t& __get__moveScale();

  constexpr float_t const& __get__moveScale() const;

  constexpr void __set__moveScale(float_t value);

  constexpr ::UnityEngine::Vector3& __get__startPosition();

  constexpr ::UnityEngine::Vector3 const& __get__startPosition() const;

  constexpr void __set__startPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__moveDirection();

  constexpr ::UnityEngine::Vector3 const& __get__moveDirection() const;

  constexpr void __set__moveDirection(::UnityEngine::Vector3 value);

  /// @brief Method Awake, addr 0x23a6788, size 0x11c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method SetValue, addr 0x23a68a4, size 0x4, virtual true, abstract: false, final false
  inline void SetValue(float_t value);

  /// @brief Method TriggerValue, addr 0x23a68f4, size 0x4, virtual true, abstract: false, final false
  inline void TriggerValue(float_t value);

  /// @brief Method Move, addr 0x23a68a8, size 0x4c, virtual false, abstract: false, final false
  inline void Move(float_t value);

  static inline ::GlobalNamespace::MoveInDirectionEffect* New_ctor();

  /// @brief Method .ctor, addr 0x23a68f8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MoveInDirectionEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MoveInDirectionEffect(MoveInDirectionEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MoveInDirectionEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MoveInDirectionEffect(MoveInDirectionEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MoveInDirectionEffect();

public:
  /// @brief Field _transform, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transform;

  /// @brief Field _moveOrigin, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____moveOrigin;

  /// @brief Field _moveScale, offset: 0x2c, size: 0x4, def value: None
  float_t ____moveScale;

  /// @brief Field _startPosition, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startPosition;

  /// @brief Field _moveDirection, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____moveDirection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MoveInDirectionEffect, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MoveInDirectionEffect, ____transform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoveInDirectionEffect, ____moveOrigin) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoveInDirectionEffect, ____moveScale) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoveInDirectionEffect, ____startPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoveInDirectionEffect, ____moveDirection) == 0x3c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MoveInDirectionEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MoveInDirectionEffect*, "", "MoveInDirectionEffect");
