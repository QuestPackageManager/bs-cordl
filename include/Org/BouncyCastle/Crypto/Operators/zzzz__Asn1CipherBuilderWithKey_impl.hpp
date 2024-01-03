#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__Asn1CipherBuilderWithKey_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilderWithKey_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipher_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, int32_t, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xf281e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey.get_AlgorithmDetails
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::*)()>(
    &::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::get_AlgorithmDetails)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf28400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>::get(),
                                                 "get_AlgorithmDetails", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey.GetMaxOutputSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::GetMaxOutputSize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xf28408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>::get(), "GetMaxOutputSize",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey.BuildCipher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ICipher* (
    ::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::BuildCipher)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xf28448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>::get(), "BuildCipher",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey.get_Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (
    ::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::*)()>(&::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf2866c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>::get(), "get_Key",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherBuilderWithKey"
constexpr Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::operator ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherBuilder"
constexpr Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::operator ::Org::BouncyCastle::Crypto::ICipherBuilder*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipherBuilder*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*& Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::__get_encKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encKey;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*> const& Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::__get_encKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encKey;
}
constexpr void Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::__set_encKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___encKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::__get_algorithmIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithmIdentifier;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const&
Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::__get_algorithmIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithmIdentifier;
}
constexpr void Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::__set_algorithmIdentifier(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___algorithmIdentifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*
Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID, int32_t keySize,
                                                                         ::Org::BouncyCastle::Security::SecureRandom* random) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>(encryptionOID, keySize, random));
}
inline void Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID, int32_t keySize,
                                                                                  ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encryptionOID, keySize, random);
}
inline ::System::Object* Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::get_AlgorithmDetails() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>::get(), "get_AlgorithmDetails",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::GetMaxOutputSize(int32_t inputLen) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>::get(), "GetMaxOutputSize",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, inputLen);
}
inline ::Org::BouncyCastle::Crypto::ICipher* Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::BuildCipher(::System::IO::Stream* stream) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>::get(), "BuildCipher",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipher*, false>(this, ___internal_method, stream);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::get_Key() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>::get(), "get_Key",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::Asn1CipherBuilderWithKey() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
