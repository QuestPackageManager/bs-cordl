#pragma once
// IWYU pragma private; include "System\ServiceModel\Internals\LocalAppContextSwitches.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ServiceModel/Internals/zzzz__LocalAppContextSwitches_def.hpp"
inline void System::ServiceModel::Internals::LocalAppContextSwitches::setStaticF_IncludeNullExceptionMessageInETWTrace(bool value) {
  ::cordl_internals::setStaticField<bool, "IncludeNullExceptionMessageInETWTrace", ::System::ServiceModel::Internals::LocalAppContextSwitches*>(std::forward<bool>(value));
}
inline bool System::ServiceModel::Internals::LocalAppContextSwitches::getStaticF_IncludeNullExceptionMessageInETWTrace() {
  return ::cordl_internals::getStaticField<bool, "IncludeNullExceptionMessageInETWTrace", ::System::ServiceModel::Internals::LocalAppContextSwitches*>();
}
// Ctor Parameters []
constexpr ::System::ServiceModel::Internals::LocalAppContextSwitches::LocalAppContextSwitches() {}
