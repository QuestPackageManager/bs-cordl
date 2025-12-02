#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/ScrollViewport.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
CORDL_MODULE_EXPORT(ScrollViewport)
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Flex;
}
namespace UnityEngine::UI {
class Mask;
}
namespace UnityEngine::UI {
class RawImage;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ScrollViewport;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollViewport);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ScrollViewport
class CORDL_TYPE ScrollViewport : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller {
public:
  // Declarations
  __declspec(property(get = get_Flex)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> Flex;

  /// @brief Field _flex, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__flex, put = __cordl_internal_set__flex)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> _flex;

  /// @brief Field _image, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__image, put = __cordl_internal_set__image)) ::UnityW<::UnityEngine::UI::RawImage> _image;

  /// @brief Field _mask, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__mask, put = __cordl_internal_set__mask)) ::UnityW<::UnityEngine::UI::Mask> _mask;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollViewport* New_ctor();

  /// @brief Method Setup, addr 0x584786c, size 0x1b8, virtual true, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner);

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> const& __cordl_internal_get__flex() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>& __cordl_internal_get__flex();

  constexpr ::UnityW<::UnityEngine::UI::RawImage> const& __cordl_internal_get__image() const;

  constexpr ::UnityW<::UnityEngine::UI::RawImage>& __cordl_internal_get__image();

  constexpr ::UnityW<::UnityEngine::UI::Mask> const& __cordl_internal_get__mask() const;

  constexpr ::UnityW<::UnityEngine::UI::Mask>& __cordl_internal_get__mask();

  constexpr void __cordl_internal_set__flex(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> value);

  constexpr void __cordl_internal_set__image(::UnityW<::UnityEngine::UI::RawImage> value);

  constexpr void __cordl_internal_set__mask(::UnityW<::UnityEngine::UI::Mask> value);

  /// @brief Method .ctor, addr 0x5847a24, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Flex, addr 0x5847864, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> get_Flex();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScrollViewport();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScrollViewport", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScrollViewport(ScrollViewport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScrollViewport", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScrollViewport(ScrollViewport const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18356 };

  /// @brief Field _image, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::RawImage> ____image;

  /// @brief Field _mask, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Mask> ____mask;

  /// @brief Field _flex, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> ____flex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollViewport, ____image) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollViewport, ____mask) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollViewport, ____flex) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollViewport, 0x88>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollViewport);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollViewport*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "ScrollViewport");
