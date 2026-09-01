#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\OpenPgp\PgpPublicKeyRing.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpKeyRing_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPublicKeyRing_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPublicKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyPacket_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x358fc18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::*)(::System::Collections::IList*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x358ff34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::_ctor)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x358fc8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing.GetPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::GetPublicKey)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x35900c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing.GetPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::*)(int64_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::GetPublicKey)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x35901b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing.GetPublicKeys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::GetPublicKeys)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x35904e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::GetEncoded)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3590544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::Encode)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x35905c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing.InsertPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::InsertPublicKey)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x359092c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(),
                         { "InsertPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing.RemovePublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::RemovePublicKey)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x3590cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(),
                         { "RemovePublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing.ReadPublicKeyPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::PublicKeyPacket* (*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::ReadPublicKeyPacket)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x358ff3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(),
                                                                                           { "ReadPublicKeyPacket", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing.ReadSubkey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::ReadSubkey)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3590020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(),
                                                                                           { "ReadSubkey", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::__cordl_internal_get_keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::__cordl_internal_get_keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::__cordl_internal_set_keys(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keys = value;
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::_ctor(::ArrayW<uint8_t> encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoding);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::_ctor(::System::Collections::IList* pubKeys) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pubKeys);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::_ctor(::System::IO::Stream* inputStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputStream);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::GetPublicKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::GetPublicKey(int64_t keyId) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(this, ___internal_method, keyId);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::GetPublicKeys() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::GetEncoded() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::Encode(::System::IO::Stream* outStr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStr);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::InsertPublicKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* pubRing,
                                                                                                                                 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(),
                       { "InsertPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(nullptr, ___internal_method, pubRing, pubKey);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::RemovePublicKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* pubRing,
                                                                                                                                 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(),
                       { "RemovePublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(nullptr, ___internal_method, pubRing, pubKey);
}
inline ::Org::BouncyCastle::Bcpg::PublicKeyPacket* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::ReadPublicKeyPacket(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(),
                                                                                         { "ReadPublicKeyPacket", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(nullptr, ___internal_method, bcpgInput);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::ReadSubkey(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(),
                                                                                         { "ReadSubkey", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(nullptr, ___internal_method, bcpgInput);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::New_ctor(::ArrayW<uint8_t> encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(encoding));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::New_ctor(::System::Collections::IList* pubKeys) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(pubKeys));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::New_ctor(::System::IO::Stream* inputStream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(inputStream));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing::PgpPublicKeyRing() {}
