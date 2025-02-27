#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Signers/Ed25519Signer.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_impl.hpp"
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__Ed25519Signer_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Ed25519PrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Ed25519PublicKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__Ed25519Signer_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer.GenerateSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer::*)(
    ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*)>(&::Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer::GenerateSignature)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x23d6bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer*>::get(), "GenerateSignature", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer.VerifySignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer::*)(
    ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer::VerifySignature)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x23d6de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer*>::get(), "VerifySignature", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer::Reset)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23d6fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer*>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d6a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t, ::Array<uint8_t>*>
Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer::GenerateSignature(::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* privateKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer*>::get(), "GenerateSignature", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, privateKey);
}
inline bool Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer::VerifySignature(::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* publicKey,
                                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> signature) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer*>::get(), "VerifySignature", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, publicKey, signature);
}
inline void Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer*>::get(),
                                                                             "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer* Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer::Ed25519Signer_Buffer() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x23d69ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23d6a14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Init)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x23d6a54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Update)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23d6b34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer.BlockUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::BlockUpdate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23d6b58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer.GenerateSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::GenerateSignature)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23d6b7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer.VerifySignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::VerifySignature)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23d6d74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Reset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23d6f9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(), 17));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer*& Org::BouncyCastle::Crypto::Signers::Ed25519Signer::__cordl_internal_get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer* const& Org::BouncyCastle::Crypto::Signers::Ed25519Signer::__cordl_internal_get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Ed25519Signer::__cordl_internal_set_buffer(::Org::BouncyCastle::Crypto::Signers::Ed25519Signer_Buffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Crypto::Signers::Ed25519Signer::__cordl_internal_get_forSigning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forSigning;
}
constexpr bool const& Org::BouncyCastle::Crypto::Signers::Ed25519Signer::__cordl_internal_get_forSigning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forSigning;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Ed25519Signer::__cordl_internal_set_forSigning(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forSigning = value;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*& Org::BouncyCastle::Crypto::Signers::Ed25519Signer::__cordl_internal_get_privateKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateKey;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* const& Org::BouncyCastle::Crypto::Signers::Ed25519Signer::__cordl_internal_get_privateKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateKey;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Ed25519Signer::__cordl_internal_set_privateKey(::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___privateKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*& Org::BouncyCastle::Crypto::Signers::Ed25519Signer::__cordl_internal_get_publicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKey;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* const& Org::BouncyCastle::Crypto::Signers::Ed25519Signer::__cordl_internal_get_publicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKey;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Ed25519Signer::__cordl_internal_set_publicKey(::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___publicKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Signers::Ed25519Signer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Crypto::Signers::Ed25519Signer::get_AlgorithmName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, forSigning, parameters);
}
inline void Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Update(uint8_t b) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Crypto::Signers::Ed25519Signer::BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buf, off, len);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Signers::Ed25519Signer::GenerateSignature() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Signers::Ed25519Signer::VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> signature) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, signature);
}
inline void Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Reset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer* Org::BouncyCastle::Crypto::Signers::Ed25519Signer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
constexpr Org::BouncyCastle::Crypto::Signers::Ed25519Signer::operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ISigner*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::ISigner"
constexpr ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Crypto::Signers::Ed25519Signer::i___Org__BouncyCastle__Crypto__ISigner() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ISigner*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Ed25519Signer() {}
