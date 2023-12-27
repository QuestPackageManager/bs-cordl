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
class __BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element;
}
namespace GlobalNamespace {
class EnvironmentColorManager;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradient;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5824))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Color0 value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor const Color0;

  /// @brief Field Color1 value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor const Color1;

  /// @brief Field Color0Boost value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor const Color0Boost;

  /// @brief Field Color1Boost value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor const Color1Boost;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Element
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(5824))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5823))
// CS Name: ::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::Element*
class CORDL_TYPE __BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element : public ::System::Object {
public:
  // Declarations
  /// @brief Field loadFromColorScheme, offset 0x10, size 0x1
  __declspec(property(get = __get_loadFromColorScheme, put = __set_loadFromColorScheme)) bool loadFromColorScheme;

  /// @brief Field environmentColor, offset 0x14, size 0x4
  __declspec(property(get = __get_environmentColor, put = __set_environmentColor))::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor environmentColor;

  /// @brief Field intensity, offset 0x18, size 0x4
  __declspec(property(get = __get_intensity, put = __set_intensity)) float_t intensity;

  /// @brief Field color, offset 0x1c, size 0x10
  __declspec(property(get = __get_color, put = __set_color))::UnityEngine::Color color;

  constexpr bool& __get_loadFromColorScheme();

  constexpr bool const& __get_loadFromColorScheme() const;

  constexpr void __set_loadFromColorScheme(bool value);

  constexpr ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor& __get_environmentColor();

  constexpr ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor const& __get_environmentColor() const;

  constexpr void __set_environmentColor(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor value);

  constexpr float_t& __get_intensity();

  constexpr float_t const& __get_intensity() const;

  constexpr void __set_intensity(float_t value);

  constexpr ::UnityEngine::Color& __get_color();

  constexpr ::UnityEngine::Color const& __get_color() const;

  constexpr void __set_color(::UnityEngine::Color value);

  static inline ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element* New_ctor();

  /// @brief Method .ctor addr 0x22ebe48 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element(__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element(__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element();

public:
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

} // namespace GlobalNamespace
// Type: ::BloomPrePassBackgroundColorsGradientFromColorSchemeColors
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5825))
// CS Name: ::BloomPrePassBackgroundColorsGradientFromColorSchemeColors*
class CORDL_TYPE BloomPrePassBackgroundColorsGradientFromColorSchemeColors : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using EnvironmentColor = ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor;

  using Element = ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element;

  /// @brief Field _bloomPrePassBackgroundColorsGradient, offset 0x18, size 0x8
  __declspec(property(get = __get__bloomPrePassBackgroundColorsGradient,
                      put = __set__bloomPrePassBackgroundColorsGradient))::GlobalNamespace::BloomPrePassBackgroundColorsGradient* _bloomPrePassBackgroundColorsGradient;

  /// @brief Field _elements, offset 0x20, size 0x8
  __declspec(property(get = __get__elements, put = __set__elements))::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*,
                                                                             ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*>*> _elements;

  /// @brief Field _colorManager, offset 0x28, size 0x8
  __declspec(property(get = __get__colorManager, put = __set__colorManager))::GlobalNamespace::EnvironmentColorManager* _colorManager;

  constexpr ::GlobalNamespace::BloomPrePassBackgroundColorsGradient*& __get__bloomPrePassBackgroundColorsGradient();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassBackgroundColorsGradient*> const& __get__bloomPrePassBackgroundColorsGradient() const;

  constexpr void __set__bloomPrePassBackgroundColorsGradient(::GlobalNamespace::BloomPrePassBackgroundColorsGradient* value);

  constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*,
                     ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*>*>&
  __get__elements();

  constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*,
                     ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*>*> const&
  __get__elements() const;

  constexpr void __set__elements(::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*,
                                          ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*>*>
                                     value);

  constexpr ::GlobalNamespace::EnvironmentColorManager*& __get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentColorManager*> const& __get__colorManager() const;

  constexpr void __set__colorManager(::GlobalNamespace::EnvironmentColorManager* value);

  static inline ::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors* New_ctor();

  /// @brief Method .ctor addr 0x22ebb6c size 0x2dc virtual false final false
  inline void _ctor();

  /// @brief Method Start addr 0x22ebe50 size 0x194 virtual false final false
  inline void Start();

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientFromColorSchemeColors", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundColorsGradientFromColorSchemeColors(BloomPrePassBackgroundColorsGradientFromColorSchemeColors&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientFromColorSchemeColors", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundColorsGradientFromColorSchemeColors(BloomPrePassBackgroundColorsGradientFromColorSchemeColors const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundColorsGradientFromColorSchemeColors();

public:
  /// @brief Field _bloomPrePassBackgroundColorsGradient, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BloomPrePassBackgroundColorsGradient* ____bloomPrePassBackgroundColorsGradient;

  /// @brief Field _elements, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*, ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*>*>
      ____elements;

  /// @brief Field _colorManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentColorManager* ____colorManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor, "",
                       "BloomPrePassBackgroundColorsGradientFromColorSchemeColors/EnvironmentColor");
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors*, "", "BloomPrePassBackgroundColorsGradientFromColorSchemeColors");
NEED_NO_BOX(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*, "", "BloomPrePassBackgroundColorsGradientFromColorSchemeColors/Element");
