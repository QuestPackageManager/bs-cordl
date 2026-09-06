#pragma once
// IWYU pragma private; include "System/CompatibilitySwitches.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__CompatibilitySwitches_def.hpp"
inline void System::CompatibilitySwitches::setStaticF_IsAppEarlierThanWindowsPhone8(bool value) {
  ::cordl_internals::setStaticField<bool, "IsAppEarlierThanWindowsPhone8", ::System::CompatibilitySwitches*>(std::forward<bool>(value));
}
inline bool System::CompatibilitySwitches::getStaticF_IsAppEarlierThanWindowsPhone8() {
  return ::cordl_internals::getStaticField<bool, "IsAppEarlierThanWindowsPhone8", ::System::CompatibilitySwitches*>();
}
// Ctor Parameters []
constexpr ::System::CompatibilitySwitches::CompatibilitySwitches() {}
