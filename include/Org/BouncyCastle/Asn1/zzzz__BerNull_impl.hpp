#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/BerNull.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerNull_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerNull_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOutputStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerNull._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerNull::*)()>(&::Org::BouncyCastle::Asn1::BerNull::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3687394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerNull*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerNull._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerNull::*)(int32_t)>(&::Org::BouncyCastle::Asn1::BerNull::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x36873ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerNull*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerNull.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerNull::*)(::Org::BouncyCastle::Asn1::DerOutputStream*)>(&::Org::BouncyCastle::Asn1::BerNull::Encode)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3687444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerNull*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::BerNull*>(), 6 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::BerNull::setStaticF_Instance(::Org::BouncyCastle::Asn1::BerNull* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::BerNull*, "Instance", ::Org::BouncyCastle::Asn1::BerNull*>(std::forward<::Org::BouncyCastle::Asn1::BerNull*>(value));
}
inline ::Org::BouncyCastle::Asn1::BerNull* Org::BouncyCastle::Asn1::BerNull::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::BerNull*, "Instance", ::Org::BouncyCastle::Asn1::BerNull*>();
}
inline void Org::BouncyCastle::Asn1::BerNull::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerNull*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::BerNull::_ctor(int32_t dummy) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerNull*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dummy);
}
inline void Org::BouncyCastle::Asn1::BerNull::Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::BerNull*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, derOut);
}
inline ::Org::BouncyCastle::Asn1::BerNull* Org::BouncyCastle::Asn1::BerNull::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BerNull*>());
}
inline ::Org::BouncyCastle::Asn1::BerNull* Org::BouncyCastle::Asn1::BerNull::New_ctor(int32_t dummy) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BerNull*>(dummy));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::BerNull::BerNull() {}
