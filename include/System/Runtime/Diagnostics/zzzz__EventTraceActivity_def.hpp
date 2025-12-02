#pragma once
// IWYU pragma private; include "System/Runtime/Diagnostics/EventTraceActivity.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EventTraceActivity)
// Forward declare root types
namespace System::Runtime::Diagnostics {
class EventTraceActivity;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Diagnostics::EventTraceActivity);
// Dependencies System.Guid, System.Object
namespace System::Runtime::Diagnostics {
// Is value type: false
// CS Name: System.Runtime.Diagnostics.EventTraceActivity
class CORDL_TYPE EventTraceActivity : public ::System::Object {
public:
  // Declarations
  /// @brief Field ActivityId, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_ActivityId, put = __cordl_internal_set_ActivityId)) ::System::Guid ActivityId;

  constexpr ::System::Guid const& __cordl_internal_get_ActivityId() const;

  constexpr ::System::Guid& __cordl_internal_get_ActivityId();

  constexpr void __cordl_internal_set_ActivityId(::System::Guid value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventTraceActivity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventTraceActivity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventTraceActivity(EventTraceActivity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventTraceActivity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventTraceActivity(EventTraceActivity const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21108 };

  /// @brief Field ActivityId, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ___ActivityId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Diagnostics::EventTraceActivity, ___ActivityId) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Diagnostics::EventTraceActivity, 0x20>, "Size mismatch!");

} // namespace System::Runtime::Diagnostics
NEED_NO_BOX(::System::Runtime::Diagnostics::EventTraceActivity);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Diagnostics::EventTraceActivity*, "System.Runtime.Diagnostics", "EventTraceActivity");
