#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PopupWindow.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PopupWindow)
namespace UnityEngine::UIElements {
class PopupWindow_UxmlFactory;
}
namespace UnityEngine::UIElements {
class PopupWindow_UxmlTraits;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PopupWindow;
}
namespace UnityEngine::UIElements {
class PopupWindow_UxmlFactory;
}
namespace UnityEngine::UIElements {
class PopupWindow_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PopupWindow);
MARK_REF_PTR_T(::UnityEngine::UIElements::PopupWindow_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::PopupWindow_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PopupWindow/UxmlFactory
class CORDL_TYPE PopupWindow_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::PopupWindow*, ::UnityEngine::UIElements::PopupWindow_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::PopupWindow_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4a026d0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PopupWindow_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PopupWindow_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PopupWindow_UxmlFactory(PopupWindow_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PopupWindow_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PopupWindow_UxmlFactory(PopupWindow_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5666 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PopupWindow_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextElement::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PopupWindow/UxmlTraits
class CORDL_TYPE PopupWindow_UxmlTraits : public ::UnityEngine::UIElements::TextElement_UxmlTraits {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::PopupWindow_UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x4a02718, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PopupWindow_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PopupWindow_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PopupWindow_UxmlTraits(PopupWindow_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PopupWindow_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PopupWindow_UxmlTraits(PopupWindow_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5667 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PopupWindow_UxmlTraits, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextElement
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PopupWindow
class CORDL_TYPE PopupWindow : public ::UnityEngine::UIElements::TextElement {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::PopupWindow_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::PopupWindow_UxmlTraits;

  __declspec(property(get = get_contentContainer)) ::UnityEngine::UIElements::VisualElement* contentContainer;

  /// @brief Field contentUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_contentUssClassName, put = setStaticF_contentUssClassName)) ::StringW contentUssClassName;

  /// @brief Field m_ContentContainer, offset 0x4a0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContentContainer, put = __cordl_internal_set_m_ContentContainer)) ::UnityEngine::UIElements::VisualElement* m_ContentContainer;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  static inline ::UnityEngine::UIElements::PopupWindow* New_ctor();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_ContentContainer() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_ContentContainer();

  constexpr void __cordl_internal_set_m_ContentContainer(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method .ctor, addr 0x4a024fc, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_contentUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_contentContainer, addr 0x4a02628, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_contentContainer();

  static inline void setStaticF_contentUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PopupWindow();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PopupWindow", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PopupWindow(PopupWindow&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PopupWindow", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PopupWindow(PopupWindow const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5668 };

  /// @brief Field m_ContentContainer, offset: 0x4a0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_ContentContainer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PopupWindow, ___m_ContentContainer) == 0x4a0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PopupWindow, 0x4a8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PopupWindow);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PopupWindow*, "UnityEngine.UIElements", "PopupWindow");
NEED_NO_BOX(::UnityEngine::UIElements::PopupWindow_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PopupWindow_UxmlFactory*, "UnityEngine.UIElements", "PopupWindow/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::PopupWindow_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PopupWindow_UxmlTraits*, "UnityEngine.UIElements", "PopupWindow/UxmlTraits");
