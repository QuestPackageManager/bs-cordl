#pragma once
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
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5803))
// CS Name: ::PageControlElement*
class CORDL_TYPE PageControlElement : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _rectTransform, offset 0x18, size 0x8
  __declspec(property(get = __get__rectTransform, put = __set__rectTransform))::UnityEngine::RectTransform* _rectTransform;

  /// @brief Field _imageView, offset 0x20, size 0x8
  __declspec(property(get = __get__imageView, put = __set__imageView))::HMUI::ImageView* _imageView;

  /// @brief Field _selectedColor, offset 0x28, size 0x10
  __declspec(property(get = __get__selectedColor, put = __set__selectedColor))::UnityEngine::Color _selectedColor;

  /// @brief Field _unselectedColor, offset 0x38, size 0x10
  __declspec(property(get = __get__unselectedColor, put = __set__unselectedColor))::UnityEngine::Color _unselectedColor;

  __declspec(property(get = get_rectTransform))::UnityEngine::RectTransform* rectTransform;

  constexpr ::UnityEngine::RectTransform*& __get__rectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__rectTransform() const;

  constexpr void __set__rectTransform(::UnityEngine::RectTransform* value);

  constexpr ::HMUI::ImageView*& __get__imageView();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> const& __get__imageView() const;

  constexpr void __set__imageView(::HMUI::ImageView* value);

  constexpr ::UnityEngine::Color& __get__selectedColor();

  constexpr ::UnityEngine::Color const& __get__selectedColor() const;

  constexpr void __set__selectedColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__unselectedColor();

  constexpr ::UnityEngine::Color const& __get__unselectedColor() const;

  constexpr void __set__unselectedColor(::UnityEngine::Color value);

  /// @brief Method get_rectTransform, addr 0x22e7fa0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::RectTransform* get_rectTransform();

  /// @brief Method SetSelected, addr 0x22e7d74, size 0x64, virtual false, abstract: false, final false
  inline void SetSelected(bool isSelected);

  static inline ::GlobalNamespace::PageControlElement* New_ctor();

  /// @brief Method .ctor, addr 0x22e7fa8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PageControlElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PageControlElement(PageControlElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PageControlElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PageControlElement(PageControlElement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PageControlElement();

public:
  /// @brief Field _rectTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____rectTransform;

  /// @brief Field _imageView, offset: 0x20, size: 0x8, def value: None
  ::HMUI::ImageView* ____imageView;

  /// @brief Field _selectedColor, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Color ____selectedColor;

  /// @brief Field _unselectedColor, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Color ____unselectedColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PageControlElement, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PageControlElement, ____rectTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PageControlElement, ____imageView) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PageControlElement, ____selectedColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PageControlElement, ____unselectedColor) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PageControlElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PageControlElement*, "", "PageControlElement");
