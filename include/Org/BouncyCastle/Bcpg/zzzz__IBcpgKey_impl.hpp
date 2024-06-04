#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/IBcpgKey.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__IBcpgKey_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::IBcpgKey.get_Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Bcpg::IBcpgKey::*)()>(&::Org::BouncyCastle::Bcpg::IBcpgKey::get_Format)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::IBcpgKey*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::IBcpgKey*>::get(), 0));
    return ___internal_method;
  }
};
inline ::StringW Org::BouncyCastle::Bcpg::IBcpgKey::get_Format() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::IBcpgKey*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
