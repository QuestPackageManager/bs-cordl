#pragma once
// IWYU pragma private; include "System/Net/ICredentials.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__NetworkCredential_def.hpp"
#include "System/zzzz__Uri_def.hpp"
inline ::System::Net::NetworkCredential* System::Net::ICredentials::GetCredential(::System::Uri* uri, ::StringW authType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ICredentials*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkCredential*, false>(this, ___internal_method, uri, authType);
}
