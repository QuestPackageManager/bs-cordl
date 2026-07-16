#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/IndefiniteLengthInputStream.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__LimitedInputStream_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IndefiniteLengthInputStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::*)(::System::IO::Stream*, int32_t)>(
    &::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3681784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream.SetEofOn00
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::*)(bool)>(&::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::SetEofOn00)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3685e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream*>(), { "SetEofOn00", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream.CheckForEof
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::*)()>(&::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::CheckForEof)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3690fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream*>(), { "CheckForEof", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::Read)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3691074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream.ReadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::*)()>(&::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::ReadByte)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3691174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream.RequireByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::*)()>(&::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::RequireByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3690f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream*>(), { "RequireByte", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::__cordl_internal_get__lookAhead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lookAhead;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::__cordl_internal_get__lookAhead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lookAhead;
}
constexpr void Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::__cordl_internal_set__lookAhead(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lookAhead = value;
}
constexpr bool& Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::__cordl_internal_get__eofOn00() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eofOn00;
}
constexpr bool const& Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::__cordl_internal_get__eofOn00() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eofOn00;
}
constexpr void Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::__cordl_internal_set__eofOn00(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eofOn00 = value;
}
inline void Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::_ctor(::System::IO::Stream* inStream, int32_t limit) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inStream, limit);
}
inline void Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::SetEofOn00(bool eofOn00) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream*>(), { "SetEofOn00", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eofOn00);
}
inline bool Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::CheckForEof() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream*>(), { "CheckForEof", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int32_t Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::ReadByte() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::RequireByte() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream*>(), { "RequireByte", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream* Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::New_ctor(::System::IO::Stream* inStream, int32_t limit) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream*>(inStream, limit));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream::IndefiniteLengthInputStream() {}
