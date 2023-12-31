#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FlyingObjectEffect_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FlyingSpriteEffect)
namespace GlobalNamespace {
class __FlyingSpriteEffect__Pool;
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
class __FlyingSpriteEffect__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FlyingSpriteEffect);
MARK_REF_PTR_T(::GlobalNamespace::__FlyingSpriteEffect__Pool);
// Type: ::FlyingSpriteEffect
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4852)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4856))
// CS Name: ::FlyingSpriteEffect*
class CORDL_TYPE FlyingSpriteEffect : public ::GlobalNamespace::FlyingObjectEffect {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__FlyingSpriteEffect__Pool;

  /// @brief Field _spriteRenderer, offset 0x80, size 0x8
  __declspec(property(get = __get__spriteRenderer, put = __set__spriteRenderer))::UnityEngine::SpriteRenderer* _spriteRenderer;

  /// @brief Field _fadeAnimationCurve, offset 0x88, size 0x8
  __declspec(property(get = __get__fadeAnimationCurve, put = __set__fadeAnimationCurve))::UnityEngine::AnimationCurve* _fadeAnimationCurve;

  /// @brief Field _color, offset 0x90, size 0x10
  __declspec(property(get = __get__color, put = __set__color))::UnityEngine::Color _color;

  constexpr ::UnityEngine::SpriteRenderer*& __get__spriteRenderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> const& __get__spriteRenderer() const;

  constexpr void __set__spriteRenderer(::UnityEngine::SpriteRenderer* value);

  constexpr ::UnityEngine::AnimationCurve*& __get__fadeAnimationCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get__fadeAnimationCurve() const;

  constexpr void __set__fadeAnimationCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::Color& __get__color();

  constexpr ::UnityEngine::Color const& __get__color() const;

  constexpr void __set__color(::UnityEngine::Color value);

  /// @brief Method InitAndPresent, addr 0x2398fd4, size 0xb8, virtual false, abstract: false, final false
  inline void InitAndPresent(float_t duration, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Quaternion rotation, ::UnityEngine::Sprite* sprite, ::UnityEngine::Material* material,
                             ::UnityEngine::Color color, bool shake);

  /// @brief Method ManualUpdate, addr 0x239908c, size 0x5c, virtual true, abstract: false, final false
  inline void ManualUpdate(float_t t);

  static inline ::GlobalNamespace::FlyingSpriteEffect* New_ctor();

  /// @brief Method .ctor, addr 0x23990e8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FlyingSpriteEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlyingSpriteEffect(FlyingSpriteEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlyingSpriteEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlyingSpriteEffect(FlyingSpriteEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlyingSpriteEffect();

public:
  /// @brief Field _spriteRenderer, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::SpriteRenderer* ____spriteRenderer;

  /// @brief Field _fadeAnimationCurve, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____fadeAnimationCurve;

  /// @brief Field _color, offset: 0x90, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingSpriteEffect, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingSpriteEffect, ____spriteRenderer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingSpriteEffect, ____fadeAnimationCurve) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingSpriteEffect, ____color) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11050)), TypeDefinitionIndex(TypeDefinitionIndex(4856)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst:
// 2812 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4855)) CS Name: ::FlyingSpriteEffect::Pool*
class CORDL_TYPE __FlyingSpriteEffect__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::FlyingSpriteEffect*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__FlyingSpriteEffect__Pool* New_ctor();

  /// @brief Method .ctor, addr 0x2399118, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__FlyingSpriteEffect__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FlyingSpriteEffect__Pool(__FlyingSpriteEffect__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FlyingSpriteEffect__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FlyingSpriteEffect__Pool(__FlyingSpriteEffect__Pool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FlyingSpriteEffect__Pool();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FlyingSpriteEffect__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlyingSpriteEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingSpriteEffect*, "", "FlyingSpriteEffect");
NEED_NO_BOX(::GlobalNamespace::__FlyingSpriteEffect__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FlyingSpriteEffect__Pool*, "", "FlyingSpriteEffect/Pool");
