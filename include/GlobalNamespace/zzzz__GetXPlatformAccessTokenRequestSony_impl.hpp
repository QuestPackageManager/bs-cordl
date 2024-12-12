#pragma once
// IWYU pragma private; include "GlobalNamespace/GetXPlatformAccessTokenRequestSony.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GetXPlatformAccessTokenRequestSony_def.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GetXPlatformAccessTokenRequestSony._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GetXPlatformAccessTokenRequestSony::*)(::StringW, ::GlobalNamespace::PlatformEnvironment)>(
    &::GlobalNamespace::GetXPlatformAccessTokenRequestSony::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x407f210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GetXPlatformAccessTokenRequestSony*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GetXPlatformAccessTokenRequestSony::__cordl_internal_get_platformToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platformToken;
}
constexpr ::StringW const& GlobalNamespace::GetXPlatformAccessTokenRequestSony::__cordl_internal_get_platformToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platformToken;
}
constexpr void GlobalNamespace::GetXPlatformAccessTokenRequestSony::__cordl_internal_set_platformToken(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___platformToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlatformEnvironment& GlobalNamespace::GetXPlatformAccessTokenRequestSony::__cordl_internal_get_platformEnvironment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platformEnvironment;
}
constexpr ::GlobalNamespace::PlatformEnvironment const& GlobalNamespace::GetXPlatformAccessTokenRequestSony::__cordl_internal_get_platformEnvironment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platformEnvironment;
}
constexpr void GlobalNamespace::GetXPlatformAccessTokenRequestSony::__cordl_internal_set_platformEnvironment(::GlobalNamespace::PlatformEnvironment value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___platformEnvironment = value;
}
inline void GlobalNamespace::GetXPlatformAccessTokenRequestSony::_ctor(::StringW platformToken, ::GlobalNamespace::PlatformEnvironment platformEnvironment) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GetXPlatformAccessTokenRequestSony*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, platformToken, platformEnvironment);
}
inline ::GlobalNamespace::GetXPlatformAccessTokenRequestSony* GlobalNamespace::GetXPlatformAccessTokenRequestSony::New_ctor(::StringW platformToken,
                                                                                                                            ::GlobalNamespace::PlatformEnvironment platformEnvironment) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GetXPlatformAccessTokenRequestSony*>(platformToken, platformEnvironment));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GetXPlatformAccessTokenRequestSony::GetXPlatformAccessTokenRequestSony() {}
