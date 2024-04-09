#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__IesParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::IesParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::IesParameters::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Crypto::Parameters::IesParameters::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x10a1d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::IesParameters*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::IesParameters.GetDerivationV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Parameters::IesParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::IesParameters::GetDerivationV)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10a1db0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::IesParameters*>::get(),
                                                                               "GetDerivationV", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::IesParameters.GetEncodingV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Parameters::IesParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::IesParameters::GetEncodingV)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10a1db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::IesParameters*>::get(),
                                                                               "GetEncodingV", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::IesParameters.get_MacKeySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Parameters::IesParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::IesParameters::get_MacKeySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10a1dc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::IesParameters*>::get(),
                                                                               "get_MacKeySize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
constexpr Org::BouncyCastle::Crypto::Parameters::IesParameters::operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipherParameters*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherParameters"
constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Parameters::IesParameters::i___Org__BouncyCastle__Crypto__ICipherParameters() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipherParameters*>(static_cast<void*>(this));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Parameters::IesParameters::__cordl_internal_get_derivation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___derivation;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Parameters::IesParameters::__cordl_internal_get_derivation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___derivation;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::IesParameters::__cordl_internal_set_derivation(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___derivation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Parameters::IesParameters::__cordl_internal_get_encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoding;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Parameters::IesParameters::__cordl_internal_get_encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoding;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::IesParameters::__cordl_internal_set_encoding(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___encoding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Parameters::IesParameters::__cordl_internal_get_macKeySize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macKeySize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Parameters::IesParameters::__cordl_internal_get_macKeySize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macKeySize;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::IesParameters::__cordl_internal_set_macKeySize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___macKeySize = value;
}
inline ::Org::BouncyCastle::Crypto::Parameters::IesParameters* Org::BouncyCastle::Crypto::Parameters::IesParameters::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> derivation,
                                                                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> encoding, int32_t macKeySize) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Parameters::IesParameters*>(derivation, encoding, macKeySize));
}
inline void Org::BouncyCastle::Crypto::Parameters::IesParameters::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> derivation, ::ArrayW<uint8_t, ::Array<uint8_t>*> encoding, int32_t macKeySize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::IesParameters*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, derivation, encoding, macKeySize);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Parameters::IesParameters::GetDerivationV() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::IesParameters*>::get(),
                                                                             "GetDerivationV", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Parameters::IesParameters::GetEncodingV() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::IesParameters*>::get(),
                                                                             "GetEncodingV", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Parameters::IesParameters::get_MacKeySize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::IesParameters*>::get(),
                                                                             "get_MacKeySize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::IesParameters::IesParameters() {}
