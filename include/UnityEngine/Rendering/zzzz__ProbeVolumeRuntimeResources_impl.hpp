#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeRuntimeResources.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeRuntimeResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineResources_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeRuntimeResources.get_version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeVolumeRuntimeResources::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeRuntimeResources::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65df798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeRuntimeResources*>::get(),
                                                                               "get_version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeRuntimeResources._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeRuntimeResources::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeRuntimeResources::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65df7a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeRuntimeResources*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeRuntimeResources::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeRuntimeResources::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::Rendering::ProbeVolumeRuntimeResources::__cordl_internal_set_m_Version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::ProbeVolumeRuntimeResources::__cordl_internal_get_probeVolumeBlendStatesCS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeVolumeBlendStatesCS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::ProbeVolumeRuntimeResources::__cordl_internal_get_probeVolumeBlendStatesCS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeVolumeBlendStatesCS;
}
constexpr void UnityEngine::Rendering::ProbeVolumeRuntimeResources::__cordl_internal_set_probeVolumeBlendStatesCS(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___probeVolumeBlendStatesCS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::ProbeVolumeRuntimeResources::__cordl_internal_get_probeVolumeUploadDataCS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeVolumeUploadDataCS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::ProbeVolumeRuntimeResources::__cordl_internal_get_probeVolumeUploadDataCS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeVolumeUploadDataCS;
}
constexpr void UnityEngine::Rendering::ProbeVolumeRuntimeResources::__cordl_internal_set_probeVolumeUploadDataCS(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___probeVolumeUploadDataCS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::ProbeVolumeRuntimeResources::__cordl_internal_get_probeVolumeUploadDataL2CS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeVolumeUploadDataL2CS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::ProbeVolumeRuntimeResources::__cordl_internal_get_probeVolumeUploadDataL2CS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeVolumeUploadDataL2CS;
}
constexpr void UnityEngine::Rendering::ProbeVolumeRuntimeResources::__cordl_internal_set_probeVolumeUploadDataL2CS(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___probeVolumeUploadDataL2CS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t UnityEngine::Rendering::ProbeVolumeRuntimeResources::get_version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeRuntimeResources*>::get(),
                                                                             "get_version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeRuntimeResources::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeRuntimeResources*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeVolumeRuntimeResources* UnityEngine::Rendering::ProbeVolumeRuntimeResources::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeVolumeRuntimeResources*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr UnityEngine::Rendering::ProbeVolumeRuntimeResources::operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr ::UnityEngine::Rendering::IRenderPipelineResources* UnityEngine::Rendering::ProbeVolumeRuntimeResources::i___UnityEngine__Rendering__IRenderPipelineResources() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr UnityEngine::Rendering::ProbeVolumeRuntimeResources::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* UnityEngine::Rendering::ProbeVolumeRuntimeResources::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeRuntimeResources::ProbeVolumeRuntimeResources() {}
