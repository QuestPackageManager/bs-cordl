#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/X509CertificatePair.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509CertificatePair_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__CertificatePair_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CertificatePair._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509CertificatePair::*)(
    ::Org::BouncyCastle::X509::X509Certificate*, ::Org::BouncyCastle::X509::X509Certificate*)>(&::Org::BouncyCastle::X509::X509CertificatePair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3647c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509CertificatePair*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CertificatePair._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509CertificatePair::*)(::Org::BouncyCastle::Asn1::X509::CertificatePair*)>(
    &::Org::BouncyCastle::X509::X509CertificatePair::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3647c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509CertificatePair*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::CertificatePair*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CertificatePair.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::X509::X509CertificatePair::*)()>(&::Org::BouncyCastle::X509::X509CertificatePair::GetEncoded)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x3647cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509CertificatePair*>(), { "GetEncoded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CertificatePair.get_Forward
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (::Org::BouncyCastle::X509::X509CertificatePair::*)()>(
    &::Org::BouncyCastle::X509::X509CertificatePair::get_Forward)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3647f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509CertificatePair*>(), { "get_Forward", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CertificatePair.get_Reverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (::Org::BouncyCastle::X509::X509CertificatePair::*)()>(
    &::Org::BouncyCastle::X509::X509CertificatePair::get_Reverse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3647f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509CertificatePair*>(), { "get_Reverse", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CertificatePair.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::X509::X509CertificatePair::*)(::System::Object*)>(&::Org::BouncyCastle::X509::X509CertificatePair::Equals)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3647f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509CertificatePair*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509CertificatePair*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CertificatePair.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::X509::X509CertificatePair::*)()>(&::Org::BouncyCastle::X509::X509CertificatePair::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3648020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509CertificatePair*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509CertificatePair*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::X509::X509Certificate*& Org::BouncyCastle::X509::X509CertificatePair::__cordl_internal_get_forward() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forward;
}
constexpr ::Org::BouncyCastle::X509::X509Certificate* const& Org::BouncyCastle::X509::X509CertificatePair::__cordl_internal_get_forward() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forward;
}
constexpr void Org::BouncyCastle::X509::X509CertificatePair::__cordl_internal_set_forward(::Org::BouncyCastle::X509::X509Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forward = value;
}
constexpr ::Org::BouncyCastle::X509::X509Certificate*& Org::BouncyCastle::X509::X509CertificatePair::__cordl_internal_get_reverse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reverse;
}
constexpr ::Org::BouncyCastle::X509::X509Certificate* const& Org::BouncyCastle::X509::X509CertificatePair::__cordl_internal_get_reverse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reverse;
}
constexpr void Org::BouncyCastle::X509::X509CertificatePair::__cordl_internal_set_reverse(::Org::BouncyCastle::X509::X509Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reverse = value;
}
inline void Org::BouncyCastle::X509::X509CertificatePair::_ctor(::Org::BouncyCastle::X509::X509Certificate* forward, ::Org::BouncyCastle::X509::X509Certificate* reverse) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509CertificatePair*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forward, reverse);
}
inline void Org::BouncyCastle::X509::X509CertificatePair::_ctor(::Org::BouncyCastle::Asn1::X509::CertificatePair* pair) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509CertificatePair*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::CertificatePair*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pair);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::X509::X509CertificatePair::GetEncoded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509CertificatePair*>(), { "GetEncoded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509CertificatePair::get_Forward() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509CertificatePair*>(), { "get_Forward", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509CertificatePair::get_Reverse() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509CertificatePair*>(), { "get_Reverse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::X509::X509CertificatePair::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509CertificatePair*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t Org::BouncyCastle::X509::X509CertificatePair::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509CertificatePair*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::X509CertificatePair* Org::BouncyCastle::X509::X509CertificatePair::New_ctor(::Org::BouncyCastle::X509::X509Certificate* forward,
                                                                                                              ::Org::BouncyCastle::X509::X509Certificate* reverse) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::X509CertificatePair*>(forward, reverse));
}
inline ::Org::BouncyCastle::X509::X509CertificatePair* Org::BouncyCastle::X509::X509CertificatePair::New_ctor(::Org::BouncyCastle::Asn1::X509::CertificatePair* pair) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::X509CertificatePair*>(pair));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::X509CertificatePair::X509CertificatePair() {}
