#pragma once
// IWYU pragma private; include "System\Net\EndPoint.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
#include "System/Net/zzzz__SocketAddress_def.hpp"
//  Writing Method size for method: ::System::Net::EndPoint.get_AddressFamily
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::AddressFamily (::System::Net::EndPoint::*)()>(&::System::Net::EndPoint::get_AddressFamily)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x640bab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::EndPoint*>(), { ::i2c::class_of<::System::Net::EndPoint*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPoint.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::SocketAddress* (::System::Net::EndPoint::*)()>(&::System::Net::EndPoint::Serialize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x640bb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::EndPoint*>(), { ::i2c::class_of<::System::Net::EndPoint*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPoint.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::EndPoint* (::System::Net::EndPoint::*)(::System::Net::SocketAddress*)>(&::System::Net::EndPoint::Create)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x640bc00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::EndPoint*>(), { ::i2c::class_of<::System::Net::EndPoint*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPoint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::EndPoint::*)()>(&::System::Net::EndPoint::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x640bc24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPoint*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Net::Sockets::AddressFamily System::Net::EndPoint::get_AddressFamily() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::EndPoint*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::AddressFamily>(this, ___internal_method);
}
inline ::System::Net::SocketAddress* System::Net::EndPoint::Serialize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::EndPoint*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::SocketAddress*>(this, ___internal_method);
}
inline ::System::Net::EndPoint* System::Net::EndPoint::Create(::System::Net::SocketAddress* socketAddress) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::EndPoint*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::EndPoint*>(this, ___internal_method, socketAddress);
}
inline void System::Net::EndPoint::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPoint*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::EndPoint* System::Net::EndPoint::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::EndPoint*>());
}
// Ctor Parameters []
constexpr ::System::Net::EndPoint::EndPoint() {}
