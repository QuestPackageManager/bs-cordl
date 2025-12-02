#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeDebugResources.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeDebugResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineResources_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeDebugResources.get_version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeVolumeDebugResources::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeDebugResources::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6577c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeDebugResources*>::get(),
                                                                               "get_version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeDebugResources._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeDebugResources::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeDebugResources::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6577c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeDebugResources*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeDebugResources::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeDebugResources::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::Rendering::ProbeVolumeDebugResources::__cordl_internal_set_m_Version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::ProbeVolumeDebugResources::__cordl_internal_get_probeVolumeDebugShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeVolumeDebugShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::ProbeVolumeDebugResources::__cordl_internal_get_probeVolumeDebugShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeVolumeDebugShader;
}
constexpr void UnityEngine::Rendering::ProbeVolumeDebugResources::__cordl_internal_set_probeVolumeDebugShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___probeVolumeDebugShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::ProbeVolumeDebugResources::__cordl_internal_get_probeVolumeFragmentationDebugShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeVolumeFragmentationDebugShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::ProbeVolumeDebugResources::__cordl_internal_get_probeVolumeFragmentationDebugShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeVolumeFragmentationDebugShader;
}
constexpr void UnityEngine::Rendering::ProbeVolumeDebugResources::__cordl_internal_set_probeVolumeFragmentationDebugShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___probeVolumeFragmentationDebugShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::ProbeVolumeDebugResources::__cordl_internal_get_probeVolumeSamplingDebugShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeVolumeSamplingDebugShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::ProbeVolumeDebugResources::__cordl_internal_get_probeVolumeSamplingDebugShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeVolumeSamplingDebugShader;
}
constexpr void UnityEngine::Rendering::ProbeVolumeDebugResources::__cordl_internal_set_probeVolumeSamplingDebugShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___probeVolumeSamplingDebugShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::ProbeVolumeDebugResources::__cordl_internal_get_probeVolumeOffsetDebugShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeVolumeOffsetDebugShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::ProbeVolumeDebugResources::__cordl_internal_get_probeVolumeOffsetDebugShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeVolumeOffsetDebugShader;
}
constexpr void UnityEngine::Rendering::ProbeVolumeDebugResources::__cordl_internal_set_probeVolumeOffsetDebugShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___probeVolumeOffsetDebugShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::Rendering::ProbeVolumeDebugResources::__cordl_internal_get_probeSamplingDebugMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeSamplingDebugMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::Rendering::ProbeVolumeDebugResources::__cordl_internal_get_probeSamplingDebugMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeSamplingDebugMesh;
}
constexpr void UnityEngine::Rendering::ProbeVolumeDebugResources::__cordl_internal_set_probeSamplingDebugMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___probeSamplingDebugMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::Rendering::ProbeVolumeDebugResources::__cordl_internal_get_numbersDisplayTex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numbersDisplayTex;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::Rendering::ProbeVolumeDebugResources::__cordl_internal_get_numbersDisplayTex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numbersDisplayTex;
}
constexpr void UnityEngine::Rendering::ProbeVolumeDebugResources::__cordl_internal_set_numbersDisplayTex(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___numbersDisplayTex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t UnityEngine::Rendering::ProbeVolumeDebugResources::get_version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeDebugResources*>::get(),
                                                                             "get_version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeDebugResources::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeDebugResources*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeVolumeDebugResources* UnityEngine::Rendering::ProbeVolumeDebugResources::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeVolumeDebugResources*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr UnityEngine::Rendering::ProbeVolumeDebugResources::operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr ::UnityEngine::Rendering::IRenderPipelineResources* UnityEngine::Rendering::ProbeVolumeDebugResources::i___UnityEngine__Rendering__IRenderPipelineResources() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr UnityEngine::Rendering::ProbeVolumeDebugResources::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* UnityEngine::Rendering::ProbeVolumeDebugResources::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeDebugResources::ProbeVolumeDebugResources() {}
