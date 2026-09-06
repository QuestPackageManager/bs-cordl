#pragma once
// IWYU pragma private; include "System/LocalAppContextSwitches.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__LocalAppContextSwitches_def.hpp"
inline void System::LocalAppContextSwitches::setStaticF_IgnoreEmptyKeySequences(bool value) {
  ::cordl_internals::setStaticField<bool, "IgnoreEmptyKeySequences", ::System::LocalAppContextSwitches*>(std::forward<bool>(value));
}
inline bool System::LocalAppContextSwitches::getStaticF_IgnoreEmptyKeySequences() {
  return ::cordl_internals::getStaticField<bool, "IgnoreEmptyKeySequences", ::System::LocalAppContextSwitches*>();
}
inline void System::LocalAppContextSwitches::setStaticF_DontThrowOnInvalidSurrogatePairs(bool value) {
  ::cordl_internals::setStaticField<bool, "DontThrowOnInvalidSurrogatePairs", ::System::LocalAppContextSwitches*>(std::forward<bool>(value));
}
inline bool System::LocalAppContextSwitches::getStaticF_DontThrowOnInvalidSurrogatePairs() {
  return ::cordl_internals::getStaticField<bool, "DontThrowOnInvalidSurrogatePairs", ::System::LocalAppContextSwitches*>();
}
// Ctor Parameters []
constexpr ::System::LocalAppContextSwitches::LocalAppContextSwitches() {}
