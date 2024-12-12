#pragma once
// IWYU pragma private; include "System/Security/ISecurityEncodable.hpp"
#include "System/Security/zzzz__ISecurityEncodable_def.hpp"
#include "System/Security/zzzz__SecurityElement_def.hpp"
inline ::System::Security::SecurityElement* System::Security::ISecurityEncodable::ToXml() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::ISecurityEncodable*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::SecurityElement*, false>(this, ___internal_method);
}
