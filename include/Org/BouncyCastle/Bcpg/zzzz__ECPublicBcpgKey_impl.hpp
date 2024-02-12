#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ECPublicBcpgKey_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__IBcpgKey_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ECPublicBcpgKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::ECPublicBcpgKey::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::ECPublicBcpgKey::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x11feb80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECPublicBcpgKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ECPublicBcpgKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::ECPublicBcpgKey::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Math::EC::ECPoint*)>(&::Org::BouncyCastle::Bcpg::ECPublicBcpgKey::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x11feda8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECPublicBcpgKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ECPublicBcpgKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::ECPublicBcpgKey::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Bcpg::ECPublicBcpgKey::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x11fee50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECPublicBcpgKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ECPublicBcpgKey.get_Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Bcpg::ECPublicBcpgKey::*)()>(
    &::Org::BouncyCastle::Bcpg::ECPublicBcpgKey::get_Format)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x11fee7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECPublicBcpgKey*>::get(), "get_Format",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ECPublicBcpgKey.GetEncoded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Bcpg::ECPublicBcpgKey::*)()>(
    &::Org::BouncyCastle::Bcpg::ECPublicBcpgKey::GetEncoded)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x11feebc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECPublicBcpgKey*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECPublicBcpgKey*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ECPublicBcpgKey.Encode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::ECPublicBcpgKey::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(
    &::Org::BouncyCastle::Bcpg::ECPublicBcpgKey::Encode)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x11fef40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECPublicBcpgKey*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECPublicBcpgKey*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ECPublicBcpgKey.get_EncodedPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Bcpg::ECPublicBcpgKey::*)()>(
    &::Org::BouncyCastle::Bcpg::ECPublicBcpgKey::get_EncodedPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11feff0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECPublicBcpgKey*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECPublicBcpgKey*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ECPublicBcpgKey.get_CurveOid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Bcpg::ECPublicBcpgKey::*)()>(
    &::Org::BouncyCastle::Bcpg::ECPublicBcpgKey::get_CurveOid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11feff8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECPublicBcpgKey*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECPublicBcpgKey*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ECPublicBcpgKey.ReadBytesOfEncodedLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::ECPublicBcpgKey::ReadBytesOfEncodedLength)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x11fec48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECPublicBcpgKey*>::get(), "ReadBytesOfEncodedLength", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Bcpg::IBcpgKey"
constexpr Org::BouncyCastle::Bcpg::ECPublicBcpgKey::operator ::Org::BouncyCastle::Bcpg::IBcpgKey*() noexcept {
  return static_cast<::Org::BouncyCastle::Bcpg::IBcpgKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Bcpg::IBcpgKey"
constexpr ::Org::BouncyCastle::Bcpg::IBcpgKey* Org::BouncyCastle::Bcpg::ECPublicBcpgKey::i___Org__BouncyCastle__Bcpg__IBcpgKey() noexcept {
  return static_cast<::Org::BouncyCastle::Bcpg::IBcpgKey*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Bcpg::ECPublicBcpgKey::__cordl_internal_get_oid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oid;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& Org::BouncyCastle::Bcpg::ECPublicBcpgKey::__cordl_internal_get_oid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oid;
}
constexpr void Org::BouncyCastle::Bcpg::ECPublicBcpgKey::__cordl_internal_set_oid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___oid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Bcpg::ECPublicBcpgKey::__cordl_internal_get_point() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___point;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::Bcpg::ECPublicBcpgKey::__cordl_internal_get_point() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___point;
}
constexpr void Org::BouncyCastle::Bcpg::ECPublicBcpgKey::__cordl_internal_set_point(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___point)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Bcpg::ECPublicBcpgKey* Org::BouncyCastle::Bcpg::ECPublicBcpgKey::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::ECPublicBcpgKey*>(bcpgIn));
}
inline void Org::BouncyCastle::Bcpg::ECPublicBcpgKey::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECPublicBcpgKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bcpgIn);
}
inline ::Org::BouncyCastle::Bcpg::ECPublicBcpgKey* Org::BouncyCastle::Bcpg::ECPublicBcpgKey::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid,
                                                                                                      ::Org::BouncyCastle::Math::EC::ECPoint* point) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::ECPublicBcpgKey*>(oid, point));
}
inline void Org::BouncyCastle::Bcpg::ECPublicBcpgKey::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Math::EC::ECPoint* point) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECPublicBcpgKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oid, point);
}
inline ::Org::BouncyCastle::Bcpg::ECPublicBcpgKey* Org::BouncyCastle::Bcpg::ECPublicBcpgKey::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid,
                                                                                                      ::Org::BouncyCastle::Math::BigInteger* encodedPoint) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::ECPublicBcpgKey*>(oid, encodedPoint));
}
inline void Org::BouncyCastle::Bcpg::ECPublicBcpgKey::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Math::BigInteger* encodedPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECPublicBcpgKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oid, encodedPoint);
}
inline ::StringW Org::BouncyCastle::Bcpg::ECPublicBcpgKey::get_Format() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECPublicBcpgKey*>::get(), "get_Format",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::ECPublicBcpgKey::GetEncoded() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECPublicBcpgKey*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::ECPublicBcpgKey::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECPublicBcpgKey*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bcpgOut);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Bcpg::ECPublicBcpgKey::get_EncodedPoint() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECPublicBcpgKey*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Bcpg::ECPublicBcpgKey::get_CurveOid() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECPublicBcpgKey*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::ECPublicBcpgKey::ReadBytesOfEncodedLength(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ECPublicBcpgKey*>::get(), "ReadBytesOfEncodedLength", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, bcpgIn);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::ECPublicBcpgKey::ECPublicBcpgKey() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
