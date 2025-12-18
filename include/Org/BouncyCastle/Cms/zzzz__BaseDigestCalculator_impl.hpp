#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/BaseDigestCalculator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__BaseDigestCalculator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__IDigestCalculator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::BaseDigestCalculator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::BaseDigestCalculator::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Cms::BaseDigestCalculator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35a8c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::BaseDigestCalculator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::BaseDigestCalculator.GetDigest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Cms::BaseDigestCalculator::*)()>(
    &::Org::BouncyCastle::Cms::BaseDigestCalculator::GetDigest)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x35a8c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::BaseDigestCalculator*>::get(),
                                                                               "GetDigest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Cms::BaseDigestCalculator::__cordl_internal_get_digest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Cms::BaseDigestCalculator::__cordl_internal_get_digest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr void Org::BouncyCastle::Cms::BaseDigestCalculator::__cordl_internal_set_digest(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___digest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Cms::BaseDigestCalculator::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> digest) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::BaseDigestCalculator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, digest);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Cms::BaseDigestCalculator::GetDigest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::BaseDigestCalculator*>::get(),
                                                                             "GetDigest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::BaseDigestCalculator* Org::BouncyCastle::Cms::BaseDigestCalculator::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> digest) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::BaseDigestCalculator*>(digest));
}
/// @brief Convert operator to "::Org::BouncyCastle::Cms::IDigestCalculator"
constexpr Org::BouncyCastle::Cms::BaseDigestCalculator::operator ::Org::BouncyCastle::Cms::IDigestCalculator*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::IDigestCalculator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Cms::IDigestCalculator"
constexpr ::Org::BouncyCastle::Cms::IDigestCalculator* Org::BouncyCastle::Cms::BaseDigestCalculator::i___Org__BouncyCastle__Cms__IDigestCalculator() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::IDigestCalculator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::BaseDigestCalculator::BaseDigestCalculator() {}
