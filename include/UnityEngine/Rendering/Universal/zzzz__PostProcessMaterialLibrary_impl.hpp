#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PostProcessMaterialLibrary.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessMaterialLibrary_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessData_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary.get_resources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> (::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::get_resources)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cda6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary*>(), { "get_resources", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::*)(::UnityEngine::Rendering::Universal::PostProcessData*)>(
    &::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::_ctor)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x6cda6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::*)(::UnityEngine::Shader*)>(
    &::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::Load)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6cda8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary*>(), { "Load", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::Cleanup)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6cdaa60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_stopNaN() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stopNaN;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_stopNaN() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stopNaN;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_set_stopNaN(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stopNaN = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_subpixelMorphologicalAntialiasing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subpixelMorphologicalAntialiasing;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_subpixelMorphologicalAntialiasing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subpixelMorphologicalAntialiasing;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_set_subpixelMorphologicalAntialiasing(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subpixelMorphologicalAntialiasing = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_gaussianDepthOfField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gaussianDepthOfField;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_gaussianDepthOfField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gaussianDepthOfField;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_set_gaussianDepthOfField(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gaussianDepthOfField = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_gaussianDepthOfFieldCoC() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gaussianDepthOfFieldCoC;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_gaussianDepthOfFieldCoC() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gaussianDepthOfFieldCoC;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_set_gaussianDepthOfFieldCoC(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gaussianDepthOfFieldCoC = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_bokehDepthOfField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bokehDepthOfField;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_bokehDepthOfField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bokehDepthOfField;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_set_bokehDepthOfField(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bokehDepthOfField = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_bokehDepthOfFieldCoC() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bokehDepthOfFieldCoC;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_bokehDepthOfFieldCoC() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bokehDepthOfFieldCoC;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_set_bokehDepthOfFieldCoC(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bokehDepthOfFieldCoC = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_temporalAntialiasing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___temporalAntialiasing;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_temporalAntialiasing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___temporalAntialiasing;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_set_temporalAntialiasing(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___temporalAntialiasing = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_motionBlur() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___motionBlur;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_motionBlur() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___motionBlur;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_set_motionBlur(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___motionBlur = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_paniniProjection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paniniProjection;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_paniniProjection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paniniProjection;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_set_paniniProjection(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___paniniProjection = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_bloom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloom;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_bloom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloom;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_set_bloom(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bloom = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_bloomUpsample() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomUpsample;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_bloomUpsample() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomUpsample;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_set_bloomUpsample(::ArrayW<::UnityW<::UnityEngine::Material>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bloomUpsample = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_lensFlareScreenSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lensFlareScreenSpace;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_lensFlareScreenSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lensFlareScreenSpace;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_set_lensFlareScreenSpace(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lensFlareScreenSpace = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_lensFlareDataDriven() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lensFlareDataDriven;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_lensFlareDataDriven() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lensFlareDataDriven;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_set_lensFlareDataDriven(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lensFlareDataDriven = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_uber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uber;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_uber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uber;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_set_uber(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uber = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_scalingSetup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scalingSetup;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_scalingSetup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scalingSetup;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_set_scalingSetup(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scalingSetup = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_easu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easu;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_easu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easu;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_set_easu(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___easu = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_finalPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finalPass;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_finalPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finalPass;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_set_finalPass(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finalPass = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData>& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_m_Resources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Resources;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> const& UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_get_m_Resources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Resources;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::__cordl_internal_set_m_Resources(::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Resources = value;
}
inline ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::get_resources() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary*>(), { "get_resources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::Universal::PostProcessData>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::_ctor(::UnityEngine::Rendering::Universal::PostProcessData* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::Load(::UnityEngine::Shader* shader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary*>(), { "Load", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method, shader);
}
inline void UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary*
UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::New_ctor(::UnityEngine::Rendering::Universal::PostProcessData* data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary*>(data));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary::PostProcessMaterialLibrary() {}
