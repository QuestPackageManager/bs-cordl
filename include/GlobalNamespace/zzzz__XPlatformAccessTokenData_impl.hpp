#pragma once
// IWYU pragma private; include "GlobalNamespace/XPlatformAccessTokenData.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_impl.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XPlatformAccessTokenData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::XPlatformAccessTokenData::*)(::StringW, ::GlobalNamespace::PlatformEnvironment)>(
    &::GlobalNamespace::XPlatformAccessTokenData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22e2054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XPlatformAccessTokenData.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::XPlatformAccessTokenData::*)()>(&::GlobalNamespace::XPlatformAccessTokenData::IsValid)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22e2060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenData>::get(), "IsValid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XPlatformAccessTokenData::setStaticF_invalid(::GlobalNamespace::XPlatformAccessTokenData value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::XPlatformAccessTokenData, "invalid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenData>::get>(
      std::forward<::GlobalNamespace::XPlatformAccessTokenData>(value));
}
inline ::GlobalNamespace::XPlatformAccessTokenData GlobalNamespace::XPlatformAccessTokenData::getStaticF_invalid() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::XPlatformAccessTokenData, "invalid",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenData>::get>();
}
inline void GlobalNamespace::XPlatformAccessTokenData::_ctor(::StringW token, ::GlobalNamespace::PlatformEnvironment platformEnvironment) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token, platformEnvironment);
}
inline bool GlobalNamespace::XPlatformAccessTokenData::IsValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenData>::get(), "IsValid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "token", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "platformEnvironment", ty: "::GlobalNamespace::PlatformEnvironment", modifiers:
// "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::XPlatformAccessTokenData::XPlatformAccessTokenData(::StringW token, ::GlobalNamespace::PlatformEnvironment platformEnvironment) noexcept {
  this->token = token;
  this->platformEnvironment = platformEnvironment;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XPlatformAccessTokenData::XPlatformAccessTokenData() {}
