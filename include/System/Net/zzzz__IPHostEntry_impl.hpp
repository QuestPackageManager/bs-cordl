#pragma once
// IWYU pragma private; include "System\Net\IPHostEntry.hpp"
#include "System/Net/zzzz__IPAddress_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__IPHostEntry_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
//  Writing Method size for method: ::System::Net::IPHostEntry.get_HostName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::IPHostEntry::*)()>(&::System::Net::IPHostEntry::get_HostName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x640db08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::IPHostEntry*>(), { "get_HostName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPHostEntry.set_HostName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::IPHostEntry::*)(::StringW)>(&::System::Net::IPHostEntry::set_HostName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x640db10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::IPHostEntry*>(), { "set_HostName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPHostEntry.set_Aliases
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::IPHostEntry::*)(::ArrayW<::StringW>)>(&::System::Net::IPHostEntry::set_Aliases)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x640db18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::IPHostEntry*>(), { "set_Aliases", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPHostEntry.get_AddressList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Net::IPAddress*> (::System::Net::IPHostEntry::*)()>(&::System::Net::IPHostEntry::get_AddressList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x640db20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::IPHostEntry*>(), { "get_AddressList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPHostEntry.set_AddressList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::IPHostEntry::*)(::ArrayW<::System::Net::IPAddress*>)>(&::System::Net::IPHostEntry::set_AddressList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x640db28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::IPHostEntry*>(), { "set_AddressList", {}, { ::i2c::type_of<::ArrayW<::System::Net::IPAddress*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPHostEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::IPHostEntry::*)()>(&::System::Net::IPHostEntry::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x640db30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::IPHostEntry*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::IPHostEntry::__cordl_internal_get_hostName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hostName;
}
constexpr ::StringW const& System::Net::IPHostEntry::__cordl_internal_get_hostName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hostName;
}
constexpr void System::Net::IPHostEntry::__cordl_internal_set_hostName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hostName = value;
}
constexpr ::ArrayW<::StringW>& System::Net::IPHostEntry::__cordl_internal_get_aliases() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aliases;
}
constexpr ::ArrayW<::StringW> const& System::Net::IPHostEntry::__cordl_internal_get_aliases() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aliases;
}
constexpr void System::Net::IPHostEntry::__cordl_internal_set_aliases(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___aliases = value;
}
constexpr ::ArrayW<::System::Net::IPAddress*>& System::Net::IPHostEntry::__cordl_internal_get_addressList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addressList;
}
constexpr ::ArrayW<::System::Net::IPAddress*> const& System::Net::IPHostEntry::__cordl_internal_get_addressList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addressList;
}
constexpr void System::Net::IPHostEntry::__cordl_internal_set_addressList(::ArrayW<::System::Net::IPAddress*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___addressList = value;
}
constexpr bool& System::Net::IPHostEntry::__cordl_internal_get_isTrustedHost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isTrustedHost;
}
constexpr bool const& System::Net::IPHostEntry::__cordl_internal_get_isTrustedHost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isTrustedHost;
}
constexpr void System::Net::IPHostEntry::__cordl_internal_set_isTrustedHost(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isTrustedHost = value;
}
inline ::StringW System::Net::IPHostEntry::get_HostName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::IPHostEntry*>(), { "get_HostName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::IPHostEntry::set_HostName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::IPHostEntry*>(), { "set_HostName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::IPHostEntry::set_Aliases(::ArrayW<::StringW> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::IPHostEntry*>(), { "set_Aliases", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::System::Net::IPAddress*> System::Net::IPHostEntry::get_AddressList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::IPHostEntry*>(), { "get_AddressList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::IPAddress*>>(this, ___internal_method);
}
inline void System::Net::IPHostEntry::set_AddressList(::ArrayW<::System::Net::IPAddress*> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::IPHostEntry*>(), { "set_AddressList", {}, { ::i2c::type_of<::ArrayW<::System::Net::IPAddress*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::IPHostEntry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::IPHostEntry*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::IPHostEntry* System::Net::IPHostEntry::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::IPHostEntry*>());
}
// Ctor Parameters []
constexpr ::System::Net::IPHostEntry::IPHostEntry() {}
