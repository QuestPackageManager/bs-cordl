#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerGenerator.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Generator_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGenerator_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerGenerator::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Asn1::DerGenerator::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x368da94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerGenerator::*)(::System::IO::Stream*, int32_t, bool)>(&::Org::BouncyCastle::Asn1::DerGenerator::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x368daa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerGenerator*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerGenerator.WriteLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, int32_t)>(&::Org::BouncyCastle::Asn1::DerGenerator::WriteLength)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x368dab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerGenerator*>(), { "WriteLength", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerGenerator.WriteDerEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, int32_t, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::DerGenerator::WriteDerEncoded)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x368db74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerGenerator*>(),
                                                             { "WriteDerEncoded", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerGenerator.WriteDerEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerGenerator::*)(int32_t, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::DerGenerator::WriteDerEncoded)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x368dbd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerGenerator*>(), { "WriteDerEncoded", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerGenerator.WriteDerEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, int32_t, ::System::IO::Stream*)>(&::Org::BouncyCastle::Asn1::DerGenerator::WriteDerEncoded)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x368dcb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerGenerator*>(),
                                                { "WriteDerEncoded", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
constexpr bool& Org::BouncyCastle::Asn1::DerGenerator::__cordl_internal_get__tagged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tagged;
}
constexpr bool const& Org::BouncyCastle::Asn1::DerGenerator::__cordl_internal_get__tagged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tagged;
}
constexpr void Org::BouncyCastle::Asn1::DerGenerator::__cordl_internal_set__tagged(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tagged = value;
}
constexpr bool& Org::BouncyCastle::Asn1::DerGenerator::__cordl_internal_get__isExplicit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isExplicit;
}
constexpr bool const& Org::BouncyCastle::Asn1::DerGenerator::__cordl_internal_get__isExplicit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isExplicit;
}
constexpr void Org::BouncyCastle::Asn1::DerGenerator::__cordl_internal_set__isExplicit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isExplicit = value;
}
constexpr int32_t& Org::BouncyCastle::Asn1::DerGenerator::__cordl_internal_get__tagNo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tagNo;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::DerGenerator::__cordl_internal_get__tagNo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tagNo;
}
constexpr void Org::BouncyCastle::Asn1::DerGenerator::__cordl_internal_set__tagNo(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tagNo = value;
}
inline void Org::BouncyCastle::Asn1::DerGenerator::_ctor(::System::IO::Stream* outStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStream);
}
inline void Org::BouncyCastle::Asn1::DerGenerator::_ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerGenerator*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStream, tagNo, isExplicit);
}
inline void Org::BouncyCastle::Asn1::DerGenerator::WriteLength(::System::IO::Stream* outStr, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerGenerator*>(), { "WriteLength", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, outStr, length);
}
inline void Org::BouncyCastle::Asn1::DerGenerator::WriteDerEncoded(::System::IO::Stream* outStream, int32_t tag, ::ArrayW<uint8_t> bytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerGenerator*>(),
                                                           { "WriteDerEncoded", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, outStream, tag, bytes);
}
inline void Org::BouncyCastle::Asn1::DerGenerator::WriteDerEncoded(int32_t tag, ::ArrayW<uint8_t> bytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerGenerator*>(), { "WriteDerEncoded", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag, bytes);
}
inline void Org::BouncyCastle::Asn1::DerGenerator::WriteDerEncoded(::System::IO::Stream* outStr, int32_t tag, ::System::IO::Stream* inStr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerGenerator*>(),
                                              { "WriteDerEncoded", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, outStr, tag, inStr);
}
inline ::Org::BouncyCastle::Asn1::DerGenerator* Org::BouncyCastle::Asn1::DerGenerator::New_ctor(::System::IO::Stream* outStream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::DerGenerator*>(outStream));
}
inline ::Org::BouncyCastle::Asn1::DerGenerator* Org::BouncyCastle::Asn1::DerGenerator::New_ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::DerGenerator*>(outStream, tagNo, isExplicit));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::DerGenerator::DerGenerator() {}
