#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeBakingResources.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeBakingResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingShader_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingResources.get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeVolumeBakingResources::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingResources::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6791110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingResources*>(), { "get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingResources._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingResources::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingResources::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6791118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingResources*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_set_m_Version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_get_dilationShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dilationShader;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_get_dilationShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dilationShader;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_set_dilationShader(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dilationShader = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_get_subdivideSceneCS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subdivideSceneCS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_get_subdivideSceneCS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subdivideSceneCS;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_set_subdivideSceneCS(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subdivideSceneCS = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_get_voxelizeSceneShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___voxelizeSceneShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_get_voxelizeSceneShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___voxelizeSceneShader;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_set_voxelizeSceneShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___voxelizeSceneShader = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_get_traceVirtualOffsetCS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___traceVirtualOffsetCS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_get_traceVirtualOffsetCS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___traceVirtualOffsetCS;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_set_traceVirtualOffsetCS(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___traceVirtualOffsetCS = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::RayTracingShader>& UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_get_traceVirtualOffsetRT() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___traceVirtualOffsetRT;
}
constexpr ::UnityW<::UnityEngine::Rendering::RayTracingShader> const& UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_get_traceVirtualOffsetRT() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___traceVirtualOffsetRT;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_set_traceVirtualOffsetRT(::UnityW<::UnityEngine::Rendering::RayTracingShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___traceVirtualOffsetRT = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_get_skyOcclusionCS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyOcclusionCS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_get_skyOcclusionCS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyOcclusionCS;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_set_skyOcclusionCS(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___skyOcclusionCS = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::RayTracingShader>& UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_get_skyOcclusionRT() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyOcclusionRT;
}
constexpr ::UnityW<::UnityEngine::Rendering::RayTracingShader> const& UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_get_skyOcclusionRT() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyOcclusionRT;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_set_skyOcclusionRT(::UnityW<::UnityEngine::Rendering::RayTracingShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___skyOcclusionRT = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_get_renderingLayerCS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingLayerCS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_get_renderingLayerCS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingLayerCS;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_set_renderingLayerCS(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderingLayerCS = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::RayTracingShader>& UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_get_renderingLayerRT() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingLayerRT;
}
constexpr ::UnityW<::UnityEngine::Rendering::RayTracingShader> const& UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_get_renderingLayerRT() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingLayerRT;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingResources::__cordl_internal_set_renderingLayerRT(::UnityW<::UnityEngine::Rendering::RayTracingShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderingLayerRT = value;
}
inline int32_t UnityEngine::Rendering::ProbeVolumeBakingResources::get_version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingResources*>(), { "get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingResources::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingResources*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeVolumeBakingResources* UnityEngine::Rendering::ProbeVolumeBakingResources::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeVolumeBakingResources*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr UnityEngine::Rendering::ProbeVolumeBakingResources::operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr ::UnityEngine::Rendering::IRenderPipelineResources* UnityEngine::Rendering::ProbeVolumeBakingResources::i___UnityEngine__Rendering__IRenderPipelineResources() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr UnityEngine::Rendering::ProbeVolumeBakingResources::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* UnityEngine::Rendering::ProbeVolumeBakingResources::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingResources::ProbeVolumeBakingResources() {}
