#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Asn1StreamParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1StreamParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1EncodableVector_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Convertible_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1StreamParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Asn1StreamParser::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Asn1::Asn1StreamParser::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x36823e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1StreamParser*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1StreamParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Asn1StreamParser::*)(::System::IO::Stream*, int32_t)>(&::Org::BouncyCastle::Asn1::Asn1StreamParser::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3683b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1StreamParser*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1StreamParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Asn1StreamParser::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::Asn1StreamParser::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3687564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1StreamParser*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1StreamParser.ReadIndef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::IAsn1Convertible* (::Org::BouncyCastle::Asn1::Asn1StreamParser::*)(int32_t)>(
    &::Org::BouncyCastle::Asn1::Asn1StreamParser::ReadIndef)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x36875e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1StreamParser*>(), { "ReadIndef", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1StreamParser.ReadImplicit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::IAsn1Convertible* (::Org::BouncyCastle::Asn1::Asn1StreamParser::*)(bool, int32_t)>(
    &::Org::BouncyCastle::Asn1::Asn1StreamParser::ReadImplicit)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x3687754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1StreamParser*>(), { "ReadImplicit", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1StreamParser.ReadTaggedObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Asn1StreamParser::*)(bool, int32_t)>(
    &::Org::BouncyCastle::Asn1::Asn1StreamParser::ReadTaggedObject)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x3682414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1StreamParser*>(), { "ReadTaggedObject", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1StreamParser.ReadObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::IAsn1Convertible* (::Org::BouncyCastle::Asn1::Asn1StreamParser::*)()>(
    &::Org::BouncyCastle::Asn1::Asn1StreamParser::ReadObject)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x3687bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1StreamParser*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1StreamParser*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1StreamParser.Set00Check
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Asn1StreamParser::*)(bool)>(&::Org::BouncyCastle::Asn1::Asn1StreamParser::Set00Check)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3688130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1StreamParser*>(), { "Set00Check", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1StreamParser.ReadVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1EncodableVector* (::Org::BouncyCastle::Asn1::Asn1StreamParser::*)()>(
    &::Org::BouncyCastle::Asn1::Asn1StreamParser::ReadVector)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3687a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1StreamParser*>(), { "ReadVector", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& Org::BouncyCastle::Asn1::Asn1StreamParser::__cordl_internal_get__in() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____in;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Asn1::Asn1StreamParser::__cordl_internal_get__in() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____in;
}
constexpr void Org::BouncyCastle::Asn1::Asn1StreamParser::__cordl_internal_set__in(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____in = value;
}
constexpr int32_t& Org::BouncyCastle::Asn1::Asn1StreamParser::__cordl_internal_get__limit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____limit;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::Asn1StreamParser::__cordl_internal_get__limit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____limit;
}
constexpr void Org::BouncyCastle::Asn1::Asn1StreamParser::__cordl_internal_set__limit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____limit = value;
}
constexpr ::ArrayW<::ArrayW<uint8_t>>& Org::BouncyCastle::Asn1::Asn1StreamParser::__cordl_internal_get_tmpBuffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tmpBuffers;
}
constexpr ::ArrayW<::ArrayW<uint8_t>> const& Org::BouncyCastle::Asn1::Asn1StreamParser::__cordl_internal_get_tmpBuffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tmpBuffers;
}
constexpr void Org::BouncyCastle::Asn1::Asn1StreamParser::__cordl_internal_set_tmpBuffers(::ArrayW<::ArrayW<uint8_t>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tmpBuffers = value;
}
inline void Org::BouncyCastle::Asn1::Asn1StreamParser::_ctor(::System::IO::Stream* inStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1StreamParser*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inStream);
}
inline void Org::BouncyCastle::Asn1::Asn1StreamParser::_ctor(::System::IO::Stream* inStream, int32_t limit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1StreamParser*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inStream, limit);
}
inline void Org::BouncyCastle::Asn1::Asn1StreamParser::_ctor(::ArrayW<uint8_t> encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1StreamParser*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoding);
}
inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* Org::BouncyCastle::Asn1::Asn1StreamParser::ReadIndef(int32_t tagValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1StreamParser*>(), { "ReadIndef", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IAsn1Convertible*>(this, ___internal_method, tagValue);
}
inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* Org::BouncyCastle::Asn1::Asn1StreamParser::ReadImplicit(bool constructed, int32_t tag) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1StreamParser*>(), { "ReadImplicit", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IAsn1Convertible*>(this, ___internal_method, constructed, tag);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Asn1StreamParser::ReadTaggedObject(bool constructed, int32_t tag) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1StreamParser*>(), { "ReadTaggedObject", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method, constructed, tag);
}
inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* Org::BouncyCastle::Asn1::Asn1StreamParser::ReadObject() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1StreamParser*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IAsn1Convertible*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::Asn1StreamParser::Set00Check(bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1StreamParser*>(), { "Set00Check", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabled);
}
inline ::Org::BouncyCastle::Asn1::Asn1EncodableVector* Org::BouncyCastle::Asn1::Asn1StreamParser::ReadVector() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1StreamParser*>(), { "ReadVector", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1StreamParser* Org::BouncyCastle::Asn1::Asn1StreamParser::New_ctor(::System::IO::Stream* inStream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Asn1StreamParser*>(inStream));
}
inline ::Org::BouncyCastle::Asn1::Asn1StreamParser* Org::BouncyCastle::Asn1::Asn1StreamParser::New_ctor(::System::IO::Stream* inStream, int32_t limit) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Asn1StreamParser*>(inStream, limit));
}
inline ::Org::BouncyCastle::Asn1::Asn1StreamParser* Org::BouncyCastle::Asn1::Asn1StreamParser::New_ctor(::ArrayW<uint8_t> encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Asn1StreamParser*>(encoding));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Asn1StreamParser::Asn1StreamParser() {}
