#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColorExtensions)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorExtensions);
// Type: ::ColorExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ColorExtensions*
class CORDL_TYPE ColorExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ColorWithAlpha, addr 0x10963a8, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color ColorWithAlpha(::UnityEngine::Color color, float_t alpha);

  /// @brief Method ColorWithB, addr 0x10963c0, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color ColorWithB(::UnityEngine::Color color, float_t b);

  /// @brief Method ColorWithG, addr 0x10963b8, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color ColorWithG(::UnityEngine::Color color, float_t g);

  /// @brief Method ColorWithR, addr 0x10963b0, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color ColorWithR(::UnityEngine::Color color, float_t r);

  /// @brief Method ColorWithValue, addr 0x10963c8, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color ColorWithValue(::UnityEngine::Color color, float_t value);

  /// @brief Method FromHtmlStringRGBA, addr 0x10961e4, size 0xfc, virtual false, abstract: false, final false
  static inline bool FromHtmlStringRGBA(::StringW htmlColor, ByRef<::UnityEngine::Color> color);

  /// @brief Method LerpRGBUnclamped, addr 0x109641c, size 0x2c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color LerpRGBUnclamped(::UnityEngine::Color a, ::UnityEngine::Color b, float_t t);

  /// @brief Method SaturatedColor, addr 0x1096350, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color SaturatedColor(::UnityEngine::Color color, float_t saturation);

  /// @brief Method <FromHtmlStringRGBA>g__HtmlStringToFloat|0_0, addr 0x10962e0, size 0x70, virtual false, abstract: false, final false
  static inline float_t _FromHtmlStringRGBA_g__HtmlStringToFloat_0_0(::StringW htmlColor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorExtensions(ColorExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorExtensions(ColorExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorExtensions*, "", "ColorExtensions");
