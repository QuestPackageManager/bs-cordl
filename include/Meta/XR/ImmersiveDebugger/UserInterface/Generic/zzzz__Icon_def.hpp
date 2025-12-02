#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/Icon.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
CORDL_MODULE_EXPORT(Icon)
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
namespace UnityEngine::UI {
class RawImage;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Icon;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Icon);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Icon
class CORDL_TYPE Icon : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller {
public:
  // Declarations
  __declspec(property(put = set_Color)) ::UnityEngine::Color Color;

  __declspec(property(get = get_RawImage)) ::UnityW<::UnityEngine::UI::RawImage> RawImage;

  __declspec(property(put = set_RaycastTarget)) bool RaycastTarget;

  __declspec(property(get = get_Texture, put = set_Texture)) ::UnityW<::UnityEngine::Texture2D> Texture;

  /// @brief Field _image, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__image, put = __cordl_internal_set__image)) ::UnityW<::UnityEngine::UI::RawImage> _image;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Icon* New_ctor();

  /// @brief Method Setup, addr 0x5846670, size 0x8c, virtual true, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner);

  constexpr ::UnityW<::UnityEngine::UI::RawImage> const& __cordl_internal_get__image() const;

  constexpr ::UnityW<::UnityEngine::UI::RawImage>& __cordl_internal_get__image();

  constexpr void __cordl_internal_set__image(::UnityW<::UnityEngine::UI::RawImage> value);

  /// @brief Method .ctor, addr 0x58466fc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_RawImage, addr 0x58465e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::RawImage> get_RawImage();

  /// @brief Method get_Texture, addr 0x58465ec, size 0x6c, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_Texture();

  /// @brief Method set_Color, addr 0x5844024, size 0x20, virtual false, abstract: false, final false
  inline void set_Color(::UnityEngine::Color value);

  /// @brief Method set_RaycastTarget, addr 0x5844044, size 0x24, virtual false, abstract: false, final false
  inline void set_RaycastTarget(bool value);

  /// @brief Method set_Texture, addr 0x5846658, size 0x18, virtual true, abstract: false, final false
  inline void set_Texture(::UnityEngine::Texture2D* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Icon();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Icon", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Icon(Icon&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Icon", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Icon(Icon const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18350 };

  /// @brief Field _image, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::RawImage> ____image;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Icon, ____image) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Icon, 0x78>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Icon);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Icon*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "Icon");
