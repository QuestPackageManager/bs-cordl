#pragma once
// IWYU pragma private; include "GlobalNamespace/GetXPlatformAccessTokenRequestSteam.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GetXPlatformAccessTokenRequestSteam_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GetXPlatformAccessTokenRequestSteam._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GetXPlatformAccessTokenRequestSteam::*)(::StringW, int64_t)>(
    &::GlobalNamespace::GetXPlatformAccessTokenRequestSteam::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x408e0fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GetXPlatformAccessTokenRequestSteam*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GetXPlatformAccessTokenRequestSteam::__cordl_internal_get_platformToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platformToken;
}
constexpr ::StringW const& GlobalNamespace::GetXPlatformAccessTokenRequestSteam::__cordl_internal_get_platformToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platformToken;
}
constexpr void GlobalNamespace::GetXPlatformAccessTokenRequestSteam::__cordl_internal_set_platformToken(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___platformToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& GlobalNamespace::GetXPlatformAccessTokenRequestSteam::__cordl_internal_get_platformUserId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platformUserId;
}
constexpr int64_t const& GlobalNamespace::GetXPlatformAccessTokenRequestSteam::__cordl_internal_get_platformUserId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platformUserId;
}
constexpr void GlobalNamespace::GetXPlatformAccessTokenRequestSteam::__cordl_internal_set_platformUserId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___platformUserId = value;
}
inline void GlobalNamespace::GetXPlatformAccessTokenRequestSteam::_ctor(::StringW platformToken, int64_t platformUserId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GetXPlatformAccessTokenRequestSteam*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, platformToken, platformUserId);
}
inline ::GlobalNamespace::GetXPlatformAccessTokenRequestSteam* GlobalNamespace::GetXPlatformAccessTokenRequestSteam::New_ctor(::StringW platformToken, int64_t platformUserId) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GetXPlatformAccessTokenRequestSteam*>(platformToken, platformUserId));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GetXPlatformAccessTokenRequestSteam::GetXPlatformAccessTokenRequestSteam() {}
