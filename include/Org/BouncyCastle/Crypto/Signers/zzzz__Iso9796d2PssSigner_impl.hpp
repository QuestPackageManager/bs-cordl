#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Signers/Iso9796d2PssSigner.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISignerWithRecovery_impl.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__Iso9796d2PssSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner.GetRecoveredMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::GetRecoveredMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d651c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(),
                                                                               "GetRecoveredMessage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::*)(
    ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::Org::BouncyCastle::Crypto::IDigest*, int32_t, bool)>(&::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x23d6524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::*)(
    ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::Org::BouncyCastle::Crypto::IDigest*, int32_t)>(&::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d698c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x23d6994;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::*)(
    bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::Init)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x23d6a54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner.IsSameAs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::IsSameAs)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x23d6e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), "IsSameAs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner.ClearBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::ClearBlock)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23d6ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), "ClearBlock", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner.UpdateWithRecoveredMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::UpdateWithRecoveredMessage)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x23d6efc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::Update)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23d77d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner.BlockUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::BlockUpdate)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x23d78c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::Reset)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x23d7a0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner.GenerateSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::GenerateSignature)> {
  constexpr static std::size_t size = 0x6c8;
  constexpr static std::size_t addrs = 0x23d7af0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner.VerifySignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::VerifySignature)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x23d824c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner.HasFullMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::HasFullMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d88dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner.ItoOSP
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::*)(int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::ItoOSP)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23d88e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), "ItoOSP", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner.LtoOSP
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::*)(int64_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::LtoOSP)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x23d81b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), "LtoOSP", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner.MaskGeneratorFunction1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::MaskGeneratorFunction1)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x23d7380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), "MaskGeneratorFunction1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_digest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_digest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___digest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_cipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* const& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_cipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cipher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___random)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_standardSalt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standardSalt;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_standardSalt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standardSalt;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_set_standardSalt(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___standardSalt)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_hLen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hLen;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_hLen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hLen;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_set_hLen(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hLen = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_trailer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailer;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_trailer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailer;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_set_trailer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trailer = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_keyBits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyBits;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_keyBits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyBits;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_set_keyBits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyBits = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_block() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___block;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_block() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___block;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_set_block(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___block)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_mBuf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBuf;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_mBuf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBuf;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_set_mBuf(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mBuf)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_messageLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageLength;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_messageLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageLength;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_set_messageLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___messageLength = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_saltLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saltLength;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_saltLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saltLength;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_set_saltLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saltLength = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_fullMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullMessage;
}
constexpr bool const& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_fullMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullMessage;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_set_fullMessage(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fullMessage = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_recoveredMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recoveredMessage;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_recoveredMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recoveredMessage;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_set_recoveredMessage(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___recoveredMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_preSig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preSig;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_preSig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preSig;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_set_preSig(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___preSig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_preBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preBlock;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_preBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preBlock;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_set_preBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___preBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_preMStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preMStart;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_preMStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preMStart;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_set_preMStart(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___preMStart = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_preTLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preTLength;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_get_preTLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preTLength;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::__cordl_internal_set_preTLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___preTLength = value;
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::GetRecoveredMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(),
                                                                             "GetRecoveredMessage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* digest, int32_t saltLength,
                                                                          bool isImplicit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cipher, digest, saltLength, isImplicit);
}
inline void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                          int32_t saltLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cipher, digest, saltLength);
}
inline ::StringW Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, forSigning, parameters);
}
inline bool Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::IsSameAs(::ArrayW<uint8_t, ::Array<uint8_t>*> a, ::ArrayW<uint8_t, ::Array<uint8_t>*> b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), "IsSameAs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, a, b);
}
inline void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::ClearBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> block) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), "ClearBlock", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, block);
}
inline void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::UpdateWithRecoveredMessage(::ArrayW<uint8_t, ::Array<uint8_t>*> signature) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signature);
}
inline void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::Update(uint8_t input) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, inOff, length);
}
inline void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::Reset() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::GenerateSignature() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> signature) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, signature);
}
inline bool Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::HasFullMessage() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::ItoOSP(int32_t i, ::ArrayW<uint8_t, ::Array<uint8_t>*> sp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), "ItoOSP", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i, sp);
}
inline void Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::LtoOSP(int64_t l, ::ArrayW<uint8_t, ::Array<uint8_t>*> sp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), "LtoOSP", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, l, sp);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::MaskGeneratorFunction1(::ArrayW<uint8_t, ::Array<uint8_t>*> Z, int32_t zOff, int32_t zLen,
                                                                                                                           int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>::get(), "MaskGeneratorFunction1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, Z, zOff, zLen, length);
}
inline ::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner* Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher,
                                                                                                                                  ::Org::BouncyCastle::Crypto::IDigest* digest, int32_t saltLength,
                                                                                                                                  bool isImplicit) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>(cipher, digest, saltLength, isImplicit));
}
inline ::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner* Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher,
                                                                                                                                  ::Org::BouncyCastle::Crypto::IDigest* digest, int32_t saltLength) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner*>(cipher, digest, saltLength));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISignerWithRecovery"
constexpr Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::operator ::Org::BouncyCastle::Crypto::ISignerWithRecovery*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ISignerWithRecovery*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::ISignerWithRecovery"
constexpr ::Org::BouncyCastle::Crypto::ISignerWithRecovery* Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::i___Org__BouncyCastle__Crypto__ISignerWithRecovery() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ISignerWithRecovery*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
constexpr Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ISigner*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::ISigner"
constexpr ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::i___Org__BouncyCastle__Crypto__ISigner() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ISigner*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Signers::Iso9796d2PssSigner::Iso9796d2PssSigner() {}
