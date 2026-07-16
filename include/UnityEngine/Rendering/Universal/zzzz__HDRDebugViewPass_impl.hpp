#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/HDRDebugViewPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__HDRDebugMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__HDRDebugViewPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__HDRDebugMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__HDRDebugViewPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::HDRDebugViewPass_HDRDebugPassId::HDRDebugViewPass_HDRDebugPassId(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::HDRDebugViewPass_HDRDebugPassId::HDRDebugViewPass_HDRDebugPassId() {}
constexpr ::UnityEngine::Rendering::Universal::HDRDebugViewPass_HDRDebugPassId UnityEngine::Rendering::Universal::HDRDebugViewPass_HDRDebugPassId::CIExyPrepass{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::HDRDebugViewPass_HDRDebugPassId UnityEngine::Rendering::Universal::HDRDebugViewPass_HDRDebugPassId::DebugViewPass{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy::*)()>(
    &::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x687f614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy::__cordl_internal_get_luminanceParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___luminanceParameters;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy::__cordl_internal_get_luminanceParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___luminanceParameters;
}
constexpr void UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy::__cordl_internal_set_luminanceParameters(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___luminanceParameters = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy::__cordl_internal_get_srcColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___srcColor;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy::__cordl_internal_get_srcColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___srcColor;
}
constexpr void UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy::__cordl_internal_set_srcColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___srcColor = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy::__cordl_internal_get_xyBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xyBuffer;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy::__cordl_internal_get_xyBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xyBuffer;
}
constexpr void UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy::__cordl_internal_set_xyBuffer(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xyBuffer = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy::__cordl_internal_get_passThrough() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passThrough;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy::__cordl_internal_get_passThrough() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passThrough;
}
constexpr void UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy::__cordl_internal_set_passThrough(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___passThrough = value;
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy* UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy::HDRDebugViewPass_PassDataCIExy() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::*)()>(
    &::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x687f618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr ::UnityEngine::Rendering::Universal::HDRDebugMode& UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::__cordl_internal_get_hdrDebugMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hdrDebugMode;
}
constexpr ::UnityEngine::Rendering::Universal::HDRDebugMode const& UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::__cordl_internal_get_hdrDebugMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hdrDebugMode;
}
constexpr void UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::__cordl_internal_set_hdrDebugMode(::UnityEngine::Rendering::Universal::HDRDebugMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hdrDebugMode = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::__cordl_internal_get_cameraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::__cordl_internal_get_cameraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr void UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraData = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::__cordl_internal_get_luminanceParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___luminanceParameters;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::__cordl_internal_get_luminanceParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___luminanceParameters;
}
constexpr void UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::__cordl_internal_set_luminanceParameters(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___luminanceParameters = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::__cordl_internal_get_overlayUITexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overlayUITexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::__cordl_internal_get_overlayUITexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overlayUITexture;
}
constexpr void UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::__cordl_internal_set_overlayUITexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overlayUITexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::__cordl_internal_get_xyBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xyBuffer;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::__cordl_internal_get_xyBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xyBuffer;
}
constexpr void UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::__cordl_internal_set_xyBuffer(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xyBuffer = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::__cordl_internal_get_srcColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___srcColor;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::__cordl_internal_get_srcColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___srcColor;
}
constexpr void UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::__cordl_internal_set_srcColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___srcColor = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::__cordl_internal_get_dstColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dstColor;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::__cordl_internal_get_dstColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dstColor;
}
constexpr void UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::__cordl_internal_set_dstColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dstColor = value;
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView* UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::HDRDebugViewPass_PassDataDebugView() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::*)()>(
    &::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6881034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::setStaticF__DebugHDRModeId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_DebugHDRModeId", ::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::getStaticF__DebugHDRModeId() {
  return ::cordl_internals::getStaticField<int32_t, "_DebugHDRModeId", ::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::setStaticF__HDRDebugParamsId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_HDRDebugParamsId", ::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::getStaticF__HDRDebugParamsId() {
  return ::cordl_internals::getStaticField<int32_t, "_HDRDebugParamsId", ::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::setStaticF__xyTextureId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_xyTextureId", ::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::getStaticF__xyTextureId() {
  return ::cordl_internals::getStaticField<int32_t, "_xyTextureId", ::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::setStaticF__SizeOfHDRXYMapping(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SizeOfHDRXYMapping", ::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::getStaticF__SizeOfHDRXYMapping() {
  return ::cordl_internals::getStaticField<int32_t, "_SizeOfHDRXYMapping", ::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::setStaticF__CIExyUAVIndex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CIExyUAVIndex", ::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::getStaticF__CIExyUAVIndex() {
  return ::cordl_internals::getStaticField<int32_t, "_CIExyUAVIndex", ::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants* UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::HDRDebugViewPass_ShaderConstants() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::HDRDebugViewPass___c::*)()>(&::UnityEngine::Rendering::Universal::HDRDebugViewPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6881170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass___c._RenderHDRDebug_b__17_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::HDRDebugViewPass___c::*)(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*,
                                                                                                                           ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::HDRDebugViewPass___c::_RenderHDRDebug_b__17_0)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6881174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>(),
                                                                                           { "<RenderHDRDebug>b__17_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass___c._RenderHDRDebug_b__17_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::HDRDebugViewPass___c::*)(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*,
                                                                                                                           ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::HDRDebugViewPass___c::_RenderHDRDebug_b__17_1)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6881264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>(),
                                                                                           { "<RenderHDRDebug>b__17_1",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::HDRDebugViewPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*, "<>9", ::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>(
      std::forward<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::HDRDebugViewPass___c* UnityEngine::Rendering::Universal::HDRDebugViewPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*, "<>9", ::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>();
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass___c::setStaticF___9__17_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__17_0", ::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::HDRDebugViewPass___c::getStaticF___9__17_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__17_0", ::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>();
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass___c::setStaticF___9__17_1(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__17_1", ::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::HDRDebugViewPass___c::getStaticF___9__17_1() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__17_1", ::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>();
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass___c::_RenderHDRDebug_b__17_0(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy* data,
                                                                                             ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>(),
                                                                                         { "<RenderHDRDebug>b__17_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass___c::_RenderHDRDebug_b__17_1(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView* data,
                                                                                             ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>(),
                                                                                         { "<RenderHDRDebug>b__17_1",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::HDRDebugViewPass___c* UnityEngine::Rendering::Universal::HDRDebugViewPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::HDRDebugViewPass___c::HDRDebugViewPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::HDRDebugViewPass::*)(::UnityEngine::Material*)>(
    &::UnityEngine::Rendering::Universal::HDRDebugViewPass::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x687f4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass.ConfigureDescriptorForCIEPrepass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::RenderTextureDescriptor>)>(
    &::UnityEngine::Rendering::Universal::HDRDebugViewPass::ConfigureDescriptorForCIEPrepass)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x687f61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>(),
                                                             { "ConfigureDescriptorForCIEPrepass", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass.GetLuminanceParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::HDRDebugViewPass::GetLuminanceParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x687f6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>(),
                                                             { "GetLuminanceParameters", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass.ExecuteCIExyPrepass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*,
                                                                ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::HDRDebugViewPass::ExecuteCIExyPrepass)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x687f828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>(),
                                                { "ExecuteCIExyPrepass",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass.ExecuteHDRDebugViewFinalPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*,
                                                                ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::HDRDebugViewPass::ExecuteHDRDebugViewFinalPass)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x687fad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>(),
                                                { "ExecuteHDRDebugViewFinalPass",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::HDRDebugViewPass::*)()>(&::UnityEngine::Rendering::Universal::HDRDebugViewPass::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x687fe9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::HDRDebugViewPass::*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::HDRDebugMode)>(&::UnityEngine::Rendering::Universal::HDRDebugViewPass::Setup)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x687fed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>(),
                            { "Setup", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::HDRDebugMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::HDRDebugViewPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::HDRDebugViewPass::Execute)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6880050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass.ExecutePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::HDRDebugViewPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*, ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*,
    ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::Universal::HDRDebugViewPass::ExecutePass)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6880218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>(),
                                                { "ExecutePass",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass.RenderHDRDebug
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::HDRDebugViewPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::Universal::HDRDebugMode)>(
    &::UnityEngine::Rendering::Universal::HDRDebugViewPass::RenderHDRDebug)> {
  constexpr static std::size_t size = 0xc58;
  constexpr static std::size_t addrs = 0x68803dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>(),
                                         { "RenderHDRDebug",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::HDRDebugMode>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*& UnityEngine::Rendering::Universal::HDRDebugViewPass::__cordl_internal_get_m_PassDataCIExy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassDataCIExy;
}
constexpr ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy* const& UnityEngine::Rendering::Universal::HDRDebugViewPass::__cordl_internal_get_m_PassDataCIExy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassDataCIExy;
}
constexpr void UnityEngine::Rendering::Universal::HDRDebugViewPass::__cordl_internal_set_m_PassDataCIExy(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PassDataCIExy = value;
}
constexpr ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*& UnityEngine::Rendering::Universal::HDRDebugViewPass::__cordl_internal_get_m_PassDataDebugView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassDataDebugView;
}
constexpr ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView* const& UnityEngine::Rendering::Universal::HDRDebugViewPass::__cordl_internal_get_m_PassDataDebugView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassDataDebugView;
}
constexpr void UnityEngine::Rendering::Universal::HDRDebugViewPass::__cordl_internal_set_m_PassDataDebugView(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PassDataDebugView = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::HDRDebugViewPass::__cordl_internal_get_m_CIExyTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CIExyTarget;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::HDRDebugViewPass::__cordl_internal_get_m_CIExyTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CIExyTarget;
}
constexpr void UnityEngine::Rendering::Universal::HDRDebugViewPass::__cordl_internal_set_m_CIExyTarget(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CIExyTarget = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::HDRDebugViewPass::__cordl_internal_get_m_PassthroughRT() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassthroughRT;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::HDRDebugViewPass::__cordl_internal_get_m_PassthroughRT() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassthroughRT;
}
constexpr void UnityEngine::Rendering::Universal::HDRDebugViewPass::__cordl_internal_set_m_PassthroughRT(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PassthroughRT = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::HDRDebugViewPass::__cordl_internal_get_m_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::HDRDebugViewPass::__cordl_internal_get_m_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_material;
}
constexpr void UnityEngine::Rendering::Universal::HDRDebugViewPass::__cordl_internal_set_m_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_material = value;
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass::_ctor(::UnityEngine::Material* mat) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mat);
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass::ConfigureDescriptorForCIEPrepass(::by_ref<::UnityEngine::RenderTextureDescriptor> descriptor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>(),
                                                           { "ConfigureDescriptorForCIEPrepass", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, descriptor);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::HDRDebugViewPass::GetLuminanceParameters(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>(),
                                                           { "GetLuminanceParameters", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, cameraData);
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass::ExecuteCIExyPrepass(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                     ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy* data,
                                                                                     ::UnityEngine::Rendering::RTHandle* sourceTexture, ::UnityEngine::Rendering::RTHandle* xyTarget,
                                                                                     ::UnityEngine::Rendering::RTHandle* destTexture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>(),
                                              { "ExecuteCIExyPrepass",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, data, sourceTexture, xyTarget, destTexture);
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass::ExecuteHDRDebugViewFinalPass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                              ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView* data,
                                                                                              ::UnityEngine::Rendering::RTHandle* sourceTexture, ::UnityEngine::Rendering::RTHandle* destination,
                                                                                              ::UnityEngine::Rendering::RTHandle* xyTarget) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>(),
                                              { "ExecuteHDRDebugViewFinalPass",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, data, sourceTexture, destination, xyTarget);
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass::Setup(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                       ::UnityEngine::Rendering::Universal::HDRDebugMode hdrdebugMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>(),
                          { "Setup", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::HDRDebugMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData, hdrdebugMode);
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                         ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass::ExecutePass(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                             ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy* dataCIExy,
                                                                             ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView* dataDebugView,
                                                                             ::UnityEngine::Rendering::RTHandle* sourceTexture, ::UnityEngine::Rendering::RTHandle* xyTarget,
                                                                             ::UnityEngine::Rendering::RTHandle* destTexture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>(),
                                              { "ExecutePass",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, dataCIExy, dataDebugView, sourceTexture, xyTarget, destTexture);
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass::RenderHDRDebug(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                ::UnityEngine::Rendering::RenderGraphModule::TextureHandle srcColor,
                                                                                ::UnityEngine::Rendering::RenderGraphModule::TextureHandle overlayUITexture,
                                                                                ::UnityEngine::Rendering::RenderGraphModule::TextureHandle dstColor,
                                                                                ::UnityEngine::Rendering::Universal::HDRDebugMode hdrDebugMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>(),
                                       { "RenderHDRDebug",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::HDRDebugMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, cameraData, srcColor, overlayUITexture, dstColor, hdrDebugMode);
}
inline ::UnityEngine::Rendering::Universal::HDRDebugViewPass* UnityEngine::Rendering::Universal::HDRDebugViewPass::New_ctor(::UnityEngine::Material* mat) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>(mat));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::HDRDebugViewPass::HDRDebugViewPass() {}
