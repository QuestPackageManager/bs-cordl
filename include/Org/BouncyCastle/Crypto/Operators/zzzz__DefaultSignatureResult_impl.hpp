#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__DefaultSignatureResult_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockResult_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::*)(::Org::BouncyCastle::Crypto::ISigner*)>(
    &::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xf9dbf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISigner*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult.Collect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::*)()>(
    &::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::Collect)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xf9dc18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult*>::get(), "Collect",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult.Collect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::Collect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xf9dcbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult*>::get(), "Collect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockResult"
constexpr Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::operator ::Org::BouncyCastle::Crypto::IBlockResult*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockResult*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockResult"
constexpr ::Org::BouncyCastle::Crypto::IBlockResult* Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::i___Org__BouncyCastle__Crypto__IBlockResult() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockResult*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::ISigner*& Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::__cordl_internal_get_mSigner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSigner;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ISigner*> const& Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::__cordl_internal_get_mSigner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSigner;
}
constexpr void Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::__cordl_internal_set_mSigner(::Org::BouncyCastle::Crypto::ISigner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mSigner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult* Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::New_ctor(::Org::BouncyCastle::Crypto::ISigner* signer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult*>(signer));
}
inline void Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::_ctor(::Org::BouncyCastle::Crypto::ISigner* signer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISigner*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signer);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::Collect() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult*>::get(), "Collect",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::Collect(::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult*>::get(), "Collect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, sig, sigOff);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::DefaultSignatureResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
