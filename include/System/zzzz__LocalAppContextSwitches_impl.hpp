#pragma once
// IWYU pragma private; include "System\LocalAppContextSwitches.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__LocalAppContextSwitches_def.hpp"
inline void System::LocalAppContextSwitches::setStaticF_MemberDescriptorEqualsReturnsFalseIfEquivalent(bool value) {
  ::cordl_internals::setStaticField<bool, "MemberDescriptorEqualsReturnsFalseIfEquivalent", ::System::LocalAppContextSwitches*>(std::forward<bool>(value));
}
inline bool System::LocalAppContextSwitches::getStaticF_MemberDescriptorEqualsReturnsFalseIfEquivalent() {
  return ::cordl_internals::getStaticField<bool, "MemberDescriptorEqualsReturnsFalseIfEquivalent", ::System::LocalAppContextSwitches*>();
}
// Ctor Parameters []
constexpr ::System::LocalAppContextSwitches::LocalAppContextSwitches() {}
