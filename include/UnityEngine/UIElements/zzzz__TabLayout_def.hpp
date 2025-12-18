#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TabLayout.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TabLayout)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class TabView;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TabLayout;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TabLayout);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TabLayout
class CORDL_TYPE TabLayout : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_IsVertical, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsVertical, put = __cordl_internal_set_m_IsVertical)) bool m_IsVertical;

  /// @brief Field m_TabHeaders, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TabHeaders,
                      put = __cordl_internal_set_m_TabHeaders)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* m_TabHeaders;

  /// @brief Field m_TabView, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TabView, put = __cordl_internal_set_m_TabView)) ::UnityEngine::UIElements::TabView* m_TabView;

  /// @brief Method GetHeight, addr 0x6ba92bc, size 0x20, virtual false, abstract: false, final false
  static inline float_t GetHeight(::UnityEngine::UIElements::VisualElement* t);

  /// @brief Method GetTabOffset, addr 0x6ba92fc, size 0x144, virtual false, abstract: false, final false
  inline float_t GetTabOffset(::UnityEngine::UIElements::VisualElement* tab);

  /// @brief Method GetWidth, addr 0x6ba92dc, size 0x20, virtual false, abstract: false, final false
  static inline float_t GetWidth(::UnityEngine::UIElements::VisualElement* t);

  /// @brief Method InitOrderTabs, addr 0x6ba9440, size 0x7c, virtual false, abstract: false, final false
  inline void InitOrderTabs();

  static inline ::UnityEngine::UIElements::TabLayout* New_ctor(::UnityEngine::UIElements::TabView* tabView, bool isVertical);

  /// @brief Method ReorderDisplay, addr 0x6ba94bc, size 0x3c, virtual false, abstract: false, final false
  inline void ReorderDisplay(int32_t from, int32_t to);

  constexpr bool const& __cordl_internal_get_m_IsVertical() const;

  constexpr bool& __cordl_internal_get_m_IsVertical();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_TabHeaders() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_TabHeaders();

  constexpr ::UnityEngine::UIElements::TabView* const& __cordl_internal_get_m_TabView() const;

  constexpr ::UnityEngine::UIElements::TabView*& __cordl_internal_get_m_TabView();

  constexpr void __cordl_internal_set_m_IsVertical(bool value);

  constexpr void __cordl_internal_set_m_TabHeaders(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_TabView(::UnityEngine::UIElements::TabView* value);

  /// @brief Method .ctor, addr 0x6ba9298, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::TabView* tabView, bool isVertical);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TabLayout();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TabLayout", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TabLayout(TabLayout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TabLayout", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TabLayout(TabLayout const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4327 };

  /// @brief Field m_TabView, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::TabView* ___m_TabView;

  /// @brief Field m_TabHeaders, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* ___m_TabHeaders;

  /// @brief Field m_IsVertical, offset: 0x20, size: 0x1, def value: None
  bool ___m_IsVertical;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TabLayout, ___m_TabView) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabLayout, ___m_TabHeaders) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabLayout, ___m_IsVertical) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TabLayout, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TabLayout);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TabLayout*, "UnityEngine.UIElements", "TabLayout");
