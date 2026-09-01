#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\SignaturePacket.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__MPInteger_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignaturePacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__MPInteger_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignaturePacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::SignaturePacket::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::SignaturePacket::_ctor)> {
  constexpr static std::size_t size = 0xd84;
  constexpr static std::size_t addrs = 0x369a2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignaturePacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::SignaturePacket::*)(
    int32_t, int64_t, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag, ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>,
    ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>, ::ArrayW<uint8_t>, ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*>)>(&::Org::BouncyCastle::Bcpg::SignaturePacket::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x36a07c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>>(),
                                                    ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                    ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignaturePacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::Org::BouncyCastle::Bcpg::SignaturePacket::*)(int32_t, int32_t, int64_t, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag, int64_t,
                                                                     ::ArrayW<uint8_t>, ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*>)>(&::Org::BouncyCastle::Bcpg::SignaturePacket::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x36a0810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                    ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignaturePacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::SignaturePacket::*)(
    int32_t, int32_t, int64_t, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag, ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>,
    ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>, ::ArrayW<uint8_t>, ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*>)>(&::Org::BouncyCastle::Bcpg::SignaturePacket::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x36a07ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>>(),
                                                    ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                    ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignaturePacket.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::SignaturePacket::*)()>(&::Org::BouncyCastle::Bcpg::SignaturePacket::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a0928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignaturePacket.get_SignatureType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::SignaturePacket::*)()>(&::Org::BouncyCastle::Bcpg::SignaturePacket::get_SignatureType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a0930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { "get_SignatureType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignaturePacket.get_KeyId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::SignaturePacket::*)()>(&::Org::BouncyCastle::Bcpg::SignaturePacket::get_KeyId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a0938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { "get_KeyId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignaturePacket.GetSignatureTrailer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::SignaturePacket::*)()>(&::Org::BouncyCastle::Bcpg::SignaturePacket::GetSignatureTrailer)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x36a0940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { "GetSignatureTrailer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignaturePacket.get_KeyAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag (::Org::BouncyCastle::Bcpg::SignaturePacket::*)()>(
    &::Org::BouncyCastle::Bcpg::SignaturePacket::get_KeyAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a0c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { "get_KeyAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignaturePacket.get_HashAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::HashAlgorithmTag (::Org::BouncyCastle::Bcpg::SignaturePacket::*)()>(
    &::Org::BouncyCastle::Bcpg::SignaturePacket::get_HashAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a0c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { "get_HashAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignaturePacket.GetSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*> (::Org::BouncyCastle::Bcpg::SignaturePacket::*)()>(
    &::Org::BouncyCastle::Bcpg::SignaturePacket::GetSignature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a0c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { "GetSignature", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignaturePacket.GetSignatureBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::SignaturePacket::*)()>(&::Org::BouncyCastle::Bcpg::SignaturePacket::GetSignatureBytes)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x36a0c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { "GetSignatureBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignaturePacket.GetHashedSubPackets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> (::Org::BouncyCastle::Bcpg::SignaturePacket::*)()>(
    &::Org::BouncyCastle::Bcpg::SignaturePacket::GetHashedSubPackets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a0e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { "GetHashedSubPackets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignaturePacket.GetUnhashedSubPackets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> (::Org::BouncyCastle::Bcpg::SignaturePacket::*)()>(
    &::Org::BouncyCastle::Bcpg::SignaturePacket::GetUnhashedSubPackets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a0e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { "GetUnhashedSubPackets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignaturePacket.get_CreationTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::SignaturePacket::*)()>(&::Org::BouncyCastle::Bcpg::SignaturePacket::get_CreationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a0e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { "get_CreationTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignaturePacket.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::SignaturePacket::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(
    &::Org::BouncyCastle::Bcpg::SignaturePacket::Encode)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x36a0e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignaturePacket.EncodeLengthAndData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::SignaturePacket::EncodeLengthAndData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x36a1264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(),
                                                             { "EncodeLengthAndData", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignaturePacket.GetEncodedSubpackets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>)>(
    &::Org::BouncyCastle::Bcpg::SignaturePacket::GetEncodedSubpackets)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x36a11b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(),
                                                             { "GetEncodedSubpackets", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignaturePacket.setCreationTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::SignaturePacket::*)()>(&::Org::BouncyCastle::Bcpg::SignaturePacket::setCreationTime)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x36a082c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { "setCreationTime", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_set_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_get_signatureType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureType;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_get_signatureType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureType;
}
constexpr void Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_set_signatureType(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signatureType = value;
}
constexpr int64_t& Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_get_creationTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creationTime;
}
constexpr int64_t const& Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_get_creationTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creationTime;
}
constexpr void Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_set_creationTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___creationTime = value;
}
constexpr int64_t& Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_get_keyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyId;
}
constexpr int64_t const& Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_get_keyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyId;
}
constexpr void Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_set_keyId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyId = value;
}
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag& Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_get_keyAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyAlgorithm;
}
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const& Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_get_keyAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyAlgorithm;
}
constexpr void Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_set_keyAlgorithm(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyAlgorithm = value;
}
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag& Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_get_hashAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashAlgorithm;
}
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const& Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_get_hashAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashAlgorithm;
}
constexpr void Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_set_hashAlgorithm(::Org::BouncyCastle::Bcpg::HashAlgorithmTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashAlgorithm = value;
}
constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*>& Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_get_signature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signature;
}
constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*> const& Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_get_signature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signature;
}
constexpr void Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_set_signature(::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signature = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_get_fingerprint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fingerprint;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_get_fingerprint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fingerprint;
}
constexpr void Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_set_fingerprint(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fingerprint = value;
}
constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>& Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_get_hashedData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashedData;
}
constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> const& Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_get_hashedData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashedData;
}
constexpr void Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_set_hashedData(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashedData = value;
}
constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>& Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_get_unhashedData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unhashedData;
}
constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> const& Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_get_unhashedData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unhashedData;
}
constexpr void Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_set_unhashedData(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unhashedData = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_get_signatureEncoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureEncoding;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_get_signatureEncoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureEncoding;
}
constexpr void Org::BouncyCastle::Bcpg::SignaturePacket::__cordl_internal_set_signatureEncoding(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signatureEncoding = value;
}
inline void Org::BouncyCastle::Bcpg::SignaturePacket::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgIn);
}
inline void Org::BouncyCastle::Bcpg::SignaturePacket::_ctor(int32_t signatureType, int64_t keyId, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm,
                                                            ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> hashedData,
                                                            ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> unhashedData, ::ArrayW<uint8_t> fingerprint,
                                                            ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*> signature) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>>(),
                                                  ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                  ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signatureType, keyId, keyAlgorithm, hashAlgorithm, hashedData, unhashedData, fingerprint, signature);
}
inline void Org::BouncyCastle::Bcpg::SignaturePacket::_ctor(int32_t version, int32_t signatureType, int64_t keyId, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm,
                                                            ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, int64_t creationTime, ::ArrayW<uint8_t> fingerprint,
                                                            ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*> signature) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(),
                                                               ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, version, signatureType, keyId, keyAlgorithm, hashAlgorithm, creationTime, fingerprint, signature);
}
inline void Org::BouncyCastle::Bcpg::SignaturePacket::_ctor(int32_t version, int32_t signatureType, int64_t keyId, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm,
                                                            ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> hashedData,
                                                            ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> unhashedData, ::ArrayW<uint8_t> fingerprint,
                                                            ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*> signature) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>>(),
                                                  ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                  ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, version, signatureType, keyId, keyAlgorithm, hashAlgorithm, hashedData, unhashedData, fingerprint, signature);
}
inline int32_t Org::BouncyCastle::Bcpg::SignaturePacket::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::SignaturePacket::get_SignatureType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { "get_SignatureType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Bcpg::SignaturePacket::get_KeyId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { "get_KeyId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::SignaturePacket::GetSignatureTrailer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { "GetSignatureTrailer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag Org::BouncyCastle::Bcpg::SignaturePacket::get_KeyAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { "get_KeyAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::HashAlgorithmTag Org::BouncyCastle::Bcpg::SignaturePacket::get_HashAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { "get_HashAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*> Org::BouncyCastle::Bcpg::SignaturePacket::GetSignature() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { "GetSignature", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::SignaturePacket::GetSignatureBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { "GetSignatureBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> Org::BouncyCastle::Bcpg::SignaturePacket::GetHashedSubPackets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { "GetHashedSubPackets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> Org::BouncyCastle::Bcpg::SignaturePacket::GetUnhashedSubPackets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { "GetUnhashedSubPackets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Bcpg::SignaturePacket::get_CreationTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { "get_CreationTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::SignaturePacket::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgOut);
}
inline void Org::BouncyCastle::Bcpg::SignaturePacket::EncodeLengthAndData(::Org::BouncyCastle::Bcpg::BcpgOutputStream* pOut, ::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(),
                                                           { "EncodeLengthAndData", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pOut, data);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::SignaturePacket::GetEncodedSubpackets(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> ps) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(),
                                                           { "GetEncodedSubpackets", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, ps);
}
inline void Org::BouncyCastle::Bcpg::SignaturePacket::setCreationTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), { "setCreationTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::SignaturePacket* Org::BouncyCastle::Bcpg::SignaturePacket::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::SignaturePacket*>(bcpgIn));
}
inline ::Org::BouncyCastle::Bcpg::SignaturePacket* Org::BouncyCastle::Bcpg::SignaturePacket::New_ctor(int32_t signatureType, int64_t keyId,
                                                                                                      ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm,
                                                                                                      ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                                                      ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> hashedData,
                                                                                                      ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> unhashedData,
                                                                                                      ::ArrayW<uint8_t> fingerprint, ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*> signature) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::SignaturePacket*>(signatureType, keyId, keyAlgorithm, hashAlgorithm, hashedData, unhashedData, fingerprint, signature));
}
inline ::Org::BouncyCastle::Bcpg::SignaturePacket* Org::BouncyCastle::Bcpg::SignaturePacket::New_ctor(int32_t version, int32_t signatureType, int64_t keyId,
                                                                                                      ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm,
                                                                                                      ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, int64_t creationTime,
                                                                                                      ::ArrayW<uint8_t> fingerprint, ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*> signature) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::SignaturePacket*>(version, signatureType, keyId, keyAlgorithm, hashAlgorithm, creationTime, fingerprint, signature));
}
inline ::Org::BouncyCastle::Bcpg::SignaturePacket* Org::BouncyCastle::Bcpg::SignaturePacket::New_ctor(int32_t version, int32_t signatureType, int64_t keyId,
                                                                                                      ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm,
                                                                                                      ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                                                      ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> hashedData,
                                                                                                      ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> unhashedData,
                                                                                                      ::ArrayW<uint8_t> fingerprint, ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*> signature) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::SignaturePacket*>(version, signatureType, keyId, keyAlgorithm, hashAlgorithm, hashedData, unhashedData, fingerprint, signature));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::SignaturePacket::SignaturePacket() {}
