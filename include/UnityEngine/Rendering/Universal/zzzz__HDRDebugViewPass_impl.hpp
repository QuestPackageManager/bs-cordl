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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy::*)()>(
    &::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66cca54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___material)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy* UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy::HDRDebugViewPass_PassDataCIExy() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::*)()>(
    &::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66cca58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___material)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cameraData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView* UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView::HDRDebugViewPass_PassDataDebugView() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::*)()>(
    &::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66ce474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::setStaticF__DebugHDRModeId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_DebugHDRModeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::getStaticF__DebugHDRModeId() {
  return ::cordl_internals::getStaticField<int32_t, "_DebugHDRModeId",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::setStaticF__HDRDebugParamsId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_HDRDebugParamsId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::getStaticF__HDRDebugParamsId() {
  return ::cordl_internals::getStaticField<int32_t, "_HDRDebugParamsId",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::setStaticF__xyTextureId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_xyTextureId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::getStaticF__xyTextureId() {
  return ::cordl_internals::getStaticField<int32_t, "_xyTextureId",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::setStaticF__SizeOfHDRXYMapping(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SizeOfHDRXYMapping",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::getStaticF__SizeOfHDRXYMapping() {
  return ::cordl_internals::getStaticField<int32_t, "_SizeOfHDRXYMapping",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::setStaticF__CIExyUAVIndex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CIExyUAVIndex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::getStaticF__CIExyUAVIndex() {
  return ::cordl_internals::getStaticField<int32_t, "_CIExyUAVIndex",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants* UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants::HDRDebugViewPass_ShaderConstants() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::HDRDebugViewPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::HDRDebugViewPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66ce5b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass___c._RenderHDRDebug_b__17_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::HDRDebugViewPass___c::*)(
    ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::HDRDebugViewPass___c::_RenderHDRDebug_b__17_0)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x66ce5b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>::get(), "<RenderHDRDebug>b__17_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass___c._RenderHDRDebug_b__17_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::HDRDebugViewPass___c::*)(
    ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::HDRDebugViewPass___c::_RenderHDRDebug_b__17_1)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x66ce6a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>::get(), "<RenderHDRDebug>b__17_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::HDRDebugViewPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::HDRDebugViewPass___c* UnityEngine::Rendering::Universal::HDRDebugViewPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass___c::setStaticF___9__17_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__17_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::HDRDebugViewPass___c::getStaticF___9__17_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__17_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass___c::setStaticF___9__17_1(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__17_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::HDRDebugViewPass___c::getStaticF___9__17_1() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__17_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass___c::_RenderHDRDebug_b__17_0(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy* data,
                                                                                             ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>::get(), "<RenderHDRDebug>b__17_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass___c::_RenderHDRDebug_b__17_1(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView* data,
                                                                                             ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>::get(), "<RenderHDRDebug>b__17_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::HDRDebugViewPass___c* UnityEngine::Rendering::Universal::HDRDebugViewPass___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::HDRDebugViewPass___c::HDRDebugViewPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::HDRDebugViewPass::*)(::UnityEngine::Material*)>(
    &::UnityEngine::Rendering::Universal::HDRDebugViewPass::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x66cc920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass.ConfigureDescriptorForCIEPrepass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::UnityEngine::RenderTextureDescriptor>)>(
    &::UnityEngine::Rendering::Universal::HDRDebugViewPass::ConfigureDescriptorForCIEPrepass)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x66cca5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>::get(),
                                                 "ConfigureDescriptorForCIEPrepass", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass.GetLuminanceParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::HDRDebugViewPass::GetLuminanceParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x66ccaf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>::get(), "GetLuminanceParameters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass.ExecuteCIExyPrepass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*, ::UnityEngine::Rendering::RTHandle*,
                         ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::Universal::HDRDebugViewPass::ExecuteCIExyPrepass)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x66ccc68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>::get(), "ExecuteCIExyPrepass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass.ExecuteHDRDebugViewFinalPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*, ::UnityEngine::Rendering::RTHandle*,
                         ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::Universal::HDRDebugViewPass::ExecuteHDRDebugViewFinalPass)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x66ccf14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>::get(), "ExecuteHDRDebugViewFinalPass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::HDRDebugViewPass::*)()>(
    &::UnityEngine::Rendering::Universal::HDRDebugViewPass::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x66cd2dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::HDRDebugViewPass::*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::HDRDebugMode)>(&::UnityEngine::Rendering::Universal::HDRDebugViewPass::Setup)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x66cd310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::HDRDebugMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::HDRDebugViewPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::HDRDebugViewPass::Execute)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x66cd490;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass.ExecutePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::HDRDebugViewPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*, ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*,
    ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::Universal::HDRDebugViewPass::ExecutePass)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x66cd658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRDebugViewPass.RenderHDRDebug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::HDRDebugViewPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::Universal::HDRDebugMode)>(
    &::UnityEngine::Rendering::Universal::HDRDebugViewPass::RenderHDRDebug)> {
  constexpr static std::size_t size = 0xc58;
  constexpr static std::size_t addrs = 0x66cd81c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>::get(), "RenderHDRDebug", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::HDRDebugMode>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PassDataCIExy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PassDataDebugView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CIExyTarget)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PassthroughRT)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_material)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass::_ctor(::UnityEngine::Material* mat) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mat);
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass::ConfigureDescriptorForCIEPrepass(::ByRef<::UnityEngine::RenderTextureDescriptor> descriptor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>::get(), "ConfigureDescriptorForCIEPrepass",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, descriptor);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::HDRDebugViewPass::GetLuminanceParameters(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>::get(), "GetLuminanceParameters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(nullptr, ___internal_method, cameraData);
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass::ExecuteCIExyPrepass(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                     ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy* data,
                                                                                     ::UnityEngine::Rendering::RTHandle* sourceTexture, ::UnityEngine::Rendering::RTHandle* xyTarget,
                                                                                     ::UnityEngine::Rendering::RTHandle* destTexture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>::get(), "ExecuteCIExyPrepass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, data, sourceTexture, xyTarget, destTexture);
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass::ExecuteHDRDebugViewFinalPass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                              ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView* data,
                                                                                              ::UnityEngine::Rendering::RTHandle* sourceTexture, ::UnityEngine::Rendering::RTHandle* destination,
                                                                                              ::UnityEngine::Rendering::RTHandle* xyTarget) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>::get(), "ExecuteHDRDebugViewFinalPass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, data, sourceTexture, destination, xyTarget);
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass::Setup(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                       ::UnityEngine::Rendering::Universal::HDRDebugMode hdrdebugMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::HDRDebugMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cameraData, hdrdebugMode);
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                         ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass::ExecutePass(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                             ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy* dataCIExy,
                                                                             ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView* dataDebugView,
                                                                             ::UnityEngine::Rendering::RTHandle* sourceTexture, ::UnityEngine::Rendering::RTHandle* xyTarget,
                                                                             ::UnityEngine::Rendering::RTHandle* destTexture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, dataCIExy, dataDebugView, sourceTexture, xyTarget, destTexture);
}
inline void UnityEngine::Rendering::Universal::HDRDebugViewPass::RenderHDRDebug(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                ::UnityEngine::Rendering::RenderGraphModule::TextureHandle srcColor,
                                                                                ::UnityEngine::Rendering::RenderGraphModule::TextureHandle overlayUITexture,
                                                                                ::UnityEngine::Rendering::RenderGraphModule::TextureHandle dstColor,
                                                                                ::UnityEngine::Rendering::Universal::HDRDebugMode hdrDebugMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>::get(), "RenderHDRDebug", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::HDRDebugMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, cameraData, srcColor, overlayUITexture, dstColor, hdrDebugMode);
}
inline ::UnityEngine::Rendering::Universal::HDRDebugViewPass* UnityEngine::Rendering::Universal::HDRDebugViewPass::New_ctor(::UnityEngine::Material* mat) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::HDRDebugViewPass*>(mat));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::HDRDebugViewPass::HDRDebugViewPass() {}
