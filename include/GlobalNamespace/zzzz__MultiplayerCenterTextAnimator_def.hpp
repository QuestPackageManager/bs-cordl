#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerCenterTextAnimator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerCenterTextAnimator)
namespace GlobalNamespace {
struct EaseType;
}
namespace TMPro {
class TextMeshPro;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace Tweening {
template <typename T> class Tween_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerCenterTextAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerCenterTextAnimator);
// Type: ::MultiplayerCenterTextAnimator
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerCenterTextAnimator*
class CORDL_TYPE MultiplayerCenterTextAnimator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _colorTween, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__colorTween, put = __cordl_internal_set__colorTween))::Tweening::Tween_1<::UnityEngine::Color>* _colorTween;

  /// @brief Field _fadeInTween, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeInTween, put = __cordl_internal_set__fadeInTween))::Tweening::Tween_1<float_t>* _fadeInTween;

  /// @brief Field _fadeOutTween, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeOutTween, put = __cordl_internal_set__fadeOutTween))::Tweening::Tween_1<float_t>* _fadeOutTween;

  /// @brief Field _fontSizeTween, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__fontSizeTween, put = __cordl_internal_set__fontSizeTween))::Tweening::Tween_1<float_t>* _fontSizeTween;

  /// @brief Field _offsetTween, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__offsetTween, put = __cordl_internal_set__offsetTween))::Tweening::Tween_1<::UnityEngine::Vector3>* _offsetTween;

  /// @brief Field _scalingTarget, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__scalingTarget, put = __cordl_internal_set__scalingTarget))::UnityW<::UnityEngine::Transform> _scalingTarget;

  /// @brief Field _text, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text))::UnityW<::TMPro::TextMeshPro> _text;

  /// @brief Field _tweeningManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager))::UnityW<::Tweening::TimeTweeningManager> _tweeningManager;

  /// @brief Method AnimateEnabled, addr 0x271e2ec, size 0x14c, virtual false, abstract: false, final false
  inline void AnimateEnabled(bool isEnabled, float_t duration, ::GlobalNamespace::EaseType easeType);

  /// @brief Method AnimateFontSize, addr 0x271e210, size 0x4c, virtual false, abstract: false, final false
  inline void AnimateFontSize(float_t fontSize, float_t duration, ::GlobalNamespace::EaseType easeType);

  /// @brief Method AnimatePositionOffsetSize, addr 0x271e25c, size 0x90, virtual false, abstract: false, final false
  inline void AnimatePositionOffsetSize(::UnityEngine::Vector3 offset, float_t duration, ::GlobalNamespace::EaseType easeType);

  /// @brief Method AnimateTextColor, addr 0x271e174, size 0x9c, virtual false, abstract: false, final false
  inline void AnimateTextColor(::UnityEngine::Color color, float_t duration, ::GlobalNamespace::EaseType easeType);

  /// @brief Method Awake, addr 0x271dce4, size 0x408, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::MultiplayerCenterTextAnimator* New_ctor();

  /// @brief Method OnDestroy, addr 0x271e0ec, size 0x88, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetText, addr 0x271e438, size 0x24, virtual false, abstract: false, final false
  inline void SetText(::StringW text);

  /// @brief Method <Awake>b__8_0, addr 0x271e464, size 0x78, virtual false, abstract: false, final false
  inline void _Awake_b__8_0(float_t val);

  /// @brief Method <Awake>b__8_1, addr 0x271e4dc, size 0x78, virtual false, abstract: false, final false
  inline void _Awake_b__8_1(float_t val);

  /// @brief Method <Awake>b__8_2, addr 0x271e580, size 0x1c, virtual false, abstract: false, final false
  inline void _Awake_b__8_2(float_t val);

  /// @brief Method <Awake>b__8_3, addr 0x271e59c, size 0x24, virtual false, abstract: false, final false
  inline void _Awake_b__8_3(::UnityEngine::Color val);

  /// @brief Method <Awake>b__8_4, addr 0x271e5c0, size 0x1c, virtual false, abstract: false, final false
  inline void _Awake_b__8_4(::UnityEngine::Vector3 val);

  /// @brief Method <Awake>b__8_5, addr 0x271e554, size 0x2c, virtual false, abstract: false, final false
  inline void _Awake_b__8_5();

  constexpr ::Tweening::Tween_1<::UnityEngine::Color>*& __cordl_internal_get__colorTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Color>*> const& __cordl_internal_get__colorTween() const;

  constexpr ::Tweening::Tween_1<float_t>*& __cordl_internal_get__fadeInTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& __cordl_internal_get__fadeInTween() const;

  constexpr ::Tweening::Tween_1<float_t>*& __cordl_internal_get__fadeOutTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& __cordl_internal_get__fadeOutTween() const;

  constexpr ::Tweening::Tween_1<float_t>*& __cordl_internal_get__fontSizeTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& __cordl_internal_get__fontSizeTween() const;

  constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& __cordl_internal_get__offsetTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& __cordl_internal_get__offsetTween() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__scalingTarget() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__scalingTarget();

  constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__text();

  constexpr ::UnityW<::Tweening::TimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr void __cordl_internal_set__colorTween(::Tweening::Tween_1<::UnityEngine::Color>* value);

  constexpr void __cordl_internal_set__fadeInTween(::Tweening::Tween_1<float_t>* value);

  constexpr void __cordl_internal_set__fadeOutTween(::Tweening::Tween_1<float_t>* value);

  constexpr void __cordl_internal_set__fontSizeTween(::Tweening::Tween_1<float_t>* value);

  constexpr void __cordl_internal_set__offsetTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value);

  constexpr void __cordl_internal_set__scalingTarget(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshPro> value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value);

  /// @brief Method .ctor, addr 0x271e45c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerCenterTextAnimator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerCenterTextAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerCenterTextAnimator(MultiplayerCenterTextAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerCenterTextAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerCenterTextAnimator(MultiplayerCenterTextAnimator const&) = delete;

  /// @brief Field _text, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshPro> ____text;

  /// @brief Field _scalingTarget, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____scalingTarget;

  /// @brief Field _tweeningManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Tweening::TimeTweeningManager> ____tweeningManager;

  /// @brief Field _fadeInTween, offset: 0x30, size: 0x8, def value: None
  ::Tweening::Tween_1<float_t>* ____fadeInTween;

  /// @brief Field _fadeOutTween, offset: 0x38, size: 0x8, def value: None
  ::Tweening::Tween_1<float_t>* ____fadeOutTween;

  /// @brief Field _fontSizeTween, offset: 0x40, size: 0x8, def value: None
  ::Tweening::Tween_1<float_t>* ____fontSizeTween;

  /// @brief Field _colorTween, offset: 0x48, size: 0x8, def value: None
  ::Tweening::Tween_1<::UnityEngine::Color>* ____colorTween;

  /// @brief Field _offsetTween, offset: 0x50, size: 0x8, def value: None
  ::Tweening::Tween_1<::UnityEngine::Vector3>* ____offsetTween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerCenterTextAnimator, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerCenterTextAnimator, ____text) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerCenterTextAnimator, ____scalingTarget) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerCenterTextAnimator, ____tweeningManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerCenterTextAnimator, ____fadeInTween) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerCenterTextAnimator, ____fadeOutTween) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerCenterTextAnimator, ____fontSizeTween) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerCenterTextAnimator, ____colorTween) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerCenterTextAnimator, ____offsetTween) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerCenterTextAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerCenterTextAnimator*, "", "MultiplayerCenterTextAnimator");
