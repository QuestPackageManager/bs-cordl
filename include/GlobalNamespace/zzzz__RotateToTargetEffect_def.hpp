#pragma once
// IWYU pragma private; include "GlobalNamespace/RotateToTargetEffect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RotateToTargetEffect)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class RotateToTargetEffect;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RotateToTargetEffect*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RotateToTargetEffect*, "", "RotateToTargetEffect");
// Dependencies FloatFxGroupEffectTarget, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: RotateToTargetEffect
class CORDL_TYPE RotateToTargetEffect : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
  // Declarations
  /// @brief Field _hasCapturedStartRotation, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__hasCapturedStartRotation, put = __cordl_internal_set__hasCapturedStartRotation)) bool _hasCapturedStartRotation;

  /// @brief Field _startRotation, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get__startRotation, put = __cordl_internal_set__startRotation)) ::UnityEngine::Quaternion _startRotation;

  /// @brief Field _targetLocalEulerAngles, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get__targetLocalEulerAngles, put = __cordl_internal_set__targetLocalEulerAngles)) ::UnityEngine::Vector3 _targetLocalEulerAngles;

  /// @brief Field _targetRotation, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__targetRotation, put = __cordl_internal_set__targetRotation)) ::UnityEngine::Quaternion _targetRotation;

  /// @brief Field _transform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Method Awake, addr 0x5df0094, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CaptureStartRotationIfNeeded, addr 0x5df0098, size 0x11c, virtual false, abstract: false, final false
  inline void CaptureStartRotationIfNeeded();

  static inline ::GlobalNamespace::RotateToTargetEffect* New_ctor();

  /// @brief Method Rotate, addr 0x5df01b8, size 0x60, virtual false, abstract: false, final false
  inline void Rotate(float_t value);

  /// @brief Method SetValue, addr 0x5df01b4, size 0x4, virtual true, abstract: false, final false
  inline void SetValue(int32_t groupId, int32_t elementId, float_t value);

  /// @brief Method TriggerValue, addr 0x5df0218, size 0x4, virtual true, abstract: false, final false
  inline void TriggerValue(int32_t groupId, int32_t elementId, float_t value);

  constexpr bool const& __cordl_internal_get__hasCapturedStartRotation() const;

  constexpr bool& __cordl_internal_get__hasCapturedStartRotation();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__startRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__startRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetLocalEulerAngles() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetLocalEulerAngles();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__targetRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__targetRotation();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr void __cordl_internal_set__hasCapturedStartRotation(bool value);

  constexpr void __cordl_internal_set__startRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__targetLocalEulerAngles(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__targetRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x5df021c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RotateToTargetEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RotateToTargetEffect", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RotateToTargetEffect(RotateToTargetEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RotateToTargetEffect", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RotateToTargetEffect(RotateToTargetEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5999 };

  /// [SerializeField]
  /// @brief Field _transform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  /// [Space]
  /// [SerializeField]
  /// @brief Field _targetLocalEulerAngles, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____targetLocalEulerAngles;

  /// @brief Field _hasCapturedStartRotation, offset: 0x34, size: 0x1, def value: None
  bool ____hasCapturedStartRotation;

  /// @brief Field _startRotation, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____startRotation;

  /// @brief Field _targetRotation, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____targetRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RotateToTargetEffect, ____transform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotateToTargetEffect, ____targetLocalEulerAngles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotateToTargetEffect, ____hasCapturedStartRotation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotateToTargetEffect, ____startRotation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotateToTargetEffect, ____targetRotation) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RotateToTargetEffect) == 0x58, "Size mismatch!");

} // namespace GlobalNamespace
