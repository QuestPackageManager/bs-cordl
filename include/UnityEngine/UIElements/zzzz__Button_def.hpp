#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Button.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Background_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Button)
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
struct Background;
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
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class Image;
}
namespace UnityEngine::UIElements {
class NavigationSubmitEvent;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
class UxmlImageAttributeDescription;
}
namespace UnityEngine::UIElements {
struct VisualElement_MeasureMode;
}
namespace UnityEngine::UIElements {
class VisualElement;
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

  /// @brief Method .ctor, addr 0x6b04880, size 0x68, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4143 };

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
  /// @brief Field m_IconImage, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IconImage, put = __cordl_internal_set_m_IconImage)) ::UnityEngine::UIElements::UxmlImageAttributeDescription* m_IconImage;

  /// @brief Method Init, addr 0x6b0499c, size 0x120, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::Button_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlImageAttributeDescription* const& __cordl_internal_get_m_IconImage() const;

  constexpr ::UnityEngine::UIElements::UxmlImageAttributeDescription*& __cordl_internal_get_m_IconImage();

  constexpr void __cordl_internal_set_m_IconImage(::UnityEngine::UIElements::UxmlImageAttributeDescription* value);

  /// @brief Method .ctor, addr 0x6b048e8, size 0xb4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4144 };

  /// @brief Field m_IconImage, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlImageAttributeDescription* ___m_IconImage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Button_UxmlTraits, ___m_IconImage) == 0xd0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Button_UxmlTraits, 0xd8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.Background, UnityEngine.UIElements.BindingId, UnityEngine.UIElements.TextElement
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

  __declspec(property(get = get_iconImage, put = set_iconImage)) ::UnityEngine::UIElements::Background iconImage;

  /// @brief Field iconImageProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_iconImageProperty, put = setStaticF_iconImageProperty)) ::UnityEngine::UIElements::BindingId iconImageProperty;

  /// @brief Field iconOnlyUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_iconOnlyUssClassName, put = setStaticF_iconOnlyUssClassName)) ::StringW iconOnlyUssClassName;

  /// @brief Field iconUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_iconUssClassName, put = setStaticF_iconUssClassName)) ::StringW iconUssClassName;

  /// @brief Field imageUSSClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_imageUSSClassName, put = setStaticF_imageUSSClassName)) ::StringW imageUSSClassName;

  /// @brief Field m_Clickable, offset 0x5a8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Clickable, put = __cordl_internal_set_m_Clickable)) ::UnityEngine::UIElements::Clickable* m_Clickable;

  /// @brief Field m_IconImage, offset 0x5c0, size 0x20
  __declspec(property(get = __cordl_internal_get_m_IconImage, put = __cordl_internal_set_m_IconImage)) ::UnityEngine::UIElements::Background m_IconImage;

  /// @brief Field m_ImageElement, offset 0x5b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ImageElement, put = __cordl_internal_set_m_ImageElement)) ::UnityEngine::UIElements::Image* m_ImageElement;

  /// @brief Field m_Text, offset 0x5e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text)) ::StringW m_Text;

  /// @brief Field m_TextElement, offset 0x5b0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextElement, put = __cordl_internal_set_m_TextElement)) ::UnityEngine::UIElements::TextElement* m_TextElement;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method DoMeasure, addr 0x6b045e0, size 0xbc, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode, float_t desiredHeight,
                                          ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode);

  static inline ::UnityEngine::UIElements::Button* New_ctor();

  static inline ::UnityEngine::UIElements::Button* New_ctor(::System::Action* clickEvent);

  static inline ::UnityEngine::UIElements::Button* New_ctor(::UnityEngine::UIElements::Background iconImage, ::System::Action* clickEvent);

  /// @brief Method OnNavigationSubmit, addr 0x6b045a4, size 0x3c, virtual false, abstract: false, final false
  inline void OnNavigationSubmit(::UnityEngine::UIElements::NavigationSubmitEvent* evt);

  /// @brief Method ResetButtonHierarchy, addr 0x6b03f1c, size 0xf0, virtual false, abstract: false, final false
  inline void ResetButtonHierarchy();

  /// @brief Method UpdateButtonHierarchy, addr 0x6b0400c, size 0x208, virtual false, abstract: false, final false
  inline void UpdateButtonHierarchy();

  constexpr ::UnityEngine::UIElements::Clickable* const& __cordl_internal_get_m_Clickable() const;

  constexpr ::UnityEngine::UIElements::Clickable*& __cordl_internal_get_m_Clickable();

  constexpr ::UnityEngine::UIElements::Background const& __cordl_internal_get_m_IconImage() const;

  constexpr ::UnityEngine::UIElements::Background& __cordl_internal_get_m_IconImage();

  constexpr ::UnityEngine::UIElements::Image* const& __cordl_internal_get_m_ImageElement() const;

  constexpr ::UnityEngine::UIElements::Image*& __cordl_internal_get_m_ImageElement();

  constexpr ::StringW const& __cordl_internal_get_m_Text() const;

  constexpr ::StringW& __cordl_internal_get_m_Text();

  constexpr ::UnityEngine::UIElements::TextElement* const& __cordl_internal_get_m_TextElement() const;

  constexpr ::UnityEngine::UIElements::TextElement*& __cordl_internal_get_m_TextElement();

  constexpr void __cordl_internal_set_m_Clickable(::UnityEngine::UIElements::Clickable* value);

  constexpr void __cordl_internal_set_m_IconImage(::UnityEngine::UIElements::Background value);

  constexpr void __cordl_internal_set_m_ImageElement(::UnityEngine::UIElements::Image* value);

  constexpr void __cordl_internal_set_m_Text(::StringW value);

  constexpr void __cordl_internal_set_m_TextElement(::UnityEngine::UIElements::TextElement* value);

  /// @brief Method .ctor, addr 0x6b04398, size 0x34, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6b0440c, size 0x198, virtual false, abstract: false, final false
  inline void _ctor(::System::Action* clickEvent);

  /// @brief Method .ctor, addr 0x6b043cc, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Background iconImage, ::System::Action* clickEvent);

  static inline ::StringW getStaticF_NonEmptyString();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_iconImageProperty();

  static inline ::StringW getStaticF_iconOnlyUssClassName();

  static inline ::StringW getStaticF_iconUssClassName();

  static inline ::StringW getStaticF_imageUSSClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_clickable, addr 0x6b03c5c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Clickable* get_clickable();

  /// @brief Method get_iconImage, addr 0x6b03cc4, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Background get_iconImage();

  /// @brief Method get_text, addr 0x6b04214, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_text();

  static inline void setStaticF_NonEmptyString(::StringW value);

  static inline void setStaticF_iconImageProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_iconOnlyUssClassName(::StringW value);

  static inline void setStaticF_iconUssClassName(::StringW value);

  static inline void setStaticF_imageUSSClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_clickable, addr 0x6b03c64, size 0x60, virtual false, abstract: false, final false
  inline void set_clickable(::UnityEngine::UIElements::Clickable* value);

  /// @brief Method set_iconImage, addr 0x6b03cd4, size 0x248, virtual false, abstract: false, final false
  inline void set_iconImage(::UnityEngine::UIElements::Background value);

  /// @brief Method set_text, addr 0x6b04234, size 0x164, virtual true, abstract: false, final false
  inline void set_text(::StringW value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4145 };

  /// @brief Field m_Clickable, offset: 0x5a8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Clickable* ___m_Clickable;

  /// @brief Field m_TextElement, offset: 0x5b0, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextElement* ___m_TextElement;

  /// @brief Field m_ImageElement, offset: 0x5b8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Image* ___m_ImageElement;

  /// @brief Field m_IconImage, offset: 0x5c0, size: 0x20, def value: None
  ::UnityEngine::UIElements::Background ___m_IconImage;

  /// @brief Field m_Text, offset: 0x5e0, size: 0x8, def value: None
  ::StringW ___m_Text;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Button, ___m_Clickable) == 0x5a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Button, ___m_TextElement) == 0x5b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Button, ___m_ImageElement) == 0x5b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Button, ___m_IconImage) == 0x5c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Button, ___m_Text) == 0x5e0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Button, 0x5e8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Button);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Button*, "UnityEngine.UIElements", "Button");
NEED_NO_BOX(::UnityEngine::UIElements::Button_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Button_UxmlFactory*, "UnityEngine.UIElements", "Button/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::Button_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Button_UxmlTraits*, "UnityEngine.UIElements", "Button/UxmlTraits");
