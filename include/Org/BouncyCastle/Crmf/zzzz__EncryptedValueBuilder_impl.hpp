#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crmf/EncryptedValueBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__EncryptedValueBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__EncryptedValue_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__PrivateKeyInfo_def.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__IEncryptedValuePadder_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilderWithKey_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IKeyWrapper_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::EncryptedValueBuilder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crmf::EncryptedValueBuilder::*)(
    ::Org::BouncyCastle::Crypto::IKeyWrapper*, ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*)>(&::Org::BouncyCastle::Crmf::EncryptedValueBuilder::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x26890c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IKeyWrapper*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::EncryptedValueBuilder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crmf::EncryptedValueBuilder::*)(
    ::Org::BouncyCastle::Crypto::IKeyWrapper*, ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*, ::Org::BouncyCastle::Crmf::IEncryptedValuePadder*)>(
    &::Org::BouncyCastle::Crmf::EncryptedValueBuilder::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26890f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IKeyWrapper*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crmf::IEncryptedValuePadder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::EncryptedValueBuilder.Build
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* (
    ::Org::BouncyCastle::Crmf::EncryptedValueBuilder::*)(::ArrayW<char16_t, ::Array<char16_t>*>)>(&::Org::BouncyCastle::Crmf::EncryptedValueBuilder::Build)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2689130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::EncryptedValueBuilder.Build
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* (
    ::Org::BouncyCastle::Crmf::EncryptedValueBuilder::*)(::Org::BouncyCastle::X509::X509Certificate*)>(&::Org::BouncyCastle::Crmf::EncryptedValueBuilder::Build)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x268992c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::EncryptedValueBuilder.Build
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* (
    ::Org::BouncyCastle::Crmf::EncryptedValueBuilder::*)(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*)>(&::Org::BouncyCastle::Crmf::EncryptedValueBuilder::Build)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x2689a68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::EncryptedValueBuilder.EncryptData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* (
    ::Org::BouncyCastle::Crmf::EncryptedValueBuilder::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crmf::EncryptedValueBuilder::EncryptData)> {
  constexpr static std::size_t size = 0x718;
  constexpr static std::size_t addrs = 0x2689214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>::get(), "EncryptData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::EncryptedValueBuilder.PadData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crmf::EncryptedValueBuilder::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crmf::EncryptedValueBuilder::PadData)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2689160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>::get(), "PadData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IKeyWrapper*& Org::BouncyCastle::Crmf::EncryptedValueBuilder::__cordl_internal_get_wrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wrapper;
}
constexpr ::Org::BouncyCastle::Crypto::IKeyWrapper* const& Org::BouncyCastle::Crmf::EncryptedValueBuilder::__cordl_internal_get_wrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wrapper;
}
constexpr void Org::BouncyCastle::Crmf::EncryptedValueBuilder::__cordl_internal_set_wrapper(::Org::BouncyCastle::Crypto::IKeyWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___wrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*& Org::BouncyCastle::Crmf::EncryptedValueBuilder::__cordl_internal_get_encryptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptor;
}
constexpr ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* const& Org::BouncyCastle::Crmf::EncryptedValueBuilder::__cordl_internal_get_encryptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptor;
}
constexpr void Org::BouncyCastle::Crmf::EncryptedValueBuilder::__cordl_internal_set_encryptor(::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___encryptor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crmf::IEncryptedValuePadder*& Org::BouncyCastle::Crmf::EncryptedValueBuilder::__cordl_internal_get_padder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___padder;
}
constexpr ::Org::BouncyCastle::Crmf::IEncryptedValuePadder* const& Org::BouncyCastle::Crmf::EncryptedValueBuilder::__cordl_internal_get_padder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___padder;
}
constexpr void Org::BouncyCastle::Crmf::EncryptedValueBuilder::__cordl_internal_set_padder(::Org::BouncyCastle::Crmf::IEncryptedValuePadder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___padder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crmf::EncryptedValueBuilder::_ctor(::Org::BouncyCastle::Crypto::IKeyWrapper* wrapper, ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* encryptor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IKeyWrapper*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, wrapper, encryptor);
}
inline void Org::BouncyCastle::Crmf::EncryptedValueBuilder::_ctor(::Org::BouncyCastle::Crypto::IKeyWrapper* wrapper, ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* encryptor,
                                                                  ::Org::BouncyCastle::Crmf::IEncryptedValuePadder* padder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IKeyWrapper*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crmf::IEncryptedValuePadder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, wrapper, encryptor, padder);
}
inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* Org::BouncyCastle::Crmf::EncryptedValueBuilder::Build(::ArrayW<char16_t, ::Array<char16_t>*> revocationPassphrase) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*, false>(this, ___internal_method, revocationPassphrase);
}
inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* Org::BouncyCastle::Crmf::EncryptedValueBuilder::Build(::Org::BouncyCastle::X509::X509Certificate* holder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*, false>(this, ___internal_method, holder);
}
inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* Org::BouncyCastle::Crmf::EncryptedValueBuilder::Build(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privateKeyInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*, false>(this, ___internal_method, privateKeyInfo);
}
inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* Org::BouncyCastle::Crmf::EncryptedValueBuilder::EncryptData(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>::get(), "EncryptData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*, false>(this, ___internal_method, data);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crmf::EncryptedValueBuilder::PadData(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>::get(), "PadData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, data);
}
inline ::Org::BouncyCastle::Crmf::EncryptedValueBuilder* Org::BouncyCastle::Crmf::EncryptedValueBuilder::New_ctor(::Org::BouncyCastle::Crypto::IKeyWrapper* wrapper,
                                                                                                                  ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* encryptor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>(wrapper, encryptor));
}
inline ::Org::BouncyCastle::Crmf::EncryptedValueBuilder* Org::BouncyCastle::Crmf::EncryptedValueBuilder::New_ctor(::Org::BouncyCastle::Crypto::IKeyWrapper* wrapper,
                                                                                                                  ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* encryptor,
                                                                                                                  ::Org::BouncyCastle::Crmf::IEncryptedValuePadder* padder) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>(wrapper, encryptor, padder));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crmf::EncryptedValueBuilder::EncryptedValueBuilder() {}
