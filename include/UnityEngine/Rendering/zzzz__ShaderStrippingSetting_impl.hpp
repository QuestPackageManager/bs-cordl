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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ShaderStrippingSetting::*)()>(&::UnityEngine::Rendering::ShaderStrippingSetting::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x679d89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderStrippingSetting*>(), { "get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderStrippingSetting.UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ShaderStrippingSetting::*)()>(
    &::UnityEngine::Rendering::ShaderStrippingSetting::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x679d8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderStrippingSetting*>(),
                                                                                           { "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderStrippingSetting.get_exportShaderVariants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ShaderStrippingSetting::*)()>(&::UnityEngine::Rendering::ShaderStrippingSetting::get_exportShaderVariants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x679d8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderStrippingSetting*>(), { "get_exportShaderVariants", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderStrippingSetting.set_exportShaderVariants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ShaderStrippingSetting::*)(bool)>(&::UnityEngine::Rendering::ShaderStrippingSetting::set_exportShaderVariants)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x679d8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderStrippingSetting*>(), { "set_exportShaderVariants", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderStrippingSetting.get_shaderVariantLogLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ShaderVariantLogLevel (::UnityEngine::Rendering::ShaderStrippingSetting::*)()>(
    &::UnityEngine::Rendering::ShaderStrippingSetting::get_shaderVariantLogLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x679d924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderStrippingSetting*>(), { "get_shaderVariantLogLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderStrippingSetting.set_shaderVariantLogLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ShaderStrippingSetting::*)(::UnityEngine::Rendering::ShaderVariantLogLevel)>(
    &::UnityEngine::Rendering::ShaderStrippingSetting::set_shaderVariantLogLevel)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x679d92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderStrippingSetting*>(),
                                                             { "set_shaderVariantLogLevel", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShaderVariantLogLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderStrippingSetting.get_stripRuntimeDebugShaders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ShaderStrippingSetting::*)()>(&::UnityEngine::Rendering::ShaderStrippingSetting::get_stripRuntimeDebugShaders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x679d99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderStrippingSetting*>(), { "get_stripRuntimeDebugShaders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderStrippingSetting.set_stripRuntimeDebugShaders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ShaderStrippingSetting::*)(bool)>(
    &::UnityEngine::Rendering::ShaderStrippingSetting::set_stripRuntimeDebugShaders)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x679d9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderStrippingSetting*>(), { "set_stripRuntimeDebugShaders", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderStrippingSetting._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ShaderStrippingSetting::*)()>(&::UnityEngine::Rendering::ShaderStrippingSetting::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x679da14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderStrippingSetting*>(), { ".ctor", {}, {} })));
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderStrippingSetting*>(), { "get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ShaderStrippingSetting::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderStrippingSetting*>(),
                                                                                         { "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ShaderStrippingSetting::get_exportShaderVariants() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderStrippingSetting*>(), { "get_exportShaderVariants", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ShaderStrippingSetting::set_exportShaderVariants(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderStrippingSetting*>(), { "set_exportShaderVariants", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ShaderVariantLogLevel UnityEngine::Rendering::ShaderStrippingSetting::get_shaderVariantLogLevel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderStrippingSetting*>(), { "get_shaderVariantLogLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderVariantLogLevel>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ShaderStrippingSetting::set_shaderVariantLogLevel(::UnityEngine::Rendering::ShaderVariantLogLevel value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderStrippingSetting*>(),
                                                                                         { "set_shaderVariantLogLevel", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShaderVariantLogLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ShaderStrippingSetting::get_stripRuntimeDebugShaders() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderStrippingSetting*>(), { "get_stripRuntimeDebugShaders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ShaderStrippingSetting::set_stripRuntimeDebugShaders(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderStrippingSetting*>(), { "set_stripRuntimeDebugShaders", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::ShaderStrippingSetting::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderStrippingSetting*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ShaderStrippingSetting* UnityEngine::Rendering::ShaderStrippingSetting::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ShaderStrippingSetting*>());
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
