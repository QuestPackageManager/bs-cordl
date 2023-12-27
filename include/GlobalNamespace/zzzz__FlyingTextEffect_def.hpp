#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FlyingObjectEffect_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FlyingTextEffect)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Color;
}
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
struct Quaternion;
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
// Type: ::FlyingTextEffect
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(4852))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4858))
// CS Name: ::FlyingTextEffect*
class CORDL_TYPE FlyingTextEffect : public ::GlobalNamespace::FlyingObjectEffect {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__FlyingTextEffect__Pool;

  /// @brief Field _text, offset 0x80, size 0x8
  __declspec(property(get = __get__text, put = __set__text))::TMPro::TextMeshPro* _text;

  /// @brief Field _fadeAnimationCurve, offset 0x88, size 0x8
  __declspec(property(get = __get__fadeAnimationCurve, put = __set__fadeAnimationCurve))::UnityEngine::AnimationCurve* _fadeAnimationCurve;

  /// @brief Field _color, offset 0x90, size 0x10
  __declspec(property(get = __get__color, put = __set__color))::UnityEngine::Color _color;

  constexpr ::TMPro::TextMeshPro*& __get__text();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshPro*> const& __get__text() const;

  constexpr void __set__text(::TMPro::TextMeshPro* value);

  constexpr ::UnityEngine::AnimationCurve*& __get__fadeAnimationCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get__fadeAnimationCurve() const;

  constexpr void __set__fadeAnimationCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::Color& __get__color();

  constexpr ::UnityEngine::Color const& __get__color() const;

  constexpr void __set__color(::UnityEngine::Color value);

  /// @brief Method InitAndPresent addr 0x2399160 size 0x78 virtual false final false
  inline void InitAndPresent(::StringW text, float_t duration, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Quaternion rotation, ::UnityEngine::Color color, float_t fontSize, bool shake);

  /// @brief Method ManualUpdate addr 0x23991d8 size 0x64 virtual true final false
  inline void ManualUpdate(float_t t);

  static inline ::GlobalNamespace::FlyingTextEffect* New_ctor();

  /// @brief Method .ctor addr 0x239923c size 0x30 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FlyingTextEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlyingTextEffect(FlyingTextEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlyingTextEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlyingTextEffect(FlyingTextEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlyingTextEffect();

public:
  /// @brief Field _text, offset: 0x80, size: 0x8, def value: None
  ::TMPro::TextMeshPro* ____text;

  /// @brief Field _fadeAnimationCurve, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____fadeAnimationCurve;

  /// @brief Field _color, offset: 0x90, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingTextEffect, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11050)), TypeDefinitionIndex(TypeDefinitionIndex(4858)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst:
// 2813 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4857)) CS Name: ::FlyingTextEffect::Pool*
class CORDL_TYPE __FlyingTextEffect__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::FlyingTextEffect*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__FlyingTextEffect__Pool* New_ctor();

  /// @brief Method .ctor addr 0x239926c size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__FlyingTextEffect__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FlyingTextEffect__Pool(__FlyingTextEffect__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FlyingTextEffect__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FlyingTextEffect__Pool(__FlyingTextEffect__Pool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FlyingTextEffect__Pool();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FlyingTextEffect__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlyingTextEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingTextEffect*, "", "FlyingTextEffect");
NEED_NO_BOX(::GlobalNamespace::__FlyingTextEffect__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FlyingTextEffect__Pool*, "", "FlyingTextEffect/Pool");
