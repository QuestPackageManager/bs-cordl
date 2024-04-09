#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ImageWithHint)
namespace HMUI {
class HoverHint;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace HMUI {
class ImageWithHint;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ImageWithHint);
// Type: HMUI::ImageWithHint
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::ImageWithHint*
class CORDL_TYPE ImageWithHint : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _hoverHint, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__hoverHint, put = __cordl_internal_set__hoverHint))::UnityW<::HMUI::HoverHint> _hoverHint;

  /// @brief Field _image, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__image, put = __cordl_internal_set__image))::UnityW<::UnityEngine::UI::Image> _image;

  __declspec(property(put = set_hintText))::StringW hintText;

  __declspec(property(get = get_sprite, put = set_sprite))::UnityW<::UnityEngine::Sprite> sprite;

  static inline ::HMUI::ImageWithHint* New_ctor();

  constexpr ::UnityW<::HMUI::HoverHint> const& __cordl_internal_get__hoverHint() const;

  constexpr ::UnityW<::HMUI::HoverHint>& __cordl_internal_get__hoverHint();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__image() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__image();

  constexpr void __cordl_internal_set__hoverHint(::UnityW<::HMUI::HoverHint> value);

  constexpr void __cordl_internal_set__image(::UnityW<::UnityEngine::UI::Image> value);

  /// @brief Method .ctor, addr 0x2421bac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_sprite, addr 0x2421b74, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_sprite();

  /// @brief Method set_hintText, addr 0x2421b90, size 0x1c, virtual false, abstract: false, final false
  inline void set_hintText(::StringW value);

  /// @brief Method set_sprite, addr 0x2421b58, size 0x1c, virtual false, abstract: false, final false
  inline void set_sprite(::UnityEngine::Sprite* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImageWithHint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImageWithHint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImageWithHint(ImageWithHint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImageWithHint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImageWithHint(ImageWithHint const&) = delete;

  /// @brief Field _image, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____image;

  /// @brief Field _hoverHint, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::HoverHint> ____hoverHint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ImageWithHint, 0x28>, "Size mismatch!");

static_assert(offsetof(::HMUI::ImageWithHint, ____image) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::ImageWithHint, ____hoverHint) == 0x20, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ImageWithHint);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ImageWithHint*, "HMUI", "ImageWithHint");
