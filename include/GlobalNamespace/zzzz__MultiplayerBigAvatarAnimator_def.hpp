#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerBigAvatarAnimator)
namespace Tweening {
template <typename T> class Tween_1;
}
namespace GlobalNamespace {
class HologramRays;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBigAvatarAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBigAvatarAnimator);
// Type: ::MultiplayerBigAvatarAnimator
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5295))
// CS Name: ::MultiplayerBigAvatarAnimator*
class CORDL_TYPE MultiplayerBigAvatarAnimator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _displayedScale, offset 0x18, size 0x4
  __declspec(property(get = __get__displayedScale, put = __set__displayedScale)) float_t _displayedScale;

  /// @brief Field _hologramRays, offset 0x20, size 0x8
  __declspec(property(get = __get__hologramRays, put = __set__hologramRays))::GlobalNamespace::HologramRays* _hologramRays;

  /// @brief Field _avatarTransform, offset 0x28, size 0x8
  __declspec(property(get = __get__avatarTransform, put = __set__avatarTransform))::UnityEngine::Transform* _avatarTransform;

  /// @brief Field _tweeningManager, offset 0x30, size 0x8
  __declspec(property(get = __get__tweeningManager, put = __set__tweeningManager))::Tweening::TimeTweeningManager* _tweeningManager;

  /// @brief Field _scaleUpTween, offset 0x38, size 0x8
  __declspec(property(get = __get__scaleUpTween, put = __set__scaleUpTween))::Tweening::Tween_1<float_t>* _scaleUpTween;

  /// @brief Field _scaleDownTween, offset 0x40, size 0x8
  __declspec(property(get = __get__scaleDownTween, put = __set__scaleDownTween))::Tweening::Tween_1<float_t>* _scaleDownTween;

  /// @brief Field _initialized, offset 0x48, size 0x1
  __declspec(property(get = __get__initialized, put = __set__initialized)) bool _initialized;

  constexpr float_t& __get__displayedScale();

  constexpr float_t const& __get__displayedScale() const;

  constexpr void __set__displayedScale(float_t value);

  constexpr ::GlobalNamespace::HologramRays*& __get__hologramRays();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HologramRays*> const& __get__hologramRays() const;

  constexpr void __set__hologramRays(::GlobalNamespace::HologramRays* value);

  constexpr ::UnityEngine::Transform*& __get__avatarTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__avatarTransform() const;

  constexpr void __set__avatarTransform(::UnityEngine::Transform* value);

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

  /// @brief Method OnDestroy addr 0x2103b54 size 0x88 virtual false final false
  inline void OnDestroy();

  /// @brief Method InitIfNeeded addr 0x2103bdc size 0x1d8 virtual false final false
  inline void InitIfNeeded();

  /// @brief Method SetPositionAndRotation addr 0x2103db4 size 0x78 virtual false final false
  inline void SetPositionAndRotation(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method HideInstant addr 0x2103e2c size 0xa8 virtual false final false
  inline void HideInstant();

  /// @brief Method Animate addr 0x2103ed4 size 0x1d4 virtual false final false
  inline void Animate(bool show, float_t duration, ::GlobalNamespace::EaseType easeType);

  static inline ::GlobalNamespace::MultiplayerBigAvatarAnimator* New_ctor();

  /// @brief Method .ctor addr 0x21040a8 size 0x10 virtual false final false
  inline void _ctor();

  /// @brief Method <InitIfNeeded>b__8_0 addr 0x21040b8 size 0x78 virtual false final false
  inline void _InitIfNeeded_b__8_0(float_t val);

  /// @brief Method <InitIfNeeded>b__8_1 addr 0x2104130 size 0x78 virtual false final false
  inline void _InitIfNeeded_b__8_1(float_t val);

  /// @brief Method <InitIfNeeded>b__8_2 addr 0x21041a8 size 0x2c virtual false final false
  inline void _InitIfNeeded_b__8_2();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBigAvatarAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerBigAvatarAnimator(MultiplayerBigAvatarAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBigAvatarAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerBigAvatarAnimator(MultiplayerBigAvatarAnimator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerBigAvatarAnimator();

public:
  /// @brief Field _displayedScale, offset: 0x18, size: 0x4, def value: None
  float_t ____displayedScale;

  /// @brief Field _hologramRays, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::HologramRays* ____hologramRays;

  /// @brief Field _avatarTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Transform* ____avatarTransform;

  /// @brief Field _tweeningManager, offset: 0x30, size: 0x8, def value: None
  ::Tweening::TimeTweeningManager* ____tweeningManager;

  /// @brief Field _scaleUpTween, offset: 0x38, size: 0x8, def value: None
  ::Tweening::Tween_1<float_t>* ____scaleUpTween;

  /// @brief Field _scaleDownTween, offset: 0x40, size: 0x8, def value: None
  ::Tweening::Tween_1<float_t>* ____scaleDownTween;

  /// @brief Field _initialized, offset: 0x48, size: 0x1, def value: None
  bool ____initialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBigAvatarAnimator, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBigAvatarAnimator, ____displayedScale) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBigAvatarAnimator, ____hologramRays) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBigAvatarAnimator, ____avatarTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBigAvatarAnimator, ____tweeningManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBigAvatarAnimator, ____scaleUpTween) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBigAvatarAnimator, ____scaleDownTween) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBigAvatarAnimator, ____initialized) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBigAvatarAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBigAvatarAnimator*, "", "MultiplayerBigAvatarAnimator");
