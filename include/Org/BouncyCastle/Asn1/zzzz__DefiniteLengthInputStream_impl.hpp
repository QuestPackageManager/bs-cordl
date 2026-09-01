#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\DefiniteLengthInputStream.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__LimitedInputStream_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DefiniteLengthInputStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DefiniteLengthInputStream::*)(::System::IO::Stream*, int32_t, int32_t)>(
    &::Org::BouncyCastle::Asn1::DefiniteLengthInputStream::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3681fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream.get_Remaining
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::DefiniteLengthInputStream::*)()>(&::Org::BouncyCastle::Asn1::DefiniteLengthInputStream::get_Remaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x368d510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>(), { "get_Remaining", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream.ReadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::DefiniteLengthInputStream::*)()>(&::Org::BouncyCastle::Asn1::DefiniteLengthInputStream::ReadByte)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x368d518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::DefiniteLengthInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Asn1::DefiniteLengthInputStream::Read)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x368d6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream.ReadAllIntoByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DefiniteLengthInputStream::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Asn1::DefiniteLengthInputStream::ReadAllIntoByteArray)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x3684100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>(), { "ReadAllIntoByteArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream.ToArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Asn1::DefiniteLengthInputStream::*)()>(&::Org::BouncyCastle::Asn1::DefiniteLengthInputStream::ToArray)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x368207c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>(), { "ToArray", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Asn1::DefiniteLengthInputStream::__cordl_internal_get__originalLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalLength;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::DefiniteLengthInputStream::__cordl_internal_get__originalLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalLength;
}
constexpr void Org::BouncyCastle::Asn1::DefiniteLengthInputStream::__cordl_internal_set__originalLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____originalLength = value;
}
constexpr int32_t& Org::BouncyCastle::Asn1::DefiniteLengthInputStream::__cordl_internal_get__remaining() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remaining;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::DefiniteLengthInputStream::__cordl_internal_get__remaining() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remaining;
}
constexpr void Org::BouncyCastle::Asn1::DefiniteLengthInputStream::__cordl_internal_set__remaining(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____remaining = value;
}
inline void Org::BouncyCastle::Asn1::DefiniteLengthInputStream::setStaticF_EmptyBytes(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "EmptyBytes", ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Asn1::DefiniteLengthInputStream::getStaticF_EmptyBytes() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "EmptyBytes", ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>();
}
inline void Org::BouncyCastle::Asn1::DefiniteLengthInputStream::_ctor(::System::IO::Stream* inStream, int32_t length, int32_t limit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inStream, length, limit);
}
inline int32_t Org::BouncyCastle::Asn1::DefiniteLengthInputStream::get_Remaining() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>(), { "get_Remaining", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Asn1::DefiniteLengthInputStream::ReadByte() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Asn1::DefiniteLengthInputStream::Read(::ArrayW<uint8_t> buf, int32_t off, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buf, off, len);
}
inline void Org::BouncyCastle::Asn1::DefiniteLengthInputStream::ReadAllIntoByteArray(::ArrayW<uint8_t> buf) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>(), { "ReadAllIntoByteArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Asn1::DefiniteLengthInputStream::ToArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>(), { "ToArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* Org::BouncyCastle::Asn1::DefiniteLengthInputStream::New_ctor(::System::IO::Stream* inStream, int32_t length, int32_t limit) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>(inStream, length, limit));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream::DefiniteLengthInputStream() {}
