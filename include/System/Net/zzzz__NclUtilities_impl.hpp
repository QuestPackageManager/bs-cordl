#pragma once
// IWYU pragma private; include "System\Net\NclUtilities.hpp"
#include "System/Net/zzzz__IPAddress_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__NclUtilities_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__IPHostEntry_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::NclUtilities.IsFatal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Exception*)>(&::System::Net::NclUtilities::IsFatal)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x640db3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NclUtilities*>(), { "IsFatal", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NclUtilities.IsAddressLocal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::IPAddress*)>(&::System::Net::NclUtilities::IsAddressLocal)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x640dc14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NclUtilities*>(), { "IsAddressLocal", {}, { ::i2c::type_of<::System::Net::IPAddress*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NclUtilities.GetLocalHost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (*)()>(&::System::Net::NclUtilities::GetLocalHost)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x640e150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NclUtilities*>(), { "GetLocalHost", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NclUtilities.get_LocalAddresses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Net::IPAddress*> (*)()>(&::System::Net::NclUtilities::get_LocalAddresses)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x640dca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NclUtilities*>(), { "get_LocalAddresses", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NclUtilities.get_LocalAddressesLock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)()>(&::System::Net::NclUtilities::get_LocalAddressesLock)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x640e168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NclUtilities*>(), { "get_LocalAddressesLock", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Net::NclUtilities::setStaticF__LocalAddresses(::ArrayW<::System::Net::IPAddress*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Net::IPAddress*>, "_LocalAddresses", ::System::Net::NclUtilities*>(std::forward<::ArrayW<::System::Net::IPAddress*>>(value));
}
inline ::ArrayW<::System::Net::IPAddress*> System::Net::NclUtilities::getStaticF__LocalAddresses() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Net::IPAddress*>, "_LocalAddresses", ::System::Net::NclUtilities*>();
}
inline void System::Net::NclUtilities::setStaticF__LocalAddressesLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "_LocalAddressesLock", ::System::Net::NclUtilities*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Net::NclUtilities::getStaticF__LocalAddressesLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "_LocalAddressesLock", ::System::Net::NclUtilities*>();
}
inline void System::Net::NclUtilities::setStaticF__LocalDomainName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "_LocalDomainName", ::System::Net::NclUtilities*>(std::forward<::StringW>(value));
}
inline ::StringW System::Net::NclUtilities::getStaticF__LocalDomainName() {
  return ::cordl_internals::getStaticField<::StringW, "_LocalDomainName", ::System::Net::NclUtilities*>();
}
inline bool System::Net::NclUtilities::IsFatal(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NclUtilities*>(), { "IsFatal", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, exception);
}
inline bool System::Net::NclUtilities::IsAddressLocal(::System::Net::IPAddress* ipAddress) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NclUtilities*>(), { "IsAddressLocal", {}, { ::i2c::type_of<::System::Net::IPAddress*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ipAddress);
}
inline ::System::Net::IPHostEntry* System::Net::NclUtilities::GetLocalHost() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NclUtilities*>(), { "GetLocalHost", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(nullptr, ___internal_method);
}
inline ::ArrayW<::System::Net::IPAddress*> System::Net::NclUtilities::get_LocalAddresses() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NclUtilities*>(), { "get_LocalAddresses", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::IPAddress*>>(nullptr, ___internal_method);
}
inline ::System::Object* System::Net::NclUtilities::get_LocalAddressesLock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NclUtilities*>(), { "get_LocalAddressesLock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NclUtilities::NclUtilities() {}
