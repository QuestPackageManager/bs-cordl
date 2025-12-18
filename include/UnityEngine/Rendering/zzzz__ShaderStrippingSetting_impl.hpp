#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShaderStrippingSetting.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderVariantLogLevel_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderStrippingSetting_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderStrippingSetting_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderVariantLogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ShaderStrippingSetting_Version::ShaderStrippingSetting_Version(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ShaderStrippingSetting_Version::ShaderStrippingSetting_Version() {}
constexpr ::UnityEngine::Rendering::ShaderStrippingSetting_Version UnityEngine::Rendering::ShaderStrippingSetting_Version::Initial{ static_cast<int32_t>(0x0) };
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderStrippingSetting.get_version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ShaderStrippingSetting::*)()>(
    &::UnityEngine::Rendering::ShaderStrippingSetting::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65ebf4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderStrippingSetting*>::get(),
                                                                               "get_version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderStrippingSetting.UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ShaderStrippingSetting::*)()>(
    &::UnityEngine::Rendering::ShaderStrippingSetting::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65ebf54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderStrippingSetting*>::get(),
                                                                               "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderStrippingSetting.get_exportShaderVariants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ShaderStrippingSetting::*)()>(
    &::UnityEngine::Rendering::ShaderStrippingSetting::get_exportShaderVariants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65ebf5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderStrippingSetting*>::get(),
                                                                               "get_exportShaderVariants", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderStrippingSetting.set_exportShaderVariants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ShaderStrippingSetting::*)(bool)>(
    &::UnityEngine::Rendering::ShaderStrippingSetting::set_exportShaderVariants)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x65ebf64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderStrippingSetting*>::get(), "set_exportShaderVariants",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderStrippingSetting.get_shaderVariantLogLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ShaderVariantLogLevel (::UnityEngine::Rendering::ShaderStrippingSetting::*)()>(
    &::UnityEngine::Rendering::ShaderStrippingSetting::get_shaderVariantLogLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65ebfd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderStrippingSetting*>::get(),
                                                                               "get_shaderVariantLogLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderStrippingSetting.set_shaderVariantLogLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ShaderStrippingSetting::*)(::UnityEngine::Rendering::ShaderVariantLogLevel)>(
    &::UnityEngine::Rendering::ShaderStrippingSetting::set_shaderVariantLogLevel)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x65ebfdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderStrippingSetting*>::get(), "set_shaderVariantLogLevel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShaderVariantLogLevel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderStrippingSetting.get_stripRuntimeDebugShaders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ShaderStrippingSetting::*)()>(
    &::UnityEngine::Rendering::ShaderStrippingSetting::get_stripRuntimeDebugShaders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65ec04c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderStrippingSetting*>::get(),
                                                                               "get_stripRuntimeDebugShaders", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderStrippingSetting.set_stripRuntimeDebugShaders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ShaderStrippingSetting::*)(bool)>(
    &::UnityEngine::Rendering::ShaderStrippingSetting::set_stripRuntimeDebugShaders)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x65ec054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderStrippingSetting*>::get(), "set_stripRuntimeDebugShaders",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderStrippingSetting._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ShaderStrippingSetting::*)()>(
    &::UnityEngine::Rendering::ShaderStrippingSetting::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x65ec0c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderStrippingSetting*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::ShaderStrippingSetting_Version& UnityEngine::Rendering::ShaderStrippingSetting::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr ::UnityEngine::Rendering::ShaderStrippingSetting_Version const& UnityEngine::Rendering::ShaderStrippingSetting::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::Rendering::ShaderStrippingSetting::__cordl_internal_set_m_Version(::UnityEngine::Rendering::ShaderStrippingSetting_Version value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr bool& UnityEngine::Rendering::ShaderStrippingSetting::__cordl_internal_get_m_ExportShaderVariants() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExportShaderVariants;
}
constexpr bool const& UnityEngine::Rendering::ShaderStrippingSetting::__cordl_internal_get_m_ExportShaderVariants() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExportShaderVariants;
}
constexpr void UnityEngine::Rendering::ShaderStrippingSetting::__cordl_internal_set_m_ExportShaderVariants(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExportShaderVariants = value;
}
constexpr ::UnityEngine::Rendering::ShaderVariantLogLevel& UnityEngine::Rendering::ShaderStrippingSetting::__cordl_internal_get_m_ShaderVariantLogLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderVariantLogLevel;
}
constexpr ::UnityEngine::Rendering::ShaderVariantLogLevel const& UnityEngine::Rendering::ShaderStrippingSetting::__cordl_internal_get_m_ShaderVariantLogLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderVariantLogLevel;
}
constexpr void UnityEngine::Rendering::ShaderStrippingSetting::__cordl_internal_set_m_ShaderVariantLogLevel(::UnityEngine::Rendering::ShaderVariantLogLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShaderVariantLogLevel = value;
}
constexpr bool& UnityEngine::Rendering::ShaderStrippingSetting::__cordl_internal_get_m_StripRuntimeDebugShaders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StripRuntimeDebugShaders;
}
constexpr bool const& UnityEngine::Rendering::ShaderStrippingSetting::__cordl_internal_get_m_StripRuntimeDebugShaders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StripRuntimeDebugShaders;
}
constexpr void UnityEngine::Rendering::ShaderStrippingSetting::__cordl_internal_set_m_StripRuntimeDebugShaders(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StripRuntimeDebugShaders = value;
}
inline int32_t UnityEngine::Rendering::ShaderStrippingSetting::get_version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderStrippingSetting*>::get(),
                                                                             "get_version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ShaderStrippingSetting::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderStrippingSetting*>::get(),
                                                                             "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ShaderStrippingSetting::get_exportShaderVariants() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderStrippingSetting*>::get(),
                                                                             "get_exportShaderVariants", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ShaderStrippingSetting::set_exportShaderVariants(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderStrippingSetting*>::get(), "set_exportShaderVariants",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ShaderVariantLogLevel UnityEngine::Rendering::ShaderStrippingSetting::get_shaderVariantLogLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderStrippingSetting*>::get(),
                                                                             "get_shaderVariantLogLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderVariantLogLevel, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ShaderStrippingSetting::set_shaderVariantLogLevel(::UnityEngine::Rendering::ShaderVariantLogLevel value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderStrippingSetting*>::get(), "set_shaderVariantLogLevel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShaderVariantLogLevel>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ShaderStrippingSetting::get_stripRuntimeDebugShaders() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderStrippingSetting*>::get(),
                                                                             "get_stripRuntimeDebugShaders", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ShaderStrippingSetting::set_stripRuntimeDebugShaders(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderStrippingSetting*>::get(), "set_stripRuntimeDebugShaders",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::ShaderStrippingSetting::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderStrippingSetting*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ShaderStrippingSetting* UnityEngine::Rendering::ShaderStrippingSetting::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ShaderStrippingSetting*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr UnityEngine::Rendering::ShaderStrippingSetting::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* UnityEngine::Rendering::ShaderStrippingSetting::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ShaderStrippingSetting::ShaderStrippingSetting() {}
