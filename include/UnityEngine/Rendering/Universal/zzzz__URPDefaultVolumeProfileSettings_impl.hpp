#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/URPDefaultVolumeProfileSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__URPDefaultVolumeProfileSettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__URPDefaultVolumeProfileSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDefaultVolumeProfileSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeProfile_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings_Version::URPDefaultVolumeProfileSettings_Version(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings_Version::URPDefaultVolumeProfileSettings_Version() {}
constexpr ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings_Version UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings_Version::Initial{ static_cast<int32_t>(0x0) };
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings.get_version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::*)()>(
    &::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x669a314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings*>::get(), "get_version",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings.get_volumeProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Rendering::VolumeProfile> (
    ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::*)()>(&::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::get_volumeProfile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x669a31c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings*>::get(),
                                                 "get_volumeProfile", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings.set_volumeProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::*)(
    ::UnityEngine::Rendering::VolumeProfile*)>(&::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::set_volumeProfile)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x669a324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings*>::get(), "set_volumeProfile",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeProfile*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::*)()>(
    &::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x669a394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings_Version& UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings_Version const&
UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::__cordl_internal_set_m_Version(::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings_Version value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::__cordl_internal_get_m_VolumeProfile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeProfile;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::__cordl_internal_get_m_VolumeProfile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeProfile;
}
constexpr void UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::__cordl_internal_set_m_VolumeProfile(::UnityW<::UnityEngine::Rendering::VolumeProfile> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VolumeProfile)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::get_version() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings*>::get(), "get_version",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rendering::VolumeProfile> UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::get_volumeProfile() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings*>::get(),
                                               "get_volumeProfile", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::VolumeProfile>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::set_volumeProfile(::UnityEngine::Rendering::VolumeProfile* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings*>::get(), "set_volumeProfile",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeProfile*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings* UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IDefaultVolumeProfileSettings"
constexpr UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::operator ::UnityEngine::Rendering::IDefaultVolumeProfileSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IDefaultVolumeProfileSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IDefaultVolumeProfileSettings"
constexpr ::UnityEngine::Rendering::IDefaultVolumeProfileSettings*
UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::i___UnityEngine__Rendering__IDefaultVolumeProfileSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IDefaultVolumeProfileSettings*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*
UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::URPDefaultVolumeProfileSettings() {}
