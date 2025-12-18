#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/ImageStyle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Style_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ImageStyle)
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ImageStyle;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.Style, UnityEngine.Color
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ImageStyle
class CORDL_TYPE ImageStyle : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style {
public:
  // Declarations
  /// @brief Field color, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color)) ::UnityEngine::Color color;

  /// @brief Field colorHover, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_colorHover, put = __cordl_internal_set_colorHover)) ::UnityEngine::Color colorHover;

  /// @brief Field colorOff, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get_colorOff, put = __cordl_internal_set_colorOff)) ::UnityEngine::Color colorOff;

  /// @brief Field enabled, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_enabled, put = __cordl_internal_set_enabled)) bool enabled;

  /// @brief Field icon, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_icon, put = __cordl_internal_set_icon)) ::UnityW<::UnityEngine::Texture2D> icon;

  /// @brief Field pixelDensityMultiplier, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_pixelDensityMultiplier, put = __cordl_internal_set_pixelDensityMultiplier)) float_t pixelDensityMultiplier;

  /// @brief Field sprite, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_sprite, put = __cordl_internal_set_sprite)) ::UnityW<::UnityEngine::Sprite> sprite;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* New_ctor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_color();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_colorHover() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_colorHover();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_colorOff() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_colorOff();

  constexpr bool const& __cordl_internal_get_enabled() const;

  constexpr bool& __cordl_internal_get_enabled();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_icon() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_icon();

  constexpr float_t const& __cordl_internal_get_pixelDensityMultiplier() const;

  constexpr float_t& __cordl_internal_get_pixelDensityMultiplier();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_sprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_sprite();

  constexpr void __cordl_internal_set_color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_colorHover(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_colorOff(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_enabled(bool value);

  constexpr void __cordl_internal_set_icon(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_pixelDensityMultiplier(float_t value);

  constexpr void __cordl_internal_set_sprite(::UnityW<::UnityEngine::Sprite> value);

  /// @brief Method .ctor, addr 0x58b1568, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImageStyle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImageStyle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImageStyle(ImageStyle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImageStyle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImageStyle(ImageStyle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18384 };

  /// @brief Field enabled, offset: 0x19, size: 0x1, def value: None
  bool ___enabled;

  /// @brief Field icon, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___icon;

  /// @brief Field sprite, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___sprite;

  /// @brief Field color, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color ___color;

  /// @brief Field colorHover, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color ___colorHover;

  /// @brief Field colorOff, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color ___colorOff;

  /// @brief Field pixelDensityMultiplier, offset: 0x60, size: 0x4, def value: None
  float_t ___pixelDensityMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle, ___enabled) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle, ___icon) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle, ___sprite) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle, ___color) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle, ___colorHover) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle, ___colorOff) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle, ___pixelDensityMultiplier) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle, 0x68>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "ImageStyle");
