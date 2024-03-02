#pragma once
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
class UxmlLongAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class __RepeatButton__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __RepeatButton__UxmlTraits;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class RepeatButton;
}
namespace UnityEngine::UIElements {
class __RepeatButton__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __RepeatButton__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::RepeatButton);
MARK_REF_PTR_T(::UnityEngine::UIElements::__RepeatButton__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__RepeatButton__UxmlTraits);
// Type: ::UxmlTraits
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::RepeatButton::UxmlTraits*
class CORDL_TYPE __RepeatButton__UxmlTraits : public ::UnityEngine::UIElements::__TextElement__UxmlTraits {
public:
  // Declarations
  /// @brief Field m_Delay, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Delay, put = __cordl_internal_set_m_Delay))::UnityEngine::UIElements::UxmlLongAttributeDescription* m_Delay;

  /// @brief Field m_Interval, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Interval, put = __cordl_internal_set_m_Interval))::UnityEngine::UIElements::UxmlLongAttributeDescription* m_Interval;

  /// @brief Method Init, addr 0x2f35f30, size 0x134, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__RepeatButton__UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlLongAttributeDescription*& __cordl_internal_get_m_Delay();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlLongAttributeDescription*> const& __cordl_internal_get_m_Delay() const;

  constexpr ::UnityEngine::UIElements::UxmlLongAttributeDescription*& __cordl_internal_get_m_Interval();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlLongAttributeDescription*> const& __cordl_internal_get_m_Interval() const;

  constexpr void __cordl_internal_set_m_Delay(::UnityEngine::UIElements::UxmlLongAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Interval(::UnityEngine::UIElements::UxmlLongAttributeDescription* value);

  /// @brief Method .ctor, addr 0x2f36064, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RepeatButton__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RepeatButton__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RepeatButton__UxmlTraits(__RepeatButton__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RepeatButton__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RepeatButton__UxmlTraits(__RepeatButton__UxmlTraits const&) = delete;

  /// @brief Field m_Delay, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlLongAttributeDescription* ___m_Delay;

  /// @brief Field m_Interval, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlLongAttributeDescription* ___m_Interval;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__RepeatButton__UxmlTraits, 0xa0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__RepeatButton__UxmlTraits, ___m_Delay) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__RepeatButton__UxmlTraits, ___m_Interval) == 0x98, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::RepeatButton
// SizeInfo { instance_size: 1152, native_size: -1, calculated_instance_size: 1152, calculated_native_size: 1152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::RepeatButton*
class CORDL_TYPE RepeatButton : public ::UnityEngine::UIElements::TextElement {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::__RepeatButton__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__RepeatButton__UxmlTraits;

  /// @brief Field m_Clickable, offset 0x478, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Clickable, put = __cordl_internal_set_m_Clickable))::UnityEngine::UIElements::Clickable* m_Clickable;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName))::StringW ussClassName;

  static inline ::UnityEngine::UIElements::RepeatButton* New_ctor();

  static inline ::UnityEngine::UIElements::RepeatButton* New_ctor(::System::Action* clickEvent, int64_t delay, int64_t interval);

  /// @brief Method SetAction, addr 0x2f35de4, size 0xa4, virtual false, abstract: false, final false
  inline void SetAction(::System::Action* clickEvent, int64_t delay, int64_t interval);

  constexpr ::UnityEngine::UIElements::Clickable*& __cordl_internal_get_m_Clickable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Clickable*> const& __cordl_internal_get_m_Clickable() const;

  constexpr void __cordl_internal_set_m_Clickable(::UnityEngine::UIElements::Clickable* value);

  /// @brief Method .ctor, addr 0x2f35d10, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2f35da4, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Action* clickEvent, int64_t delay, int64_t interval);

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_ussClassName(::StringW value);

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

  /// @brief Field m_Clickable, offset: 0x478, size: 0x8, def value: None
  ::UnityEngine::UIElements::Clickable* ___m_Clickable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RepeatButton, 0x480>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RepeatButton, ___m_Clickable) == 0x478, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::RepeatButton::UxmlFactory*
class CORDL_TYPE __RepeatButton__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::RepeatButton*, ::UnityEngine::UIElements::__RepeatButton__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__RepeatButton__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x2f35ee8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RepeatButton__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RepeatButton__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RepeatButton__UxmlFactory(__RepeatButton__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RepeatButton__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RepeatButton__UxmlFactory(__RepeatButton__UxmlFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__RepeatButton__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::RepeatButton);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RepeatButton*, "UnityEngine.UIElements", "RepeatButton");
NEED_NO_BOX(::UnityEngine::UIElements::__RepeatButton__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__RepeatButton__UxmlFactory*, "UnityEngine.UIElements", "RepeatButton/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__RepeatButton__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__RepeatButton__UxmlTraits*, "UnityEngine.UIElements", "RepeatButton/UxmlTraits");
