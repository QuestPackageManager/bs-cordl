#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Asn1InputStream.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__FilterStream_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1InputStream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1EncodableVector_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DefiniteLengthInputStream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerSequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerSet_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1InputStream.FindLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Asn1::Asn1InputStream::FindLimit)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x367f54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(), { "FindLimit", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1InputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Asn1InputStream::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Asn1::Asn1InputStream::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x367f68c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1InputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Asn1InputStream::*)(::System::IO::Stream*, int32_t)>(&::Org::BouncyCastle::Asn1::Asn1InputStream::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x367f6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1InputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Asn1InputStream::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::Asn1InputStream::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x367f730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1InputStream.BuildObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Asn1InputStream::*)(int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Asn1::Asn1InputStream::BuildObject)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x367f7b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(),
                                                             { "BuildObject", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1InputStream.ReadVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1EncodableVector* (
    ::Org::BouncyCastle::Asn1::Asn1InputStream::*)(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*)>(&::Org::BouncyCastle::Asn1::Asn1InputStream::ReadVector)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3680c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1InputStream.CreateDerSequence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerSequence* (::Org::BouncyCastle::Asn1::Asn1InputStream::*)(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*)>(
    &::Org::BouncyCastle::Asn1::Asn1InputStream::CreateDerSequence)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3681170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1InputStream.CreateDerSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerSet* (::Org::BouncyCastle::Asn1::Asn1InputStream::*)(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*)>(
    &::Org::BouncyCastle::Asn1::Asn1InputStream::CreateDerSet)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3681284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1InputStream.ReadObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Asn1InputStream::*)()>(
    &::Org::BouncyCastle::Asn1::Asn1InputStream::ReadObject)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x3680d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(), { "ReadObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1InputStream.get_Limit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::Asn1InputStream::*)()>(&::Org::BouncyCastle::Asn1::Asn1InputStream::get_Limit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3681ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1InputStream.ReadTagNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IO::Stream*, int32_t)>(&::Org::BouncyCastle::Asn1::Asn1InputStream::ReadTagNumber)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x36813b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(),
                                                                                           { "ReadTagNumber", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1InputStream.ReadLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IO::Stream*, int32_t, bool)>(&::Org::BouncyCastle::Asn1::Asn1InputStream::ReadLength)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x36814d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(),
                                                             { "ReadLength", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1InputStream.GetBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*, ::ArrayW<::ArrayW<uint8_t>>)>(
    &::Org::BouncyCastle::Asn1::Asn1InputStream::GetBuffer)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3681cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(),
                                                { "GetBuffer", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>(), ::i2c::type_of<::ArrayW<::ArrayW<uint8_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1InputStream.GetBmpCharBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (*)(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*)>(&::Org::BouncyCastle::Asn1::Asn1InputStream::GetBmpCharBuffer)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x36820c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(),
                                                                                           { "GetBmpCharBuffer", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1InputStream.CreatePrimitiveDerObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (*)(int32_t, ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*, ::ArrayW<::ArrayW<uint8_t>>)>(
    &::Org::BouncyCastle::Asn1::Asn1InputStream::CreatePrimitiveDerObject)> {
  constexpr static std::size_t size = 0x5f4;
  constexpr static std::size_t addrs = 0x368067c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(),
                                         { "CreatePrimitiveDerObject",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>(), ::i2c::type_of<::ArrayW<::ArrayW<uint8_t>>>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Asn1::Asn1InputStream::__cordl_internal_get_limit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___limit;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::Asn1InputStream::__cordl_internal_get_limit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___limit;
}
constexpr void Org::BouncyCastle::Asn1::Asn1InputStream::__cordl_internal_set_limit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___limit = value;
}
constexpr ::ArrayW<::ArrayW<uint8_t>>& Org::BouncyCastle::Asn1::Asn1InputStream::__cordl_internal_get_tmpBuffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tmpBuffers;
}
constexpr ::ArrayW<::ArrayW<uint8_t>> const& Org::BouncyCastle::Asn1::Asn1InputStream::__cordl_internal_get_tmpBuffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tmpBuffers;
}
constexpr void Org::BouncyCastle::Asn1::Asn1InputStream::__cordl_internal_set_tmpBuffers(::ArrayW<::ArrayW<uint8_t>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tmpBuffers = value;
}
inline int32_t Org::BouncyCastle::Asn1::Asn1InputStream::FindLimit(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(), { "FindLimit", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, input);
}
inline void Org::BouncyCastle::Asn1::Asn1InputStream::_ctor(::System::IO::Stream* inputStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputStream);
}
inline void Org::BouncyCastle::Asn1::Asn1InputStream::_ctor(::System::IO::Stream* inputStream, int32_t limit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputStream, limit);
}
inline void Org::BouncyCastle::Asn1::Asn1InputStream::_ctor(::ArrayW<uint8_t> input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Asn1InputStream::BuildObject(int32_t tag, int32_t tagNo, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(),
                                                                                         { "BuildObject", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method, tag, tagNo, length);
}
inline ::Org::BouncyCastle::Asn1::Asn1EncodableVector* Org::BouncyCastle::Asn1::Asn1InputStream::ReadVector(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* dIn) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>(this, ___internal_method, dIn);
}
inline ::Org::BouncyCastle::Asn1::DerSequence* Org::BouncyCastle::Asn1::Asn1InputStream::CreateDerSequence(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* dIn) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerSequence*>(this, ___internal_method, dIn);
}
inline ::Org::BouncyCastle::Asn1::DerSet* Org::BouncyCastle::Asn1::Asn1InputStream::CreateDerSet(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* dIn) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerSet*>(this, ___internal_method, dIn);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Asn1InputStream::ReadObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(), { "ReadObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Asn1::Asn1InputStream::get_Limit() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Asn1::Asn1InputStream::ReadTagNumber(::System::IO::Stream* s, int32_t tag) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(),
                                                                                         { "ReadTagNumber", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, tag);
}
inline int32_t Org::BouncyCastle::Asn1::Asn1InputStream::ReadLength(::System::IO::Stream* s, int32_t limit, bool isParsing) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(),
                                                           { "ReadLength", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, limit, isParsing);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Asn1::Asn1InputStream::GetBuffer(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* defIn, ::ArrayW<::ArrayW<uint8_t>> tmpBuffers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(),
                                              { "GetBuffer", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>(), ::i2c::type_of<::ArrayW<::ArrayW<uint8_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, defIn, tmpBuffers);
}
inline ::ArrayW<char16_t> Org::BouncyCastle::Asn1::Asn1InputStream::GetBmpCharBuffer(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* defIn) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(),
                                                                                         { "GetBmpCharBuffer", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(nullptr, ___internal_method, defIn);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Asn1InputStream::CreatePrimitiveDerObject(int32_t tagNo, ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* defIn,
                                                                                                                 ::ArrayW<::ArrayW<uint8_t>> tmpBuffers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>(),
          { "CreatePrimitiveDerObject", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>(), ::i2c::type_of<::ArrayW<::ArrayW<uint8_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(nullptr, ___internal_method, tagNo, defIn, tmpBuffers);
}
inline ::Org::BouncyCastle::Asn1::Asn1InputStream* Org::BouncyCastle::Asn1::Asn1InputStream::New_ctor(::System::IO::Stream* inputStream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Asn1InputStream*>(inputStream));
}
inline ::Org::BouncyCastle::Asn1::Asn1InputStream* Org::BouncyCastle::Asn1::Asn1InputStream::New_ctor(::System::IO::Stream* inputStream, int32_t limit) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Asn1InputStream*>(inputStream, limit));
}
inline ::Org::BouncyCastle::Asn1::Asn1InputStream* Org::BouncyCastle::Asn1::Asn1InputStream::New_ctor(::ArrayW<uint8_t> input) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Asn1InputStream*>(input));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Asn1InputStream::Asn1InputStream() {}
