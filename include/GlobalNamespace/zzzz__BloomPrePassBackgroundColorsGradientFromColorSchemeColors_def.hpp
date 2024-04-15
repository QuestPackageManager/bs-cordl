#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundColorsGradientFromColorSchemeColors_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassBackgroundColorsGradientFromColorSchemeColors)
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradient;
}
namespace GlobalNamespace {
class EnvironmentColorManager;
}
namespace GlobalNamespace {
class __BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element;
}
namespace GlobalNamespace {
struct __BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor;
}
// Forward declare root types
namespace GlobalNamespace {
struct __BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradientFromColorSchemeColors;
}
namespace GlobalNamespace {
class __BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor);
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors);
MARK_REF_PTR_T(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element);
// Type: ::EnvironmentColor
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::EnvironmentColor
struct CORDL_TYPE __BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor_Unwrapped
  enum struct ____BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor_Unwrapped : int32_t {
    __E_Color0 = static_cast<int32_t>(0x0),
    __E_Color1 = static_cast<int32_t>(0x1),
    __E_Color0Boost = static_cast<int32_t>(0x2),
    __E_Color1Boost = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor_Unwrapped() const noexcept {
    return static_cast<____BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Color0 value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor const Color0;

  /// @brief Field Color0Boost value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor const Color0Boost;

  /// @brief Field Color1 value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor const Color1;

  /// @brief Field Color1Boost value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor const Color1Boost;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Element
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::Element*
class CORDL_TYPE __BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element : public ::System::Object {
public:
  // Declarations
  /// @brief Field color, offset 0x1c, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color))::UnityEngine::Color color;

  /// @brief Field environmentColor, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_environmentColor,
                      put = __cordl_internal_set_environmentColor))::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor environmentColor;

  /// @brief Field intensity, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_intensity, put = __cordl_internal_set_intensity)) float_t intensity;

  /// @brief Field loadFromColorScheme, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_loadFromColorScheme, put = __cordl_internal_set_loadFromColorScheme)) bool loadFromColorScheme;

  static inline ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element* New_ctor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_color();

  constexpr ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor const& __cordl_internal_get_environmentColor() const;

  constexpr ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor& __cordl_internal_get_environmentColor();

  constexpr float_t const& __cordl_internal_get_intensity() const;

  constexpr float_t& __cordl_internal_get_intensity();

  constexpr bool const& __cordl_internal_get_loadFromColorScheme() const;

  constexpr bool& __cordl_internal_get_loadFromColorScheme();

  constexpr void __cordl_internal_set_color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_environmentColor(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor value);

  constexpr void __cordl_internal_set_intensity(float_t value);

  constexpr void __cordl_internal_set_loadFromColorScheme(bool value);

  /// @brief Method .ctor, addr 0x2579e54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element(__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element(__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element const&) = delete;

  /// @brief Field loadFromColorScheme, offset: 0x10, size: 0x1, def value: None
  bool ___loadFromColorScheme;

  /// @brief Field environmentColor, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor ___environmentColor;

  /// @brief Field intensity, offset: 0x18, size: 0x4, def value: None
  float_t ___intensity;

  /// @brief Field color, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Color ___color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element, ___loadFromColorScheme) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element, ___environmentColor) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element, ___intensity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element, ___color) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BloomPrePassBackgroundColorsGradientFromColorSchemeColors
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BloomPrePassBackgroundColorsGradientFromColorSchemeColors*
class CORDL_TYPE BloomPrePassBackgroundColorsGradientFromColorSchemeColors : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Element = ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element;

  using EnvironmentColor = ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor;

  /// @brief Field _bloomPrePassBackgroundColorsGradient, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassBackgroundColorsGradient,
                      put = __cordl_internal_set__bloomPrePassBackgroundColorsGradient))::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient> _bloomPrePassBackgroundColorsGradient;

  /// @brief Field _colorManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager))::UnityW<::GlobalNamespace::EnvironmentColorManager> _colorManager;

  /// @brief Field _elements, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__elements,
                      put = __cordl_internal_set__elements))::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*,
                                                                     ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*>*> _elements;

  static inline ::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors* New_ctor();

  /// @brief Method Start, addr 0x2579e5c, size 0x194, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient> const& __cordl_internal_get__bloomPrePassBackgroundColorsGradient() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient>& __cordl_internal_get__bloomPrePassBackgroundColorsGradient();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentColorManager> const& __cordl_internal_get__colorManager() const;

  constexpr ::UnityW<::GlobalNamespace::EnvironmentColorManager>& __cordl_internal_get__colorManager();

  constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*,
                     ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*>*> const&
  __cordl_internal_get__elements() const;

  constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*,
                     ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*>*>&
  __cordl_internal_get__elements();

  constexpr void __cordl_internal_set__bloomPrePassBackgroundColorsGradient(::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient> value);

  constexpr void __cordl_internal_set__colorManager(::UnityW<::GlobalNamespace::EnvironmentColorManager> value);

  constexpr void __cordl_internal_set__elements(::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*,
                                                         ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*>*>
                                                    value);

  /// @brief Method .ctor, addr 0x2579b78, size 0x2dc, virtual false, abstract: false, final false
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

  /// @brief Field _bloomPrePassBackgroundColorsGradient, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient> ____bloomPrePassBackgroundColorsGradient;

  /// @brief Field _elements, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*, ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*>*>
      ____elements;

  /// @brief Field _colorManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentColorManager> ____colorManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors, ____bloomPrePassBackgroundColorsGradient) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors, ____elements) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors, ____colorManager) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor, "",
                       "BloomPrePassBackgroundColorsGradientFromColorSchemeColors/EnvironmentColor");
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors*, "", "BloomPrePassBackgroundColorsGradientFromColorSchemeColors");
NEED_NO_BOX(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*, "", "BloomPrePassBackgroundColorsGradientFromColorSchemeColors/Element");
