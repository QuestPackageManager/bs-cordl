#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CounterSignatureDigestCalculator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CounterSignatureDigestCalculator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__IDigestCalculator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::*)(
    ::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2635220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator.GetDigest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::*)()>(
    &::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::GetDigest)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x263524c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator*>::get(), "GetDigest",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Cms::IDigestCalculator"
constexpr Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::operator ::Org::BouncyCastle::Cms::IDigestCalculator*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::IDigestCalculator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Cms::IDigestCalculator"
constexpr ::Org::BouncyCastle::Cms::IDigestCalculator* Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::i___Org__BouncyCastle__Cms__IDigestCalculator() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::IDigestCalculator*>(static_cast<void*>(this));
}
constexpr ::StringW& Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::__cordl_internal_get_alg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alg;
}
constexpr ::StringW const& Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::__cordl_internal_get_alg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alg;
}
constexpr void Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::__cordl_internal_set_alg(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___alg)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::__cordl_internal_set_data(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator* Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::New_ctor(::StringW alg, ::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator*>(alg, data));
}
inline void Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::_ctor(::StringW alg, ::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alg, data);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::GetDigest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator*>::get(),
                                                                             "GetDigest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::CounterSignatureDigestCalculator() {}
