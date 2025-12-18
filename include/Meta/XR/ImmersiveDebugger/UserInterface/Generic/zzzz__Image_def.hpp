#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/Image.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Icon_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Image)
namespace Meta::XR::ImmersiveDebugger::Manager {
class WatchTexture;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Image;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.Icon
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Image
class CORDL_TYPE Image : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Icon {
public:
  // Declarations
  __declspec(property(get = get_Texture, put = set_Texture)) ::UnityW<::UnityEngine::Texture2D> Texture;

  /// @brief Field _defaultHeight, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultHeight, put = __cordl_internal_set__defaultHeight)) float_t _defaultHeight;

  /// @brief Field _watchTexture, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__watchTexture, put = __cordl_internal_set__watchTexture)) ::Meta::XR::ImmersiveDebugger::Manager::WatchTexture* _watchTexture;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image* New_ctor();

  /// @brief Method Setup, addr 0x58acfac, size 0x54, virtual false, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::Manager::WatchTexture* watchTexture);

  /// @brief Method Update, addr 0x58ad020, size 0xe8, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateSize, addr 0x58acf14, size 0x98, virtual false, abstract: false, final false
  inline void UpdateSize();

  constexpr float_t const& __cordl_internal_get__defaultHeight() const;

  constexpr float_t& __cordl_internal_get__defaultHeight();

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::WatchTexture* const& __cordl_internal_get__watchTexture() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::WatchTexture*& __cordl_internal_get__watchTexture();

  constexpr void __cordl_internal_set__defaultHeight(float_t value);

  constexpr void __cordl_internal_set__watchTexture(::Meta::XR::ImmersiveDebugger::Manager::WatchTexture* value);

  /// @brief Method .ctor, addr 0x58ad114, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Texture, addr 0x58ace6c, size 0x4, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_Texture();

  /// @brief Method set_Texture, addr 0x58ace70, size 0xa4, virtual true, abstract: false, final false
  inline void set_Texture(::UnityEngine::Texture2D* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Image();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Image", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Image(Image&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Image", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Image(Image const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18366 };

  /// @brief Field _watchTexture, offset: 0x78, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Manager::WatchTexture* ____watchTexture;

  /// @brief Field _defaultHeight, offset: 0x80, size: 0x4, def value: None
  float_t ____defaultHeight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image, ____watchTexture) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image, ____defaultHeight) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image, 0x88>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "Image");
