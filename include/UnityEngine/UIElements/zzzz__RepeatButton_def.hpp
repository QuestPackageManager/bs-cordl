#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/RepeatButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RepeatButton)
namespace System {
class Action;
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
class RepeatButton_UxmlFactory;
}
namespace UnityEngine::UIElements {
class RepeatButton_UxmlTraits;
}
namespace UnityEngine::UIElements {
class UxmlLongAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class RepeatButton;
}
namespace UnityEngine::UIElements {
class RepeatButton_UxmlFactory;
}
namespace UnityEngine::UIElements {
class RepeatButton_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::RepeatButton);
MARK_REF_PTR_T(::UnityEngine::UIElements::RepeatButton_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::RepeatButton_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.RepeatButton/UxmlFactory
class CORDL_TYPE RepeatButton_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::RepeatButton*, ::UnityEngine::UIElements::RepeatButton_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::RepeatButton_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x6b329b8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RepeatButton_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RepeatButton_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RepeatButton_UxmlFactory(RepeatButton_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RepeatButton_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RepeatButton_UxmlFactory(RepeatButton_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4300 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RepeatButton_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextElement::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.RepeatButton/UxmlTraits
class CORDL_TYPE RepeatButton_UxmlTraits : public ::UnityEngine::UIElements::TextElement_UxmlTraits {
public:
  // Declarations
  /// @brief Field m_Delay, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Delay, put = __cordl_internal_set_m_Delay)) ::UnityEngine::UIElements::UxmlLongAttributeDescription* m_Delay;

  /// @brief Field m_Interval, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Interval, put = __cordl_internal_set_m_Interval)) ::UnityEngine::UIElements::UxmlLongAttributeDescription* m_Interval;

  /// @brief Method Init, addr 0x6b32a20, size 0x164, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::RepeatButton_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlLongAttributeDescription* const& __cordl_internal_get_m_Delay() const;

  constexpr ::UnityEngine::UIElements::UxmlLongAttributeDescription*& __cordl_internal_get_m_Delay();

  constexpr ::UnityEngine::UIElements::UxmlLongAttributeDescription* const& __cordl_internal_get_m_Interval() const;

  constexpr ::UnityEngine::UIElements::UxmlLongAttributeDescription*& __cordl_internal_get_m_Interval();

  constexpr void __cordl_internal_set_m_Delay(::UnityEngine::UIElements::UxmlLongAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Interval(::UnityEngine::UIElements::UxmlLongAttributeDescription* value);

  /// @brief Method .ctor, addr 0x6b32b84, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RepeatButton_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RepeatButton_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RepeatButton_UxmlTraits(RepeatButton_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RepeatButton_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RepeatButton_UxmlTraits(RepeatButton_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4301 };

  /// @brief Field m_Delay, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlLongAttributeDescription* ___m_Delay;

  /// @brief Field m_Interval, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlLongAttributeDescription* ___m_Interval;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::RepeatButton_UxmlTraits, ___m_Delay) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RepeatButton_UxmlTraits, ___m_Interval) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RepeatButton_UxmlTraits, 0xe0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextElement
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.RepeatButton
class CORDL_TYPE RepeatButton : public ::UnityEngine::UIElements::TextElement {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::RepeatButton_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::RepeatButton_UxmlTraits;

  __declspec(property(put = set_acceptClicksIfDisabled)) bool acceptClicksIfDisabled;

  /// @brief Field m_AcceptClicksIfDisabled, offset 0x5b0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AcceptClicksIfDisabled, put = __cordl_internal_set_m_AcceptClicksIfDisabled)) bool m_AcceptClicksIfDisabled;

  /// @brief Field m_Clickable, offset 0x5a8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Clickable, put = __cordl_internal_set_m_Clickable)) ::UnityEngine::UIElements::Clickable* m_Clickable;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method AddAction, addr 0x6b32938, size 0x18, virtual false, abstract: false, final false
  inline void AddAction(::System::Action* clickEvent);

  static inline ::UnityEngine::UIElements::RepeatButton* New_ctor();

  static inline ::UnityEngine::UIElements::RepeatButton* New_ctor(::System::Action* clickEvent, int64_t delay, int64_t interval);

  /// @brief Method SetAction, addr 0x6b3289c, size 0x9c, virtual false, abstract: false, final false
  inline void SetAction(::System::Action* clickEvent, int64_t delay, int64_t interval);

  constexpr bool const& __cordl_internal_get_m_AcceptClicksIfDisabled() const;

  constexpr bool& __cordl_internal_get_m_AcceptClicksIfDisabled();

  constexpr ::UnityEngine::UIElements::Clickable* const& __cordl_internal_get_m_Clickable() const;

  constexpr ::UnityEngine::UIElements::Clickable*& __cordl_internal_get_m_Clickable();

  constexpr void __cordl_internal_set_m_AcceptClicksIfDisabled(bool value);

  constexpr void __cordl_internal_set_m_Clickable(::UnityEngine::UIElements::Clickable* value);

  /// @brief Method .ctor, addr 0x6b327c0, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6b3285c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Action* clickEvent, int64_t delay, int64_t interval);

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_acceptClicksIfDisabled, addr 0x6b32790, size 0x30, virtual false, abstract: false, final false
  inline void set_acceptClicksIfDisabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RepeatButton();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RepeatButton", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RepeatButton(RepeatButton&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RepeatButton", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RepeatButton(RepeatButton const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4302 };

  /// @brief Field m_Clickable, offset: 0x5a8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Clickable* ___m_Clickable;

  /// @brief Field m_AcceptClicksIfDisabled, offset: 0x5b0, size: 0x1, def value: None
  bool ___m_AcceptClicksIfDisabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::RepeatButton, ___m_Clickable) == 0x5a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RepeatButton, ___m_AcceptClicksIfDisabled) == 0x5b0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RepeatButton, 0x5b8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::RepeatButton);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RepeatButton*, "UnityEngine.UIElements", "RepeatButton");
NEED_NO_BOX(::UnityEngine::UIElements::RepeatButton_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RepeatButton_UxmlFactory*, "UnityEngine.UIElements", "RepeatButton/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::RepeatButton_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RepeatButton_UxmlTraits*, "UnityEngine.UIElements", "RepeatButton/UxmlTraits");
