#pragma once
#include "System/Net/NetworkInformation/zzzz__UnixIPGlobalProperties_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixNoLibCIPGlobalProperties_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties.get_DomainName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::*)()>(
    &::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::get_DomainName)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2add170;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::*)()>(
    &::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2add1b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::StringW System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::get_DomainName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties* System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties*>());
}
inline void System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::UnixNoLibCIPGlobalProperties() {}
