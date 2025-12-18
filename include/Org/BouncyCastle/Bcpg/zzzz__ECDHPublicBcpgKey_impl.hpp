#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/ECDHPublicBcpgKey.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ECPublicBcpgKey_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ECDHPublicBcpgKey_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x35a216c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag)>(
    &::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x35a2364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey.get_Reserved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::*)()>(
    &::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::get_Reserved)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35a23a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey.get_HashAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::HashAlgorithmTag (::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::*)()>(
    &::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::get_HashAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35a23a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey.get_SymmetricKeyAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag (::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::*)()>(
    &::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::get_SymmetricKeyAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35a23b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey.Encode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(
    &::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::Encode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x35a23b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey.VerifyHashAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::*)()>(
    &::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::VerifyHashAlgorithm)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x35a22a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey*>::get(),
                                                                               "VerifyHashAlgorithm", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey.VerifySymmetricKeyAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::*)()>(
    &::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::VerifySymmetricKeyAlgorithm)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x35a2304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey*>::get(),
                                                                               "VerifySymmetricKeyAlgorithm", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr uint8_t& Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::__cordl_internal_get_reserved() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reserved;
}
constexpr uint8_t const& Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::__cordl_internal_get_reserved() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reserved;
}
constexpr void Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::__cordl_internal_set_reserved(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reserved = value;
}
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag& Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::__cordl_internal_get_hashFunctionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashFunctionId;
}
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const& Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::__cordl_internal_get_hashFunctionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashFunctionId;
}
constexpr void Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::__cordl_internal_set_hashFunctionId(::Org::BouncyCastle::Bcpg::HashAlgorithmTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashFunctionId = value;
}
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag& Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::__cordl_internal_get_symAlgorithmId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___symAlgorithmId;
}
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const& Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::__cordl_internal_get_symAlgorithmId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___symAlgorithmId;
}
constexpr void Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::__cordl_internal_set_symAlgorithmId(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___symAlgorithmId = value;
}
inline void Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bcpgIn);
}
inline void Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Math::EC::ECPoint* point,
                                                              ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag symmetricKeyAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oid, point, hashAlgorithm, symmetricKeyAlgorithm);
}
inline uint8_t Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::get_Reserved() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::HashAlgorithmTag Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::get_HashAlgorithm() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::HashAlgorithmTag, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::get_SymmetricKeyAlgorithm() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bcpgOut);
}
inline void Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::VerifyHashAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey*>::get(),
                                                                             "VerifyHashAlgorithm", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::VerifySymmetricKeyAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey*>::get(),
                                                                             "VerifySymmetricKeyAlgorithm", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey* Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey*>(bcpgIn));
}
inline ::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey* Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid,
                                                                                                          ::Org::BouncyCastle::Math::EC::ECPoint* point,
                                                                                                          ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                                                          ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag symmetricKeyAlgorithm) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey*>(oid, point, hashAlgorithm, symmetricKeyAlgorithm));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey::ECDHPublicBcpgKey() {}
