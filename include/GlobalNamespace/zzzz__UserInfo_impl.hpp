#pragma once
// IWYU pragma private; include "GlobalNamespace/UserInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::UserInfo_Platform::UserInfo_Platform(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UserInfo_Platform::UserInfo_Platform() {}
constexpr ::GlobalNamespace::UserInfo_Platform GlobalNamespace::UserInfo_Platform::Test{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::UserInfo_Platform GlobalNamespace::UserInfo_Platform::Steam{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::UserInfo_Platform GlobalNamespace::UserInfo_Platform::Oculus{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::UserInfo_Platform GlobalNamespace::UserInfo_Platform::PS4{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::UserInfo_Platform GlobalNamespace::UserInfo_Platform::PS5{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::GlobalNamespace::UserInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UserInfo::*)(::GlobalNamespace::UserInfo_Platform, ::StringW, ::StringW)>(
    &::GlobalNamespace::UserInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d2b040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UserInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::UserInfo_Platform>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::UserInfo_Platform& GlobalNamespace::UserInfo::__cordl_internal_get_platform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platform;
}
constexpr ::GlobalNamespace::UserInfo_Platform const& GlobalNamespace::UserInfo::__cordl_internal_get_platform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platform;
}
constexpr void GlobalNamespace::UserInfo::__cordl_internal_set_platform(::GlobalNamespace::UserInfo_Platform value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___platform = value;
}
constexpr ::StringW& GlobalNamespace::UserInfo::__cordl_internal_get_platformUserId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platformUserId;
}
constexpr ::StringW const& GlobalNamespace::UserInfo::__cordl_internal_get_platformUserId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platformUserId;
}
constexpr void GlobalNamespace::UserInfo::__cordl_internal_set_platformUserId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___platformUserId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::UserInfo::__cordl_internal_get_userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userName;
}
constexpr ::StringW const& GlobalNamespace::UserInfo::__cordl_internal_get_userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userName;
}
constexpr void GlobalNamespace::UserInfo::__cordl_internal_set_userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::UserInfo::_ctor(::GlobalNamespace::UserInfo_Platform platform, ::StringW platformUserId, ::StringW userName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UserInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::UserInfo_Platform>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, platform, platformUserId, userName);
}
inline ::GlobalNamespace::UserInfo* GlobalNamespace::UserInfo::New_ctor(::GlobalNamespace::UserInfo_Platform platform, ::StringW platformUserId, ::StringW userName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::UserInfo*>(platform, platformUserId, userName));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UserInfo::UserInfo() {}
