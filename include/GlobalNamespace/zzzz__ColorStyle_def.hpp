#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorStyle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GradientDirection_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColorStyle)
namespace GlobalNamespace {
class ColorSO;
}
namespace GlobalNamespace {
struct GradientDirection;
}
namespace GlobalNamespace {
class IReadOnlyColorStyle;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorStyle;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorStyle);
// Type: ::ColorStyle
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 109, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ColorStyle*
class CORDL_TYPE ColorStyle : public ::System::Object {
public:
  // Declarations
  /// @brief Field _color, offset 0x14, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _color0, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get__color0, put = __cordl_internal_set__color0)) ::UnityEngine::Color _color0;

  /// @brief Field _color0So, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__color0So, put = __cordl_internal_set__color0So)) ::UnityW<::GlobalNamespace::ColorSO> _color0So;

  /// @brief Field _color1, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__color1, put = __cordl_internal_set__color1)) ::UnityEngine::Color _color1;

  /// @brief Field _color1So, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__color1So, put = __cordl_internal_set__color1So)) ::UnityW<::GlobalNamespace::ColorSO> _color1So;

  /// @brief Field _colorSo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSo, put = __cordl_internal_set__colorSo)) ::UnityW<::GlobalNamespace::ColorSO> _colorSo;

  /// @brief Field _flipGradientColors, offset 0x6c, size 0x1
  __declspec(property(get = __cordl_internal_get__flipGradientColors, put = __cordl_internal_set__flipGradientColors)) bool _flipGradientColors;

  /// @brief Field _globalLightTintIntensity, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__globalLightTintIntensity, put = __cordl_internal_set__globalLightTintIntensity)) float_t _globalLightTintIntensity;

  /// @brief Field _gradient, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__gradient, put = __cordl_internal_set__gradient)) bool _gradient;

  /// @brief Field _gradientDirection, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__gradientDirection, put = __cordl_internal_set__gradientDirection)) ::GlobalNamespace::GradientDirection _gradientDirection;

  /// @brief Field _useScriptableObjectColor, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__useScriptableObjectColor, put = __cordl_internal_set__useScriptableObjectColor)) bool _useScriptableObjectColor;

  /// @brief Field _useScriptableObjectGradientColors, offset 0x35, size 0x1
  __declspec(property(get = __cordl_internal_get__useScriptableObjectGradientColors, put = __cordl_internal_set__useScriptableObjectGradientColors)) bool _useScriptableObjectGradientColors;

  __declspec(property(get = get_color, put = set_color)) ::UnityEngine::Color color;

  __declspec(property(get = get_color0, put = set_color0)) ::UnityEngine::Color color0;

  __declspec(property(get = get_color1, put = set_color1)) ::UnityEngine::Color color1;

  __declspec(property(get = get_flipGradientColors)) bool flipGradientColors;

  __declspec(property(get = get_globalLightTintIntensity, put = set_globalLightTintIntensity)) float_t globalLightTintIntensity;

  __declspec(property(get = get_gradient, put = set_gradient)) bool gradient;

  __declspec(property(get = get_gradientDirection, put = set_gradientDirection)) ::GlobalNamespace::GradientDirection gradientDirection;

  __declspec(property(get = get_useScriptableObjectColor, put = set_useScriptableObjectColor)) bool useScriptableObjectColor;

  /// @brief Convert operator to "::GlobalNamespace::IReadOnlyColorStyle"
  constexpr operator ::GlobalNamespace::IReadOnlyColorStyle*() noexcept;

  static inline ::GlobalNamespace::ColorStyle* New_ctor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color0() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color0();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__color0So() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__color0So();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color1() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color1();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__color1So() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__color1So();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__colorSo() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__colorSo();

  constexpr bool const& __cordl_internal_get__flipGradientColors() const;

  constexpr bool& __cordl_internal_get__flipGradientColors();

  constexpr float_t const& __cordl_internal_get__globalLightTintIntensity() const;

  constexpr float_t& __cordl_internal_get__globalLightTintIntensity();

  constexpr bool const& __cordl_internal_get__gradient() const;

  constexpr bool& __cordl_internal_get__gradient();

  constexpr ::GlobalNamespace::GradientDirection const& __cordl_internal_get__gradientDirection() const;

  constexpr ::GlobalNamespace::GradientDirection& __cordl_internal_get__gradientDirection();

  constexpr bool const& __cordl_internal_get__useScriptableObjectColor() const;

  constexpr bool& __cordl_internal_get__useScriptableObjectColor();

  constexpr bool const& __cordl_internal_get__useScriptableObjectGradientColors() const;

  constexpr bool& __cordl_internal_get__useScriptableObjectGradientColors();

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__color0(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__color0So(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__color1(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__color1So(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__colorSo(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__flipGradientColors(bool value);

  constexpr void __cordl_internal_set__globalLightTintIntensity(float_t value);

  constexpr void __cordl_internal_set__gradient(bool value);

  constexpr void __cordl_internal_set__gradientDirection(::GlobalNamespace::GradientDirection value);

  constexpr void __cordl_internal_set__useScriptableObjectColor(bool value);

  constexpr void __cordl_internal_set__useScriptableObjectGradientColors(bool value);

  /// @brief Method .ctor, addr 0x2661238, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_color, addr 0x266104c, size 0x84, virtual true, abstract: false, final true
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_color0, addr 0x2661100, size 0x84, virtual true, abstract: false, final true
  inline ::UnityEngine::Color get_color0();

  /// @brief Method get_color1, addr 0x2661190, size 0x84, virtual true, abstract: false, final true
  inline ::UnityEngine::Color get_color1();

  /// @brief Method get_flipGradientColors, addr 0x2661230, size 0x8, virtual true, abstract: false, final true
  inline bool get_flipGradientColors();

  /// @brief Method get_globalLightTintIntensity, addr 0x26610dc, size 0x8, virtual true, abstract: false, final true
  inline float_t get_globalLightTintIntensity();

  /// @brief Method get_gradient, addr 0x26610ec, size 0x8, virtual true, abstract: false, final true
  inline bool get_gradient();

  /// @brief Method get_gradientDirection, addr 0x2661220, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::GradientDirection get_gradientDirection();

  /// @brief Method get_useScriptableObjectColor, addr 0x2661038, size 0x8, virtual true, abstract: false, final true
  inline bool get_useScriptableObjectColor();

  /// @brief Convert to "::GlobalNamespace::IReadOnlyColorStyle"
  constexpr ::GlobalNamespace::IReadOnlyColorStyle* i___GlobalNamespace__IReadOnlyColorStyle() noexcept;

  /// @brief Method set_color, addr 0x26610d0, size 0xc, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_color0, addr 0x2661184, size 0xc, virtual false, abstract: false, final false
  inline void set_color0(::UnityEngine::Color value);

  /// @brief Method set_color1, addr 0x2661214, size 0xc, virtual false, abstract: false, final false
  inline void set_color1(::UnityEngine::Color value);

  /// @brief Method set_globalLightTintIntensity, addr 0x26610e4, size 0x8, virtual false, abstract: false, final false
  inline void set_globalLightTintIntensity(float_t value);

  /// @brief Method set_gradient, addr 0x26610f4, size 0xc, virtual false, abstract: false, final false
  inline void set_gradient(bool value);

  /// @brief Method set_gradientDirection, addr 0x2661228, size 0x8, virtual false, abstract: false, final false
  inline void set_gradientDirection(::GlobalNamespace::GradientDirection value);

  /// @brief Method set_useScriptableObjectColor, addr 0x2661040, size 0xc, virtual false, abstract: false, final false
  inline void set_useScriptableObjectColor(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorStyle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorStyle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorStyle(ColorStyle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorStyle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorStyle(ColorStyle const&) = delete;

  /// @brief Field _useScriptableObjectColor, offset: 0x10, size: 0x1, def value: None
  bool ____useScriptableObjectColor;

  /// @brief Field _color, offset: 0x14, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _colorSo, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____colorSo;

  /// @brief Field _globalLightTintIntensity, offset: 0x30, size: 0x4, def value: None
  float_t ____globalLightTintIntensity;

  /// @brief Field _gradient, offset: 0x34, size: 0x1, def value: None
  bool ____gradient;

  /// @brief Field _useScriptableObjectGradientColors, offset: 0x35, size: 0x1, def value: None
  bool ____useScriptableObjectGradientColors;

  /// @brief Field _color0, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Color ____color0;

  /// @brief Field _color1, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ____color1;

  /// @brief Field _color0So, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____color0So;

  /// @brief Field _color1So, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____color1So;

  /// @brief Field _gradientDirection, offset: 0x68, size: 0x4, def value: None
  ::GlobalNamespace::GradientDirection ____gradientDirection;

  /// @brief Field _flipGradientColors, offset: 0x6c, size: 0x1, def value: None
  bool ____flipGradientColors;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18885 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorStyle, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorStyle, ____useScriptableObjectColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorStyle, ____color) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorStyle, ____colorSo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorStyle, ____globalLightTintIntensity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorStyle, ____gradient) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorStyle, ____useScriptableObjectGradientColors) == 0x35, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorStyle, ____color0) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorStyle, ____color1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorStyle, ____color0So) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorStyle, ____color1So) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorStyle, ____gradientDirection) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorStyle, ____flipGradientColors) == 0x6c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorStyle);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorStyle*, "", "ColorStyle");
