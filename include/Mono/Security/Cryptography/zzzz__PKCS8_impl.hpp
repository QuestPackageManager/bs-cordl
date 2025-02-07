#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/PKCS8.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Cryptography/zzzz__PKCS8_def.hpp"
#include "Mono/Security/Cryptography/zzzz__PKCS8_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__DSAParameters_def.hpp"
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::*)()>(
    &::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3c4ea6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3c4ead4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo.get_Algorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::*)()>(
    &::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::get_Algorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c4ed54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>::get(),
                                                                               "get_Algorithm", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo.get_PrivateKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::*)()>(
    &::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::get_PrivateKey)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3c4ed5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>::get(),
                                                                               "get_PrivateKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo.Decode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::Decode)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x3c4eafc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>::get(), "Decode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo.RemoveLeadingZero
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::RemoveLeadingZero)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3c4edd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>::get(), "RemoveLeadingZero", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo.Normalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::Normalize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3c4ee6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>::get(), "Normalize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo.DecodeRSA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSA* (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::DecodeRSA)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x3c4ef0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>::get(), "DecodeRSA", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo.Encode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::System::Security::Cryptography::RSA*)>(
    &::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::Encode)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x3c4f2d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>::get(), "Encode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RSA*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo.DecodeDSA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Security::Cryptography::DSA* (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Security::Cryptography::DSAParameters)>(
        &::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::DecodeDSA)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3c4f4c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>::get(), "DecodeDSA", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DSAParameters>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo.Encode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::System::Security::Cryptography::DSA*)>(
    &::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::Encode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3c4f5f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>::get(), "Encode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DSA*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo.Encode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(
    &::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::Encode)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3c4f63c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>::get(), "Encode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::AsymmetricAlgorithm*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr int32_t const& Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::__cordl_internal_set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
constexpr ::StringW& Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::__cordl_internal_get__algorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____algorithm;
}
constexpr ::StringW const& Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::__cordl_internal_get__algorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____algorithm;
}
constexpr void Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::__cordl_internal_set__algorithm(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____algorithm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::__cordl_internal_get__key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::__cordl_internal_get__key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
constexpr void Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::__cordl_internal_set__key(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::__cordl_internal_get__list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr ::System::Collections::ArrayList* const& Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::__cordl_internal_get__list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr void Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::__cordl_internal_set__list(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____list)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::StringW Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::get_Algorithm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>::get(),
                                                                             "get_Algorithm", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::get_PrivateKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>::get(),
                                                                             "get_PrivateKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>::get(), "Decode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::RemoveLeadingZero(::ArrayW<uint8_t, ::Array<uint8_t>*> bigInt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>::get(), "RemoveLeadingZero", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, bigInt);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::Normalize(::ArrayW<uint8_t, ::Array<uint8_t>*> bigInt, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>::get(), "Normalize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, bigInt, length);
}
inline ::System::Security::Cryptography::RSA* Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::DecodeRSA(::ArrayW<uint8_t, ::Array<uint8_t>*> keypair) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>::get(), "DecodeRSA", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*, false>(nullptr, ___internal_method, keypair);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::Encode(::System::Security::Cryptography::RSA* rsa) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>::get(), "Encode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RSA*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, rsa);
}
inline ::System::Security::Cryptography::DSA* Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::DecodeDSA(::ArrayW<uint8_t, ::Array<uint8_t>*> privateKey,
                                                                                                            ::System::Security::Cryptography::DSAParameters dsaParameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>::get(), "DecodeDSA", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DSAParameters>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DSA*, false>(nullptr, ___internal_method, privateKey, dsaParameters);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::Encode(::System::Security::Cryptography::DSA* dsa) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>::get(), "Encode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DSA*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, dsa);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::Encode(::System::Security::Cryptography::AsymmetricAlgorithm* aa) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>::get(), "Encode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::AsymmetricAlgorithm*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, aa);
}
inline ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo* Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>());
}
inline ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo* Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(data));
}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::PKCS8_PrivateKeyInfo() {}
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::*)()>(
    &::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c4f760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3c4f768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo.get_Algorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::*)()>(
    &::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::get_Algorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c4fa40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>::get(), "get_Algorithm",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo.get_EncryptedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::*)()>(
    &::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::get_EncryptedData)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3c4fa48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>::get(), "get_EncryptedData",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo.get_Salt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::*)()>(
    &::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::get_Salt)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3c4fabc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>::get(), "get_Salt",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo.get_IterationCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::*)()>(
    &::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::get_IterationCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c4fb70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>::get(), "get_IterationCount",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo.Decode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::Decode)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x3c4f794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>::get(), "Decode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::__cordl_internal_get__algorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____algorithm;
}
constexpr ::StringW const& Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::__cordl_internal_get__algorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____algorithm;
}
constexpr void Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::__cordl_internal_set__algorithm(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____algorithm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::__cordl_internal_get__salt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____salt;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::__cordl_internal_get__salt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____salt;
}
constexpr void Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::__cordl_internal_set__salt(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____salt)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::__cordl_internal_get__iterations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iterations;
}
constexpr int32_t const& Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::__cordl_internal_get__iterations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iterations;
}
constexpr void Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::__cordl_internal_set__iterations(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____iterations = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr void Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::__cordl_internal_set__data(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::StringW Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::get_Algorithm() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>::get(), "get_Algorithm",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::get_EncryptedData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>::get(), "get_EncryptedData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::get_Salt() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>::get(), "get_Salt",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline int32_t Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::get_IterationCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>::get(), "get_IterationCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>::get(), "Decode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo* Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>());
}
inline ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo* Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>(data));
}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::PKCS8_EncryptedPrivateKeyInfo() {}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::PKCS8::PKCS8() {}
