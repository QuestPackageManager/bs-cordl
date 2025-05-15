#pragma once
// IWYU pragma private; include "GlobalNamespace/FlyingScoreEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FlyingObjectEffect_def.hpp"
#include "GlobalNamespace/zzzz__ICutScoreBufferDidChangeReceiver_def.hpp"
#include "GlobalNamespace/zzzz__ICutScoreBufferDidFinishReceiver_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FlyingScoreEffect)
namespace GlobalNamespace {
class CutScoreBuffer;
}
namespace GlobalNamespace {
class FlyingScoreEffect_Pool;
}
namespace GlobalNamespace {
class IReadonlyCutScoreBuffer;
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
class FlyingScoreEffect_Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FlyingScoreEffect);
MARK_REF_PTR_T(::GlobalNamespace::FlyingScoreEffect_Pool);
// Dependencies Zenject.MonoMemoryPool`1<TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlyingScoreEffect/Pool
class CORDL_TYPE FlyingScoreEffect_Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::FlyingScoreEffect>> {
public:
  // Declarations
  static inline ::GlobalNamespace::FlyingScoreEffect_Pool* New_ctor();

  /// @brief Method OnDespawned, addr 0x3b82c48, size 0x60, virtual true, abstract: false, final false
  inline void OnDespawned(::GlobalNamespace::FlyingScoreEffect* item);

  /// @brief Method .ctor, addr 0x3b82ca8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlyingScoreEffect_Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlyingScoreEffect_Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlyingScoreEffect_Pool(FlyingScoreEffect_Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlyingScoreEffect_Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlyingScoreEffect_Pool(FlyingScoreEffect_Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4215 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingScoreEffect_Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies FlyingObjectEffect, ICutScoreBufferDidChangeReceiver, ICutScoreBufferDidFinishReceiver, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlyingScoreEffect
class CORDL_TYPE FlyingScoreEffect : public ::GlobalNamespace::FlyingObjectEffect {
public:
  // Declarations
  using Pool = ::GlobalNamespace::FlyingScoreEffect_Pool;

  /// @brief Field _color, offset 0xa0, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _colorAMultiplier, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get__colorAMultiplier, put = __cordl_internal_set__colorAMultiplier)) float_t _colorAMultiplier;

  /// @brief Field _cutScoreBuffer, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__cutScoreBuffer, put = __cordl_internal_set__cutScoreBuffer)) ::GlobalNamespace::IReadonlyCutScoreBuffer* _cutScoreBuffer;

  /// @brief Field _fadeAnimationCurve, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeAnimationCurve, put = __cordl_internal_set__fadeAnimationCurve)) ::UnityEngine::AnimationCurve* _fadeAnimationCurve;

  /// @brief Field _maxCutDistanceScoreIndicator, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__maxCutDistanceScoreIndicator, put = __cordl_internal_set__maxCutDistanceScoreIndicator)) ::UnityW<::UnityEngine::SpriteRenderer>
      _maxCutDistanceScoreIndicator;

  /// @brief Field _registeredToCallbacks, offset 0xb4, size 0x1
  __declspec(property(get = __cordl_internal_get__registeredToCallbacks, put = __cordl_internal_set__registeredToCallbacks)) bool _registeredToCallbacks;

  /// @brief Field _text, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshPro> _text;

  /// @brief Convert operator to "::GlobalNamespace::ICutScoreBufferDidChangeReceiver"
  constexpr operator ::GlobalNamespace::ICutScoreBufferDidChangeReceiver*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ICutScoreBufferDidFinishReceiver"
  constexpr operator ::GlobalNamespace::ICutScoreBufferDidFinishReceiver*() noexcept;

  /// @brief Method HandleCutScoreBufferDidChange, addr 0x3b82aa0, size 0x4c, virtual true, abstract: false, final true
  inline void HandleCutScoreBufferDidChange(::GlobalNamespace::CutScoreBuffer* cutScoreBuffer);

  /// @brief Method HandleCutScoreBufferDidFinish, addr 0x3b82aec, size 0x4, virtual true, abstract: false, final true
  inline void HandleCutScoreBufferDidFinish(::GlobalNamespace::CutScoreBuffer* cutScoreBuffer);

  /// @brief Method InitAndPresent, addr 0x3b824ac, size 0x4e4, virtual false, abstract: false, final false
  inline void InitAndPresent(::GlobalNamespace::IReadonlyCutScoreBuffer* cutScoreBuffer, float_t duration, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Color color);

  /// @brief Method ManualUpdate, addr 0x3b82a18, size 0x88, virtual true, abstract: false, final false
  inline void ManualUpdate(float_t t);

  static inline ::GlobalNamespace::FlyingScoreEffect* New_ctor();

  /// @brief Method RefreshScore, addr 0x3b82990, size 0x88, virtual false, abstract: false, final false
  inline void RefreshScore(int32_t score, int32_t maxPossibleCutScore);

  /// @brief Method UnregisterCallbacksIfNeeded, addr 0x3b82af0, size 0x128, virtual false, abstract: false, final false
  inline void UnregisterCallbacksIfNeeded();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr float_t const& __cordl_internal_get__colorAMultiplier() const;

  constexpr float_t& __cordl_internal_get__colorAMultiplier();

  constexpr ::GlobalNamespace::IReadonlyCutScoreBuffer* const& __cordl_internal_get__cutScoreBuffer() const;

  constexpr ::GlobalNamespace::IReadonlyCutScoreBuffer*& __cordl_internal_get__cutScoreBuffer();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__fadeAnimationCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__fadeAnimationCurve();

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

  /// @brief Method .ctor, addr 0x3b82c18, size 0x30, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4216 };

  /// @brief Field _fadeAnimationCurve, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____fadeAnimationCurve;

  /// @brief Field _maxCutDistanceScoreIndicator, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SpriteRenderer> ____maxCutDistanceScoreIndicator;

  /// @brief Field _text, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshPro> ____text;

  /// @brief Field _color, offset: 0xa0, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _colorAMultiplier, offset: 0xb0, size: 0x4, def value: None
  float_t ____colorAMultiplier;

  /// @brief Field _registeredToCallbacks, offset: 0xb4, size: 0x1, def value: None
  bool ____registeredToCallbacks;

  /// @brief Field _cutScoreBuffer, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyCutScoreBuffer* ____cutScoreBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlyingScoreEffect, ____fadeAnimationCurve) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingScoreEffect, ____maxCutDistanceScoreIndicator) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingScoreEffect, ____text) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingScoreEffect, ____color) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingScoreEffect, ____colorAMultiplier) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingScoreEffect, ____registeredToCallbacks) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingScoreEffect, ____cutScoreBuffer) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingScoreEffect, 0xc0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlyingScoreEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingScoreEffect*, "", "FlyingScoreEffect");
NEED_NO_BOX(::GlobalNamespace::FlyingScoreEffect_Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingScoreEffect_Pool*, "", "FlyingScoreEffect/Pool");
