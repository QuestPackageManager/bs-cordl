#pragma once
#include "System/Net/NetworkInformation/zzzz__IPInterfaceProperties_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixIPInterfaceProperties_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterface_def.hpp"
#include "System/Net/NetworkInformation/zzzz__UnicastIPAddressInformationCollection_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixIPInterfaceProperties._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::UnixIPInterfaceProperties::*)(
    ::System::Net::NetworkInformation::UnixNetworkInterface*, ::System::Collections::Generic::List_1<::System::Net::IPAddress*>*)>(
    &::System::Net::NetworkInformation::UnixIPInterfaceProperties::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x29ec0e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixIPInterfaceProperties*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::UnixNetworkInterface*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Net::IPAddress*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixIPInterfaceProperties.get_UnicastAddresses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* (
    ::System::Net::NetworkInformation::UnixIPInterfaceProperties::*)()>(&::System::Net::NetworkInformation::UnixIPInterfaceProperties::get_UnicastAddresses)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x29f088c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixIPInterfaceProperties*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixIPInterfaceProperties*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::System::Net::NetworkInformation::UnixNetworkInterface*& System::Net::NetworkInformation::UnixIPInterfaceProperties::__get_iface() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iface;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::NetworkInformation::UnixNetworkInterface*> const& System::Net::NetworkInformation::UnixIPInterfaceProperties::__get_iface() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iface;
}
constexpr void System::Net::NetworkInformation::UnixIPInterfaceProperties::__set_iface(::System::Net::NetworkInformation::UnixNetworkInterface* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___iface)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Net::IPAddress*>*& System::Net::NetworkInformation::UnixIPInterfaceProperties::__get_addresses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addresses;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Net::IPAddress*>*> const&
System::Net::NetworkInformation::UnixIPInterfaceProperties::__get_addresses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addresses;
}
constexpr void System::Net::NetworkInformation::UnixIPInterfaceProperties::__set_addresses(::System::Collections::Generic::List_1<::System::Net::IPAddress*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___addresses)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Net::NetworkInformation::UnixIPInterfaceProperties::setStaticF_ns(::System::Text::RegularExpressions::Regex* value) {
  ::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "ns",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixIPInterfaceProperties*>::get>(
      std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* System::Net::NetworkInformation::UnixIPInterfaceProperties::getStaticF_ns() {
  return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "ns",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixIPInterfaceProperties*>::get>();
}
inline void System::Net::NetworkInformation::UnixIPInterfaceProperties::setStaticF_search(::System::Text::RegularExpressions::Regex* value) {
  ::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "search",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixIPInterfaceProperties*>::get>(
      std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* System::Net::NetworkInformation::UnixIPInterfaceProperties::getStaticF_search() {
  return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "search",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixIPInterfaceProperties*>::get>();
}
inline ::System::Net::NetworkInformation::UnixIPInterfaceProperties*
System::Net::NetworkInformation::UnixIPInterfaceProperties::New_ctor(::System::Net::NetworkInformation::UnixNetworkInterface* iface,
                                                                     ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::NetworkInformation::UnixIPInterfaceProperties*>(iface, addresses));
}
inline void System::Net::NetworkInformation::UnixIPInterfaceProperties::_ctor(::System::Net::NetworkInformation::UnixNetworkInterface* iface,
                                                                              ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixIPInterfaceProperties*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::UnixNetworkInterface*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Net::IPAddress*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, iface, addresses);
}
inline ::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* System::Net::NetworkInformation::UnixIPInterfaceProperties::get_UnicastAddresses() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixIPInterfaceProperties*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::UnicastIPAddressInformationCollection*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::UnixIPInterfaceProperties::UnixIPInterfaceProperties() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
