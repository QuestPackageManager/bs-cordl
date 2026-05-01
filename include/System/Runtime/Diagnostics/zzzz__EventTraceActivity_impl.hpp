#pragma once
// IWYU pragma private; include "System/Runtime/Diagnostics/EventTraceActivity.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Diagnostics/zzzz__EventTraceActivity_def.hpp"
constexpr ::System::Guid& System::Runtime::Diagnostics::EventTraceActivity::__cordl_internal_get_ActivityId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ActivityId;
}
constexpr ::System::Guid const& System::Runtime::Diagnostics::EventTraceActivity::__cordl_internal_get_ActivityId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ActivityId;
}
constexpr void System::Runtime::Diagnostics::EventTraceActivity::__cordl_internal_set_ActivityId(::System::Guid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ActivityId = value;
}
// Ctor Parameters []
constexpr ::System::Runtime::Diagnostics::EventTraceActivity::EventTraceActivity() {}
