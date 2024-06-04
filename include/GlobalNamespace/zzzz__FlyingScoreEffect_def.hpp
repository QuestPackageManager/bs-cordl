#pragma once
// IWYU pragma private; include "GlobalNamespace/FlyingScoreEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FlyingObjectEffect_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FlyingScoreEffect)
namespace GlobalNamespace {
class CutScoreBuffer;
}
namespace GlobalNamespace {
class ICutScoreBufferDidChangeReceiver;
}
namespace GlobalNamespace {
class ICutScoreBufferDidFinishReceiver;
}
namespace GlobalNamespace {
class IReadonlyCutScoreBuffer;
}
namespace GlobalNamespace {
class __FlyingScoreEffect__Pool;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class FlyingScoreEffect;
}
namespace GlobalNamespace {
class __FlyingScoreEffect__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FlyingScoreEffect);
MARK_REF_PTR_T(::GlobalNamespace::__FlyingScoreEffect__Pool);
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FlyingScoreEffect::Pool*
class CORDL_TYPE __FlyingScoreEffect__Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::FlyingScoreEffect>> {
public:
  // Declarations
  static inline ::GlobalNamespace::__FlyingScoreEffect__Pool* New_ctor();

  /// @brief Method OnDespawned, addr 0x26d0798, size 0x60, virtual true, abstract: false, final false
  inline void OnDespawned(::GlobalNamespace::FlyingScoreEffect* item);

  /// @brief Method .ctor, addr 0x26d07f8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FlyingScoreEffect__Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FlyingScoreEffect__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FlyingScoreEffect__Pool(__FlyingScoreEffect__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FlyingScoreEffect__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FlyingScoreEffect__Pool(__FlyingScoreEffect__Pool const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FlyingScoreEffect__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::FlyingScoreEffect
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FlyingScoreEffect*
class CORDL_TYPE FlyingScoreEffect : public ::GlobalNamespace::FlyingObjectEffect {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__FlyingScoreEffect__Pool;

  /// @brief Field _color, offset 0x98, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color))::UnityEngine::Color _color;

  /// @brief Field _colorAMultiplier, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get__colorAMultiplier, put = __cordl_internal_set__colorAMultiplier)) float_t _colorAMultiplier;

  /// @brief Field _cutScoreBuffer, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__cutScoreBuffer, put = __cordl_internal_set__cutScoreBuffer))::GlobalNamespace::IReadonlyCutScoreBuffer* _cutScoreBuffer;

  /// @brief Field _fadeAnimationCurve, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeAnimationCurve, put = __cordl_internal_set__fadeAnimationCurve))::UnityEngine::AnimationCurve* _fadeAnimationCurve;

  /// @brief Field _maxCutDistanceScoreIndicator, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__maxCutDistanceScoreIndicator,
                      put = __cordl_internal_set__maxCutDistanceScoreIndicator))::UnityW<::UnityEngine::SpriteRenderer> _maxCutDistanceScoreIndicator;

  /// @brief Field _registeredToCallbacks, offset 0xac, size 0x1
  __declspec(property(get = __cordl_internal_get__registeredToCallbacks, put = __cordl_internal_set__registeredToCallbacks)) bool _registeredToCallbacks;

  /// @brief Field _text, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text))::UnityW<::TMPro::TextMeshPro> _text;

  /// @brief Convert operator to "::GlobalNamespace::ICutScoreBufferDidChangeReceiver"
  constexpr operator ::GlobalNamespace::ICutScoreBufferDidChangeReceiver*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ICutScoreBufferDidFinishReceiver"
  constexpr operator ::GlobalNamespace::ICutScoreBufferDidFinishReceiver*() noexcept;

  /// @brief Method HandleCutScoreBufferDidChange, addr 0x26d05f0, size 0x4c, virtual true, abstract: false, final true
  inline void HandleCutScoreBufferDidChange(::GlobalNamespace::CutScoreBuffer* cutScoreBuffer);

  /// @brief Method HandleCutScoreBufferDidFinish, addr 0x26d063c, size 0x4, virtual true, abstract: false, final true
  inline void HandleCutScoreBufferDidFinish(::GlobalNamespace::CutScoreBuffer* cutScoreBuffer);

  /// @brief Method InitAndPresent, addr 0x26cfffc, size 0x4e4, virtual false, abstract: false, final false
  inline void InitAndPresent(::GlobalNamespace::IReadonlyCutScoreBuffer* cutScoreBuffer, float_t duration, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Color color);

  /// @brief Method ManualUpdate, addr 0x26d0568, size 0x88, virtual true, abstract: false, final false
  inline void ManualUpdate(float_t t);

  static inline ::GlobalNamespace::FlyingScoreEffect* New_ctor();

  /// @brief Method RefreshScore, addr 0x26d04e0, size 0x88, virtual false, abstract: false, final false
  inline void RefreshScore(int32_t score, int32_t maxPossibleCutScore);

  /// @brief Method UnregisterCallbacksIfNeeded, addr 0x26d0640, size 0x128, virtual false, abstract: false, final false
  inline void UnregisterCallbacksIfNeeded();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr float_t const& __cordl_internal_get__colorAMultiplier() const;

  constexpr float_t& __cordl_internal_get__colorAMultiplier();

  constexpr ::GlobalNamespace::IReadonlyCutScoreBuffer*& __cordl_internal_get__cutScoreBuffer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyCutScoreBuffer*> const& __cordl_internal_get__cutScoreBuffer() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__fadeAnimationCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__fadeAnimationCurve() const;

  constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__maxCutDistanceScoreIndicator() const;

  constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__maxCutDistanceScoreIndicator();

  constexpr bool const& __cordl_internal_get__registeredToCallbacks() const;

  constexpr bool& __cordl_internal_get__registeredToCallbacks();

  constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__text();

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__colorAMultiplier(float_t value);

  constexpr void __cordl_internal_set__cutScoreBuffer(::GlobalNamespace::IReadonlyCutScoreBuffer* value);

  constexpr void __cordl_internal_set__fadeAnimationCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__maxCutDistanceScoreIndicator(::UnityW<::UnityEngine::SpriteRenderer> value);

  constexpr void __cordl_internal_set__registeredToCallbacks(bool value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshPro> value);

  /// @brief Method .ctor, addr 0x26d0768, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::ICutScoreBufferDidChangeReceiver"
  constexpr ::GlobalNamespace::ICutScoreBufferDidChangeReceiver* i___GlobalNamespace__ICutScoreBufferDidChangeReceiver() noexcept;

  /// @brief Convert to "::GlobalNamespace::ICutScoreBufferDidFinishReceiver"
  constexpr ::GlobalNamespace::ICutScoreBufferDidFinishReceiver* i___GlobalNamespace__ICutScoreBufferDidFinishReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlyingScoreEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlyingScoreEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlyingScoreEffect(FlyingScoreEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlyingScoreEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlyingScoreEffect(FlyingScoreEffect const&) = delete;

  /// @brief Field _fadeAnimationCurve, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____fadeAnimationCurve;

  /// @brief Field _maxCutDistanceScoreIndicator, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SpriteRenderer> ____maxCutDistanceScoreIndicator;

  /// @brief Field _text, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshPro> ____text;

  /// @brief Field _color, offset: 0x98, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _colorAMultiplier, offset: 0xa8, size: 0x4, def value: None
  float_t ____colorAMultiplier;

  /// @brief Field _registeredToCallbacks, offset: 0xac, size: 0x1, def value: None
  bool ____registeredToCallbacks;

  /// @brief Field _cutScoreBuffer, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyCutScoreBuffer* ____cutScoreBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingScoreEffect, 0xb8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingScoreEffect, ____fadeAnimationCurve) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingScoreEffect, ____maxCutDistanceScoreIndicator) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingScoreEffect, ____text) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingScoreEffect, ____color) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingScoreEffect, ____colorAMultiplier) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingScoreEffect, ____registeredToCallbacks) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingScoreEffect, ____cutScoreBuffer) == 0xb0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlyingScoreEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingScoreEffect*, "", "FlyingScoreEffect");
NEED_NO_BOX(::GlobalNamespace::__FlyingScoreEffect__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FlyingScoreEffect__Pool*, "", "FlyingScoreEffect/Pool");
