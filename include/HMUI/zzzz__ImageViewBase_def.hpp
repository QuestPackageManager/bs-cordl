#pragma once
// IWYU pragma private; include "HMUI/ImageViewBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Image_def.hpp"
CORDL_MODULE_EXPORT(ImageViewBase)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace HMUI {
class ImageViewBase;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ImageViewBase);
// Dependencies UnityEngine.UI.Image
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ImageViewBase
class CORDL_TYPE ImageViewBase : public ::UnityEngine::UI::Image {
public:
  // Declarations
  __declspec(property(get = get_color0, put = set_color0)) ::UnityEngine::Color color0;

  __declspec(property(get = get_color1, put = set_color1)) ::UnityEngine::Color color1;

  __declspec(property(get = get_gradient, put = set_gradient)) bool gradient;

  static inline ::HMUI::ImageViewBase* New_ctor();

  /// @brief Method .ctor, addr 0x39fb618, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_color0, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_color0();

  /// @brief Method get_color1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_color1();

  /// @brief Method get_gradient, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_gradient();

  /// @brief Method set_color0, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_color0(::UnityEngine::Color value);

  /// @brief Method set_color1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_color1(::UnityEngine::Color value);

  /// @brief Method set_gradient, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_gradient(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImageViewBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImageViewBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImageViewBase(ImageViewBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImageViewBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImageViewBase(ImageViewBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16076 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ImageViewBase, 0x110>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ImageViewBase);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ImageViewBase*, "HMUI", "ImageViewBase");
