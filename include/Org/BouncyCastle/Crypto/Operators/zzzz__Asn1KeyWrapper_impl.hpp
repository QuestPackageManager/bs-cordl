#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Operators/Asn1KeyWrapper.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IKeyWrapper_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__Asn1KeyWrapper_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockResult_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IKeyWrapper_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::*)(
    ::StringW, ::Org::BouncyCastle::X509::X509Certificate*)>(&::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x23b16d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper.get_AlgorithmDetails
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::*)()>(
    &::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::get_AlgorithmDetails)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x23b19ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper*>::get(),
                                                                               "get_AlgorithmDetails", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper.Wrap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IBlockResult* (
    ::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::Wrap)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23b1a4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper*>::get(), "Wrap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::__cordl_internal_get_algorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr ::StringW const& Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::__cordl_internal_get_algorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr void Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::__cordl_internal_set_algorithm(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___algorithm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::IKeyWrapper*& Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::__cordl_internal_get_wrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wrapper;
}
constexpr ::Org::BouncyCastle::Crypto::IKeyWrapper* const& Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::__cordl_internal_get_wrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wrapper;
}
constexpr void Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::__cordl_internal_set_wrapper(::Org::BouncyCastle::Crypto::IKeyWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___wrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::_ctor(::StringW algorithm, ::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, algorithm, cert);
}
inline ::System::Object* Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::get_AlgorithmDetails() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper*>::get(),
                                                                             "get_AlgorithmDetails", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IBlockResult* Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::Wrap(::ArrayW<uint8_t, ::Array<uint8_t>*> keyData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper*>::get(), "Wrap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBlockResult*, false>(this, ___internal_method, keyData);
}
inline ::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper* Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::New_ctor(::StringW algorithm, ::Org::BouncyCastle::X509::X509Certificate* cert) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper*>(algorithm, cert));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IKeyWrapper"
constexpr Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::operator ::Org::BouncyCastle::Crypto::IKeyWrapper*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IKeyWrapper*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IKeyWrapper"
constexpr ::Org::BouncyCastle::Crypto::IKeyWrapper* Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::i___Org__BouncyCastle__Crypto__IKeyWrapper() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IKeyWrapper*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::Asn1KeyWrapper() {}
