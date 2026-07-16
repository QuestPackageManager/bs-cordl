#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsCompressedDataStreamGenerator.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsCompressedDataStreamGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerSequenceGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsCompressedDataStreamGenerator_def.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__ZOutputStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::*)(
    ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream*, ::Org::BouncyCastle::Asn1::BerSequenceGenerator*, ::Org::BouncyCastle::Asn1::BerSequenceGenerator*,
    ::Org::BouncyCastle::Asn1::BerSequenceGenerator*)>(&::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x36a77e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZOutputStream*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream.WriteByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::*)(uint8_t)>(
    &::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::WriteByte)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x36a7820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream*>(),
                                                            { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::Write)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x36a7840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream*>(),
                                                            { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::*)()>(
    &::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::Close)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x36a7860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream*>(),
                                                            { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream*>(), 21 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream*& Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::__cordl_internal_get__out() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____out;
}
constexpr ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* const& Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::__cordl_internal_get__out() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____out;
}
constexpr void Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::__cordl_internal_set__out(::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____out = value;
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::__cordl_internal_get__sGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sGen;
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator* const& Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::__cordl_internal_get__sGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sGen;
}
constexpr void Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::__cordl_internal_set__sGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sGen = value;
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::__cordl_internal_get__cGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cGen;
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator* const& Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::__cordl_internal_get__cGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cGen;
}
constexpr void Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::__cordl_internal_set__cGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cGen = value;
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::__cordl_internal_get__eiGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eiGen;
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator* const& Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::__cordl_internal_get__eiGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eiGen;
}
constexpr void Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::__cordl_internal_set__eiGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eiGen = value;
}
inline void Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::_ctor(::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* outStream,
                                                                                                      ::Org::BouncyCastle::Asn1::BerSequenceGenerator* sGen,
                                                                                                      ::Org::BouncyCastle::Asn1::BerSequenceGenerator* cGen,
                                                                                                      ::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZOutputStream*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStream, sGen, cGen, eiGen);
}
inline void Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::WriteByte(uint8_t b) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::Write(::ArrayW<uint8_t> bytes, int32_t off, int32_t len) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, off, len);
}
inline void Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream* Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::New_ctor(
    ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* outStream, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* sGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* cGen,
    ::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream*>(outStream, sGen, cGen, eiGen));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream() {}
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::*)()>(&::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36a74a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator.SetBufferSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::*)(int32_t)>(
    &::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::SetBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a74a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator*>(), { "SetBufferSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::*)(::System::IO::Stream*, ::StringW)>(
    &::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x36a74ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator*>(),
                                                                                           { "Open", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::*)(::System::IO::Stream*, ::StringW, ::StringW)>(
    &::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x36a752c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator*>(),
                                                             { "Open", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::__cordl_internal_get__bufferSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferSize;
}
constexpr int32_t const& Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::__cordl_internal_get__bufferSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferSize;
}
constexpr void Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::__cordl_internal_set__bufferSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bufferSize = value;
}
inline void Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::SetBufferSize(int32_t bufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator*>(), { "SetBufferSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferSize);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::Open(::System::IO::Stream* outStream, ::StringW compressionOID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator*>(),
                                                                                         { "Open", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, outStream, compressionOID);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::Open(::System::IO::Stream* outStream, ::StringW contentOID, ::StringW compressionOID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator*>(),
                                                           { "Open", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, outStream, contentOID, compressionOID);
}
inline ::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator* Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::CmsCompressedDataStreamGenerator() {}
