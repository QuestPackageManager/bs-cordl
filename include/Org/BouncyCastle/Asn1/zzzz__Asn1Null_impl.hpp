#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Asn1Null.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Null_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Null._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Asn1Null::*)()>(&::Org::BouncyCastle::Asn1::Asn1Null::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3684b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Null*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Null.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::Asn1Null::*)()>(&::Org::BouncyCastle::Asn1::Asn1Null::ToString)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3684b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Null*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Null*>(), 3 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Asn1Null::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Null*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Asn1::Asn1Null::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Null*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Null* Org::BouncyCastle::Asn1::Asn1Null::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Asn1Null*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Asn1Null::Asn1Null() {}
