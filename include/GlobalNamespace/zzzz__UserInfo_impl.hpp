#pragma once
// IWYU pragma private; include "GlobalNamespace\UserInfo.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserInfo::*)(::GlobalNamespace::UserInfo_Platform, ::StringW, ::StringW)>(&::GlobalNamespace::UserInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f40cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UserInfo*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::UserInfo_Platform>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
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
  this->___platformUserId = value;
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
  this->___userName = value;
}
inline void GlobalNamespace::UserInfo::_ctor(::GlobalNamespace::UserInfo_Platform platform, ::StringW platformUserId, ::StringW userName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UserInfo*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::UserInfo_Platform>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, platform, platformUserId, userName);
}
inline ::GlobalNamespace::UserInfo* GlobalNamespace::UserInfo::New_ctor(::GlobalNamespace::UserInfo_Platform platform, ::StringW platformUserId, ::StringW userName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UserInfo*>(platform, platformUserId, userName));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UserInfo::UserInfo() {}
