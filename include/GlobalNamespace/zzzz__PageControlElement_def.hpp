#pragma once
// IWYU pragma private; include "GlobalNamespace/PageControlElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PageControlElement)
namespace HMUI {
class ImageView;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class PageControlElement;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PageControlElement);
// Type: ::PageControlElement
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PageControlElement*
class CORDL_TYPE PageControlElement : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _imageView, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__imageView, put = __cordl_internal_set__imageView)) ::UnityW<::HMUI::ImageView> _imageView;

  /// @brief Field _rectTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__rectTransform, put = __cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform> _rectTransform;

  /// @brief Field _selectedColor, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__selectedColor, put = __cordl_internal_set__selectedColor)) ::UnityEngine::Color _selectedColor;

  /// @brief Field _unselectedColor, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get__unselectedColor, put = __cordl_internal_set__unselectedColor)) ::UnityEngine::Color _unselectedColor;

  __declspec(property(get = get_rectTransform)) ::UnityW<::UnityEngine::RectTransform> rectTransform;

  static inline ::GlobalNamespace::PageControlElement* New_ctor();

  /// @brief Method SetSelected, addr 0x3a93a30, size 0x60, virtual false, abstract: false, final false
  inline void SetSelected(bool isSelected);

  constexpr ::UnityW<::HMUI::ImageView> const& __cordl_internal_get__imageView() const;

  constexpr ::UnityW<::HMUI::ImageView>& __cordl_internal_get__imageView();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__selectedColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__selectedColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__unselectedColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__unselectedColor();

  constexpr void __cordl_internal_set__imageView(::UnityW<::HMUI::ImageView> value);

  constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__selectedColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__unselectedColor(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x3a93b9c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_rectTransform, addr 0x3a93b94, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_rectTransform();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PageControlElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PageControlElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PageControlElement(PageControlElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PageControlElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PageControlElement(PageControlElement const&) = delete;

  /// @brief Field _rectTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____rectTransform;

  /// @brief Field _imageView, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::ImageView> ____imageView;

  /// @brief Field _selectedColor, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color ____selectedColor;

  /// @brief Field _unselectedColor, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color ____unselectedColor;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4973 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PageControlElement, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PageControlElement, ____rectTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PageControlElement, ____imageView) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PageControlElement, ____selectedColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PageControlElement, ____unselectedColor) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PageControlElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PageControlElement*, "", "PageControlElement");
