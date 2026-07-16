#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpUserAttributeSubpacketVector.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributeSubpacket_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpUserAttributeSubpacketVector_def.hpp"
#include "Org/BouncyCastle/Bcpg/Attr/zzzz__ImageAttrib_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributeSubpacketTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributeSubpacket_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector::*)(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35a091c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector.GetSubpacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector::*)(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector::GetSubpacket)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x35a0924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>(),
                                                                                           { "GetSubpacket", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector.GetImageAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector::GetImageAttribute)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x35a09c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>(), { "GetImageAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector.ToSubpacketArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector::ToSubpacketArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35a0a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>(), { "ToSubpacketArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector::*)(::System::Object*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector::Equals)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x35a0a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector::GetHashCode)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x35a0b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>& Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector::__cordl_internal_get_packets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packets;
}
constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*> const& Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector::__cordl_internal_get_packets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packets;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector::__cordl_internal_set_packets(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___packets = value;
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector::_ctor(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*> packets) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packets);
}
inline ::Org::BouncyCastle::Bcpg::UserAttributeSubpacket* Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector::GetSubpacket(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>(),
                                                                                         { "GetSubpacket", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>(this, ___internal_method, type);
}
inline ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib* Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector::GetImageAttribute() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>(), { "GetImageAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*> Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector::ToSubpacketArray() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>(), { "ToSubpacketArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*
Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector::New_ctor(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*> packets) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>(packets));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector::PgpUserAttributeSubpacketVector() {}
