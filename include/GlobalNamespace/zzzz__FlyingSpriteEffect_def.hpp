#pragma once
// IWYU pragma private; include "GlobalNamespace/FlyingSpriteEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FlyingObjectEffect_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FlyingSpriteEffect)
namespace GlobalNamespace {
class FlyingSpriteEffect_Pool;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class FlyingSpriteEffect;
}
namespace GlobalNamespace {
class FlyingSpriteEffect_Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FlyingSpriteEffect);
MARK_REF_PTR_T(::GlobalNamespace::FlyingSpriteEffect_Pool);
// Dependencies Zenject.MonoMemoryPool`1<TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlyingSpriteEffect/Pool
class CORDL_TYPE FlyingSpriteEffect_Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::FlyingSpriteEffect>> {
public:
  // Declarations
  static inline ::GlobalNamespace::FlyingSpriteEffect_Pool* New_ctor();

  /// @brief Method .ctor, addr 0x3b84a0c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlyingSpriteEffect_Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlyingSpriteEffect_Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlyingSpriteEffect_Pool(FlyingSpriteEffect_Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlyingSpriteEffect_Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlyingSpriteEffect_Pool(FlyingSpriteEffect_Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4216 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingSpriteEffect_Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies FlyingObjectEffect, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlyingSpriteEffect
class CORDL_TYPE FlyingSpriteEffect : public ::GlobalNamespace::FlyingObjectEffect {
public:
  // Declarations
  using Pool = ::GlobalNamespace::FlyingSpriteEffect_Pool;

  /// @brief Field _color, offset 0x98, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _fadeAnimationCurve, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeAnimationCurve, put = __cordl_internal_set__fadeAnimationCurve)) ::UnityEngine::AnimationCurve* _fadeAnimationCurve;

  /// @brief Field _spriteRenderer, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__spriteRenderer, put = __cordl_internal_set__spriteRenderer)) ::UnityW<::UnityEngine::SpriteRenderer> _spriteRenderer;

  /// @brief Method InitAndPresent, addr 0x3b848c8, size 0xb8, virtual false, abstract: false, final false
  inline void InitAndPresent(float_t duration, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Quaternion rotation, ::UnityEngine::Sprite* sprite, ::UnityEngine::Material* material,
                             ::UnityEngine::Color color, bool shake);

  /// @brief Method ManualUpdate, addr 0x3b84980, size 0x5c, virtual true, abstract: false, final false
  inline void ManualUpdate(float_t t);

  static inline ::GlobalNamespace::FlyingSpriteEffect* New_ctor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__fadeAnimationCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__fadeAnimationCurve();

  constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__spriteRenderer() const;

  constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__spriteRenderer();

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__fadeAnimationCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__spriteRenderer(::UnityW<::UnityEngine::SpriteRenderer> value);

  /// @brief Method .ctor, addr 0x3b849dc, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlyingSpriteEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlyingSpriteEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlyingSpriteEffect(FlyingSpriteEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlyingSpriteEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlyingSpriteEffect(FlyingSpriteEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4217 };

  /// @brief Field _spriteRenderer, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SpriteRenderer> ____spriteRenderer;

  /// @brief Field _fadeAnimationCurve, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____fadeAnimationCurve;

  /// @brief Field _color, offset: 0x98, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlyingSpriteEffect, ____spriteRenderer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingSpriteEffect, ____fadeAnimationCurve) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingSpriteEffect, ____color) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingSpriteEffect, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlyingSpriteEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingSpriteEffect*, "", "FlyingSpriteEffect");
NEED_NO_BOX(::GlobalNamespace::FlyingSpriteEffect_Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingSpriteEffect_Pool*, "", "FlyingSpriteEffect/Pool");
