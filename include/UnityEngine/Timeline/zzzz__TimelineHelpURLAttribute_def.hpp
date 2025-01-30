#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimelineHelpURLAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(TimelineHelpURLAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimelineHelpURLAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::TimelineHelpURLAttribute);
// Dependencies System.Attribute
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.TimelineHelpURLAttribute
class CORDL_TYPE TimelineHelpURLAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::Timeline::TimelineHelpURLAttribute* New_ctor(::System::Type* type);

  /// @brief Method .ctor, addr 0x4820768, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelineHelpURLAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimelineHelpURLAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimelineHelpURLAttribute(TimelineHelpURLAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimelineHelpURLAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimelineHelpURLAttribute(TimelineHelpURLAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15824 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelineHelpURLAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TimelineHelpURLAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineHelpURLAttribute*, "UnityEngine.Timeline", "TimelineHelpURLAttribute");
