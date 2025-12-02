#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatLocalScaleEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatLocalScaleEffect)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatLocalScaleEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatLocalScaleEffect);
// Dependencies FloatFxGroupEffectTarget, UnityEngine.Vector2, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: FloatLocalScaleEffect
class CORDL_TYPE FloatLocalScaleEffect : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
  // Declarations
  /// @brief Field _startScale, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get__startScale, put = __cordl_internal_set__startScale)) ::UnityEngine::Vector3 _startScale;

  /// @brief Field _transforms, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__transforms, put = __cordl_internal_set__transforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>
      _transforms;

  /// @brief Field _valueBounds, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__valueBounds, put = __cordl_internal_set__valueBounds)) ::UnityEngine::Vector2 _valueBounds;

  /// @brief Method Awake, addr 0x577ade0, size 0x68, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Move, addr 0x577ae4c, size 0x94, virtual false, abstract: false, final false
  inline void Move(float_t value);

  static inline ::GlobalNamespace::FloatLocalScaleEffect* New_ctor();

  /// @brief Method SetValue, addr 0x577ae48, size 0x4, virtual true, abstract: false, final false
  inline void SetValue(int32_t groupId, int32_t elementId, float_t value);

  /// @brief Method TriggerValue, addr 0x577aee0, size 0x4, virtual true, abstract: false, final false
  inline void TriggerValue(int32_t groupId, int32_t elementId, float_t value);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startScale() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__startScale();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get__transforms() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get__transforms();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__valueBounds() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__valueBounds();

  constexpr void __cordl_internal_set__startScale(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__transforms(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set__valueBounds(::UnityEngine::Vector2 value);

  /// @brief Method .ctor, addr 0x577aee4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatLocalScaleEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatLocalScaleEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatLocalScaleEffect(FloatLocalScaleEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatLocalScaleEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatLocalScaleEffect(FloatLocalScaleEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5841 };

  /// @brief Field _transforms, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ____transforms;

  /// @brief Field _valueBounds, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____valueBounds;

  /// @brief Field _startScale, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startScale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FloatLocalScaleEffect, ____transforms) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatLocalScaleEffect, ____valueBounds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatLocalScaleEffect, ____startScale) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatLocalScaleEffect, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatLocalScaleEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatLocalScaleEffect*, "", "FloatLocalScaleEffect");
