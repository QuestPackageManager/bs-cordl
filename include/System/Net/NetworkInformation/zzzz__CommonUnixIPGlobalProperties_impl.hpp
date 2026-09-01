#pragma once
// IWYU pragma private; include "System\Net\NetworkInformation\CommonUnixIPGlobalProperties.hpp"
#include "System/Net/NetworkInformation/zzzz__IPGlobalProperties_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__CommonUnixIPGlobalProperties_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::CommonUnixIPGlobalProperties.getdomainname
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::System::Net::NetworkInformation::CommonUnixIPGlobalProperties::getdomainname)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6356c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::CommonUnixIPGlobalProperties*>(),
                                                                                           { "getdomainname", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::CommonUnixIPGlobalProperties.get_DomainName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::NetworkInformation::CommonUnixIPGlobalProperties::*)()>(
    &::System::Net::NetworkInformation::CommonUnixIPGlobalProperties::get_DomainName)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6356ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::CommonUnixIPGlobalProperties*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::CommonUnixIPGlobalProperties*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::CommonUnixIPGlobalProperties._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::CommonUnixIPGlobalProperties::*)()>(
    &::System::Net::NetworkInformation::CommonUnixIPGlobalProperties::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6356e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::CommonUnixIPGlobalProperties*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t System::Net::NetworkInformation::CommonUnixIPGlobalProperties::getdomainname(::ArrayW<uint8_t> name, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::CommonUnixIPGlobalProperties*>(),
                                                                                         { "getdomainname", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, name, len);
}
inline ::StringW System::Net::NetworkInformation::CommonUnixIPGlobalProperties::get_DomainName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::CommonUnixIPGlobalProperties*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::NetworkInformation::CommonUnixIPGlobalProperties::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::CommonUnixIPGlobalProperties*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::CommonUnixIPGlobalProperties* System::Net::NetworkInformation::CommonUnixIPGlobalProperties::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::CommonUnixIPGlobalProperties*>());
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::CommonUnixIPGlobalProperties::CommonUnixIPGlobalProperties() {}
