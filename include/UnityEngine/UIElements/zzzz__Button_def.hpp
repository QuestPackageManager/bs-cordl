#pragma once
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
class Clickable;
}
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
namespace UnityEngine::UIElements {
class NavigationSubmitEvent;
}
namespace UnityEngine::UIElements {
class __Button__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __Button__UxmlTraits;
}
namespace UnityEngine::UIElements {
struct __VisualElement__MeasureMode;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Button;
}
namespace UnityEngine::UIElements {
class __Button__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __Button__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Button);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Button__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Button__UxmlTraits);
// Type: ::UxmlTraits
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::Button::UxmlTraits*
class CORDL_TYPE __Button__UxmlTraits : public ::UnityEngine::UIElements::__TextElement__UxmlTraits {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__Button__UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x2f486d8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Button__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Button__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Button__UxmlTraits(__Button__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Button__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Button__UxmlTraits(__Button__UxmlTraits const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Button__UxmlTraits, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::Button
// SizeInfo { instance_size: 1152, native_size: -1, calculated_instance_size: 1152, calculated_native_size: 1152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::Button*
class CORDL_TYPE Button : public ::UnityEngine::UIElements::TextElement {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::__Button__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__Button__UxmlTraits;

  /// @brief Field NonEmptyString, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NonEmptyString, put = setStaticF_NonEmptyString))::StringW NonEmptyString;

  __declspec(property(get = get_clickable, put = set_clickable))::UnityEngine::UIElements::Clickable* clickable;

  /// @brief Field m_Clickable, offset 0x478, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Clickable, put = __cordl_internal_set_m_Clickable))::UnityEngine::UIElements::Clickable* m_Clickable;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName))::StringW ussClassName;

  /// @brief Method DoMeasure, addr 0x2f48548, size 0xbc, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::__VisualElement__MeasureMode widthMode, float_t desiredHeight,
                                          ::UnityEngine::UIElements::__VisualElement__MeasureMode heightMode);

  static inline ::UnityEngine::UIElements::Button* New_ctor();

  static inline ::UnityEngine::UIElements::Button* New_ctor(::System::Action* clickEvent);

  /// @brief Method OnKeyDown, addr 0x2f48430, size 0x118, virtual false, abstract: false, final false
  inline void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* evt);

  /// @brief Method OnNavigationSubmit, addr 0x2f483f8, size 0x38, virtual false, abstract: false, final false
  inline void OnNavigationSubmit(::UnityEngine::UIElements::NavigationSubmitEvent* evt);

  constexpr ::UnityEngine::UIElements::Clickable*& __cordl_internal_get_m_Clickable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Clickable*> const& __cordl_internal_get_m_Clickable() const;

  constexpr void __cordl_internal_set_m_Clickable(::UnityEngine::UIElements::Clickable* value);

  /// @brief Method .ctor, addr 0x2f483f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2f3b604, size 0x1c8, virtual false, abstract: false, final false
  inline void _ctor(::System::Action* clickEvent);

  static inline ::StringW getStaticF_NonEmptyString();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_clickable, addr 0x2f48384, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Clickable* get_clickable();

  static inline void setStaticF_NonEmptyString(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_clickable, addr 0x2f4838c, size 0x64, virtual false, abstract: false, final false
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

  /// @brief Field m_Clickable, offset: 0x478, size: 0x8, def value: None
  ::UnityEngine::UIElements::Clickable* ___m_Clickable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Button, 0x480>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Button, ___m_Clickable) == 0x478, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::Button::UxmlFactory*
class CORDL_TYPE __Button__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Button*, ::UnityEngine::UIElements::__Button__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__Button__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x2f48690, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Button__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Button__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Button__UxmlFactory(__Button__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Button__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Button__UxmlFactory(__Button__UxmlFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Button__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Button);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Button*, "UnityEngine.UIElements", "Button");
NEED_NO_BOX(::UnityEngine::UIElements::__Button__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Button__UxmlFactory*, "UnityEngine.UIElements", "Button/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__Button__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Button__UxmlTraits*, "UnityEngine.UIElements", "Button/UxmlTraits");
