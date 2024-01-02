#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/AccessControl/zzzz__GenericSecurityDescriptor_def.hpp"
#include "System/Security/Principal/zzzz__SecurityIdentifier_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::GenericSecurityDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::GenericSecurityDescriptor::*)()>(
    &::System::Security::AccessControl::GenericSecurityDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2483080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::GenericSecurityDescriptor*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericSecurityDescriptor.set_Group
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::GenericSecurityDescriptor::*)(
    ::System::Security::Principal::SecurityIdentifier*)>(&::System::Security::AccessControl::GenericSecurityDescriptor::set_Group)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::GenericSecurityDescriptor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::GenericSecurityDescriptor*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericSecurityDescriptor.set_Owner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::GenericSecurityDescriptor::*)(
    ::System::Security::Principal::SecurityIdentifier*)>(&::System::Security::AccessControl::GenericSecurityDescriptor::set_Owner)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::GenericSecurityDescriptor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::GenericSecurityDescriptor*>::get(), 5));
    return ___internal_method;
  }
};
inline ::System::Security::AccessControl::GenericSecurityDescriptor* System::Security::AccessControl::GenericSecurityDescriptor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::AccessControl::GenericSecurityDescriptor*>());
}
inline void System::Security::AccessControl::GenericSecurityDescriptor::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::GenericSecurityDescriptor*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::AccessControl::GenericSecurityDescriptor::set_Group(::System::Security::Principal::SecurityIdentifier* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::GenericSecurityDescriptor*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Security::AccessControl::GenericSecurityDescriptor::set_Owner(::System::Security::Principal::SecurityIdentifier* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::GenericSecurityDescriptor*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::GenericSecurityDescriptor::GenericSecurityDescriptor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
