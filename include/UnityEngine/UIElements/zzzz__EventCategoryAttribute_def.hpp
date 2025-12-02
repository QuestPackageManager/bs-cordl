#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCategoryAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCategory_def.hpp"
CORDL_MODULE_EXPORT(EventCategoryAttribute)
namespace UnityEngine::UIElements {
struct EventCategory;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventCategoryAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::EventCategoryAttribute);
// Dependencies System.Attribute, UnityEngine.UIElements.EventCategory
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.EventCategoryAttribute
class CORDL_TYPE EventCategoryAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field category, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_category, put = __cordl_internal_set_category)) ::UnityEngine::UIElements::EventCategory category;

  static inline ::UnityEngine::UIElements::EventCategoryAttribute* New_ctor(::UnityEngine::UIElements::EventCategory category);

  constexpr ::UnityEngine::UIElements::EventCategory const& __cordl_internal_get_category() const;

  constexpr ::UnityEngine::UIElements::EventCategory& __cordl_internal_get_category();

  constexpr void __cordl_internal_set_category(::UnityEngine::UIElements::EventCategory value);

  /// @brief Method .ctor, addr 0x6a967f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::EventCategory category);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventCategoryAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventCategoryAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventCategoryAttribute(EventCategoryAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventCategoryAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventCategoryAttribute(EventCategoryAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5238 };

  /// @brief Field category, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::UIElements::EventCategory ___category;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::EventCategoryAttribute, ___category) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventCategoryAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::EventCategoryAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventCategoryAttribute*, "UnityEngine.UIElements", "EventCategoryAttribute");
