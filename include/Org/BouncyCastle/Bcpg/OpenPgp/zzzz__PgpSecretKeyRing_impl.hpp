#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpSecretKeyRing.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpKeyRing_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSecretKeyRing_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPublicKeyRing_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPublicKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSecretKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::*)(::System::Collections::IList*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3596e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::*)(::System::Collections::IList*, ::System::Collections::IList*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3596e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3596e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::_ctor)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x3596eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing.GetPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::GetPublicKey)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3597400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), { "GetPublicKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing.GetSecretKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::GetSecretKey)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x35974fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), { "GetSecretKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing.GetSecretKeys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::GetSecretKeys)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x35975f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), { "GetSecretKeys", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing.GetSecretKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::*)(int64_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::GetSecretKey)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x3597658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), { "GetSecretKey", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing.GetExtraPublicKeys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::GetExtraPublicKeys)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3597990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), { "GetExtraPublicKeys", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::GetEncoded)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x35979f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), { "GetEncoded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::Encode)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0x3597a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), { "Encode", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing.ReplacePublicKeys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::ReplacePublicKeys)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x359805c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(),
            { "ReplacePublicKeys", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing.CopyWithNewPassword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*, ::ArrayW<char16_t>, ::ArrayW<char16_t>,
                                                                          ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Security::SecureRandom*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::CopyWithNewPassword)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x359852c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(),
                                                { "CopyWithNewPassword",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::ArrayW<char16_t>>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing.InsertSecretKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::InsertSecretKey)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x3598aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(),
                         { "InsertSecretKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing.RemoveSecretKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::RemoveSecretKey)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x3598e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(),
                         { "RemoveSecretKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::__cordl_internal_get_keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::__cordl_internal_get_keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::__cordl_internal_set_keys(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keys = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::__cordl_internal_get_extraPubKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraPubKeys;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::__cordl_internal_get_extraPubKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraPubKeys;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::__cordl_internal_set_extraPubKeys(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extraPubKeys = value;
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::_ctor(::System::Collections::IList* keys) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keys);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::_ctor(::System::Collections::IList* keys, ::System::Collections::IList* extraPubKeys) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keys, extraPubKeys);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::_ctor(::ArrayW<uint8_t> encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoding);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::_ctor(::System::IO::Stream* inputStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputStream);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::GetPublicKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), { "GetPublicKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::GetSecretKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), { "GetSecretKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::GetSecretKeys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), { "GetSecretKeys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::GetSecretKey(int64_t keyId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), { "GetSecretKey", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(this, ___internal_method, keyId);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::GetExtraPublicKeys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), { "GetExtraPublicKeys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::GetEncoded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), { "GetEncoded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::Encode(::System::IO::Stream* outStr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), { "Encode", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStr);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::ReplacePublicKeys(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* secretRing,
                                                                                                                                   ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* publicRing) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(),
          { "ReplacePublicKeys", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(nullptr, ___internal_method, secretRing, publicRing);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::CopyWithNewPassword(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* ring, ::ArrayW<char16_t> oldPassPhrase, ::ArrayW<char16_t> newPassPhrase,
                                                                        ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(),
                                              { "CopyWithNewPassword",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::ArrayW<char16_t>>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(nullptr, ___internal_method, ring, oldPassPhrase, newPassPhrase, newEncAlgorithm, rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::InsertSecretKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* secRing,
                                                                                                                                 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* secKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(),
                       { "InsertSecretKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(nullptr, ___internal_method, secRing, secKey);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::RemoveSecretKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* secRing,
                                                                                                                                 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* secKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(),
                       { "RemoveSecretKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(nullptr, ___internal_method, secRing, secKey);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::New_ctor(::System::Collections::IList* keys) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(keys));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::New_ctor(::System::Collections::IList* keys,
                                                                                                                          ::System::Collections::IList* extraPubKeys) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(keys, extraPubKeys));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::New_ctor(::ArrayW<uint8_t> encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(encoding));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::New_ctor(::System::IO::Stream* inputStream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(inputStream));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::PgpSecretKeyRing() {}
