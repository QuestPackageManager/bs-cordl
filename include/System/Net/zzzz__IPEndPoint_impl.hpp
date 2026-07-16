#pragma once
// IWYU pragma private; include "System/Net/IPEndPoint.hpp"
#include "System/Net/zzzz__EndPoint_impl.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__SocketAddress_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::IPEndPoint.get_AddressFamily
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::AddressFamily (::System::Net::IPEndPoint::*)()>(&::System::Net::IPEndPoint::get_AddressFamily)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x63f63b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::IPEndPoint*>(), { ::i2c::class_of<::System::Net::IPEndPoint*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPEndPoint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::IPEndPoint::*)(::System::Net::IPAddress*, int32_t)>(&::System::Net::IPEndPoint::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x63f63dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::IPEndPoint*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPEndPoint.get_Address
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPAddress* (::System::Net::IPEndPoint::*)()>(&::System::Net::IPEndPoint::get_Address)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63f6478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::IPEndPoint*>(), { "get_Address", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPEndPoint.get_Port
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::IPEndPoint::*)()>(&::System::Net::IPEndPoint::get_Port)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63f6480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::IPEndPoint*>(), { "get_Port", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPEndPoint.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::IPEndPoint::*)()>(&::System::Net::IPEndPoint::ToString)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x63f6488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::IPEndPoint*>(), { ::i2c::class_of<::System::Net::IPEndPoint*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPEndPoint.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::SocketAddress* (::System::Net::IPEndPoint::*)()>(&::System::Net::IPEndPoint::Serialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x63f6574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::IPEndPoint*>(), { ::i2c::class_of<::System::Net::IPEndPoint*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPEndPoint.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::EndPoint* (::System::Net::IPEndPoint::*)(::System::Net::SocketAddress*)>(&::System::Net::IPEndPoint::Create)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x63f65e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::IPEndPoint*>(), { ::i2c::class_of<::System::Net::IPEndPoint*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPEndPoint.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::IPEndPoint::*)(::System::Object*)>(&::System::Net::IPEndPoint::Equals)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x63f67d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::IPEndPoint*>(), { ::i2c::class_of<::System::Net::IPEndPoint*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPEndPoint.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::IPEndPoint::*)()>(&::System::Net::IPEndPoint::GetHashCode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x63f6888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::IPEndPoint*>(), { ::i2c::class_of<::System::Net::IPEndPoint*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::System::Net::IPAddress*& System::Net::IPEndPoint::__cordl_internal_get__address() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____address;
}
constexpr ::System::Net::IPAddress* const& System::Net::IPEndPoint::__cordl_internal_get__address() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____address;
}
constexpr void System::Net::IPEndPoint::__cordl_internal_set__address(::System::Net::IPAddress* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____address = value;
}
constexpr int32_t& System::Net::IPEndPoint::__cordl_internal_get__port() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____port;
}
constexpr int32_t const& System::Net::IPEndPoint::__cordl_internal_get__port() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____port;
}
constexpr void System::Net::IPEndPoint::__cordl_internal_set__port(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____port = value;
}
inline void System::Net::IPEndPoint::setStaticF_Any(::System::Net::IPEndPoint* value) {
  ::cordl_internals::setStaticField<::System::Net::IPEndPoint*, "Any", ::System::Net::IPEndPoint*>(std::forward<::System::Net::IPEndPoint*>(value));
}
inline ::System::Net::IPEndPoint* System::Net::IPEndPoint::getStaticF_Any() {
  return ::cordl_internals::getStaticField<::System::Net::IPEndPoint*, "Any", ::System::Net::IPEndPoint*>();
}
inline void System::Net::IPEndPoint::setStaticF_IPv6Any(::System::Net::IPEndPoint* value) {
  ::cordl_internals::setStaticField<::System::Net::IPEndPoint*, "IPv6Any", ::System::Net::IPEndPoint*>(std::forward<::System::Net::IPEndPoint*>(value));
}
inline ::System::Net::IPEndPoint* System::Net::IPEndPoint::getStaticF_IPv6Any() {
  return ::cordl_internals::getStaticField<::System::Net::IPEndPoint*, "IPv6Any", ::System::Net::IPEndPoint*>();
}
inline ::System::Net::Sockets::AddressFamily System::Net::IPEndPoint::get_AddressFamily() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::IPEndPoint*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::AddressFamily>(this, ___internal_method);
}
inline void System::Net::IPEndPoint::_ctor(::System::Net::IPAddress* address, int32_t port) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::IPEndPoint*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, port);
}
inline ::System::Net::IPAddress* System::Net::IPEndPoint::get_Address() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::IPEndPoint*>(), { "get_Address", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPAddress*>(this, ___internal_method);
}
inline int32_t System::Net::IPEndPoint::get_Port() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::IPEndPoint*>(), { "get_Port", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Net::IPEndPoint::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::IPEndPoint*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::SocketAddress* System::Net::IPEndPoint::Serialize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::IPEndPoint*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::SocketAddress*>(this, ___internal_method);
}
inline ::System::Net::EndPoint* System::Net::IPEndPoint::Create(::System::Net::SocketAddress* socketAddress) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::IPEndPoint*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::EndPoint*>(this, ___internal_method, socketAddress);
}
inline bool System::Net::IPEndPoint::Equals(::System::Object* comparand) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::IPEndPoint*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, comparand);
}
inline int32_t System::Net::IPEndPoint::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::IPEndPoint*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Net::IPEndPoint* System::Net::IPEndPoint::New_ctor(::System::Net::IPAddress* address, int32_t port) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::IPEndPoint*>(address, port));
}
// Ctor Parameters []
constexpr ::System::Net::IPEndPoint::IPEndPoint() {}
