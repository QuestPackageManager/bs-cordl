#pragma once
// IWYU pragma private; include "System/Security/IPermission.hpp"
#include "System/Security/zzzz__ISecurityEncodable_impl.hpp"
#include "System/Security/zzzz__IPermission_def.hpp"
inline void System::Security::IPermission::Demand() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::IPermission*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Security::IPermission::IsSubsetOf(::System::Security::IPermission* target) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::IPermission*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, target);
}
/// @brief Convert operator to "::System::Security::ISecurityEncodable"
constexpr System::Security::IPermission::operator ::System::Security::ISecurityEncodable*() noexcept {
  return static_cast<::System::Security::ISecurityEncodable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Security::ISecurityEncodable"
constexpr ::System::Security::ISecurityEncodable* System::Security::IPermission::i___System__Security__ISecurityEncodable() noexcept {
  return static_cast<::System::Security::ISecurityEncodable*>(static_cast<void*>(this));
}
