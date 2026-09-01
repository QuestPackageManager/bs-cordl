#pragma once
// IWYU pragma private; include "Org\BouncyCastle\X509\X509KeyUsage.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509KeyUsage_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509KeyUsage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509KeyUsage::*)(int32_t)>(&::Org::BouncyCastle::X509::X509KeyUsage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x364f0a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509KeyUsage*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509KeyUsage.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::X509::X509KeyUsage::*)()>(&::Org::BouncyCastle::X509::X509KeyUsage::ToAsn1Object)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x364f0b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509KeyUsage*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509KeyUsage*>(), 5 }));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::X509::X509KeyUsage::__cordl_internal_get_usage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usage;
}
constexpr int32_t const& Org::BouncyCastle::X509::X509KeyUsage::__cordl_internal_get_usage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usage;
}
constexpr void Org::BouncyCastle::X509::X509KeyUsage::__cordl_internal_set_usage(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___usage = value;
}
inline void Org::BouncyCastle::X509::X509KeyUsage::_ctor(int32_t usage) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509KeyUsage*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usage);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::X509::X509KeyUsage::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509KeyUsage*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::X509KeyUsage* Org::BouncyCastle::X509::X509KeyUsage::New_ctor(int32_t usage) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::X509KeyUsage*>(usage));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::X509KeyUsage::X509KeyUsage() {}
