#pragma once
// IWYU pragma private; include "System\Net\NetworkInformation\UnixIPInterfaceProperties.hpp"
#include "System/Net/NetworkInformation/zzzz__IPInterfaceProperties_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixIPInterfaceProperties_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/NetworkInformation/zzzz__UnicastIPAddressInformationCollection_def.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterface_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixIPInterfaceProperties._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::UnixIPInterfaceProperties::*)(::System::Net::NetworkInformation::UnixNetworkInterface*,
                                                                                                                              ::System::Collections::Generic::List_1<::System::Net::IPAddress*>*)>(
    &::System::Net::NetworkInformation::UnixIPInterfaceProperties::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6352c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Net::NetworkInformation::UnixIPInterfaceProperties*>(),
            { ".ctor", {}, { ::i2c::type_of<::System::Net::NetworkInformation::UnixNetworkInterface*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Net::IPAddress*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixIPInterfaceProperties.get_UnicastAddresses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* (::System::Net::NetworkInformation::UnixIPInterfaceProperties::*)()>(
    &::System::Net::NetworkInformation::UnixIPInterfaceProperties::get_UnicastAddresses)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x63570dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::UnixIPInterfaceProperties*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::UnixIPInterfaceProperties*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::System::Net::NetworkInformation::UnixNetworkInterface*& System::Net::NetworkInformation::UnixIPInterfaceProperties::__cordl_internal_get_iface() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iface;
}
constexpr ::System::Net::NetworkInformation::UnixNetworkInterface* const& System::Net::NetworkInformation::UnixIPInterfaceProperties::__cordl_internal_get_iface() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iface;
}
constexpr void System::Net::NetworkInformation::UnixIPInterfaceProperties::__cordl_internal_set_iface(::System::Net::NetworkInformation::UnixNetworkInterface* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iface = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Net::IPAddress*>*& System::Net::NetworkInformation::UnixIPInterfaceProperties::__cordl_internal_get_addresses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addresses;
}
constexpr ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* const& System::Net::NetworkInformation::UnixIPInterfaceProperties::__cordl_internal_get_addresses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addresses;
}
constexpr void System::Net::NetworkInformation::UnixIPInterfaceProperties::__cordl_internal_set_addresses(::System::Collections::Generic::List_1<::System::Net::IPAddress*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___addresses = value;
}
inline void System::Net::NetworkInformation::UnixIPInterfaceProperties::setStaticF_ns(::System::Text::RegularExpressions::Regex* value) {
  ::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "ns", ::System::Net::NetworkInformation::UnixIPInterfaceProperties*>(
      std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* System::Net::NetworkInformation::UnixIPInterfaceProperties::getStaticF_ns() {
  return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "ns", ::System::Net::NetworkInformation::UnixIPInterfaceProperties*>();
}
inline void System::Net::NetworkInformation::UnixIPInterfaceProperties::setStaticF_search(::System::Text::RegularExpressions::Regex* value) {
  ::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "search", ::System::Net::NetworkInformation::UnixIPInterfaceProperties*>(
      std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* System::Net::NetworkInformation::UnixIPInterfaceProperties::getStaticF_search() {
  return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "search", ::System::Net::NetworkInformation::UnixIPInterfaceProperties*>();
}
inline void System::Net::NetworkInformation::UnixIPInterfaceProperties::_ctor(::System::Net::NetworkInformation::UnixNetworkInterface* iface,
                                                                              ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Net::NetworkInformation::UnixIPInterfaceProperties*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Net::NetworkInformation::UnixNetworkInterface*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Net::IPAddress*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, iface, addresses);
}
inline ::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* System::Net::NetworkInformation::UnixIPInterfaceProperties::get_UnicastAddresses() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::UnixIPInterfaceProperties*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::UnicastIPAddressInformationCollection*>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::UnixIPInterfaceProperties*
System::Net::NetworkInformation::UnixIPInterfaceProperties::New_ctor(::System::Net::NetworkInformation::UnixNetworkInterface* iface,
                                                                     ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::UnixIPInterfaceProperties*>(iface, addresses));
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::UnixIPInterfaceProperties::UnixIPInterfaceProperties() {}
