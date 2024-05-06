#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__Pkcs8EncryptedPrivateKeyInfoBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__PrivateKeyInfo_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilder_def.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__Pkcs8EncryptedPrivateKeyInfo_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x13485dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::*)(
    ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*)>(&::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1348614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder.Build
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo* (
    ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::*)(::Org::BouncyCastle::Crypto::ICipherBuilder*)>(&::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::Build)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x134863c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherBuilder*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*& Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::__cordl_internal_get_privateKeyInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateKeyInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*> const&
Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::__cordl_internal_get_privateKeyInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateKeyInfo;
}
constexpr void Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::__cordl_internal_set_privateKeyInfo(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___privateKeyInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder* Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> privateKeyInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder*>(privateKeyInfo));
}
inline void Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> privateKeyInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, privateKeyInfo);
}
inline ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder*
Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::New_ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privateKeyInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder*>(privateKeyInfo));
}
inline void Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::_ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privateKeyInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, privateKeyInfo);
}
inline ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo* Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::Build(::Org::BouncyCastle::Crypto::ICipherBuilder* encryptor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo*, false>(this, ___internal_method, encryptor);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::Pkcs8EncryptedPrivateKeyInfoBuilder() {}
