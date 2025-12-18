#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/Background.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Background)
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Background;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Background
class CORDL_TYPE Background : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller {
public:
  // Declarations
  __declspec(property(put = set_Color)) ::UnityEngine::Color Color;

  __declspec(property(put = set_PixelDensityMultiplier)) float_t PixelDensityMultiplier;

  __declspec(property(put = set_RaycastTarget)) bool RaycastTarget;

  __declspec(property(put = set_Sprite)) ::UnityW<::UnityEngine::Sprite> Sprite;

  /// @brief Field _image, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__image, put = __cordl_internal_set__image)) ::UnityW<::UnityEngine::UI::Image> _image;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background* New_ctor();

  /// @brief Method Setup, addr 0x58a9ce4, size 0xa0, virtual true, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner);

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__image() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__image();

  constexpr void __cordl_internal_set__image(::UnityW<::UnityEngine::UI::Image> value);

  /// @brief Method .ctor, addr 0x58a9d84, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_Color, addr 0x58a9c6c, size 0x20, virtual false, abstract: false, final false
  inline void set_Color(::UnityEngine::Color value);

  /// @brief Method set_PixelDensityMultiplier, addr 0x58a9c8c, size 0x34, virtual false, abstract: false, final false
  inline void set_PixelDensityMultiplier(float_t value);

  /// @brief Method set_RaycastTarget, addr 0x58a9cc0, size 0x24, virtual false, abstract: false, final false
  inline void set_RaycastTarget(bool value);

  /// @brief Method set_Sprite, addr 0x58a9c54, size 0x18, virtual false, abstract: false, final false
  inline void set_Sprite(::UnityEngine::Sprite* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Background();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Background", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Background(Background&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Background", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Background(Background const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18357 };

  /// @brief Field _image, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____image;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background, ____image) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background, 0x78>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "Background");
