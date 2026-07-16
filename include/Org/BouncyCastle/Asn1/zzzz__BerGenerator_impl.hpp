#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/BerGenerator.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Generator_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerGenerator::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Asn1::BerGenerator::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3686ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerGenerator::*)(::System::IO::Stream*, int32_t, bool)>(&::Org::BouncyCastle::Asn1::BerGenerator::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3686ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerGenerator*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerGenerator.AddObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerGenerator::*)(::Org::BouncyCastle::Asn1::Asn1Encodable*)>(
    &::Org::BouncyCastle::Asn1::BerGenerator::AddObject)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3687014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerGenerator*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::BerGenerator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerGenerator.GetRawOutputStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Asn1::BerGenerator::*)()>(&::Org::BouncyCastle::Asn1::BerGenerator::GetRawOutputStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x368709c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerGenerator*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::BerGenerator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerGenerator.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerGenerator::*)()>(&::Org::BouncyCastle::Asn1::BerGenerator::Close)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36870a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerGenerator*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::BerGenerator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerGenerator.WriteHdr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerGenerator::*)(int32_t)>(&::Org::BouncyCastle::Asn1::BerGenerator::WriteHdr)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3687140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerGenerator*>(), { "WriteHdr", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerGenerator.WriteBerHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerGenerator::*)(int32_t)>(&::Org::BouncyCastle::Asn1::BerGenerator::WriteBerHeader)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3687184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerGenerator*>(), { "WriteBerHeader", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerGenerator.WriteBerBody
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerGenerator::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Asn1::BerGenerator::WriteBerBody)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x36871dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerGenerator*>(), { "WriteBerBody", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerGenerator.WriteBerEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerGenerator::*)()>(&::Org::BouncyCastle::Asn1::BerGenerator::WriteBerEnd)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x36870a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerGenerator*>(), { "WriteBerEnd", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& Org::BouncyCastle::Asn1::BerGenerator::__cordl_internal_get__tagged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tagged;
}
constexpr bool const& Org::BouncyCastle::Asn1::BerGenerator::__cordl_internal_get__tagged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tagged;
}
constexpr void Org::BouncyCastle::Asn1::BerGenerator::__cordl_internal_set__tagged(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tagged = value;
}
constexpr bool& Org::BouncyCastle::Asn1::BerGenerator::__cordl_internal_get__isExplicit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isExplicit;
}
constexpr bool const& Org::BouncyCastle::Asn1::BerGenerator::__cordl_internal_get__isExplicit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isExplicit;
}
constexpr void Org::BouncyCastle::Asn1::BerGenerator::__cordl_internal_set__isExplicit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isExplicit = value;
}
constexpr int32_t& Org::BouncyCastle::Asn1::BerGenerator::__cordl_internal_get__tagNo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tagNo;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::BerGenerator::__cordl_internal_get__tagNo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tagNo;
}
constexpr void Org::BouncyCastle::Asn1::BerGenerator::__cordl_internal_set__tagNo(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tagNo = value;
}
inline void Org::BouncyCastle::Asn1::BerGenerator::_ctor(::System::IO::Stream* outStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStream);
}
inline void Org::BouncyCastle::Asn1::BerGenerator::_ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerGenerator*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStream, tagNo, isExplicit);
}
inline void Org::BouncyCastle::Asn1::BerGenerator::AddObject(::Org::BouncyCastle::Asn1::Asn1Encodable* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::BerGenerator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline ::System::IO::Stream* Org::BouncyCastle::Asn1::BerGenerator::GetRawOutputStream() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::BerGenerator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::BerGenerator::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::BerGenerator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::BerGenerator::WriteHdr(int32_t tag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerGenerator*>(), { "WriteHdr", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag);
}
inline void Org::BouncyCastle::Asn1::BerGenerator::WriteBerHeader(int32_t tag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerGenerator*>(), { "WriteBerHeader", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag);
}
inline void Org::BouncyCastle::Asn1::BerGenerator::WriteBerBody(::System::IO::Stream* contentStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerGenerator*>(), { "WriteBerBody", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contentStream);
}
inline void Org::BouncyCastle::Asn1::BerGenerator::WriteBerEnd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerGenerator*>(), { "WriteBerEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::BerGenerator* Org::BouncyCastle::Asn1::BerGenerator::New_ctor(::System::IO::Stream* outStream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BerGenerator*>(outStream));
}
inline ::Org::BouncyCastle::Asn1::BerGenerator* Org::BouncyCastle::Asn1::BerGenerator::New_ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BerGenerator*>(outStream, tagNo, isExplicit));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::BerGenerator::BerGenerator() {}
