#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundTextureGradient_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassBackgroundColorsGradient)
namespace GlobalNamespace {
class __BloomPrePassBackgroundColorsGradient__Element;
}
namespace UnityEngine {
struct Color;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradient;
}
namespace GlobalNamespace {
class __BloomPrePassBackgroundColorsGradient__Element;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundColorsGradient);
MARK_REF_PTR_T(::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element);
// Type: ::Element
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(10178))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14676))
// CS Name: ::BloomPrePassBackgroundColorsGradient::Element*
class CORDL_TYPE __BloomPrePassBackgroundColorsGradient__Element : public ::System::Object {
public:
  // Declarations
  /// @brief Field color, offset 0x10, size 0x10
  __declspec(property(get = __get_color, put = __set_color))::UnityEngine::Color color;

  /// @brief Field startT, offset 0x20, size 0x4
  __declspec(property(get = __get_startT, put = __set_startT)) float_t startT;

  /// @brief Field exp, offset 0x24, size 0x4
  __declspec(property(get = __get_exp, put = __set_exp)) float_t exp;

  constexpr ::UnityEngine::Color& __get_color();

  constexpr ::UnityEngine::Color const& __get_color() const;

  constexpr void __set_color(::UnityEngine::Color value);

  constexpr float_t& __get_startT();

  constexpr float_t const& __get_startT() const;

  constexpr void __set_startT(float_t value);

  constexpr float_t& __get_exp();

  constexpr float_t const& __get_exp() const;

  constexpr void __set_exp(float_t value);

  static inline ::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element* New_ctor();

  /// @brief Method .ctor addr 0x1faf554 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__BloomPrePassBackgroundColorsGradient__Element", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BloomPrePassBackgroundColorsGradient__Element(__BloomPrePassBackgroundColorsGradient__Element&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BloomPrePassBackgroundColorsGradient__Element", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BloomPrePassBackgroundColorsGradient__Element(__BloomPrePassBackgroundColorsGradient__Element const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BloomPrePassBackgroundColorsGradient__Element();

public:
  /// @brief Field color, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color ___color;

  /// @brief Field startT, offset: 0x20, size: 0x4, def value: None
  float_t ___startT;

  /// @brief Field exp, offset: 0x24, size: 0x4, def value: None
  float_t ___exp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element, ___color) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element, ___startT) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element, ___exp) == 0x24, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BloomPrePassBackgroundColorsGradient
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14686))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14677))
// CS Name: ::BloomPrePassBackgroundColorsGradient*
class CORDL_TYPE BloomPrePassBackgroundColorsGradient : public ::GlobalNamespace::BloomPrePassBackgroundTextureGradient {
public:
  // Declarations
  using Element = ::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element;

  /// @brief Field _elements, offset 0x40, size 0x8
  __declspec(property(
      get = __get__elements,
      put = __set__elements))::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*, ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*>*> _elements;

  __declspec(property(
      get = get_elements))::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*, ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*>*> elements;

  constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*, ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*>*>& __get__elements();

  constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*, ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*>*> const& __get__elements() const;

  constexpr void __set__elements(::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*, ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*>*> value);

  /// @brief Method get_elements addr 0x1faf0ac size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*, ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*>*> get_elements();

  /// @brief Method UpdatePixels addr 0x1faf0b4 size 0x30c virtual true final false
  inline void UpdatePixels(::Unity::Collections::NativeArray_1<::UnityEngine::Color32> pixels, int32_t numberOfPixels);

  /// @brief Method EvaluateColor addr 0x1faf3c0 size 0xe0 virtual false final false
  inline ::UnityEngine::Color EvaluateColor(float_t t);

  static inline ::GlobalNamespace::BloomPrePassBackgroundColorsGradient* New_ctor();

  /// @brief Method .ctor addr 0x1faf4a0 size 0x54 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundColorsGradient(BloomPrePassBackgroundColorsGradient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundColorsGradient(BloomPrePassBackgroundColorsGradient const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundColorsGradient();

public:
  /// @brief Field _elements, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*, ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*>*> ____elements;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundColorsGradient, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColorsGradient, ____elements) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColorsGradient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColorsGradient*, "", "BloomPrePassBackgroundColorsGradient");
NEED_NO_BOX(::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*, "", "BloomPrePassBackgroundColorsGradient/Element");
