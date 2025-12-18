#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderObjects.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderQueueType_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CompareFunction_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderObjects_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderObjectsPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderObjects_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__StencilStateData_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::RenderObjectsSettings_RenderObjects_OverrideMaterialMode::RenderObjectsSettings_RenderObjects_OverrideMaterialMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderObjectsSettings_RenderObjects_OverrideMaterialMode::RenderObjectsSettings_RenderObjects_OverrideMaterialMode() {}
constexpr ::UnityEngine::Rendering::Universal::RenderObjectsSettings_RenderObjects_OverrideMaterialMode
    UnityEngine::Rendering::Universal::RenderObjectsSettings_RenderObjects_OverrideMaterialMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::RenderObjectsSettings_RenderObjects_OverrideMaterialMode
    UnityEngine::Rendering::Universal::RenderObjectsSettings_RenderObjects_OverrideMaterialMode::Material{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::RenderObjectsSettings_RenderObjects_OverrideMaterialMode
    UnityEngine::Rendering::Universal::RenderObjectsSettings_RenderObjects_OverrideMaterialMode::Shader{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::*)()>(
    &::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x66f74c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_get_passTag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passTag;
}
constexpr ::StringW const& UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_get_passTag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passTag;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_set_passTag(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___passTag)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent& UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_get_Event() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Event;
}
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent const& UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_get_Event() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Event;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_set_Event(::UnityEngine::Rendering::Universal::RenderPassEvent value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Event = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderObjects_FilterSettings*& UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_get_filterSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filterSettings;
}
constexpr ::UnityEngine::Rendering::Universal::RenderObjects_FilterSettings* const&
UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_get_filterSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filterSettings;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_set_filterSettings(::UnityEngine::Rendering::Universal::RenderObjects_FilterSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___filterSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_get_overrideMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_get_overrideMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideMaterial;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_set_overrideMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___overrideMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_get_overrideMaterialPassIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideMaterialPassIndex;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_get_overrideMaterialPassIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideMaterialPassIndex;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_set_overrideMaterialPassIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideMaterialPassIndex = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_get_overrideShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_get_overrideShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideShader;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_set_overrideShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___overrideShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_get_overrideShaderPassIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideShaderPassIndex;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_get_overrideShaderPassIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideShaderPassIndex;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_set_overrideShaderPassIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideShaderPassIndex = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderObjectsSettings_RenderObjects_OverrideMaterialMode&
UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_get_overrideMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideMode;
}
constexpr ::UnityEngine::Rendering::Universal::RenderObjectsSettings_RenderObjects_OverrideMaterialMode const&
UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_get_overrideMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideMode;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_set_overrideMode(
    ::UnityEngine::Rendering::Universal::RenderObjectsSettings_RenderObjects_OverrideMaterialMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideMode = value;
}
constexpr bool& UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_get_overrideDepthState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideDepthState;
}
constexpr bool const& UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_get_overrideDepthState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideDepthState;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_set_overrideDepthState(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideDepthState = value;
}
constexpr ::UnityEngine::Rendering::CompareFunction& UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_get_depthCompareFunction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthCompareFunction;
}
constexpr ::UnityEngine::Rendering::CompareFunction const& UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_get_depthCompareFunction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthCompareFunction;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_set_depthCompareFunction(::UnityEngine::Rendering::CompareFunction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depthCompareFunction = value;
}
constexpr bool& UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_get_enableWrite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableWrite;
}
constexpr bool const& UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_get_enableWrite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableWrite;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_set_enableWrite(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableWrite = value;
}
constexpr ::UnityEngine::Rendering::Universal::StencilStateData*& UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_get_stencilSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilSettings;
}
constexpr ::UnityEngine::Rendering::Universal::StencilStateData* const& UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_get_stencilSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilSettings;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_set_stencilSettings(::UnityEngine::Rendering::Universal::StencilStateData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stencilSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings*& UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_get_cameraSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraSettings;
}
constexpr ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* const&
UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_get_cameraSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraSettings;
}
constexpr void
UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::__cordl_internal_set_cameraSettings(::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cameraSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings* UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings::RenderObjects_RenderObjectsSettings() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjects_FilterSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::RenderObjects_FilterSettings::*)()>(
    &::UnityEngine::Rendering::Universal::RenderObjects_FilterSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66f75b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderObjects_FilterSettings*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::RenderQueueType& UnityEngine::Rendering::Universal::RenderObjects_FilterSettings::__cordl_internal_get_RenderQueueType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RenderQueueType;
}
constexpr ::UnityEngine::Rendering::Universal::RenderQueueType const& UnityEngine::Rendering::Universal::RenderObjects_FilterSettings::__cordl_internal_get_RenderQueueType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RenderQueueType;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjects_FilterSettings::__cordl_internal_set_RenderQueueType(::UnityEngine::Rendering::Universal::RenderQueueType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RenderQueueType = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::Rendering::Universal::RenderObjects_FilterSettings::__cordl_internal_get_LayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LayerMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::Rendering::Universal::RenderObjects_FilterSettings::__cordl_internal_get_LayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LayerMask;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjects_FilterSettings::__cordl_internal_set_LayerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LayerMask = value;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& UnityEngine::Rendering::Universal::RenderObjects_FilterSettings::__cordl_internal_get_PassNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PassNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& UnityEngine::Rendering::Universal::RenderObjects_FilterSettings::__cordl_internal_get_PassNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PassNames;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjects_FilterSettings::__cordl_internal_set_PassNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PassNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::RenderObjects_FilterSettings::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderObjects_FilterSettings*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::RenderObjects_FilterSettings* UnityEngine::Rendering::Universal::RenderObjects_FilterSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::RenderObjects_FilterSettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderObjects_FilterSettings::RenderObjects_FilterSettings() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings::*)()>(
    &::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66f75c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings::__cordl_internal_get_overrideCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideCamera;
}
constexpr bool const& UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings::__cordl_internal_get_overrideCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideCamera;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings::__cordl_internal_set_overrideCamera(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideCamera = value;
}
constexpr bool& UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings::__cordl_internal_get_restoreCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___restoreCamera;
}
constexpr bool const& UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings::__cordl_internal_get_restoreCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___restoreCamera;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings::__cordl_internal_set_restoreCamera(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___restoreCamera = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings::__cordl_internal_get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings::__cordl_internal_get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings::__cordl_internal_set_offset(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings::__cordl_internal_get_cameraFieldOfView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraFieldOfView;
}
constexpr float_t const& UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings::__cordl_internal_get_cameraFieldOfView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraFieldOfView;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings::__cordl_internal_set_cameraFieldOfView(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraFieldOfView = value;
}
inline void UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings::RenderObjects_CustomCameraSettings() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjects.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::RenderObjects::*)()>(
    &::UnityEngine::Rendering::Universal::RenderObjects::Create)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x66f7208;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderObjects*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderObjects*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjects.AddRenderPasses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::RenderObjects::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::RenderObjects::AddRenderPasses)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x66f73a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderObjects*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderObjects*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjects.SupportsNativeRenderPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::RenderObjects::*)()>(
    &::UnityEngine::Rendering::Universal::RenderObjects::SupportsNativeRenderPass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66f7458;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderObjects*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderObjects*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjects._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::RenderObjects::*)()>(
    &::UnityEngine::Rendering::Universal::RenderObjects::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x66f7460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderObjects*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings*& UnityEngine::Rendering::Universal::RenderObjects::__cordl_internal_get_settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr ::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings* const& UnityEngine::Rendering::Universal::RenderObjects::__cordl_internal_get_settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjects::__cordl_internal_set_settings(::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::RenderObjectsPass*& UnityEngine::Rendering::Universal::RenderObjects::__cordl_internal_get_renderObjectsPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderObjectsPass;
}
constexpr ::UnityEngine::Rendering::Universal::RenderObjectsPass* const& UnityEngine::Rendering::Universal::RenderObjects::__cordl_internal_get_renderObjectsPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderObjectsPass;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjects::__cordl_internal_set_renderObjectsPass(::UnityEngine::Rendering::Universal::RenderObjectsPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___renderObjectsPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::RenderObjects::Create() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderObjects*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::RenderObjects::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                              ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderObjects*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderer, renderingData);
}
inline bool UnityEngine::Rendering::Universal::RenderObjects::SupportsNativeRenderPass() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderObjects*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::RenderObjects::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderObjects*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::RenderObjects* UnityEngine::Rendering::Universal::RenderObjects::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::RenderObjects*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderObjects::RenderObjects() {}
