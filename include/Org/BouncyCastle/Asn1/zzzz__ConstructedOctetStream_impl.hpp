#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\ConstructedOctetStream.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__ConstructedOctetStream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetStringParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1StreamParser_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::ConstructedOctetStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::ConstructedOctetStream::*)(::Org::BouncyCastle::Asn1::Asn1StreamParser*)>(
    &::Org::BouncyCastle::Asn1::ConstructedOctetStream::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x368ace0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::ConstructedOctetStream*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1StreamParser*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::ConstructedOctetStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::ConstructedOctetStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Asn1::ConstructedOctetStream::Read)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x368d010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::ConstructedOctetStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::ConstructedOctetStream*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::ConstructedOctetStream.ReadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::ConstructedOctetStream::*)()>(&::Org::BouncyCastle::Asn1::ConstructedOctetStream::ReadByte)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x368d2d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::ConstructedOctetStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::ConstructedOctetStream*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::ConstructedOctetStream.GetNextParser
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetStringParser* (::Org::BouncyCastle::Asn1::ConstructedOctetStream::*)()>(
    &::Org::BouncyCastle::Asn1::ConstructedOctetStream::GetNextParser)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x368d1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::ConstructedOctetStream*>(), { "GetNextParser", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1StreamParser*& Org::BouncyCastle::Asn1::ConstructedOctetStream::__cordl_internal_get__parser() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parser;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1StreamParser* const& Org::BouncyCastle::Asn1::ConstructedOctetStream::__cordl_internal_get__parser() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parser;
}
constexpr void Org::BouncyCastle::Asn1::ConstructedOctetStream::__cordl_internal_set__parser(::Org::BouncyCastle::Asn1::Asn1StreamParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parser = value;
}
constexpr bool& Org::BouncyCastle::Asn1::ConstructedOctetStream::__cordl_internal_get__first() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____first;
}
constexpr bool const& Org::BouncyCastle::Asn1::ConstructedOctetStream::__cordl_internal_get__first() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____first;
}
constexpr void Org::BouncyCastle::Asn1::ConstructedOctetStream::__cordl_internal_set__first(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____first = value;
}
constexpr ::System::IO::Stream*& Org::BouncyCastle::Asn1::ConstructedOctetStream::__cordl_internal_get__currentStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentStream;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Asn1::ConstructedOctetStream::__cordl_internal_get__currentStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentStream;
}
constexpr void Org::BouncyCastle::Asn1::ConstructedOctetStream::__cordl_internal_set__currentStream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentStream = value;
}
inline void Org::BouncyCastle::Asn1::ConstructedOctetStream::_ctor(::Org::BouncyCastle::Asn1::Asn1StreamParser* parser) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::ConstructedOctetStream*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1StreamParser*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parser);
}
inline int32_t Org::BouncyCastle::Asn1::ConstructedOctetStream::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::ConstructedOctetStream*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int32_t Org::BouncyCastle::Asn1::ConstructedOctetStream::ReadByte() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::ConstructedOctetStream*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetStringParser* Org::BouncyCastle::Asn1::ConstructedOctetStream::GetNextParser() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::ConstructedOctetStream*>(), { "GetNextParser", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetStringParser*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::ConstructedOctetStream* Org::BouncyCastle::Asn1::ConstructedOctetStream::New_ctor(::Org::BouncyCastle::Asn1::Asn1StreamParser* parser) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::ConstructedOctetStream*>(parser));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::ConstructedOctetStream::ConstructedOctetStream() {}
