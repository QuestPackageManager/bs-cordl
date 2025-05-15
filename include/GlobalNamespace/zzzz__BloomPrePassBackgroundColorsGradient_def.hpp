#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassBackgroundColorsGradient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundTextureGradient_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassBackgroundColorsGradient)
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradient_Element;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradient;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradient_Element;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundColorsGradient);
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundColorsGradient_Element);
// Dependencies System.Object, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassBackgroundColorsGradient/Element
class CORDL_TYPE BloomPrePassBackgroundColorsGradient_Element : public ::System::Object {
public:
  // Declarations
  /// @brief Field color, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color)) ::UnityEngine::Color color;

  /// @brief Field exp, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_exp, put = __cordl_internal_set_exp)) float_t exp;

  /// @brief Field startT, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_startT, put = __cordl_internal_set_startT)) float_t startT;

  static inline ::GlobalNamespace::BloomPrePassBackgroundColorsGradient_Element* New_ctor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_color();

  constexpr float_t const& __cordl_internal_get_exp() const;

  constexpr float_t& __cordl_internal_get_exp();

  constexpr float_t const& __cordl_internal_get_startT() const;

  constexpr float_t& __cordl_internal_get_startT();

  constexpr void __cordl_internal_set_color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_exp(float_t value);

  constexpr void __cordl_internal_set_startT(float_t value);

  /// @brief Method .ctor, addr 0x39d6890, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundColorsGradient_Element();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradient_Element", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundColorsGradient_Element(BloomPrePassBackgroundColorsGradient_Element&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradient_Element", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundColorsGradient_Element(BloomPrePassBackgroundColorsGradient_Element const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16244 };

  /// @brief Field color, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color ___color;

  /// @brief Field startT, offset: 0x20, size: 0x4, def value: None
  float_t ___startT;

  /// @brief Field exp, offset: 0x24, size: 0x4, def value: None
  float_t ___exp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColorsGradient_Element, ___color) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColorsGradient_Element, ___startT) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColorsGradient_Element, ___exp) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundColorsGradient_Element, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BloomPrePassBackgroundTextureGradient
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassBackgroundColorsGradient
class CORDL_TYPE BloomPrePassBackgroundColorsGradient : public ::GlobalNamespace::BloomPrePassBackgroundTextureGradient {
public:
  // Declarations
  using Element = ::GlobalNamespace::BloomPrePassBackgroundColorsGradient_Element;

  /// @brief Field _elements, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get__elements,
      put = __cordl_internal_set__elements)) ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient_Element*, ::Array<::GlobalNamespace::BloomPrePassBackgroundColorsGradient_Element*>*>
      _elements;

  __declspec(property(get = get_elements)) ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient_Element*, ::Array<::GlobalNamespace::BloomPrePassBackgroundColorsGradient_Element*>*>
      elements;

  /// @brief Method EvaluateColor, addr 0x39d6708, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::Color EvaluateColor(float_t t);

  static inline ::GlobalNamespace::BloomPrePassBackgroundColorsGradient* New_ctor();

  /// @brief Method UpdatePixels, addr 0x39d66a0, size 0x68, virtual true, abstract: false, final false
  inline void UpdatePixels(::Unity::Collections::NativeArray_1<::UnityEngine::Color32> pixels, int32_t numberOfPixels);

  constexpr ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient_Element*, ::Array<::GlobalNamespace::BloomPrePassBackgroundColorsGradient_Element*>*> const&
  __cordl_internal_get__elements() const;

  constexpr ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient_Element*, ::Array<::GlobalNamespace::BloomPrePassBackgroundColorsGradient_Element*>*>& __cordl_internal_get__elements();

  constexpr void
  __cordl_internal_set__elements(::ArrayW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient_Element*, ::Array<::GlobalNamespace::BloomPrePassBackgroundColorsGradient_Element*>*> value);

  /// @brief Method .ctor, addr 0x39d67dc, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_elements, addr 0x39d6698, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient_Element*, ::Array<::GlobalNamespace::BloomPrePassBackgroundColorsGradient_Element*>*> get_elements();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundColorsGradient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundColorsGradient(BloomPrePassBackgroundColorsGradient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundColorsGradient(BloomPrePassBackgroundColorsGradient const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16245 };

  /// @brief Field _elements, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient_Element*, ::Array<::GlobalNamespace::BloomPrePassBackgroundColorsGradient_Element*>*> ____elements;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColorsGradient, ____elements) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundColorsGradient, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColorsGradient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColorsGradient*, "", "BloomPrePassBackgroundColorsGradient");
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColorsGradient_Element);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColorsGradient_Element*, "", "BloomPrePassBackgroundColorsGradient/Element");
