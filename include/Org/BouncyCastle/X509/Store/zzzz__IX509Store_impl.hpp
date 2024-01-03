#pragma once
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Selector_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::IX509Store.GetMatches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (
    ::Org::BouncyCastle::X509::Store::IX509Store::*)(::Org::BouncyCastle::X509::Store::IX509Selector*)>(&::Org::BouncyCastle::X509::Store::IX509Store::GetMatches)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::IX509Store*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::IX509Store*>::get(), 0));
    return ___internal_method;
  }
};
inline ::System::Collections::ICollection* Org::BouncyCastle::X509::Store::IX509Store::GetMatches(::Org::BouncyCastle::X509::Store::IX509Selector* selector) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::IX509Store*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(this, ___internal_method, selector);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
