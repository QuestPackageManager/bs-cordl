#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5194))
// CS Name: ::MultiplayerCenterTextAnimator*
class CORDL_TYPE MultiplayerCenterTextAnimator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _text, offset 0x18, size 0x8
  __declspec(property(get = __get__text, put = __set__text))::TMPro::TextMeshPro* _text;

  /// @brief Field _scalingTarget, offset 0x20, size 0x8
  __declspec(property(get = __get__scalingTarget, put = __set__scalingTarget))::UnityEngine::Transform* _scalingTarget;

  /// @brief Field _tweeningManager, offset 0x28, size 0x8
  __declspec(property(get = __get__tweeningManager, put = __set__tweeningManager))::Tweening::TimeTweeningManager* _tweeningManager;

  /// @brief Field _fadeInTween, offset 0x30, size 0x8
  __declspec(property(get = __get__fadeInTween, put = __set__fadeInTween))::Tweening::Tween_1<float_t>* _fadeInTween;

  /// @brief Field _fadeOutTween, offset 0x38, size 0x8
  __declspec(property(get = __get__fadeOutTween, put = __set__fadeOutTween))::Tweening::Tween_1<float_t>* _fadeOutTween;

  /// @brief Field _fontSizeTween, offset 0x40, size 0x8
  __declspec(property(get = __get__fontSizeTween, put = __set__fontSizeTween))::Tweening::Tween_1<float_t>* _fontSizeTween;

  /// @brief Field _colorTween, offset 0x48, size 0x8
  __declspec(property(get = __get__colorTween, put = __set__colorTween))::Tweening::Tween_1<::UnityEngine::Color>* _colorTween;

  /// @brief Field _offsetTween, offset 0x50, size 0x8
  __declspec(property(get = __get__offsetTween, put = __set__offsetTween))::Tweening::Tween_1<::UnityEngine::Vector3>* _offsetTween;

  constexpr ::TMPro::TextMeshPro*& __get__text();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshPro*> const& __get__text() const;

  constexpr void __set__text(::TMPro::TextMeshPro* value);

  constexpr ::UnityEngine::Transform*& __get__scalingTarget();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__scalingTarget() const;

  constexpr void __set__scalingTarget(::UnityEngine::Transform* value);

  constexpr ::Tweening::TimeTweeningManager*& __get__tweeningManager();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> const& __get__tweeningManager() const;

  constexpr void __set__tweeningManager(::Tweening::TimeTweeningManager* value);

  constexpr ::Tweening::Tween_1<float_t>*& __get__fadeInTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& __get__fadeInTween() const;

  constexpr void __set__fadeInTween(::Tweening::Tween_1<float_t>* value);

  constexpr ::Tweening::Tween_1<float_t>*& __get__fadeOutTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& __get__fadeOutTween() const;

  constexpr void __set__fadeOutTween(::Tweening::Tween_1<float_t>* value);

  constexpr ::Tweening::Tween_1<float_t>*& __get__fontSizeTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& __get__fontSizeTween() const;

  constexpr void __set__fontSizeTween(::Tweening::Tween_1<float_t>* value);

  constexpr ::Tweening::Tween_1<::UnityEngine::Color>*& __get__colorTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Color>*> const& __get__colorTween() const;

  constexpr void __set__colorTween(::Tweening::Tween_1<::UnityEngine::Color>* value);

  constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& __get__offsetTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& __get__offsetTween() const;

  constexpr void __set__offsetTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value);

  /// @brief Method Awake, addr 0x22459c0, size 0x408, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDestroy, addr 0x2245dc8, size 0x88, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method AnimateTextColor, addr 0x2245e50, size 0x98, virtual false, abstract: false, final false
  inline void AnimateTextColor(::UnityEngine::Color color, float_t duration, ::GlobalNamespace::EaseType easeType);

  /// @brief Method AnimateFontSize, addr 0x2245ee8, size 0x44, virtual false, abstract: false, final false
  inline void AnimateFontSize(float_t fontSize, float_t duration, ::GlobalNamespace::EaseType easeType);

  /// @brief Method AnimatePositionOffsetSize, addr 0x2245f2c, size 0x8c, virtual false, abstract: false, final false
  inline void AnimatePositionOffsetSize(::UnityEngine::Vector3 offset, float_t duration, ::GlobalNamespace::EaseType easeType);

  /// @brief Method AnimateEnabled, addr 0x2245fb8, size 0x148, virtual false, abstract: false, final false
  inline void AnimateEnabled(bool isEnabled, float_t duration, ::GlobalNamespace::EaseType easeType);

  /// @brief Method SetText, addr 0x2246100, size 0x24, virtual false, abstract: false, final false
  inline void SetText(::StringW text);

  static inline ::GlobalNamespace::MultiplayerCenterTextAnimator* New_ctor();

  /// @brief Method .ctor, addr 0x2246124, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Awake>b__8_0, addr 0x224612c, size 0x78, virtual false, abstract: false, final false
  inline void _Awake_b__8_0(float_t val);

  /// @brief Method <Awake>b__8_1, addr 0x22461a4, size 0x78, virtual false, abstract: false, final false
  inline void _Awake_b__8_1(float_t val);

  /// @brief Method <Awake>b__8_5, addr 0x224621c, size 0x2c, virtual false, abstract: false, final false
  inline void _Awake_b__8_5();

  /// @brief Method <Awake>b__8_2, addr 0x2246248, size 0x1c, virtual false, abstract: false, final false
  inline void _Awake_b__8_2(float_t val);

  /// @brief Method <Awake>b__8_3, addr 0x2246264, size 0x24, virtual false, abstract: false, final false
  inline void _Awake_b__8_3(::UnityEngine::Color val);

  /// @brief Method <Awake>b__8_4, addr 0x2246288, size 0x1c, virtual false, abstract: false, final false
  inline void _Awake_b__8_4(::UnityEngine::Vector3 val);

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerCenterTextAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerCenterTextAnimator(MultiplayerCenterTextAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerCenterTextAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerCenterTextAnimator(MultiplayerCenterTextAnimator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerCenterTextAnimator();

public:
  /// @brief Field _text, offset: 0x18, size: 0x8, def value: None
  ::TMPro::TextMeshPro* ____text;

  /// @brief Field _scalingTarget, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ____scalingTarget;

  /// @brief Field _tweeningManager, offset: 0x28, size: 0x8, def value: None
  ::Tweening::TimeTweeningManager* ____tweeningManager;

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
