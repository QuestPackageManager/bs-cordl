#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PostProcessData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessData_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66849b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_stopNanPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stopNanPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_stopNanPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stopNanPS;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_set_stopNanPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stopNanPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_subpixelMorphologicalAntialiasingPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subpixelMorphologicalAntialiasingPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_subpixelMorphologicalAntialiasingPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subpixelMorphologicalAntialiasingPS;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_set_subpixelMorphologicalAntialiasingPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subpixelMorphologicalAntialiasingPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_gaussianDepthOfFieldPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gaussianDepthOfFieldPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_gaussianDepthOfFieldPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gaussianDepthOfFieldPS;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_set_gaussianDepthOfFieldPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gaussianDepthOfFieldPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_bokehDepthOfFieldPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bokehDepthOfFieldPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_bokehDepthOfFieldPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bokehDepthOfFieldPS;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_set_bokehDepthOfFieldPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bokehDepthOfFieldPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_cameraMotionBlurPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraMotionBlurPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_cameraMotionBlurPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraMotionBlurPS;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_set_cameraMotionBlurPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cameraMotionBlurPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_paniniProjectionPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paniniProjectionPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_paniniProjectionPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paniniProjectionPS;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_set_paniniProjectionPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___paniniProjectionPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_lutBuilderLdrPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lutBuilderLdrPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_lutBuilderLdrPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lutBuilderLdrPS;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_set_lutBuilderLdrPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lutBuilderLdrPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_lutBuilderHdrPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lutBuilderHdrPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_lutBuilderHdrPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lutBuilderHdrPS;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_set_lutBuilderHdrPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lutBuilderHdrPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_bloomPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_bloomPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomPS;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_set_bloomPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bloomPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_temporalAntialiasingPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___temporalAntialiasingPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_temporalAntialiasingPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___temporalAntialiasingPS;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_set_temporalAntialiasingPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___temporalAntialiasingPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_LensFlareDataDrivenPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LensFlareDataDrivenPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_LensFlareDataDrivenPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LensFlareDataDrivenPS;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_set_LensFlareDataDrivenPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LensFlareDataDrivenPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_LensFlareScreenSpacePS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LensFlareScreenSpacePS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_LensFlareScreenSpacePS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LensFlareScreenSpacePS;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_set_LensFlareScreenSpacePS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LensFlareScreenSpacePS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_scalingSetupPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scalingSetupPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_scalingSetupPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scalingSetupPS;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_set_scalingSetupPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scalingSetupPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_easuPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easuPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_easuPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easuPS;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_set_easuPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___easuPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_uberPostPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uberPostPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_uberPostPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uberPostPS;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_set_uberPostPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___uberPostPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_finalPostPassPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finalPostPassPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_get_finalPostPassPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finalPostPassPS;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::__cordl_internal_set_finalPostPassPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finalPostPassPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources* UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::PostProcessData_ShaderResources() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessData_TextureResources._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessData_TextureResources::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessData_TextureResources::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66849bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessData_TextureResources*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*>&
UnityEngine::Rendering::Universal::PostProcessData_TextureResources::__cordl_internal_get_blueNoise16LTex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blueNoise16LTex;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> const&
UnityEngine::Rendering::Universal::PostProcessData_TextureResources::__cordl_internal_get_blueNoise16LTex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blueNoise16LTex;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessData_TextureResources::__cordl_internal_set_blueNoise16LTex(
    ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___blueNoise16LTex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*>&
UnityEngine::Rendering::Universal::PostProcessData_TextureResources::__cordl_internal_get_filmGrainTex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filmGrainTex;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> const&
UnityEngine::Rendering::Universal::PostProcessData_TextureResources::__cordl_internal_get_filmGrainTex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filmGrainTex;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessData_TextureResources::__cordl_internal_set_filmGrainTex(
    ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___filmGrainTex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::Rendering::Universal::PostProcessData_TextureResources::__cordl_internal_get_smaaAreaTex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smaaAreaTex;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::Rendering::Universal::PostProcessData_TextureResources::__cordl_internal_get_smaaAreaTex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smaaAreaTex;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessData_TextureResources::__cordl_internal_set_smaaAreaTex(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___smaaAreaTex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::Rendering::Universal::PostProcessData_TextureResources::__cordl_internal_get_smaaSearchTex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smaaSearchTex;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::Rendering::Universal::PostProcessData_TextureResources::__cordl_internal_get_smaaSearchTex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smaaSearchTex;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessData_TextureResources::__cordl_internal_set_smaaSearchTex(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___smaaSearchTex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::PostProcessData_TextureResources::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessData_TextureResources*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessData_TextureResources* UnityEngine::Rendering::Universal::PostProcessData_TextureResources::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::PostProcessData_TextureResources*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessData_TextureResources::PostProcessData_TextureResources() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66849b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessData*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources*& UnityEngine::Rendering::Universal::PostProcessData::__cordl_internal_get_shaders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaders;
}
constexpr ::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources* const& UnityEngine::Rendering::Universal::PostProcessData::__cordl_internal_get_shaders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaders;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessData::__cordl_internal_set_shaders(::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___shaders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::PostProcessData_TextureResources*& UnityEngine::Rendering::Universal::PostProcessData::__cordl_internal_get_textures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textures;
}
constexpr ::UnityEngine::Rendering::Universal::PostProcessData_TextureResources* const& UnityEngine::Rendering::Universal::PostProcessData::__cordl_internal_get_textures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textures;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessData::__cordl_internal_set_textures(::UnityEngine::Rendering::Universal::PostProcessData_TextureResources* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___textures)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::PostProcessData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessData*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessData* UnityEngine::Rendering::Universal::PostProcessData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::PostProcessData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessData::PostProcessData() {}
