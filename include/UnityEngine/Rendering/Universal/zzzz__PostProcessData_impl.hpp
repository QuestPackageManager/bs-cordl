#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PostProcessData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Texture2D_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessData_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68377b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources*>(), { ".ctor", {}, {} })));
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
  this->___stopNanPS = value;
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
  this->___subpixelMorphologicalAntialiasingPS = value;
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
  this->___gaussianDepthOfFieldPS = value;
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
  this->___bokehDepthOfFieldPS = value;
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
  this->___cameraMotionBlurPS = value;
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
  this->___paniniProjectionPS = value;
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
  this->___lutBuilderLdrPS = value;
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
  this->___lutBuilderHdrPS = value;
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
  this->___bloomPS = value;
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
  this->___temporalAntialiasingPS = value;
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
  this->___LensFlareDataDrivenPS = value;
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
  this->___LensFlareScreenSpacePS = value;
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
  this->___scalingSetupPS = value;
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
  this->___easuPS = value;
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
  this->___uberPostPS = value;
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
  this->___finalPostPassPS = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources* UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources::PostProcessData_ShaderResources() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessData_TextureResources._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessData_TextureResources::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessData_TextureResources::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68377b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessData_TextureResources*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& UnityEngine::Rendering::Universal::PostProcessData_TextureResources::__cordl_internal_get_blueNoise16LTex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blueNoise16LTex;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& UnityEngine::Rendering::Universal::PostProcessData_TextureResources::__cordl_internal_get_blueNoise16LTex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blueNoise16LTex;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessData_TextureResources::__cordl_internal_set_blueNoise16LTex(::ArrayW<::UnityW<::UnityEngine::Texture2D>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blueNoise16LTex = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& UnityEngine::Rendering::Universal::PostProcessData_TextureResources::__cordl_internal_get_filmGrainTex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filmGrainTex;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& UnityEngine::Rendering::Universal::PostProcessData_TextureResources::__cordl_internal_get_filmGrainTex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filmGrainTex;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessData_TextureResources::__cordl_internal_set_filmGrainTex(::ArrayW<::UnityW<::UnityEngine::Texture2D>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___filmGrainTex = value;
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
  this->___smaaAreaTex = value;
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
  this->___smaaSearchTex = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessData_TextureResources::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessData_TextureResources*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessData_TextureResources* UnityEngine::Rendering::Universal::PostProcessData_TextureResources::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessData_TextureResources*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessData_TextureResources::PostProcessData_TextureResources() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessData::*)()>(&::UnityEngine::Rendering::Universal::PostProcessData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68377ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessData*>(), { ".ctor", {}, {} })));
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
  this->___shaders = value;
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
  this->___textures = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessData* UnityEngine::Rendering::Universal::PostProcessData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessData::PostProcessData() {}
