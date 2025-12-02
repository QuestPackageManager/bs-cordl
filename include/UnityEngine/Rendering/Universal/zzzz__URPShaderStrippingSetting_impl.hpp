#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/URPShaderStrippingSetting.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__URPShaderStrippingSetting_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__URPShaderStrippingSetting_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting_Version::URPShaderStrippingSetting_Version(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting_Version::URPShaderStrippingSetting_Version() {}
constexpr ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting_Version UnityEngine::Rendering::Universal::URPShaderStrippingSetting_Version::Initial{ static_cast<int32_t>(0x0) };
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting.get_version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::URPShaderStrippingSetting::*)()>(
    &::UnityEngine::Rendering::Universal::URPShaderStrippingSetting::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x669a398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPShaderStrippingSetting*>::get(), "get_version",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting.get_stripUnusedPostProcessingVariants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::URPShaderStrippingSetting::*)()>(
    &::UnityEngine::Rendering::Universal::URPShaderStrippingSetting::get_stripUnusedPostProcessingVariants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x669a3a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPShaderStrippingSetting*>::get(),
                                                 "get_stripUnusedPostProcessingVariants", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting.set_stripUnusedPostProcessingVariants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::URPShaderStrippingSetting::*)(bool)>(
    &::UnityEngine::Rendering::Universal::URPShaderStrippingSetting::set_stripUnusedPostProcessingVariants)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x669a3a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPShaderStrippingSetting*>::get(), "set_stripUnusedPostProcessingVariants",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting.get_stripUnusedVariants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::URPShaderStrippingSetting::*)()>(
    &::UnityEngine::Rendering::Universal::URPShaderStrippingSetting::get_stripUnusedVariants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x669a418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPShaderStrippingSetting*>::get(),
                                                 "get_stripUnusedVariants", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting.set_stripUnusedVariants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::URPShaderStrippingSetting::*)(bool)>(
    &::UnityEngine::Rendering::Universal::URPShaderStrippingSetting::set_stripUnusedVariants)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x669a420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPShaderStrippingSetting*>::get(), "set_stripUnusedVariants",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting.get_stripScreenCoordOverrideVariants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::URPShaderStrippingSetting::*)()>(
    &::UnityEngine::Rendering::Universal::URPShaderStrippingSetting::get_stripScreenCoordOverrideVariants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x669a490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPShaderStrippingSetting*>::get(),
                                                 "get_stripScreenCoordOverrideVariants", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting.set_stripScreenCoordOverrideVariants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::URPShaderStrippingSetting::*)(bool)>(
    &::UnityEngine::Rendering::Universal::URPShaderStrippingSetting::set_stripScreenCoordOverrideVariants)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x669a498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPShaderStrippingSetting*>::get(), "set_stripScreenCoordOverrideVariants",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::URPShaderStrippingSetting::*)()>(
    &::UnityEngine::Rendering::Universal::URPShaderStrippingSetting::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x669a508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPShaderStrippingSetting*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting_Version& UnityEngine::Rendering::Universal::URPShaderStrippingSetting::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting_Version const& UnityEngine::Rendering::Universal::URPShaderStrippingSetting::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::Rendering::Universal::URPShaderStrippingSetting::__cordl_internal_set_m_Version(::UnityEngine::Rendering::Universal::URPShaderStrippingSetting_Version value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr bool& UnityEngine::Rendering::Universal::URPShaderStrippingSetting::__cordl_internal_get_m_StripUnusedPostProcessingVariants() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StripUnusedPostProcessingVariants;
}
constexpr bool const& UnityEngine::Rendering::Universal::URPShaderStrippingSetting::__cordl_internal_get_m_StripUnusedPostProcessingVariants() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StripUnusedPostProcessingVariants;
}
constexpr void UnityEngine::Rendering::Universal::URPShaderStrippingSetting::__cordl_internal_set_m_StripUnusedPostProcessingVariants(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StripUnusedPostProcessingVariants = value;
}
constexpr bool& UnityEngine::Rendering::Universal::URPShaderStrippingSetting::__cordl_internal_get_m_StripUnusedVariants() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StripUnusedVariants;
}
constexpr bool const& UnityEngine::Rendering::Universal::URPShaderStrippingSetting::__cordl_internal_get_m_StripUnusedVariants() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StripUnusedVariants;
}
constexpr void UnityEngine::Rendering::Universal::URPShaderStrippingSetting::__cordl_internal_set_m_StripUnusedVariants(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StripUnusedVariants = value;
}
constexpr bool& UnityEngine::Rendering::Universal::URPShaderStrippingSetting::__cordl_internal_get_m_StripScreenCoordOverrideVariants() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StripScreenCoordOverrideVariants;
}
constexpr bool const& UnityEngine::Rendering::Universal::URPShaderStrippingSetting::__cordl_internal_get_m_StripScreenCoordOverrideVariants() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StripScreenCoordOverrideVariants;
}
constexpr void UnityEngine::Rendering::Universal::URPShaderStrippingSetting::__cordl_internal_set_m_StripScreenCoordOverrideVariants(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StripScreenCoordOverrideVariants = value;
}
inline int32_t UnityEngine::Rendering::Universal::URPShaderStrippingSetting::get_version() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPShaderStrippingSetting*>::get(), "get_version",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::URPShaderStrippingSetting::get_stripUnusedPostProcessingVariants() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPShaderStrippingSetting*>::get(),
                                               "get_stripUnusedPostProcessingVariants", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::URPShaderStrippingSetting::set_stripUnusedPostProcessingVariants(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPShaderStrippingSetting*>::get(), "set_stripUnusedPostProcessingVariants",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::URPShaderStrippingSetting::get_stripUnusedVariants() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPShaderStrippingSetting*>::get(),
                                               "get_stripUnusedVariants", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::URPShaderStrippingSetting::set_stripUnusedVariants(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPShaderStrippingSetting*>::get(), "set_stripUnusedVariants",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::URPShaderStrippingSetting::get_stripScreenCoordOverrideVariants() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPShaderStrippingSetting*>::get(),
                                               "get_stripScreenCoordOverrideVariants", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::URPShaderStrippingSetting::set_stripScreenCoordOverrideVariants(bool value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPShaderStrippingSetting*>::get(), "set_stripScreenCoordOverrideVariants",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::URPShaderStrippingSetting::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPShaderStrippingSetting*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting* UnityEngine::Rendering::Universal::URPShaderStrippingSetting::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::URPShaderStrippingSetting*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr UnityEngine::Rendering::Universal::URPShaderStrippingSetting::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*
UnityEngine::Rendering::Universal::URPShaderStrippingSetting::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting::URPShaderStrippingSetting() {}
