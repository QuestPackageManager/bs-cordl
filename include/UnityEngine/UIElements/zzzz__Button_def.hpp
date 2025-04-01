#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Button.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Button)
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
class Button_UxmlFactory;
}
namespace UnityEngine::UIElements {
class Button_UxmlTraits;
}
namespace UnityEngine::UIElements {
class Clickable;
}
namespace UnityEngine::UIElements {
class NavigationSubmitEvent;
}
namespace UnityEngine::UIElements {
struct VisualElement_MeasureMode;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Button;
}
namespace UnityEngine::UIElements {
class Button_UxmlFactory;
}
namespace UnityEngine::UIElements {
class Button_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Button);
MARK_REF_PTR_T(::UnityEngine::UIElements::Button_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::Button_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Button/UxmlFactory
class CORDL_TYPE Button_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Button*, ::UnityEngine::UIElements::Button_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::Button_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4987d50, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Button_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Button_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Button_UxmlFactory(Button_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Button_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Button_UxmlFactory(Button_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5531 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Button_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextElement::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Button/UxmlTraits
class CORDL_TYPE Button_UxmlTraits : public ::UnityEngine::UIElements::TextElement_UxmlTraits {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::Button_UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x4987d98, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Button_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Button_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Button_UxmlTraits(Button_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Button_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Button_UxmlTraits(Button_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5532 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Button_UxmlTraits, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextElement
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Button
class CORDL_TYPE Button : public ::UnityEngine::UIElements::TextElement {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::Button_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::Button_UxmlTraits;

  /// @brief Field NonEmptyString, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NonEmptyString, put = setStaticF_NonEmptyString)) ::StringW NonEmptyString;

  __declspec(property(get = get_clickable, put = set_clickable)) ::UnityEngine::UIElements::Clickable* clickable;

  /// @brief Field m_Clickable, offset 0x4a0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Clickable, put = __cordl_internal_set_m_Clickable)) ::UnityEngine::UIElements::Clickable* m_Clickable;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method DoMeasure, addr 0x4987c08, size 0xbc, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode, float_t desiredHeight,
                                          ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode);

  static inline ::UnityEngine::UIElements::Button* New_ctor();

  static inline ::UnityEngine::UIElements::Button* New_ctor(::System::Action* clickEvent);

  /// @brief Method OnNavigationSubmit, addr 0x4987bd0, size 0x38, virtual false, abstract: false, final false
  inline void OnNavigationSubmit(::UnityEngine::UIElements::NavigationSubmitEvent* evt);

  constexpr ::UnityEngine::UIElements::Clickable* const& __cordl_internal_get_m_Clickable() const;

  constexpr ::UnityEngine::UIElements::Clickable*& __cordl_internal_get_m_Clickable();

  constexpr void __cordl_internal_set_m_Clickable(::UnityEngine::UIElements::Clickable* value);

  /// @brief Method .ctor, addr 0x4987a70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4987a78, size 0x158, virtual false, abstract: false, final false
  inline void _ctor(::System::Action* clickEvent);

  static inline ::StringW getStaticF_NonEmptyString();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_clickable, addr 0x4987a04, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Clickable* get_clickable();

  static inline void setStaticF_NonEmptyString(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_clickable, addr 0x4987a0c, size 0x64, virtual false, abstract: false, final false
  inline void set_clickable(::UnityEngine::UIElements::Clickable* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Button();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Button", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Button(Button&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Button", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Button(Button const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5533 };

  /// @brief Field m_Clickable, offset: 0x4a0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Clickable* ___m_Clickable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Button, ___m_Clickable) == 0x4a0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Button, 0x4a8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Button);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Button*, "UnityEngine.UIElements", "Button");
NEED_NO_BOX(::UnityEngine::UIElements::Button_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Button_UxmlFactory*, "UnityEngine.UIElements", "Button/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::Button_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Button_UxmlTraits*, "UnityEngine.UIElements", "Button/UxmlTraits");
