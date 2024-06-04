#pragma once
// IWYU pragma private; include "System/Security/Principal/IIdentity.hpp"
#include "System/Security/Principal/zzzz__IIdentity_def.hpp"
//  Writing Method size for method: ::System::Security::Principal::IIdentity.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::Principal::IIdentity::*)()>(&::System::Security::Principal::IIdentity::get_Name)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::IIdentity*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::IIdentity*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::IIdentity.get_AuthenticationType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::Principal::IIdentity::*)()>(
    &::System::Security::Principal::IIdentity::get_AuthenticationType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::IIdentity*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::IIdentity*>::get(), 1));
    return ___internal_method;
  }
};
inline ::StringW System::Security::Principal::IIdentity::get_Name() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::IIdentity*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Security::Principal::IIdentity::get_AuthenticationType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::IIdentity*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
