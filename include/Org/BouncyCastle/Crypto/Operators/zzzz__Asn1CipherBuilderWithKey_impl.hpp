#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Operators/Asn1CipherBuilderWithKey.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilderWithKey_impl.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilder_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__Asn1CipherBuilderWithKey_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipher_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, int32_t, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x23b550c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
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
  constexpr static std::size_t addrs = 0x23b5724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>::get(),
                                                 "get_AlgorithmDetails", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey.GetMaxOutputSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::GetMaxOutputSize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x23b572c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>::get(), "GetMaxOutputSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey.BuildCipher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ICipher* (
    ::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::BuildCipher)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x23b5764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>::get(), "BuildCipher", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey.get_Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (
    ::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::*)()>(&::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b5970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>::get(), "get_Key",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*& Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::__cordl_internal_get_encKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encKey;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* const& Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::__cordl_internal_get_encKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encKey;
}
constexpr void Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::__cordl_internal_set_encKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___encKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::__cordl_internal_get_algorithmIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithmIdentifier;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::__cordl_internal_get_algorithmIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithmIdentifier;
}
constexpr void Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::__cordl_internal_set_algorithmIdentifier(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___algorithmIdentifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID, int32_t keySize,
                                                                                  ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encryptionOID, keySize, random);
}
inline ::System::Object* Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::get_AlgorithmDetails() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>::get(), "get_AlgorithmDetails",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::GetMaxOutputSize(int32_t inputLen) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>::get(), "GetMaxOutputSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, inputLen);
}
inline ::Org::BouncyCastle::Crypto::ICipher* Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::BuildCipher(::System::IO::Stream* stream) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>::get(), "BuildCipher",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipher*, false>(this, ___internal_method, stream);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::get_Key() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>::get(), "get_Key",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*
Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID, int32_t keySize,
                                                                         ::Org::BouncyCastle::Security::SecureRandom* random) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>(encryptionOID, keySize, random));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherBuilderWithKey"
constexpr Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::operator ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherBuilderWithKey"
constexpr ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::i___Org__BouncyCastle__Crypto__ICipherBuilderWithKey() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherBuilder"
constexpr Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::operator ::Org::BouncyCastle::Crypto::ICipherBuilder*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipherBuilder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherBuilder"
constexpr ::Org::BouncyCastle::Crypto::ICipherBuilder* Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::i___Org__BouncyCastle__Crypto__ICipherBuilder() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipherBuilder*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::Asn1CipherBuilderWithKey() {}
