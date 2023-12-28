#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Modes/Gcm/zzzz__Tables8kGcmMultiplier_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/Gcm/zzzz__IGcmMultiplier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::Init)> {
  constexpr static std::size_t size = 0x85c;
  constexpr static std::size_t addrs = 0xf142c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier*>::get(), "Init", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier.MultiplyH
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::MultiplyH)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xf14b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier*>::get(), "MultiplyH", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf14d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier"
constexpr Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::operator ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*>(static_cast<void*>(this));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::__get_H() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___H;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::__get_H() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___H;
}
constexpr void Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::__set_H(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___H)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>,
                   ::Array<::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>>*>&
Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::__get_M() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___M;
}
constexpr ::ArrayW<::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>,
                   ::Array<::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>>*> const&
Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::__get_M() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___M;
}
constexpr void
Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::__set_M(::ArrayW<::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>,
                                                                               ::Array<::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>>*>
                                                                          value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___M)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::Init(::ArrayW<uint8_t, ::Array<uint8_t>*> H) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier*>::get(), "Init", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, H);
}
inline void Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::MultiplyH(::ArrayW<uint8_t, ::Array<uint8_t>*> x) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier*>::get(), "MultiplyH",
                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x);
}
inline ::Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier* Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier*>());
}
inline void Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::Tables8kGcmMultiplier() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
