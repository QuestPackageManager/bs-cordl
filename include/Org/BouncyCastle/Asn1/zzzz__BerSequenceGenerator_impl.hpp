#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\BerSequenceGenerator.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerGenerator_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerSequenceGenerator_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerSequenceGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerSequenceGenerator::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Asn1::BerSequenceGenerator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x368b7c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerSequenceGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerSequenceGenerator::*)(::System::IO::Stream*, int32_t, bool)>(
    &::Org::BouncyCastle::Asn1::BerSequenceGenerator::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x368b7d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::BerSequenceGenerator::_ctor(::System::IO::Stream* outStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStream);
}
inline void Org::BouncyCastle::Asn1::BerSequenceGenerator::_ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStream, tagNo, isExplicit);
}
inline ::Org::BouncyCastle::Asn1::BerSequenceGenerator* Org::BouncyCastle::Asn1::BerSequenceGenerator::New_ctor(::System::IO::Stream* outStream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>(outStream));
}
inline ::Org::BouncyCastle::Asn1::BerSequenceGenerator* Org::BouncyCastle::Asn1::BerSequenceGenerator::New_ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>(outStream, tagNo, isExplicit));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator::BerSequenceGenerator() {}
