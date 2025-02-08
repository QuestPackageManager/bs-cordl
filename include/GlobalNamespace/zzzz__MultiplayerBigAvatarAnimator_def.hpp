#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerBigAvatarAnimator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerBigAvatarAnimator)
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class HologramRays;
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
class MultiplayerBigAvatarAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBigAvatarAnimator);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerBigAvatarAnimator
class CORDL_TYPE MultiplayerBigAvatarAnimator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _avatarTransform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarTransform, put = __cordl_internal_set__avatarTransform)) ::UnityW<::UnityEngine::Transform> _avatarTransform;

  /// @brief Field _displayedScale, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__displayedScale, put = __cordl_internal_set__displayedScale)) float_t _displayedScale;

  /// @brief Field _hologramRays, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__hologramRays, put = __cordl_internal_set__hologramRays)) ::UnityW<::GlobalNamespace::HologramRays> _hologramRays;

  /// @brief Field _initialized, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _scaleDownTween, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__scaleDownTween, put = __cordl_internal_set__scaleDownTween)) ::Tweening::Tween_1<float_t>* _scaleDownTween;

  /// @brief Field _scaleUpTween, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__scaleUpTween, put = __cordl_internal_set__scaleUpTween)) ::Tweening::Tween_1<float_t>* _scaleUpTween;

  /// @brief Field _tweeningManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager)) ::UnityW<::Tweening::TimeTweeningManager> _tweeningManager;

  /// @brief Method Animate, addr 0x3bd1488, size 0x1d4, virtual false, abstract: false, final false
  inline void Animate(bool show, float_t duration, ::GlobalNamespace::EaseType easeType);

  /// @brief Method HideInstant, addr 0x3bd13e0, size 0xa8, virtual false, abstract: false, final false
  inline void HideInstant();

  /// @brief Method InitIfNeeded, addr 0x3bd11a0, size 0x1c8, virtual false, abstract: false, final false
  inline void InitIfNeeded();

  static inline ::GlobalNamespace::MultiplayerBigAvatarAnimator* New_ctor();

  /// @brief Method OnDestroy, addr 0x3bd1118, size 0x88, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetPositionAndRotation, addr 0x3bd1368, size 0x78, virtual false, abstract: false, final false
  inline void SetPositionAndRotation(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method <InitIfNeeded>b__8_0, addr 0x3bd166c, size 0x78, virtual false, abstract: false, final false
  inline void _InitIfNeeded_b__8_0(float_t val);

  /// @brief Method <InitIfNeeded>b__8_1, addr 0x3bd16e4, size 0x78, virtual false, abstract: false, final false
  inline void _InitIfNeeded_b__8_1(float_t val);

  /// @brief Method <InitIfNeeded>b__8_2, addr 0x3bd175c, size 0x2c, virtual false, abstract: false, final false
  inline void _InitIfNeeded_b__8_2();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__avatarTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__avatarTransform();

  constexpr float_t const& __cordl_internal_get__displayedScale() const;

  constexpr float_t& __cordl_internal_get__displayedScale();

  constexpr ::UnityW<::GlobalNamespace::HologramRays> const& __cordl_internal_get__hologramRays() const;

  constexpr ::UnityW<::GlobalNamespace::HologramRays>& __cordl_internal_get__hologramRays();

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr ::Tweening::Tween_1<float_t>* const& __cordl_internal_get__scaleDownTween() const;

  constexpr ::Tweening::Tween_1<float_t>*& __cordl_internal_get__scaleDownTween();

  constexpr ::Tweening::Tween_1<float_t>* const& __cordl_internal_get__scaleUpTween() const;

  constexpr ::Tweening::Tween_1<float_t>*& __cordl_internal_get__scaleUpTween();

  constexpr ::UnityW<::Tweening::TimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr void __cordl_internal_set__avatarTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__displayedScale(float_t value);

  constexpr void __cordl_internal_set__hologramRays(::UnityW<::GlobalNamespace::HologramRays> value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__scaleDownTween(::Tweening::Tween_1<float_t>* value);

  constexpr void __cordl_internal_set__scaleUpTween(::Tweening::Tween_1<float_t>* value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value);

  /// @brief Method .ctor, addr 0x3bd165c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerBigAvatarAnimator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBigAvatarAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerBigAvatarAnimator(MultiplayerBigAvatarAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBigAvatarAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerBigAvatarAnimator(MultiplayerBigAvatarAnimator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4554 };

  /// @brief Field _displayedScale, offset: 0x20, size: 0x4, def value: None
  float_t ____displayedScale;

  /// @brief Field _hologramRays, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HologramRays> ____hologramRays;

  /// @brief Field _avatarTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____avatarTransform;

  /// @brief Field _tweeningManager, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::Tweening::TimeTweeningManager> ____tweeningManager;

  /// @brief Field _scaleUpTween, offset: 0x40, size: 0x8, def value: None
  ::Tweening::Tween_1<float_t>* ____scaleUpTween;

  /// @brief Field _scaleDownTween, offset: 0x48, size: 0x8, def value: None
  ::Tweening::Tween_1<float_t>* ____scaleDownTween;

  /// @brief Field _initialized, offset: 0x50, size: 0x1, def value: None
  bool ____initialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerBigAvatarAnimator, ____displayedScale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBigAvatarAnimator, ____hologramRays) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBigAvatarAnimator, ____avatarTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBigAvatarAnimator, ____tweeningManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBigAvatarAnimator, ____scaleUpTween) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBigAvatarAnimator, ____scaleDownTween) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBigAvatarAnimator, ____initialized) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBigAvatarAnimator, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBigAvatarAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBigAvatarAnimator*, "", "MultiplayerBigAvatarAnimator");
