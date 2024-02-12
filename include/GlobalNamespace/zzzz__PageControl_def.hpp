#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PageControl)
namespace GlobalNamespace {
class PageControlElement;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class PageControl;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PageControl);
// Type: ::PageControl
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5100))
// CS Name: ::PageControl*
class CORDL_TYPE PageControl : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _content, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__content, put = __cordl_internal_set__content))::UnityW<::UnityEngine::RectTransform> _content;

  /// @brief Field _spacing, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__spacing, put = __cordl_internal_set__spacing)) float_t _spacing;

  /// @brief Field _elementPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__elementPrefab, put = __cordl_internal_set__elementPrefab))::UnityW<::GlobalNamespace::PageControlElement> _elementPrefab;

  /// @brief Field _activeElements, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__activeElements,
                      put = __cordl_internal_set__activeElements))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PageControlElement>>* _activeElements;

  /// @brief Field _inactiveElements, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__inactiveElements,
                      put = __cordl_internal_set__inactiveElements))::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PageControlElement>>* _inactiveElements;

  /// @brief Field _selectedPage, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedPage, put = __cordl_internal_set__selectedPage)) int32_t _selectedPage;

  /// @brief Field _pagesCount, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__pagesCount, put = __cordl_internal_set__pagesCount)) int32_t _pagesCount;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__content();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__content() const;

  constexpr void __cordl_internal_set__content(::UnityW<::UnityEngine::RectTransform> value);

  constexpr float_t& __cordl_internal_get__spacing();

  constexpr float_t const& __cordl_internal_get__spacing() const;

  constexpr void __cordl_internal_set__spacing(float_t value);

  constexpr ::UnityW<::GlobalNamespace::PageControlElement>& __cordl_internal_get__elementPrefab();

  constexpr ::UnityW<::GlobalNamespace::PageControlElement> const& __cordl_internal_get__elementPrefab() const;

  constexpr void __cordl_internal_set__elementPrefab(::UnityW<::GlobalNamespace::PageControlElement> value);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PageControlElement>>*& __cordl_internal_get__activeElements();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PageControlElement>>*> const& __cordl_internal_get__activeElements() const;

  constexpr void __cordl_internal_set__activeElements(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PageControlElement>>* value);

  constexpr ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PageControlElement>>*& __cordl_internal_get__inactiveElements();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PageControlElement>>*> const& __cordl_internal_get__inactiveElements() const;

  constexpr void __cordl_internal_set__inactiveElements(::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PageControlElement>>* value);

  constexpr int32_t& __cordl_internal_get__selectedPage();

  constexpr int32_t const& __cordl_internal_get__selectedPage() const;

  constexpr void __cordl_internal_set__selectedPage(int32_t value);

  constexpr int32_t& __cordl_internal_get__pagesCount();

  constexpr int32_t const& __cordl_internal_get__pagesCount() const;

  constexpr void __cordl_internal_set__pagesCount(int32_t value);

  /// @brief Method SetPagesCount, addr 0x230d03c, size 0x3d0, virtual false, abstract: false, final false
  inline void SetPagesCount(int32_t pagesCount);

  /// @brief Method SetSelectedPageIndex, addr 0x230d40c, size 0xc8, virtual false, abstract: false, final false
  inline void SetSelectedPageIndex(int32_t page);

  /// @brief Method SetVisible, addr 0x2316990, size 0x30, virtual false, abstract: false, final false
  inline void SetVisible(bool isVisible);

  static inline ::GlobalNamespace::PageControl* New_ctor();

  /// @brief Method .ctor, addr 0x23169c0, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PageControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PageControl(PageControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PageControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PageControl(PageControl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PageControl();

public:
  /// @brief Field _content, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____content;

  /// @brief Field _spacing, offset: 0x20, size: 0x4, def value: None
  float_t ____spacing;

  /// @brief Field _elementPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PageControlElement> ____elementPrefab;

  /// @brief Field _activeElements, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PageControlElement>>* ____activeElements;

  /// @brief Field _inactiveElements, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PageControlElement>>* ____inactiveElements;

  /// @brief Field _selectedPage, offset: 0x40, size: 0x4, def value: None
  int32_t ____selectedPage;

  /// @brief Field _pagesCount, offset: 0x44, size: 0x4, def value: None
  int32_t ____pagesCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PageControl, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PageControl, ____content) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PageControl, ____spacing) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PageControl, ____elementPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PageControl, ____activeElements) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PageControl, ____inactiveElements) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PageControl, ____selectedPage) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PageControl, ____pagesCount) == 0x44, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PageControl);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PageControl*, "", "PageControl");
