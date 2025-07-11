#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsNullCipher.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipher_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsNullCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsMac_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsNullCipher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsNullCipher::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsNullCipher::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2433b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsNullCipher*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsNullCipher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsNullCipher::*)(
    ::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Crypto::IDigest*)>(&::Org::BouncyCastle::Crypto::Tls::TlsNullCipher::_ctor)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x2433b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsNullCipher*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsNullCipher.GetPlaintextLimit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::TlsNullCipher::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsNullCipher::GetPlaintextLimit)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x243417c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsNullCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsNullCipher*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsNullCipher.EncodePlaintext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::TlsNullCipher::*)(
    int64_t, uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsNullCipher::EncodePlaintext)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x24341a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsNullCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsNullCipher*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsNullCipher.DecodeCiphertext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::TlsNullCipher::*)(
    int64_t, uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsNullCipher::DecodeCiphertext)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x24342d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsNullCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsNullCipher*>::get(), 9));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& Org::BouncyCastle::Crypto::Tls::TlsNullCipher::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* const& Org::BouncyCastle::Crypto::Tls::TlsNullCipher::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsNullCipher::__cordl_internal_set_context(::Org::BouncyCastle::Crypto::Tls::TlsContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac*& Org::BouncyCastle::Crypto::Tls::TlsNullCipher::__cordl_internal_get_writeMac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeMac;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac* const& Org::BouncyCastle::Crypto::Tls::TlsNullCipher::__cordl_internal_get_writeMac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeMac;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsNullCipher::__cordl_internal_set_writeMac(::Org::BouncyCastle::Crypto::Tls::TlsMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___writeMac)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac*& Org::BouncyCastle::Crypto::Tls::TlsNullCipher::__cordl_internal_get_readMac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readMac;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac* const& Org::BouncyCastle::Crypto::Tls::TlsNullCipher::__cordl_internal_get_readMac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readMac;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsNullCipher::__cordl_internal_set_readMac(::Org::BouncyCastle::Crypto::Tls::TlsMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___readMac)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsNullCipher::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsNullCipher*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsNullCipher::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::IDigest* clientWriteDigest,
                                                                 ::Org::BouncyCastle::Crypto::IDigest* serverWriteDigest) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsNullCipher*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, clientWriteDigest, serverWriteDigest);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsNullCipher::GetPlaintextLimit(int32_t ciphertextLimit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsNullCipher*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, ciphertextLimit);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::TlsNullCipher::EncodePlaintext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> plaintext, int32_t offset,
                                                                                                           int32_t len) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsNullCipher*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, seqNo, type, plaintext, offset, len);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::TlsNullCipher::DecodeCiphertext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> ciphertext,
                                                                                                            int32_t offset, int32_t len) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsNullCipher*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, seqNo, type, ciphertext, offset, len);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsNullCipher* Org::BouncyCastle::Crypto::Tls::TlsNullCipher::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::TlsNullCipher*>(context));
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsNullCipher* Org::BouncyCastle::Crypto::Tls::TlsNullCipher::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                                ::Org::BouncyCastle::Crypto::IDigest* clientWriteDigest,
                                                                                                                ::Org::BouncyCastle::Crypto::IDigest* serverWriteDigest) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::TlsNullCipher*>(context, clientWriteDigest, serverWriteDigest));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCipher"
constexpr Org::BouncyCastle::Crypto::Tls::TlsNullCipher::operator ::Org::BouncyCastle::Crypto::Tls::TlsCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCipher"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipher* Org::BouncyCastle::Crypto::Tls::TlsNullCipher::i___Org__BouncyCastle__Crypto__Tls__TlsCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsNullCipher::TlsNullCipher() {}
