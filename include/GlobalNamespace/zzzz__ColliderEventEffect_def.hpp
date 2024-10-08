#pragma once
// IWYU pragma private; include "GlobalNamespace/ColliderEventEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ColliderEventEffect)
namespace GlobalNamespace {
class EnvironmentCollisionRepository;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class ColliderEventEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColliderEventEffect);
// Type: ::ColliderEventEffect
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ColliderEventEffect*
class CORDL_TYPE ColliderEventEffect : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
  // Declarations
  /// @brief Field _effectCollider, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__effectCollider, put = __cordl_internal_set__effectCollider)) ::UnityW<::UnityEngine::Collider> _effectCollider;

  /// @brief Field _environmentCollisionRepository, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentCollisionRepository,
                      put = __cordl_internal_set__environmentCollisionRepository)) ::GlobalNamespace::EnvironmentCollisionRepository* _environmentCollisionRepository;

  /// @brief Field _value, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) float_t _value;

  __declspec(property(get = get_effectCollider)) ::UnityW<::UnityEngine::Collider> effectCollider;

  __declspec(property(get = get_value)) float_t value;

  static inline ::GlobalNamespace::ColliderEventEffect* New_ctor();

  /// @brief Method SetValue, addr 0x3b1e3e0, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(int32_t groupId, int32_t elementId, float_t value);

  /// @brief Method Start, addr 0x3b1e364, size 0x1c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TriggerValue, addr 0x3b1e3e8, size 0x8, virtual true, abstract: false, final false
  inline void TriggerValue(int32_t groupId, int32_t elementId, float_t value);

  constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__effectCollider() const;

  constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__effectCollider();

  constexpr ::GlobalNamespace::EnvironmentCollisionRepository*& __cordl_internal_get__environmentCollisionRepository();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentCollisionRepository*> const& __cordl_internal_get__environmentCollisionRepository() const;

  constexpr float_t const& __cordl_internal_get__value() const;

  constexpr float_t& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__effectCollider(::UnityW<::UnityEngine::Collider> value);

  constexpr void __cordl_internal_set__environmentCollisionRepository(::GlobalNamespace::EnvironmentCollisionRepository* value);

  constexpr void __cordl_internal_set__value(float_t value);

  /// @brief Method .ctor, addr 0x3b1e3f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_effectCollider, addr 0x3b1e354, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Collider> get_effectCollider();

  /// @brief Method get_value, addr 0x3b1e35c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColliderEventEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColliderEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColliderEventEffect(ColliderEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColliderEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColliderEventEffect(ColliderEventEffect const&) = delete;

  /// @brief Field _effectCollider, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Collider> ____effectCollider;

  /// @brief Field _value, offset: 0x28, size: 0x4, def value: None
  float_t ____value;

  /// @brief Field _environmentCollisionRepository, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentCollisionRepository* ____environmentCollisionRepository;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4320 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColliderEventEffect, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderEventEffect, ____effectCollider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderEventEffect, ____value) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderEventEffect, ____environmentCollisionRepository) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColliderEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColliderEventEffect*, "", "ColliderEventEffect");
