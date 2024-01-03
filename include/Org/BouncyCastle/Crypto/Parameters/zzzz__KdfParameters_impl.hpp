#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KdfParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::KdfParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::KdfParameters::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Parameters::KdfParameters::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xf387f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::KdfParameters*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::KdfParameters.GetSharedSecret
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Parameters::KdfParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::KdfParameters::GetSharedSecret)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf38824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::KdfParameters*>::get(),
                                                                               "GetSharedSecret", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::KdfParameters.GetIV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Parameters::KdfParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::KdfParameters::GetIV)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf3882c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::KdfParameters*>::get(),
                                                                               "GetIV", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationParameters"
constexpr Org::BouncyCastle::Crypto::Parameters::KdfParameters::operator ::Org::BouncyCastle::Crypto::IDerivationParameters*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDerivationParameters*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IDerivationParameters"
constexpr ::Org::BouncyCastle::Crypto::IDerivationParameters* Org::BouncyCastle::Crypto::Parameters::KdfParameters::i___Org__BouncyCastle__Crypto__IDerivationParameters() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDerivationParameters*>(static_cast<void*>(this));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Parameters::KdfParameters::__get_iv() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iv;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Parameters::KdfParameters::__get_iv() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iv;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::KdfParameters::__set_iv(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___iv)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Parameters::KdfParameters::__get_shared() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shared;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Parameters::KdfParameters::__get_shared() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shared;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::KdfParameters::__set_shared(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___shared)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Parameters::KdfParameters* Org::BouncyCastle::Crypto::Parameters::KdfParameters::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> shared,
                                                                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> iv) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Parameters::KdfParameters*>(shared, iv));
}
inline void Org::BouncyCastle::Crypto::Parameters::KdfParameters::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> shared, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::KdfParameters*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shared, iv);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Parameters::KdfParameters::GetSharedSecret() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::KdfParameters*>::get(),
                                                                             "GetSharedSecret", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Parameters::KdfParameters::GetIV() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::KdfParameters*>::get(),
                                                                             "GetIV", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::KdfParameters::KdfParameters() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
