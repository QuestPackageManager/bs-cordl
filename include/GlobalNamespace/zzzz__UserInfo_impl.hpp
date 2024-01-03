#pragma once
#include "GlobalNamespace/zzzz__UserInfo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__UserInfo__Platform::__UserInfo__Platform(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UserInfo__Platform::__UserInfo__Platform() {}
constexpr ::GlobalNamespace::__UserInfo__Platform GlobalNamespace::__UserInfo__Platform::Test{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__UserInfo__Platform GlobalNamespace::__UserInfo__Platform::Steam{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__UserInfo__Platform GlobalNamespace::__UserInfo__Platform::Oculus{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__UserInfo__Platform GlobalNamespace::__UserInfo__Platform::PS4{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__UserInfo__Platform GlobalNamespace::__UserInfo__Platform::PS5{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::GlobalNamespace::UserInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UserInfo::*)(::GlobalNamespace::__UserInfo__Platform, ::StringW, ::StringW)>(
    &::GlobalNamespace::UserInfo::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x27fe0dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UserInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__UserInfo__Platform>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__UserInfo__Platform& GlobalNamespace::UserInfo::__get_platform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platform;
}
constexpr ::GlobalNamespace::__UserInfo__Platform const& GlobalNamespace::UserInfo::__get_platform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platform;
}
constexpr void GlobalNamespace::UserInfo::__set_platform(::GlobalNamespace::__UserInfo__Platform value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___platform = value;
}
constexpr ::StringW& GlobalNamespace::UserInfo::__get_platformUserId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platformUserId;
}
constexpr ::StringW const& GlobalNamespace::UserInfo::__get_platformUserId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platformUserId;
}
constexpr void GlobalNamespace::UserInfo::__set_platformUserId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___platformUserId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::UserInfo::__get_userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userName;
}
constexpr ::StringW const& GlobalNamespace::UserInfo::__get_userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userName;
}
constexpr void GlobalNamespace::UserInfo::__set_userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::UserInfo* GlobalNamespace::UserInfo::New_ctor(::GlobalNamespace::__UserInfo__Platform platform, ::StringW platformUserId, ::StringW userName) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::UserInfo*>(platform, platformUserId, userName));
}
inline void GlobalNamespace::UserInfo::_ctor(::GlobalNamespace::__UserInfo__Platform platform, ::StringW platformUserId, ::StringW userName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UserInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__UserInfo__Platform>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, platform, platformUserId, userName);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UserInfo::UserInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
