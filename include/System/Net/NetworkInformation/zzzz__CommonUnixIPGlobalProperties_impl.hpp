#pragma once
#include "System/Net/NetworkInformation/zzzz__IPGlobalProperties_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__CommonUnixIPGlobalProperties_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::CommonUnixIPGlobalProperties.getdomainname
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::System::Net::NetworkInformation::CommonUnixIPGlobalProperties::getdomainname)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x29f03e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::CommonUnixIPGlobalProperties*>::get(), "getdomainname", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::CommonUnixIPGlobalProperties.get_DomainName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::NetworkInformation::CommonUnixIPGlobalProperties::*)()>(
    &::System::Net::NetworkInformation::CommonUnixIPGlobalProperties::get_DomainName)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x29f046c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::CommonUnixIPGlobalProperties*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::CommonUnixIPGlobalProperties*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::CommonUnixIPGlobalProperties._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::CommonUnixIPGlobalProperties::*)()>(
    &::System::Net::NetworkInformation::CommonUnixIPGlobalProperties::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29f05e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::CommonUnixIPGlobalProperties*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline int32_t System::Net::NetworkInformation::CommonUnixIPGlobalProperties::getdomainname(::ArrayW<uint8_t, ::Array<uint8_t>*> name, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::CommonUnixIPGlobalProperties*>::get(), "getdomainname", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, name, len);
}
inline ::StringW System::Net::NetworkInformation::CommonUnixIPGlobalProperties::get_DomainName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::CommonUnixIPGlobalProperties*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::CommonUnixIPGlobalProperties* System::Net::NetworkInformation::CommonUnixIPGlobalProperties::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::NetworkInformation::CommonUnixIPGlobalProperties*>());
}
inline void System::Net::NetworkInformation::CommonUnixIPGlobalProperties::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::CommonUnixIPGlobalProperties*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::CommonUnixIPGlobalProperties::CommonUnixIPGlobalProperties() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
