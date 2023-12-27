#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ScaleAnimator)
namespace UnityEngine {
struct Vector3;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace GlobalNamespace {
struct EaseType;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5257))
// CS Name: ::ScaleAnimator*
class CORDL_TYPE ScaleAnimator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _displayedScale, offset 0x18, size 0x4
  __declspec(property(get = __get__displayedScale, put = __set__displayedScale)) float_t _displayedScale;

  /// @brief Field _targetTransform, offset 0x20, size 0x8
  __declspec(property(get = __get__targetTransform, put = __set__targetTransform))::UnityEngine::Transform* _targetTransform;

  /// @brief Field _tweeningManager, offset 0x28, size 0x8
  __declspec(property(get = __get__tweeningManager, put = __set__tweeningManager))::Tweening::TimeTweeningManager* _tweeningManager;

  /// @brief Field _scaleUpTween, offset 0x30, size 0x8
  __declspec(property(get = __get__scaleUpTween, put = __set__scaleUpTween))::Tweening::Tween_1<float_t>* _scaleUpTween;

  /// @brief Field _scaleDownTween, offset 0x38, size 0x8
  __declspec(property(get = __get__scaleDownTween, put = __set__scaleDownTween))::Tweening::Tween_1<float_t>* _scaleDownTween;

  /// @brief Field _initialized, offset 0x40, size 0x1
  __declspec(property(get = __get__initialized, put = __set__initialized)) bool _initialized;

  constexpr float_t& __get__displayedScale();

  constexpr float_t const& __get__displayedScale() const;

  constexpr void __set__displayedScale(float_t value);

  constexpr ::UnityEngine::Transform*& __get__targetTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__targetTransform() const;

  constexpr void __set__targetTransform(::UnityEngine::Transform* value);

  constexpr ::Tweening::TimeTweeningManager*& __get__tweeningManager();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> const& __get__tweeningManager() const;

  constexpr void __set__tweeningManager(::Tweening::TimeTweeningManager* value);

  constexpr ::Tweening::Tween_1<float_t>*& __get__scaleUpTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& __get__scaleUpTween() const;

  constexpr void __set__scaleUpTween(::Tweening::Tween_1<float_t>* value);

  constexpr ::Tweening::Tween_1<float_t>*& __get__scaleDownTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& __get__scaleDownTween() const;

  constexpr void __set__scaleDownTween(::Tweening::Tween_1<float_t>* value);

  constexpr bool& __get__initialized();

  constexpr bool const& __get__initialized() const;

  constexpr void __set__initialized(bool value);

  /// @brief Method OnDestroy addr 0x225cd04 size 0x88 virtual false final false
  inline void OnDestroy();

  /// @brief Method InitIfNeeded addr 0x225cd8c size 0x254 virtual false final false
  inline void InitIfNeeded();

  /// @brief Method SetPositionAndRotation addr 0x225cfe0 size 0x78 virtual false final false
  inline void SetPositionAndRotation(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method HideInstant addr 0x225d058 size 0xa8 virtual false final false
  inline void HideInstant();

  /// @brief Method ShowInstant addr 0x225d100 size 0x70 virtual false final false
  inline void ShowInstant();

  /// @brief Method Animate addr 0x225d170 size 0xfc virtual false final false
  inline void Animate(bool show, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay);

  static inline ::GlobalNamespace::ScaleAnimator* New_ctor();

  /// @brief Method .ctor addr 0x225d26c size 0x10 virtual false final false
  inline void _ctor();

  /// @brief Method <InitIfNeeded>b__7_0 addr 0x225d27c size 0x24 virtual false final false
  inline void _InitIfNeeded_b__7_0(float_t val);

  /// @brief Method <InitIfNeeded>b__7_2 addr 0x225d2a0 size 0x2c virtual false final false
  inline void _InitIfNeeded_b__7_2();

  /// @brief Method <InitIfNeeded>b__7_1 addr 0x225d2cc size 0x24 virtual false final false
  inline void _InitIfNeeded_b__7_1(float_t val);

  /// @brief Method <InitIfNeeded>b__7_3 addr 0x225d2f0 size 0x2c virtual false final false
  inline void _InitIfNeeded_b__7_3();

  // Ctor Parameters [CppParam { name: "", ty: "ScaleAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScaleAnimator(ScaleAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScaleAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScaleAnimator(ScaleAnimator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScaleAnimator();

public:
  /// @brief Field _displayedScale, offset: 0x18, size: 0x4, def value: None
  float_t ____displayedScale;

  /// @brief Field _targetTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ____targetTransform;

  /// @brief Field _tweeningManager, offset: 0x28, size: 0x8, def value: None
  ::Tweening::TimeTweeningManager* ____tweeningManager;

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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScaleAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScaleAnimator*, "", "ScaleAnimator");
