#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Vrs.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__Vrs_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ComputeGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ComputeCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_def.hpp"
#include "UnityEngine/Rendering/zzzz__VrsResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__Vrs_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Vrs_ConversionPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Vrs_ConversionPassData::*)()>(&::UnityEngine::Rendering::Vrs_ConversionPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6befa70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs_ConversionPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_get_sriTextureHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sriTextureHandle;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_get_sriTextureHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sriTextureHandle;
}
constexpr void UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_set_sriTextureHandle(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sriTextureHandle = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_get_mainTexHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainTexHandle;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_get_mainTexHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainTexHandle;
}
constexpr void UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_set_mainTexHandle(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mainTexHandle = value;
}
constexpr ::UnityEngine::Rendering::TextureDimension& UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_get_mainTexDimension() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainTexDimension;
}
constexpr ::UnityEngine::Rendering::TextureDimension const& UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_get_mainTexDimension() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainTexDimension;
}
constexpr void UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_set_mainTexDimension(::UnityEngine::Rendering::TextureDimension value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mainTexDimension = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle& UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_get_mainTexLutHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainTexLutHandle;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle const& UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_get_mainTexLutHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainTexLutHandle;
}
constexpr void UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_set_mainTexLutHandle(::UnityEngine::Rendering::RenderGraphModule::BufferHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mainTexLutHandle = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle& UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_get_validatedShadingRateFragmentSizeHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validatedShadingRateFragmentSizeHandle;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle const& UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_get_validatedShadingRateFragmentSizeHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validatedShadingRateFragmentSizeHandle;
}
constexpr void UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_set_validatedShadingRateFragmentSizeHandle(::UnityEngine::Rendering::RenderGraphModule::BufferHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validatedShadingRateFragmentSizeHandle = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_get_computeShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___computeShader;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_get_computeShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___computeShader;
}
constexpr void UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_set_computeShader(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___computeShader = value;
}
constexpr int32_t& UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_get_kernelIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelIndex;
}
constexpr int32_t const& UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_get_kernelIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelIndex;
}
constexpr void UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_set_kernelIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kernelIndex = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_get_scaleBias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleBias;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_get_scaleBias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleBias;
}
constexpr void UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_set_scaleBias(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scaleBias = value;
}
constexpr ::UnityEngine::Vector2Int& UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_get_dispatchSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dispatchSize;
}
constexpr ::UnityEngine::Vector2Int const& UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_get_dispatchSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dispatchSize;
}
constexpr void UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_set_dispatchSize(::UnityEngine::Vector2Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dispatchSize = value;
}
constexpr bool& UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_get_yFlip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yFlip;
}
constexpr bool const& UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_get_yFlip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yFlip;
}
constexpr void UnityEngine::Rendering::Vrs_ConversionPassData::__cordl_internal_set_yFlip(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___yFlip = value;
}
inline void UnityEngine::Rendering::Vrs_ConversionPassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs_ConversionPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Vrs_ConversionPassData* UnityEngine::Rendering::Vrs_ConversionPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Vrs_ConversionPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Vrs_ConversionPassData::Vrs_ConversionPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Vrs_VisualizationPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Vrs_VisualizationPassData::*)()>(&::UnityEngine::Rendering::Vrs_VisualizationPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6befa74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs_VisualizationPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Vrs_VisualizationPassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Vrs_VisualizationPassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Vrs_VisualizationPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Vrs_VisualizationPassData::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Vrs_VisualizationPassData::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr void UnityEngine::Rendering::Vrs_VisualizationPassData::__cordl_internal_set_source(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___source = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle& UnityEngine::Rendering::Vrs_VisualizationPassData::__cordl_internal_get_lut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lut;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle const& UnityEngine::Rendering::Vrs_VisualizationPassData::__cordl_internal_get_lut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lut;
}
constexpr void UnityEngine::Rendering::Vrs_VisualizationPassData::__cordl_internal_set_lut(::UnityEngine::Rendering::RenderGraphModule::BufferHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lut = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Vrs_VisualizationPassData::__cordl_internal_get_dummy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dummy;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Vrs_VisualizationPassData::__cordl_internal_get_dummy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dummy;
}
constexpr void UnityEngine::Rendering::Vrs_VisualizationPassData::__cordl_internal_set_dummy(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dummy = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Vrs_VisualizationPassData::__cordl_internal_get_visualizationParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visualizationParams;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Vrs_VisualizationPassData::__cordl_internal_get_visualizationParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visualizationParams;
}
constexpr void UnityEngine::Rendering::Vrs_VisualizationPassData::__cordl_internal_set_visualizationParams(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___visualizationParams = value;
}
inline void UnityEngine::Rendering::Vrs_VisualizationPassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs_VisualizationPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Vrs_VisualizationPassData* UnityEngine::Rendering::Vrs_VisualizationPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Vrs_VisualizationPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Vrs_VisualizationPassData::Vrs_VisualizationPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Vrs___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Vrs___c::*)()>(&::UnityEngine::Rendering::Vrs___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6befacc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Vrs___c._ColorMaskTextureToShadingRateImage_b__9_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::Vrs___c::*)(::UnityEngine::Rendering::Vrs_ConversionPassData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*)>(
        &::UnityEngine::Rendering::Vrs___c::_ColorMaskTextureToShadingRateImage_b__9_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6befad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs___c*>(), { "<ColorMaskTextureToShadingRateImage>b__9_0",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::UnityEngine::Rendering::Vrs_ConversionPassData*>(),
                                                                                                           ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Vrs___c._ShadingRateImageToColorMaskTexture_b__10_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::Vrs___c::*)(::UnityEngine::Rendering::Vrs_VisualizationPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
        &::UnityEngine::Rendering::Vrs___c::_ShadingRateImageToColorMaskTexture_b__10_0)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6befb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs___c*>(), { "<ShadingRateImageToColorMaskTexture>b__10_0",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::UnityEngine::Rendering::Vrs_VisualizationPassData*>(),
                                                                                                           ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Vrs___c::setStaticF___9(::UnityEngine::Rendering::Vrs___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Vrs___c*, "<>9", ::UnityEngine::Rendering::Vrs___c*>(std::forward<::UnityEngine::Rendering::Vrs___c*>(value));
}
inline ::UnityEngine::Rendering::Vrs___c* UnityEngine::Rendering::Vrs___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Vrs___c*, "<>9", ::UnityEngine::Rendering::Vrs___c*>();
}
inline void UnityEngine::Rendering::Vrs___c::setStaticF___9__9_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Vrs_ConversionPassData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Vrs_ConversionPassData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*, "<>9__9_0",
      ::UnityEngine::Rendering::Vrs___c*>(
      std::forward<
          ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Vrs_ConversionPassData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Vrs_ConversionPassData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*
UnityEngine::Rendering::Vrs___c::getStaticF___9__9_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Vrs_ConversionPassData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*, "<>9__9_0",
      ::UnityEngine::Rendering::Vrs___c*>();
}
inline void UnityEngine::Rendering::Vrs___c::setStaticF___9__10_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Vrs_VisualizationPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Vrs_VisualizationPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__10_0", ::UnityEngine::Rendering::Vrs___c*>(
      std::forward<
          ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Vrs_VisualizationPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(
          value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Vrs_VisualizationPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Vrs___c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Vrs_VisualizationPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__10_0", ::UnityEngine::Rendering::Vrs___c*>();
}
inline void UnityEngine::Rendering::Vrs___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Vrs___c::_ColorMaskTextureToShadingRateImage_b__9_0(::UnityEngine::Rendering::Vrs_ConversionPassData* innerPassData,
                                                                                        ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs___c*>(), { "<ColorMaskTextureToShadingRateImage>b__9_0",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::UnityEngine::Rendering::Vrs_ConversionPassData*>(),
                                                                                                         ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerPassData, context);
}
inline void UnityEngine::Rendering::Vrs___c::_ShadingRateImageToColorMaskTexture_b__10_0(::UnityEngine::Rendering::Vrs_VisualizationPassData* innerPassData,
                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs___c*>(), { "<ShadingRateImageToColorMaskTexture>b__10_0",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::UnityEngine::Rendering::Vrs_VisualizationPassData*>(),
                                                                                                         ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerPassData, context);
}
inline ::UnityEngine::Rendering::Vrs___c* UnityEngine::Rendering::Vrs___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Vrs___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Vrs___c::Vrs___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Vrs.IsColorMaskTextureConversionSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::Vrs::IsColorMaskTextureConversionSupported)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6bed618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs*>(), { "IsColorMaskTextureConversionSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Vrs.IsInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::Vrs::IsInitialized)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6bed6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs*>(), { "IsInitialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Vrs.InitializeResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Rendering::Vrs::InitializeResources)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6bed7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs*>(), { "InitializeResources", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Vrs.DisposeResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Rendering::Vrs::DisposeResources)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6beda1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs*>(), { "DisposeResources", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Vrs.ColorMaskTextureToShadingRateImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*,
                                                                                                                      ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, bool)>(
    &::UnityEngine::Rendering::Vrs::ColorMaskTextureToShadingRateImage)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6bedaa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs*>(),
                                                             { "ColorMaskTextureToShadingRateImage",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Vrs.ColorMaskTextureToShadingRateImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::UnityEngine::Rendering::TextureDimension, bool)>(&::UnityEngine::Rendering::Vrs::ColorMaskTextureToShadingRateImage)> {
  constexpr static std::size_t size = 0x7e4;
  constexpr static std::size_t addrs = 0x6bedd7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::Vrs*>(),
                         { "ColorMaskTextureToShadingRateImage",
                           {},
                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Vrs.ShadingRateImageToColorMaskTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
                                                                ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(
    &::UnityEngine::Rendering::Vrs::ShadingRateImageToColorMaskTexture)> {
  constexpr static std::size_t size = 0x930;
  constexpr static std::size_t addrs = 0x6bee584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs*>(), { "ShadingRateImageToColorMaskTexture",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                                       ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                                                                       ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Vrs.ConversionDispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::ComputeCommandBuffer*, ::UnityEngine::Rendering::Vrs_ConversionPassData*)>(
    &::UnityEngine::Rendering::Vrs::ConversionDispatch)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x6beef64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs*>(),
                            { "ConversionDispatch", {}, { ::i2c::type_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Vrs_ConversionPassData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Vrs.ColorMaskTextureToShadingRateImageDispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Texture*, bool)>(
    &::UnityEngine::Rendering::Vrs::ColorMaskTextureToShadingRateImageDispatch)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x6bef1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs*>(), { "ColorMaskTextureToShadingRateImageDispatch",
                                                                                 {},
                                                                                 { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                                                   ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Vrs.ShadingRateImageToColorMaskTextureBlit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Vrs::ShadingRateImageToColorMaskTextureBlit)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x6bef6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs*>(), { "ShadingRateImageToColorMaskTextureBlit",
                                                                                 {},
                                                                                 { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                                                   ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Vrs::setStaticF_shadingRateFragmentSizeCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "shadingRateFragmentSizeCount", ::UnityEngine::Rendering::Vrs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Vrs::getStaticF_shadingRateFragmentSizeCount() {
  return ::cordl_internals::getStaticField<int32_t, "shadingRateFragmentSizeCount", ::UnityEngine::Rendering::Vrs*>();
}
inline void UnityEngine::Rendering::Vrs::setStaticF_s_VrsResources(::UnityEngine::Rendering::VrsResources* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::VrsResources*, "s_VrsResources", ::UnityEngine::Rendering::Vrs*>(std::forward<::UnityEngine::Rendering::VrsResources*>(value));
}
inline ::UnityEngine::Rendering::VrsResources* UnityEngine::Rendering::Vrs::getStaticF_s_VrsResources() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::VrsResources*, "s_VrsResources", ::UnityEngine::Rendering::Vrs*>();
}
inline bool UnityEngine::Rendering::Vrs::IsColorMaskTextureConversionSupported() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs*>(), { "IsColorMaskTextureConversionSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::Vrs::IsInitialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs*>(), { "IsInitialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Vrs::InitializeResources() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs*>(), { "InitializeResources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Vrs::DisposeResources() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs*>(), { "DisposeResources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle UnityEngine::Rendering::Vrs::ColorMaskTextureToShadingRateImage(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                                                  ::UnityEngine::Rendering::RTHandle* sriRtHandle,
                                                                                                                                  ::UnityEngine::Rendering::RTHandle* colorMaskRtHandle, bool yFlip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs*>(),
                                                           { "ColorMaskTextureToShadingRateImage",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(nullptr, ___internal_method, renderGraph, sriRtHandle, colorMaskRtHandle, yFlip);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle UnityEngine::Rendering::Vrs::ColorMaskTextureToShadingRateImage(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle sriTextureHandle,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorMaskHandle, ::UnityEngine::Rendering::TextureDimension colorMaskDimension, bool yFlip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs*>(),
                          { "ColorMaskTextureToShadingRateImage",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                              ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(nullptr, ___internal_method, renderGraph, sriTextureHandle, colorMaskHandle,
                                                                                                         colorMaskDimension, yFlip);
}
inline void UnityEngine::Rendering::Vrs::ShadingRateImageToColorMaskTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                            /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> sriTextureHandle,
                                                                            /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> colorMaskHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs*>(), { "ShadingRateImageToColorMaskTexture",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                                     ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                                                                     ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderGraph, sriTextureHandle, colorMaskHandle);
}
inline void UnityEngine::Rendering::Vrs::ConversionDispatch(::UnityEngine::Rendering::ComputeCommandBuffer* cmd, ::UnityEngine::Rendering::Vrs_ConversionPassData* conversionPassData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs*>(),
                          { "ConversionDispatch", {}, { ::i2c::type_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Vrs_ConversionPassData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, conversionPassData);
}
inline void UnityEngine::Rendering::Vrs::ColorMaskTextureToShadingRateImageDispatch(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* sriDestination,
                                                                                    ::UnityEngine::Texture* colorMaskSource, bool yFlip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs*>(), { "ColorMaskTextureToShadingRateImageDispatch",
                                                                               {},
                                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                                                 ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, sriDestination, colorMaskSource, yFlip);
}
inline void UnityEngine::Rendering::Vrs::ShadingRateImageToColorMaskTextureBlit(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* sriSource,
                                                                                ::UnityEngine::Rendering::RTHandle* colorMaskDestination) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vrs*>(), { "ShadingRateImageToColorMaskTextureBlit",
                                                                               {},
                                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                                                 ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, sriSource, colorMaskDestination);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Vrs::Vrs() {}
