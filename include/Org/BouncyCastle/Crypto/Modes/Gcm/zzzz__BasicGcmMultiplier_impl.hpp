#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Modes/Gcm/zzzz__BasicGcmMultiplier_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/Gcm/zzzz__IGcmMultiplier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::Init)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xf123c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier*>::get(), "Init", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier.MultiplyH
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::MultiplyH)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xf12428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier*>::get(), "MultiplyH", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf124a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier"
constexpr Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::operator ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier"
constexpr ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier* Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::i___Org__BouncyCastle__Crypto__Modes__Gcm__IGcmMultiplier() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*>(static_cast<void*>(this));
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::__get_H() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___H;
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::__get_H() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___H;
}
constexpr void Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::__set_H(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___H)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::Init(::ArrayW<uint8_t, ::Array<uint8_t>*> H) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier*>::get(), "Init", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, H);
}
inline void Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::MultiplyH(::ArrayW<uint8_t, ::Array<uint8_t>*> x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier*>::get(), "MultiplyH", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x);
}
inline ::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier* Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier*>());
}
inline void Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::BasicGcmMultiplier() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
