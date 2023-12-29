#pragma once
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__IesParameters_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__IesWithCipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xec1af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters.get_CipherKeySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::get_CipherKeySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xec1b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters*>::get(), "get_CipherKeySize",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::__get_cipherKeySize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipherKeySize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::__get_cipherKeySize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipherKeySize;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::__set_cipherKeySize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cipherKeySize = value;
}
inline ::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters* Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> derivation,
                                                                                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> encoding,
                                                                                                                                                  int32_t macKeySize, int32_t cipherKeySize) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters*>(derivation, encoding, macKeySize, cipherKeySize));
}
inline void Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> derivation, ::ArrayW<uint8_t, ::Array<uint8_t>*> encoding, int32_t macKeySize,
                                                                                  int32_t cipherKeySize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, derivation, encoding, macKeySize, cipherKeySize);
}
inline int32_t Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::get_CipherKeySize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters*>::get(), "get_CipherKeySize",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::IesWithCipherParameters() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
