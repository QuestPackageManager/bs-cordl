#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DigitallySigned.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DigitallySigned_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SignatureAndHashAlgorithm_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DigitallySigned._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DigitallySigned::*)(
    ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Tls::DigitallySigned::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x23ed82c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DigitallySigned.get_Algorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* (
    ::Org::BouncyCastle::Crypto::Tls::DigitallySigned::*)()>(&::Org::BouncyCastle::Crypto::Tls::DigitallySigned::get_Algorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ed8a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DigitallySigned.get_Signature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::DigitallySigned::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DigitallySigned::get_Signature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ed8ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DigitallySigned.Encode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DigitallySigned::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::DigitallySigned::Encode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x23ed8b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DigitallySigned.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::Org::BouncyCastle::Crypto::Tls::DigitallySigned* (*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::DigitallySigned::Parse)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x23e0910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*& Org::BouncyCastle::Crypto::Tls::DigitallySigned::__cordl_internal_get_mAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAlgorithm;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* const& Org::BouncyCastle::Crypto::Tls::DigitallySigned::__cordl_internal_get_mAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAlgorithm;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DigitallySigned::__cordl_internal_set_mAlgorithm(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mAlgorithm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Tls::DigitallySigned::__cordl_internal_get_mSignature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSignature;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Tls::DigitallySigned::__cordl_internal_get_mSignature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSignature;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DigitallySigned::__cordl_internal_set_mSignature(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mSignature)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Tls::DigitallySigned::_ctor(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, algorithm, signature);
}
inline ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* Org::BouncyCastle::Crypto::Tls::DigitallySigned::get_Algorithm() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::DigitallySigned::get_Signature() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DigitallySigned::Encode(::System::IO::Stream* output) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output);
}
inline ::Org::BouncyCastle::Crypto::Tls::DigitallySigned* Org::BouncyCastle::Crypto::Tls::DigitallySigned::Parse(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::System::IO::Stream* input) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*, false>(nullptr, ___internal_method, context, input);
}
inline ::Org::BouncyCastle::Crypto::Tls::DigitallySigned* Org::BouncyCastle::Crypto::Tls::DigitallySigned::New_ctor(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm,
                                                                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> signature) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>(algorithm, signature));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DigitallySigned::DigitallySigned() {}
