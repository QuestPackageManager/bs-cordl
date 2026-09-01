#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\DerOutputStream.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__FilterStream_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOutputStream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerOutputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerOutputStream::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Asn1::DerOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36850a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerOutputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerOutputStream.WriteLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerOutputStream::*)(int32_t)>(&::Org::BouncyCastle::Asn1::DerOutputStream::WriteLength)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x36850a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerOutputStream*>(), { "WriteLength", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerOutputStream.WriteEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerOutputStream::*)(int32_t, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::DerOutputStream::WriteEncoded)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3685154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerOutputStream*>(), { "WriteEncoded", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerOutputStream.WriteEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerOutputStream::*)(int32_t, uint8_t, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Asn1::DerOutputStream::WriteEncoded)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x36851b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerOutputStream*>(),
                                                             { "WriteEncoded", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerOutputStream.WriteEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerOutputStream::*)(int32_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Asn1::DerOutputStream::WriteEncoded)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x368522c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerOutputStream*>(),
                                                { "WriteEncoded", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerOutputStream.WriteTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerOutputStream::*)(int32_t, int32_t)>(&::Org::BouncyCastle::Asn1::DerOutputStream::WriteTag)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3685290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerOutputStream*>(), { "WriteTag", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerOutputStream.WriteEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerOutputStream::*)(int32_t, int32_t, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Asn1::DerOutputStream::WriteEncoded)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x36853b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerOutputStream*>(),
                                                             { "WriteEncoded", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerOutputStream.WriteNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerOutputStream::*)()>(&::Org::BouncyCastle::Asn1::DerOutputStream::WriteNull)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3685404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerOutputStream*>(), { "WriteNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerOutputStream.WriteObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerOutputStream::*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::DerOutputStream::WriteObject)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x368543c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerOutputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerOutputStream*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerOutputStream.WriteObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerOutputStream::*)(::Org::BouncyCastle::Asn1::Asn1Encodable*)>(
    &::Org::BouncyCastle::Asn1::DerOutputStream::WriteObject)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x36855a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerOutputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerOutputStream*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerOutputStream.WriteObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerOutputStream::*)(::Org::BouncyCastle::Asn1::Asn1Object*)>(
    &::Org::BouncyCastle::Asn1::DerOutputStream::WriteObject)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3685618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerOutputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerOutputStream*>(), 44 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::DerOutputStream::_ctor(::System::IO::Stream* os) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerOutputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, os);
}
inline void Org::BouncyCastle::Asn1::DerOutputStream::WriteLength(int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerOutputStream*>(), { "WriteLength", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, length);
}
inline void Org::BouncyCastle::Asn1::DerOutputStream::WriteEncoded(int32_t tag, ::ArrayW<uint8_t> bytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerOutputStream*>(), { "WriteEncoded", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag, bytes);
}
inline void Org::BouncyCastle::Asn1::DerOutputStream::WriteEncoded(int32_t tag, uint8_t first, ::ArrayW<uint8_t> bytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerOutputStream*>(),
                                                           { "WriteEncoded", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag, first, bytes);
}
inline void Org::BouncyCastle::Asn1::DerOutputStream::WriteEncoded(int32_t tag, ::ArrayW<uint8_t> bytes, int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerOutputStream*>(),
                                              { "WriteEncoded", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag, bytes, offset, length);
}
inline void Org::BouncyCastle::Asn1::DerOutputStream::WriteTag(int32_t flags, int32_t tagNo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerOutputStream*>(), { "WriteTag", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags, tagNo);
}
inline void Org::BouncyCastle::Asn1::DerOutputStream::WriteEncoded(int32_t flags, int32_t tagNo, ::ArrayW<uint8_t> bytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerOutputStream*>(),
                                                           { "WriteEncoded", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags, tagNo, bytes);
}
inline void Org::BouncyCastle::Asn1::DerOutputStream::WriteNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerOutputStream*>(), { "WriteNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::DerOutputStream::WriteObject(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerOutputStream*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::DerOutputStream::WriteObject(::Org::BouncyCastle::Asn1::Asn1Encodable* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerOutputStream*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::DerOutputStream::WriteObject(::Org::BouncyCastle::Asn1::Asn1Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerOutputStream*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::DerOutputStream* Org::BouncyCastle::Asn1::DerOutputStream::New_ctor(::System::IO::Stream* os) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::DerOutputStream*>(os));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::DerOutputStream::DerOutputStream() {}
