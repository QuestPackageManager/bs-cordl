#pragma once
// IWYU pragma private; include "GlobalNamespace/GetXPlatformAccessTokenResponse.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GetXPlatformAccessTokenResponse_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GetXPlatformAccessTokenResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GetXPlatformAccessTokenResponse::*)(::StringW)>(
    &::GlobalNamespace::GetXPlatformAccessTokenResponse::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4009840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GetXPlatformAccessTokenResponse*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GetXPlatformAccessTokenResponse::__cordl_internal_get_accessToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accessToken;
}
constexpr ::StringW const& GlobalNamespace::GetXPlatformAccessTokenResponse::__cordl_internal_get_accessToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accessToken;
}
constexpr void GlobalNamespace::GetXPlatformAccessTokenResponse::__cordl_internal_set_accessToken(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___accessToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::GetXPlatformAccessTokenResponse* GlobalNamespace::GetXPlatformAccessTokenResponse::New_ctor(::StringW accessToken) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GetXPlatformAccessTokenResponse*>(accessToken));
}
inline void GlobalNamespace::GetXPlatformAccessTokenResponse::_ctor(::StringW accessToken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GetXPlatformAccessTokenResponse*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accessToken);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GetXPlatformAccessTokenResponse::GetXPlatformAccessTokenResponse() {}
