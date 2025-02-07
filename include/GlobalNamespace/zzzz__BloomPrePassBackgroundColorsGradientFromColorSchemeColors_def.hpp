#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassBackgroundColorsGradientFromColorSchemeColors.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassBackgroundColorsGradientFromColorSchemeColors)
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element;
}
namespace GlobalNamespace {
struct BloomPrePassBackgroundColorsGradientFromColorSchemeColors_EnvironmentColor;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradient;
}
namespace GlobalNamespace {
class IEnvironmentColorProvider;
}
// Forward declare root types
namespace GlobalNamespace {
struct BloomPrePassBackgroundColorsGradientFromColorSchemeColors_EnvironmentColor;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradientFromColorSchemeColors;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_EnvironmentColor);
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors);
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BloomPrePassBackgroundColorsGradientFromColorSchemeColors/EnvironmentColor
struct CORDL_TYPE BloomPrePassBackgroundColorsGradientFromColorSchemeColors_EnvironmentColor {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BloomPrePassBackgroundColorsGradientFromColorSchemeColors_EnvironmentColor_Unwrapped
  enum struct __BloomPrePassBackgroundColorsGradientFromColorSchemeColors_EnvironmentColor_Unwrapped : int32_t {
    __E_Color0 = static_cast<int32_t>(0x0),
    __E_Color1 = static_cast<int32_t>(0x1),
    __E_Color0Boost = static_cast<int32_t>(0x2),
    __E_Color1Boost = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BloomPrePassBackgroundColorsGradientFromColorSchemeColors_EnvironmentColor_Unwrapped() const noexcept {
    return static_cast<__BloomPrePassBackgroundColorsGradientFromColorSchemeColors_EnvironmentColor_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundColorsGradientFromColorSchemeColors_EnvironmentColor();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BloomPrePassBackgroundColorsGradientFromColorSchemeColors_EnvironmentColor(int32_t value__) noexcept;

  /// @brief Field Color0 value: I32(0)
  static ::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_EnvironmentColor const Color0;

  /// @brief Field Color0Boost value: I32(2)
  static ::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_EnvironmentColor const Color0Boost;

  /// @brief Field Color1 value: I32(1)
  static ::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_EnvironmentColor const Color1;

  /// @brief Field Color1Boost value: I32(3)
  static ::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_EnvironmentColor const Color1Boost;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5014 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_EnvironmentColor, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_EnvironmentColor, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BloomPrePassBackgroundColorsGradientFromColorSchemeColors::EnvironmentColor, System.Object, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassBackgroundColorsGradientFromColorSchemeColors/Element
class CORDL_TYPE BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element : public ::System::Object {
public:
  // Declarations
  /// @brief Field color, offset 0x1c, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color)) ::UnityEngine::Color color;

  /// @brief Field environmentColor, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_environmentColor,
                      put = __cordl_internal_set_environmentColor)) ::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_EnvironmentColor environmentColor;

  /// @brief Field intensity, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_intensity, put = __cordl_internal_set_intensity)) float_t intensity;

  /// @brief Field loadFromColorScheme, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_loadFromColorScheme, put = __cordl_internal_set_loadFromColorScheme)) bool loadFromColorScheme;

  static inline ::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element* New_ctor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_color();

  constexpr ::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_EnvironmentColor const& __cordl_internal_get_environmentColor() const;

  constexpr ::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_EnvironmentColor& __cordl_internal_get_environmentColor();

  constexpr float_t const& __cordl_internal_get_intensity() const;

  constexpr float_t& __cordl_internal_get_intensity();

  constexpr bool const& __cordl_internal_get_loadFromColorScheme() const;

  constexpr bool& __cordl_internal_get_loadFromColorScheme();

  constexpr void __cordl_internal_set_color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_environmentColor(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_EnvironmentColor value);

  constexpr void __cordl_internal_set_intensity(float_t value);

  constexpr void __cordl_internal_set_loadFromColorScheme(bool value);

  /// @brief Method .ctor, addr 0x3b0d5ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element(BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element(BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5013 };

  /// @brief Field loadFromColorScheme, offset: 0x10, size: 0x1, def value: None
  bool ___loadFromColorScheme;

  /// @brief Field environmentColor, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_EnvironmentColor ___environmentColor;

  /// @brief Field intensity, offset: 0x18, size: 0x4, def value: None
  float_t ___intensity;

  /// @brief Field color, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Color ___color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element, ___loadFromColorScheme) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element, ___environmentColor) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element, ___intensity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element, ___color) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassBackgroundColorsGradientFromColorSchemeColors
class CORDL_TYPE BloomPrePassBackgroundColorsGradientFromColorSchemeColors : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Element = ::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element;

  using EnvironmentColor = ::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_EnvironmentColor;

  /// @brief Field _bloomPrePassBackgroundColorsGradient, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassBackgroundColorsGradient,
                      put = __cordl_internal_set__bloomPrePassBackgroundColorsGradient)) ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient>
      _bloomPrePassBackgroundColorsGradient;

  /// @brief Field _colorProvider, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__colorProvider, put = __cordl_internal_set__colorProvider)) ::GlobalNamespace::IEnvironmentColorProvider* _colorProvider;

  /// @brief Field _elements, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__elements,
                      put = __cordl_internal_set__elements)) ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element*,
                                                                      ::Array<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element*>*>
      _elements;

  /// @brief Method HandleColorProviderDidChangeColor, addr 0x3b0d7a8, size 0x2c8, virtual false, abstract: false, final false
  inline void HandleColorProviderDidChangeColor();

  static inline ::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b0d6a8, size 0x100, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3b0d5b4, size 0xf4, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient> const& __cordl_internal_get__bloomPrePassBackgroundColorsGradient() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient>& __cordl_internal_get__bloomPrePassBackgroundColorsGradient();

  constexpr ::GlobalNamespace::IEnvironmentColorProvider* const& __cordl_internal_get__colorProvider() const;

  constexpr ::GlobalNamespace::IEnvironmentColorProvider*& __cordl_internal_get__colorProvider();

  constexpr ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element*,
                     ::Array<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element*>*> const&
  __cordl_internal_get__elements() const;

  constexpr ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element*,
                     ::Array<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element*>*>&
  __cordl_internal_get__elements();

  constexpr void __cordl_internal_set__bloomPrePassBackgroundColorsGradient(::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient> value);

  constexpr void __cordl_internal_set__colorProvider(::GlobalNamespace::IEnvironmentColorProvider* value);

  constexpr void __cordl_internal_set__elements(
      ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element*, ::Array<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element*>*>
          value);

  /// @brief Method .ctor, addr 0x3b0d2d0, size 0x2dc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundColorsGradientFromColorSchemeColors();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientFromColorSchemeColors", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundColorsGradientFromColorSchemeColors(BloomPrePassBackgroundColorsGradientFromColorSchemeColors&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientFromColorSchemeColors", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundColorsGradientFromColorSchemeColors(BloomPrePassBackgroundColorsGradientFromColorSchemeColors const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5015 };

  /// @brief Field _bloomPrePassBackgroundColorsGradient, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient> ____bloomPrePassBackgroundColorsGradient;

  /// @brief Field _elements, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element*, ::Array<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element*>*>
      ____elements;

  /// @brief Field _colorProvider, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IEnvironmentColorProvider* ____colorProvider;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors, ____bloomPrePassBackgroundColorsGradient) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors, ____elements) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors, ____colorProvider) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_EnvironmentColor, "", "BloomPrePassBackgroundColorsGradientFromColorSchemeColors/EnvironmentColor");
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors*, "", "BloomPrePassBackgroundColorsGradientFromColorSchemeColors");
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors_Element*, "", "BloomPrePassBackgroundColorsGradientFromColorSchemeColors/Element");
