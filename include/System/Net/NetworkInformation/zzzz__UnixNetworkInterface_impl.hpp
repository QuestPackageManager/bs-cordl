#pragma once
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceType_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterface_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterface_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceType_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/NetworkInformation/zzzz__IPInterfaceProperties_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNetworkInterface._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::UnixNetworkInterface::*)(::StringW)>(
    &::System::Net::NetworkInformation::UnixNetworkInterface::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x29ed864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNetworkInterface*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNetworkInterface.AddAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::UnixNetworkInterface::*)(::System::Net::IPAddress*)>(
    &::System::Net::NetworkInformation::UnixNetworkInterface::AddAddress)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x29ed7a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNetworkInterface*>::get(), "AddAddress", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNetworkInterface.SetLinkLayerInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::UnixNetworkInterface::*)(
    int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Net::NetworkInformation::NetworkInterfaceType)>(&::System::Net::NetworkInformation::UnixNetworkInterface::SetLinkLayerInfo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29ed848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNetworkInterface*>::get(), "SetLinkLayerInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::NetworkInterfaceType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNetworkInterface.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::NetworkInformation::UnixNetworkInterface::*)()>(
    &::System::Net::NetworkInformation::UnixNetworkInterface::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29f0bcc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNetworkInterface*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNetworkInterface*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNetworkInterface.get_NetworkInterfaceType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::NetworkInterfaceType (
    ::System::Net::NetworkInformation::UnixNetworkInterface::*)()>(&::System::Net::NetworkInformation::UnixNetworkInterface::get_NetworkInterfaceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29f0bd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNetworkInterface*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNetworkInterface*>::get(), 7));
    return ___internal_method;
  }
};
constexpr ::System::Net::NetworkInformation::IPInterfaceProperties*& System::Net::NetworkInformation::UnixNetworkInterface::__get_ipproperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ipproperties;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::NetworkInformation::IPInterfaceProperties*> const& System::Net::NetworkInformation::UnixNetworkInterface::__get_ipproperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ipproperties;
}
constexpr void System::Net::NetworkInformation::UnixNetworkInterface::__set_ipproperties(::System::Net::NetworkInformation::IPInterfaceProperties* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ipproperties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::NetworkInformation::UnixNetworkInterface::__get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Net::NetworkInformation::UnixNetworkInterface::__get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Net::NetworkInformation::UnixNetworkInterface::__set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Net::IPAddress*>*& System::Net::NetworkInformation::UnixNetworkInterface::__get_addresses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addresses;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Net::IPAddress*>*> const&
System::Net::NetworkInformation::UnixNetworkInterface::__get_addresses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addresses;
}
constexpr void System::Net::NetworkInformation::UnixNetworkInterface::__set_addresses(::System::Collections::Generic::List_1<::System::Net::IPAddress*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___addresses)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Net::NetworkInformation::UnixNetworkInterface::__get_macAddress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macAddress;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Net::NetworkInformation::UnixNetworkInterface::__get_macAddress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macAddress;
}
constexpr void System::Net::NetworkInformation::UnixNetworkInterface::__set_macAddress(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___macAddress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType& System::Net::NetworkInformation::UnixNetworkInterface::__get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType const& System::Net::NetworkInformation::UnixNetworkInterface::__get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Net::NetworkInformation::UnixNetworkInterface::__set_type(::System::Net::NetworkInformation::NetworkInterfaceType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
inline ::System::Net::NetworkInformation::UnixNetworkInterface* System::Net::NetworkInformation::UnixNetworkInterface::New_ctor(::StringW name) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::NetworkInformation::UnixNetworkInterface*>(name));
}
inline void System::Net::NetworkInformation::UnixNetworkInterface::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNetworkInterface*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void System::Net::NetworkInformation::UnixNetworkInterface::AddAddress(::System::Net::IPAddress* address) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNetworkInterface*>::get(), "AddAddress", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, address);
}
inline void System::Net::NetworkInformation::UnixNetworkInterface::SetLinkLayerInfo(int32_t index, ::ArrayW<uint8_t, ::Array<uint8_t>*> macAddress,
                                                                                    ::System::Net::NetworkInformation::NetworkInterfaceType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNetworkInterface*>::get(), "SetLinkLayerInfo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::NetworkInterfaceType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, macAddress, type);
}
inline ::StringW System::Net::NetworkInformation::UnixNetworkInterface::get_Name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNetworkInterface*>::get(),
                                                                             "get_Name", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::UnixNetworkInterface::get_NetworkInterfaceType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNetworkInterface*>::get(),
                                                                             "get_NetworkInterfaceType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::NetworkInterfaceType, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::UnixNetworkInterface::UnixNetworkInterface() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
