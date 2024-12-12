#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventInterestAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCategoryFlags_def.hpp"
CORDL_MODULE_EXPORT(EventInterestAttribute)
namespace System {
class Type;
}
namespace UnityEngine::UIElements {
struct EventInterestOptions;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventInterestAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::EventInterestAttribute);
// Dependencies System.Attribute, UnityEngine.UIElements.EventCategoryFlags
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.EventInterestAttribute
class CORDL_TYPE EventInterestAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field categoryFlags, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_categoryFlags, put = __cordl_internal_set_categoryFlags)) ::UnityEngine::UIElements::EventCategoryFlags categoryFlags;

  /// @brief Field eventTypes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_eventTypes, put = __cordl_internal_set_eventTypes)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> eventTypes;

  static inline ::UnityEngine::UIElements::EventInterestAttribute* New_ctor(::ArrayW<::System::Type*, ::Array<::System::Type*>*> eventTypes);

  static inline ::UnityEngine::UIElements::EventInterestAttribute* New_ctor(::UnityEngine::UIElements::EventInterestOptions interests);

  constexpr ::UnityEngine::UIElements::EventCategoryFlags const& __cordl_internal_get_categoryFlags() const;

  constexpr ::UnityEngine::UIElements::EventCategoryFlags& __cordl_internal_get_categoryFlags();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get_eventTypes() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get_eventTypes();

  constexpr void __cordl_internal_set_categoryFlags(::UnityEngine::UIElements::EventCategoryFlags value);

  constexpr void __cordl_internal_set_eventTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  /// @brief Method .ctor, addr 0x499c164, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Type*, ::Array<::System::Type*>*> eventTypes);

  /// @brief Method .ctor, addr 0x499c190, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::EventInterestOptions interests);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventInterestAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventInterestAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventInterestAttribute(EventInterestAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventInterestAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventInterestAttribute(EventInterestAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6314 };

  /// @brief Field eventTypes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ___eventTypes;

  /// @brief Field categoryFlags, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::UIElements::EventCategoryFlags ___categoryFlags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::EventInterestAttribute, ___eventTypes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventInterestAttribute, ___categoryFlags) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventInterestAttribute, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::EventInterestAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventInterestAttribute*, "UnityEngine.UIElements", "EventInterestAttribute");
