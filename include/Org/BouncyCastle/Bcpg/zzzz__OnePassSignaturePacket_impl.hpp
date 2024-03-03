#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__OnePassSignaturePacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OnePassSignaturePacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OnePassSignaturePacket::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::OnePassSignaturePacket::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x123f2dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OnePassSignaturePacket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OnePassSignaturePacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OnePassSignaturePacket::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, int64_t, bool)>(&::Org::BouncyCastle::Bcpg::OnePassSignaturePacket::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1242e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OnePassSignaturePacket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OnePassSignaturePacket.get_SignatureType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::OnePassSignaturePacket::*)()>(
    &::Org::BouncyCastle::Bcpg::OnePassSignaturePacket::get_SignatureType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1242e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OnePassSignaturePacket*>::get(),
                                                                               "get_SignatureType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OnePassSignaturePacket.get_KeyAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag (::Org::BouncyCastle::Bcpg::OnePassSignaturePacket::*)()>(
    &::Org::BouncyCastle::Bcpg::OnePassSignaturePacket::get_KeyAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1242e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OnePassSignaturePacket*>::get(),
                                                                               "get_KeyAlgorithm", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OnePassSignaturePacket.get_HashAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::HashAlgorithmTag (::Org::BouncyCastle::Bcpg::OnePassSignaturePacket::*)()>(
    &::Org::BouncyCastle::Bcpg::OnePassSignaturePacket::get_HashAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1242e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OnePassSignaturePacket*>::get(),
                                                                               "get_HashAlgorithm", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OnePassSignaturePacket.get_KeyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::OnePassSignaturePacket::*)()>(
    &::Org::BouncyCastle::Bcpg::OnePassSignaturePacket::get_KeyId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1242e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OnePassSignaturePacket*>::get(),
                                                                               "get_KeyId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OnePassSignaturePacket.Encode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OnePassSignaturePacket::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(
    &::Org::BouncyCastle::Bcpg::OnePassSignaturePacket::Encode)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x1242e98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OnePassSignaturePacket*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OnePassSignaturePacket*>::get(), 4));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Bcpg::OnePassSignaturePacket::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::OnePassSignaturePacket::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Bcpg::OnePassSignaturePacket::__cordl_internal_set_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::OnePassSignaturePacket::__cordl_internal_get_sigType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigType;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::OnePassSignaturePacket::__cordl_internal_get_sigType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigType;
}
constexpr void Org::BouncyCastle::Bcpg::OnePassSignaturePacket::__cordl_internal_set_sigType(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sigType = value;
}
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag& Org::BouncyCastle::Bcpg::OnePassSignaturePacket::__cordl_internal_get_hashAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashAlgorithm;
}
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const& Org::BouncyCastle::Bcpg::OnePassSignaturePacket::__cordl_internal_get_hashAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashAlgorithm;
}
constexpr void Org::BouncyCastle::Bcpg::OnePassSignaturePacket::__cordl_internal_set_hashAlgorithm(::Org::BouncyCastle::Bcpg::HashAlgorithmTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashAlgorithm = value;
}
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag& Org::BouncyCastle::Bcpg::OnePassSignaturePacket::__cordl_internal_get_keyAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyAlgorithm;
}
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const& Org::BouncyCastle::Bcpg::OnePassSignaturePacket::__cordl_internal_get_keyAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyAlgorithm;
}
constexpr void Org::BouncyCastle::Bcpg::OnePassSignaturePacket::__cordl_internal_set_keyAlgorithm(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyAlgorithm = value;
}
constexpr int64_t& Org::BouncyCastle::Bcpg::OnePassSignaturePacket::__cordl_internal_get_keyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyId;
}
constexpr int64_t const& Org::BouncyCastle::Bcpg::OnePassSignaturePacket::__cordl_internal_get_keyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyId;
}
constexpr void Org::BouncyCastle::Bcpg::OnePassSignaturePacket::__cordl_internal_set_keyId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyId = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::OnePassSignaturePacket::__cordl_internal_get_nested() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nested;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::OnePassSignaturePacket::__cordl_internal_get_nested() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nested;
}
constexpr void Org::BouncyCastle::Bcpg::OnePassSignaturePacket::__cordl_internal_set_nested(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nested = value;
}
inline ::Org::BouncyCastle::Bcpg::OnePassSignaturePacket* Org::BouncyCastle::Bcpg::OnePassSignaturePacket::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::OnePassSignaturePacket*>(bcpgIn));
}
inline void Org::BouncyCastle::Bcpg::OnePassSignaturePacket::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OnePassSignaturePacket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bcpgIn);
}
inline ::Org::BouncyCastle::Bcpg::OnePassSignaturePacket* Org::BouncyCastle::Bcpg::OnePassSignaturePacket::New_ctor(int32_t sigType, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                                                                    ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, int64_t keyId,
                                                                                                                    bool isNested) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::OnePassSignaturePacket*>(sigType, hashAlgorithm, keyAlgorithm, keyId, isNested));
}
inline void Org::BouncyCastle::Bcpg::OnePassSignaturePacket::_ctor(int32_t sigType, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                   ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, int64_t keyId, bool isNested) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OnePassSignaturePacket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sigType, hashAlgorithm, keyAlgorithm, keyId, isNested);
}
inline int32_t Org::BouncyCastle::Bcpg::OnePassSignaturePacket::get_SignatureType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OnePassSignaturePacket*>::get(),
                                                                             "get_SignatureType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag Org::BouncyCastle::Bcpg::OnePassSignaturePacket::get_KeyAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OnePassSignaturePacket*>::get(),
                                                                             "get_KeyAlgorithm", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::HashAlgorithmTag Org::BouncyCastle::Bcpg::OnePassSignaturePacket::get_HashAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OnePassSignaturePacket*>::get(),
                                                                             "get_HashAlgorithm", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::HashAlgorithmTag, false>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Bcpg::OnePassSignaturePacket::get_KeyId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OnePassSignaturePacket*>::get(),
                                                                             "get_KeyId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OnePassSignaturePacket::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OnePassSignaturePacket*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bcpgOut);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OnePassSignaturePacket::OnePassSignaturePacket() {}
