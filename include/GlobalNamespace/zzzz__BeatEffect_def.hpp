#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BeatEffect)
namespace GlobalNamespace {
class BeatEffect_Pool;
}
namespace GlobalNamespace {
class IBeatEffectDidFinishEvent;
}
namespace GlobalNamespace {
template <typename T> class ILazyCopyHashSet_1;
}
namespace GlobalNamespace {
template <typename T> class LazyCopyHashSet_1;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatEffect;
}
namespace GlobalNamespace {
class BeatEffect_Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatEffect);
MARK_REF_PTR_T(::GlobalNamespace::BeatEffect_Pool);
// Dependencies Zenject.MonoMemoryPool`1<TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatEffect/Pool
class CORDL_TYPE BeatEffect_Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::BeatEffect>> {
public:
  // Declarations
  static inline ::GlobalNamespace::BeatEffect_Pool* New_ctor();

  /// @brief Method .ctor, addr 0x57d20f8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatEffect_Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatEffect_Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatEffect_Pool(BeatEffect_Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatEffect_Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatEffect_Pool(BeatEffect_Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5762 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatEffect_Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatEffect
class CORDL_TYPE BeatEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Pool = ::GlobalNamespace::BeatEffect_Pool;

  /// @brief Field _animationDuration, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__animationDuration, put = __cordl_internal_set__animationDuration)) float_t _animationDuration;

  /// @brief Field _color, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _didFinishEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__didFinishEvent,
                      put = __cordl_internal_set__didFinishEvent)) ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IBeatEffectDidFinishEvent*>* _didFinishEvent;

  /// @brief Field _elapsedTime, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__elapsedTime, put = __cordl_internal_set__elapsedTime)) float_t _elapsedTime;

  /// @brief Field _lightIntensityCurve, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__lightIntensityCurve, put = __cordl_internal_set__lightIntensityCurve)) ::UnityEngine::AnimationCurve* _lightIntensityCurve;

  /// @brief Field _spriteRenderer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__spriteRenderer, put = __cordl_internal_set__spriteRenderer)) ::UnityW<::UnityEngine::SpriteRenderer> _spriteRenderer;

  /// @brief Field _spriteTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__spriteTransform, put = __cordl_internal_set__spriteTransform)) ::UnityW<::UnityEngine::Transform> _spriteTransform;

  /// @brief Field _spriteXScaleCurve, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__spriteXScaleCurve, put = __cordl_internal_set__spriteXScaleCurve)) ::UnityEngine::AnimationCurve* _spriteXScaleCurve;

  /// @brief Field _spriteYScaleCurve, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__spriteYScaleCurve, put = __cordl_internal_set__spriteYScaleCurve)) ::UnityEngine::AnimationCurve* _spriteYScaleCurve;

  /// @brief Field _transparencyCurve, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__transparencyCurve, put = __cordl_internal_set__transparencyCurve)) ::UnityEngine::AnimationCurve* _transparencyCurve;

  /// @brief Field _tubeBloomPrePassLight, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__tubeBloomPrePassLight, put = __cordl_internal_set__tubeBloomPrePassLight)) ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> _tubeBloomPrePassLight;

  __declspec(property(get = get_didFinishEvent)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::IBeatEffectDidFinishEvent*>* didFinishEvent;

  /// @brief Method Init, addr 0x57d1cf8, size 0xc4, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::Color color, float_t animationDuration, ::UnityEngine::Quaternion rotation);

  /// @brief Method ManualUpdate, addr 0x57d1dbc, size 0x2b4, virtual false, abstract: false, final false
  inline void ManualUpdate(float_t deltaTime);

  static inline ::GlobalNamespace::BeatEffect* New_ctor();

  constexpr float_t const& __cordl_internal_get__animationDuration() const;

  constexpr float_t& __cordl_internal_get__animationDuration();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IBeatEffectDidFinishEvent*>* const& __cordl_internal_get__didFinishEvent() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IBeatEffectDidFinishEvent*>*& __cordl_internal_get__didFinishEvent();

  constexpr float_t const& __cordl_internal_get__elapsedTime() const;

  constexpr float_t& __cordl_internal_get__elapsedTime();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__lightIntensityCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__lightIntensityCurve();

  constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__spriteRenderer() const;

  constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__spriteRenderer();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__spriteTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__spriteTransform();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__spriteXScaleCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__spriteXScaleCurve();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__spriteYScaleCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__spriteYScaleCurve();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__transparencyCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__transparencyCurve();

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> const& __cordl_internal_get__tubeBloomPrePassLight() const;

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight>& __cordl_internal_get__tubeBloomPrePassLight();

  constexpr void __cordl_internal_set__animationDuration(float_t value);

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__didFinishEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IBeatEffectDidFinishEvent*>* value);

  constexpr void __cordl_internal_set__elapsedTime(float_t value);

  constexpr void __cordl_internal_set__lightIntensityCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__spriteRenderer(::UnityW<::UnityEngine::SpriteRenderer> value);

  constexpr void __cordl_internal_set__spriteTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__spriteXScaleCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__spriteYScaleCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__transparencyCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__tubeBloomPrePassLight(::UnityW<::GlobalNamespace::TubeBloomPrePassLight> value);

  /// @brief Method .ctor, addr 0x57d2070, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_didFinishEvent, addr 0x57d1cf0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::IBeatEffectDidFinishEvent*>* get_didFinishEvent();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatEffect(BeatEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatEffect(BeatEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5763 };

  /// @brief Field _spriteRenderer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SpriteRenderer> ____spriteRenderer;

  /// @brief Field _spriteTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____spriteTransform;

  /// @brief Field _tubeBloomPrePassLight, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> ____tubeBloomPrePassLight;

  /// @brief Field _lightIntensityCurve, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____lightIntensityCurve;

  /// @brief Field _spriteXScaleCurve, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____spriteXScaleCurve;

  /// @brief Field _spriteYScaleCurve, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____spriteYScaleCurve;

  /// @brief Field _transparencyCurve, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____transparencyCurve;

  /// @brief Field _didFinishEvent, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IBeatEffectDidFinishEvent*>* ____didFinishEvent;

  /// @brief Field _animationDuration, offset: 0x60, size: 0x4, def value: None
  float_t ____animationDuration;

  /// @brief Field _elapsedTime, offset: 0x64, size: 0x4, def value: None
  float_t ____elapsedTime;

  /// @brief Field _color, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatEffect, ____spriteRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffect, ____spriteTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffect, ____tubeBloomPrePassLight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffect, ____lightIntensityCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffect, ____spriteXScaleCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffect, ____spriteYScaleCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffect, ____transparencyCurve) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffect, ____didFinishEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffect, ____animationDuration) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffect, ____elapsedTime) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffect, ____color) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatEffect, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatEffect*, "", "BeatEffect");
NEED_NO_BOX(::GlobalNamespace::BeatEffect_Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatEffect_Pool*, "", "BeatEffect/Pool");
