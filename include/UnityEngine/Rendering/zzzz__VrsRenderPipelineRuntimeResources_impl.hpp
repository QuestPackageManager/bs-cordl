#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VrsRenderPipelineRuntimeResources.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VrsRenderPipelineRuntimeResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__VrsLut_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources.get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::*)()>(
    &::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bf03cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources*>(), { "get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources.UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::*)()>(
    &::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bf03d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources*>(),
                                                                                           { "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources.get_textureComputeShader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::*)()>(
    &::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::get_textureComputeShader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bf03dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources*>(), { "get_textureComputeShader", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources.set_textureComputeShader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::*)(::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::set_textureComputeShader)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6bf03e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources*>(),
                                                                                           { "set_textureComputeShader", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources.get_visualizationShader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::*)()>(
    &::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::get_visualizationShader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bf0454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources*>(), { "get_visualizationShader", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources.set_visualizationShader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::*)(::UnityEngine::Shader*)>(
    &::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::set_visualizationShader)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6bf045c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources*>(),
                                                                                           { "set_visualizationShader", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources.get_visualizationLookupTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::VrsLut* (::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::*)()>(
    &::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::get_visualizationLookupTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bf04cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources*>(), { "get_visualizationLookupTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources.set_visualizationLookupTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::*)(::UnityEngine::Rendering::VrsLut*)>(
    &::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::set_visualizationLookupTable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6bf04d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources*>(),
                                                                                           { "set_visualizationLookupTable", {}, { ::i2c::type_of<::UnityEngine::Rendering::VrsLut*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources.get_conversionLookupTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::VrsLut* (::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::*)()>(
    &::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::get_conversionLookupTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bf0544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources*>(), { "get_conversionLookupTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources.set_conversionLookupTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::*)(::UnityEngine::Rendering::VrsLut*)>(
    &::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::set_conversionLookupTable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6bf054c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources*>(),
                                                                                           { "set_conversionLookupTable", {}, { ::i2c::type_of<::UnityEngine::Rendering::VrsLut*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::*)()>(&::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6bf05bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::__cordl_internal_get_m_TextureComputeShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureComputeShader;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::__cordl_internal_get_m_TextureComputeShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureComputeShader;
}
constexpr void UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::__cordl_internal_set_m_TextureComputeShader(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextureComputeShader = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::__cordl_internal_get_m_VisualizationShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisualizationShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::__cordl_internal_get_m_VisualizationShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisualizationShader;
}
constexpr void UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::__cordl_internal_set_m_VisualizationShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VisualizationShader = value;
}
constexpr ::UnityEngine::Rendering::VrsLut*& UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::__cordl_internal_get_m_VisualizationLookupTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisualizationLookupTable;
}
constexpr ::UnityEngine::Rendering::VrsLut* const& UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::__cordl_internal_get_m_VisualizationLookupTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisualizationLookupTable;
}
constexpr void UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::__cordl_internal_set_m_VisualizationLookupTable(::UnityEngine::Rendering::VrsLut* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VisualizationLookupTable = value;
}
constexpr ::UnityEngine::Rendering::VrsLut*& UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::__cordl_internal_get_m_ConversionLookupTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ConversionLookupTable;
}
constexpr ::UnityEngine::Rendering::VrsLut* const& UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::__cordl_internal_get_m_ConversionLookupTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ConversionLookupTable;
}
constexpr void UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::__cordl_internal_set_m_ConversionLookupTable(::UnityEngine::Rendering::VrsLut* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ConversionLookupTable = value;
}
inline int32_t UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::get_version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources*>(), { "get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources*>(),
                                                                                         { "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::ComputeShader> UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::get_textureComputeShader() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources*>(), { "get_textureComputeShader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::set_textureComputeShader(::UnityEngine::ComputeShader* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources*>(),
                                                                                         { "set_textureComputeShader", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::get_visualizationShader() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources*>(), { "get_visualizationShader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::set_visualizationShader(::UnityEngine::Shader* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources*>(),
                                                                                         { "set_visualizationShader", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::VrsLut* UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::get_visualizationLookupTable() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources*>(), { "get_visualizationLookupTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::VrsLut*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::set_visualizationLookupTable(::UnityEngine::Rendering::VrsLut* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources*>(),
                                                                                         { "set_visualizationLookupTable", {}, { ::i2c::type_of<::UnityEngine::Rendering::VrsLut*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::VrsLut* UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::get_conversionLookupTable() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources*>(), { "get_conversionLookupTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::VrsLut*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::set_conversionLookupTable(::UnityEngine::Rendering::VrsLut* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources*>(),
                                                                                         { "set_conversionLookupTable", {}, { ::i2c::type_of<::UnityEngine::Rendering::VrsLut*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources* UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr ::UnityEngine::Rendering::IRenderPipelineResources* UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::i___UnityEngine__Rendering__IRenderPipelineResources() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources::VrsRenderPipelineRuntimeResources() {}
