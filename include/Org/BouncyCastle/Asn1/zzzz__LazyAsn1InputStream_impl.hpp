#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\LazyAsn1InputStream.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1InputStream_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__LazyAsn1InputStream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DefiniteLengthInputStream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerSequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerSet_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::LazyAsn1InputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::LazyAsn1InputStream::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::LazyAsn1InputStream::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3693544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::LazyAsn1InputStream*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::LazyAsn1InputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::LazyAsn1InputStream::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Asn1::LazyAsn1InputStream::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3693548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::LazyAsn1InputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::LazyAsn1InputStream.CreateDerSequence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerSequence* (
    ::Org::BouncyCastle::Asn1::LazyAsn1InputStream::*)(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*)>(&::Org::BouncyCastle::Asn1::LazyAsn1InputStream::CreateDerSequence)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3693578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::LazyAsn1InputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::LazyAsn1InputStream*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::LazyAsn1InputStream.CreateDerSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerSet* (::Org::BouncyCastle::Asn1::LazyAsn1InputStream::*)(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*)>(
    &::Org::BouncyCastle::Asn1::LazyAsn1InputStream::CreateDerSet)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3693658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::LazyAsn1InputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::LazyAsn1InputStream*>(), 44 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::LazyAsn1InputStream::_ctor(::ArrayW<uint8_t> input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::LazyAsn1InputStream*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Asn1::LazyAsn1InputStream::_ctor(::System::IO::Stream* inputStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::LazyAsn1InputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputStream);
}
inline ::Org::BouncyCastle::Asn1::DerSequence* Org::BouncyCastle::Asn1::LazyAsn1InputStream::CreateDerSequence(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* dIn) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::LazyAsn1InputStream*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerSequence*>(this, ___internal_method, dIn);
}
inline ::Org::BouncyCastle::Asn1::DerSet* Org::BouncyCastle::Asn1::LazyAsn1InputStream::CreateDerSet(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* dIn) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::LazyAsn1InputStream*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerSet*>(this, ___internal_method, dIn);
}
inline ::Org::BouncyCastle::Asn1::LazyAsn1InputStream* Org::BouncyCastle::Asn1::LazyAsn1InputStream::New_ctor(::ArrayW<uint8_t> input) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::LazyAsn1InputStream*>(input));
}
inline ::Org::BouncyCastle::Asn1::LazyAsn1InputStream* Org::BouncyCastle::Asn1::LazyAsn1InputStream::New_ctor(::System::IO::Stream* inputStream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::LazyAsn1InputStream*>(inputStream));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::LazyAsn1InputStream::LazyAsn1InputStream() {}
