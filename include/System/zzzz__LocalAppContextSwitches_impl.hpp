#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__LocalAppContextSwitches_def.hpp"
inline void System::LocalAppContextSwitches::setStaticF_DontThrowOnInvalidSurrogatePairs(bool value) {
  ::cordl_internals::setStaticField<bool, "DontThrowOnInvalidSurrogatePairs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalAppContextSwitches*>::get>(
      std::forward<bool>(value));
}
inline bool System::LocalAppContextSwitches::getStaticF_DontThrowOnInvalidSurrogatePairs() {
  return ::cordl_internals::getStaticField<bool, "DontThrowOnInvalidSurrogatePairs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalAppContextSwitches*>::get>();
}
// Ctor Parameters []
constexpr ::System::LocalAppContextSwitches::LocalAppContextSwitches() {}
