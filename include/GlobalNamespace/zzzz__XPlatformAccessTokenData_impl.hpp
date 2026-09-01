#pragma once
// IWYU pragma private; include "GlobalNamespace\XPlatformAccessTokenData.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_impl.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XPlatformAccessTokenData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XPlatformAccessTokenData::*)(::StringW, ::GlobalNamespace::PlatformEnvironment)>(
    &::GlobalNamespace::XPlatformAccessTokenData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x333f504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::XPlatformAccessTokenData>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlatformEnvironment>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XPlatformAccessTokenData.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::XPlatformAccessTokenData::*)()>(&::GlobalNamespace::XPlatformAccessTokenData::IsValid)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x333f510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::XPlatformAccessTokenData>(), { "IsValid", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XPlatformAccessTokenData::setStaticF_invalid(::GlobalNamespace::XPlatformAccessTokenData value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::XPlatformAccessTokenData, "invalid", ::GlobalNamespace::XPlatformAccessTokenData>(
      std::forward<::GlobalNamespace::XPlatformAccessTokenData>(value));
}
inline ::GlobalNamespace::XPlatformAccessTokenData GlobalNamespace::XPlatformAccessTokenData::getStaticF_invalid() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::XPlatformAccessTokenData, "invalid", ::GlobalNamespace::XPlatformAccessTokenData>();
}
inline void GlobalNamespace::XPlatformAccessTokenData::_ctor(::StringW token, ::GlobalNamespace::PlatformEnvironment platformEnvironment) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::XPlatformAccessTokenData>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlatformEnvironment>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, token, platformEnvironment);
}
inline bool GlobalNamespace::XPlatformAccessTokenData::IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::XPlatformAccessTokenData>(), { "IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "token", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "platformEnvironment", ty: "::GlobalNamespace::PlatformEnvironment", modifiers:
// "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::XPlatformAccessTokenData::XPlatformAccessTokenData(::StringW token, ::GlobalNamespace::PlatformEnvironment platformEnvironment) noexcept {
  this->token = token;
  this->platformEnvironment = platformEnvironment;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XPlatformAccessTokenData::XPlatformAccessTokenData() {}
