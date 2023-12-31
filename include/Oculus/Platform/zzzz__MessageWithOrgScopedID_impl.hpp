#pragma once
#include "Oculus/Platform/Models/zzzz__OrgScopedID_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithOrgScopedID_def.hpp"
#include "Oculus/Platform/Models/zzzz__OrgScopedID_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithOrgScopedID._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithOrgScopedID::*)(void*)>(&::Oculus::Platform::MessageWithOrgScopedID::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26ef500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithOrgScopedID*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithOrgScopedID.GetOrgScopedID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::OrgScopedID* (::Oculus::Platform::MessageWithOrgScopedID::*)()>(
    &::Oculus::Platform::MessageWithOrgScopedID::GetOrgScopedID)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26f2f68;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithOrgScopedID*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithOrgScopedID*>::get(), 51));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithOrgScopedID.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::OrgScopedID* (::Oculus::Platform::MessageWithOrgScopedID::*)(void*)>(
    &::Oculus::Platform::MessageWithOrgScopedID::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26f2fa4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithOrgScopedID*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithOrgScopedID*>::get(), 72));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithOrgScopedID* Oculus::Platform::MessageWithOrgScopedID::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::MessageWithOrgScopedID*>(c_message));
}
inline void Oculus::Platform::MessageWithOrgScopedID::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithOrgScopedID*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::OrgScopedID* Oculus::Platform::MessageWithOrgScopedID::GetOrgScopedID() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithOrgScopedID*>::get(), 51)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::OrgScopedID*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::OrgScopedID* Oculus::Platform::MessageWithOrgScopedID::GetDataFromMessage(void* c_message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithOrgScopedID*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::OrgScopedID*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithOrgScopedID::MessageWithOrgScopedID() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
