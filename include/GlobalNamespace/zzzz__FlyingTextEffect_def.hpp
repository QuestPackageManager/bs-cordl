#pragma once
// IWYU pragma private; include "GlobalNamespace/FlyingTextEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FlyingObjectEffect_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FlyingTextEffect)
namespace GlobalNamespace {
class __FlyingTextEffect__Pool;
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
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class FlyingTextEffect;
}
namespace GlobalNamespace {
class __FlyingTextEffect__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FlyingTextEffect);
MARK_REF_PTR_T(::GlobalNamespace::__FlyingTextEffect__Pool);
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FlyingTextEffect::Pool*
class CORDL_TYPE __FlyingTextEffect__Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::FlyingTextEffect>> {
public:
  // Declarations
  static inline ::GlobalNamespace::__FlyingTextEffect__Pool* New_ctor();

  /// @brief Method .ctor, addr 0x3b1de18, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FlyingTextEffect__Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FlyingTextEffect__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FlyingTextEffect__Pool(__FlyingTextEffect__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FlyingTextEffect__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FlyingTextEffect__Pool(__FlyingTextEffect__Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4204 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FlyingTextEffect__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::FlyingTextEffect
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FlyingTextEffect*
class CORDL_TYPE FlyingTextEffect : public ::GlobalNamespace::FlyingObjectEffect {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__FlyingTextEffect__Pool;

  /// @brief Field _color, offset 0x98, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _fadeAnimationCurve, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeAnimationCurve, put = __cordl_internal_set__fadeAnimationCurve)) ::UnityEngine::AnimationCurve* _fadeAnimationCurve;

  /// @brief Field _text, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshPro> _text;

  /// @brief Method InitAndPresent, addr 0x3b1dd0c, size 0x78, virtual false, abstract: false, final false
  inline void InitAndPresent(::StringW text, float_t duration, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Quaternion rotation, ::UnityEngine::Color color, float_t fontSize, bool shake);

  /// @brief Method ManualUpdate, addr 0x3b1dd84, size 0x64, virtual true, abstract: false, final false
  inline void ManualUpdate(float_t t);

  static inline ::GlobalNamespace::FlyingTextEffect* New_ctor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__fadeAnimationCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__fadeAnimationCurve() const;

  constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__text();

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__fadeAnimationCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshPro> value);

  /// @brief Method .ctor, addr 0x3b1dde8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlyingTextEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlyingTextEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlyingTextEffect(FlyingTextEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlyingTextEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlyingTextEffect(FlyingTextEffect const&) = delete;

  /// @brief Field _text, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshPro> ____text;

  /// @brief Field _fadeAnimationCurve, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____fadeAnimationCurve;

  /// @brief Field _color, offset: 0x98, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4205 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingTextEffect, 0xa8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingTextEffect, ____text) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingTextEffect, ____fadeAnimationCurve) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingTextEffect, ____color) == 0x98, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlyingTextEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingTextEffect*, "", "FlyingTextEffect");
NEED_NO_BOX(::GlobalNamespace::__FlyingTextEffect__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FlyingTextEffect__Pool*, "", "FlyingTextEffect/Pool");
