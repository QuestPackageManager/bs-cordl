#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ScaleAnimator)
namespace GlobalNamespace {
struct EaseType;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace Tweening {
template <typename T> class Tween_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ScaleAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ScaleAnimator);
// Type: ::ScaleAnimator
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ScaleAnimator*
class CORDL_TYPE ScaleAnimator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _displayedScale, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__displayedScale, put = __cordl_internal_set__displayedScale)) float_t _displayedScale;

  /// @brief Field _initialized, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _scaleDownTween, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__scaleDownTween, put = __cordl_internal_set__scaleDownTween))::Tweening::Tween_1<float_t>* _scaleDownTween;

  /// @brief Field _scaleUpTween, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__scaleUpTween, put = __cordl_internal_set__scaleUpTween))::Tweening::Tween_1<float_t>* _scaleUpTween;

  /// @brief Field _targetTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__targetTransform, put = __cordl_internal_set__targetTransform))::UnityW<::UnityEngine::Transform> _targetTransform;

  /// @brief Field _tweeningManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager))::UnityW<::Tweening::TimeTweeningManager> _tweeningManager;

  /// @brief Method Animate, addr 0x2617fec, size 0xfc, virtual false, abstract: false, final false
  inline void Animate(bool show, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay);

  /// @brief Method HideInstant, addr 0x2617ed4, size 0xa8, virtual false, abstract: false, final false
  inline void HideInstant();

  /// @brief Method InitIfNeeded, addr 0x2617c08, size 0x254, virtual false, abstract: false, final false
  inline void InitIfNeeded();

  static inline ::GlobalNamespace::ScaleAnimator* New_ctor();

  /// @brief Method OnDestroy, addr 0x2617b80, size 0x88, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetPositionAndRotation, addr 0x2617e5c, size 0x78, virtual false, abstract: false, final false
  inline void SetPositionAndRotation(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method ShowInstant, addr 0x2617f7c, size 0x70, virtual false, abstract: false, final false
  inline void ShowInstant();

  /// @brief Method <InitIfNeeded>b__7_0, addr 0x26180f8, size 0x24, virtual false, abstract: false, final false
  inline void _InitIfNeeded_b__7_0(float_t val);

  /// @brief Method <InitIfNeeded>b__7_1, addr 0x2618148, size 0x24, virtual false, abstract: false, final false
  inline void _InitIfNeeded_b__7_1(float_t val);

  /// @brief Method <InitIfNeeded>b__7_2, addr 0x261811c, size 0x2c, virtual false, abstract: false, final false
  inline void _InitIfNeeded_b__7_2();

  /// @brief Method <InitIfNeeded>b__7_3, addr 0x261816c, size 0x2c, virtual false, abstract: false, final false
  inline void _InitIfNeeded_b__7_3();

  constexpr float_t const& __cordl_internal_get__displayedScale() const;

  constexpr float_t& __cordl_internal_get__displayedScale();

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr ::Tweening::Tween_1<float_t>*& __cordl_internal_get__scaleDownTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& __cordl_internal_get__scaleDownTween() const;

  constexpr ::Tweening::Tween_1<float_t>*& __cordl_internal_get__scaleUpTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& __cordl_internal_get__scaleUpTween() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__targetTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__targetTransform();

  constexpr ::UnityW<::Tweening::TimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr void __cordl_internal_set__displayedScale(float_t value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__scaleDownTween(::Tweening::Tween_1<float_t>* value);

  constexpr void __cordl_internal_set__scaleUpTween(::Tweening::Tween_1<float_t>* value);

  constexpr void __cordl_internal_set__targetTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value);

  /// @brief Method .ctor, addr 0x26180e8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScaleAnimator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScaleAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScaleAnimator(ScaleAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScaleAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScaleAnimator(ScaleAnimator const&) = delete;

  /// @brief Field _displayedScale, offset: 0x18, size: 0x4, def value: None
  float_t ____displayedScale;

  /// @brief Field _targetTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____targetTransform;

  /// @brief Field _tweeningManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Tweening::TimeTweeningManager> ____tweeningManager;

  /// @brief Field _scaleUpTween, offset: 0x30, size: 0x8, def value: None
  ::Tweening::Tween_1<float_t>* ____scaleUpTween;

  /// @brief Field _scaleDownTween, offset: 0x38, size: 0x8, def value: None
  ::Tweening::Tween_1<float_t>* ____scaleDownTween;

  /// @brief Field _initialized, offset: 0x40, size: 0x1, def value: None
  bool ____initialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScaleAnimator, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ScaleAnimator, ____displayedScale) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScaleAnimator, ____targetTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScaleAnimator, ____tweeningManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScaleAnimator, ____scaleUpTween) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScaleAnimator, ____scaleDownTween) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScaleAnimator, ____initialized) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScaleAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScaleAnimator*, "", "ScaleAnimator");
