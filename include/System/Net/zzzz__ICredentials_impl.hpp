#pragma once
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__NetworkCredential_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::ICredentials.GetCredential
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkCredential* (::System::Net::ICredentials::*)(::System::Uri*, ::StringW)>(
    &::System::Net::ICredentials::GetCredential)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ICredentials*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ICredentials*>::get(), 0));
    return ___internal_method;
  }
};
inline ::System::Net::NetworkCredential* System::Net::ICredentials::GetCredential(::System::Uri* uri, ::StringW authType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ICredentials*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkCredential*, false>(this, ___internal_method, uri, authType);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
