#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OcclusionCullingCommon.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderHandles_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderParameters_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingCommonShaderVariables_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingDebugShaderVariables_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SilhouettePlaneCache_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingCommon_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ComputeGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__ComputeCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplayGPUResidentDrawer_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugRendererBatcherStats_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawerResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionTestSubviewSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderHandles_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderSubviewUpdate_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingCommon_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingDebugOutput_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionTestComputeShader_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "valid", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastUsedFrameIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "viewInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::OcclusionCullingCommon_OccluderContextSlot::OcclusionCullingCommon_OccluderContextSlot(bool valid, int32_t lastUsedFrameIndex, int32_t viewInstanceID) noexcept {
  this->valid = valid;
  this->lastUsedFrameIndex = lastUsedFrameIndex;
  this->viewInstanceID = viewInstanceID;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OcclusionCullingCommon_OccluderContextSlot::OcclusionCullingCommon_OccluderContextSlot() {}
inline void UnityEngine::Rendering::OcclusionCullingCommon_ShaderIDs::setStaticF_OcclusionCullingCommonShaderVariables(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "OcclusionCullingCommonShaderVariables",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon_ShaderIDs*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::OcclusionCullingCommon_ShaderIDs::getStaticF_OcclusionCullingCommonShaderVariables() {
  return ::cordl_internals::getStaticField<int32_t, "OcclusionCullingCommonShaderVariables",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::OcclusionCullingCommon_ShaderIDs::setStaticF__OccluderDepthPyramid(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_OccluderDepthPyramid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::OcclusionCullingCommon_ShaderIDs::getStaticF__OccluderDepthPyramid() {
  return ::cordl_internals::getStaticField<int32_t, "_OccluderDepthPyramid",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::OcclusionCullingCommon_ShaderIDs::setStaticF__OcclusionDebugOverlay(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_OcclusionDebugOverlay", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::OcclusionCullingCommon_ShaderIDs::getStaticF__OcclusionDebugOverlay() {
  return ::cordl_internals::getStaticField<int32_t, "_OcclusionDebugOverlay",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::OcclusionCullingCommon_ShaderIDs::setStaticF_OcclusionCullingDebugShaderVariables(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "OcclusionCullingDebugShaderVariables",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon_ShaderIDs*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::OcclusionCullingCommon_ShaderIDs::getStaticF_OcclusionCullingDebugShaderVariables() {
  return ::cordl_internals::getStaticField<int32_t, "OcclusionCullingDebugShaderVariables",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon_ShaderIDs*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OcclusionCullingCommon_ShaderIDs::OcclusionCullingCommon_ShaderIDs() {}
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData::*)()>(
    &::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6617918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables& UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData::__cordl_internal_get_cb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cb;
}
constexpr ::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables const& UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData::__cordl_internal_get_cb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cb;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData::__cordl_internal_set_cb(::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cb = value;
}
inline void UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData* UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlayPassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlayPassData::*)()>(
    &::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlayPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x661791c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlayPassData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle& UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlayPassData::__cordl_internal_get_debugPyramid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugPyramid;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle const& UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlayPassData::__cordl_internal_get_debugPyramid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugPyramid;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlayPassData::__cordl_internal_set_debugPyramid(::UnityEngine::Rendering::RenderGraphModule::BufferHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugPyramid = value;
}
inline void UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlayPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlayPassData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlayPassData* UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlayPassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlayPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlayPassData::OcclusionCullingCommon_OcclusionTestOverlayPassData() {}
// Ctor Parameters [CppParam { name: "passIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewport", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") },
// CppParam { name: "valid", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::OcclusionCullingCommon_DebugOccluderViewData::OcclusionCullingCommon_DebugOccluderViewData(int32_t passIndex, ::UnityEngine::Rect viewport, bool valid) noexcept {
  this->passIndex = passIndex;
  this->viewport = viewport;
  this->valid = valid;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OcclusionCullingCommon_DebugOccluderViewData::OcclusionCullingCommon_DebugOccluderViewData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData::*)()>(
    &::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6617920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData::__cordl_internal_get_debugMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData::__cordl_internal_get_debugMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugMaterial;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData::__cordl_internal_set_debugMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___debugMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData::__cordl_internal_get_occluderTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occluderTexture;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData::__cordl_internal_get_occluderTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occluderTexture;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData::__cordl_internal_set_occluderTexture(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___occluderTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rect& UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData::__cordl_internal_get_viewport() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewport;
}
constexpr ::UnityEngine::Rect const& UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData::__cordl_internal_get_viewport() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewport;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData::__cordl_internal_set_viewport(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___viewport = value;
}
constexpr int32_t& UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData::__cordl_internal_get_passIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passIndex;
}
constexpr int32_t const& UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData::__cordl_internal_get_passIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passIndex;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData::__cordl_internal_set_passIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___passIndex = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData::__cordl_internal_get_validRange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validRange;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData::__cordl_internal_get_validRange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validRange;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData::__cordl_internal_set_validRange(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validRange = value;
}
inline void UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData* UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData::OcclusionCullingCommon_OccluderOverlayPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData::*)()>(
    &::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6617924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::OccluderParameters& UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData::__cordl_internal_get_occluderParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occluderParams;
}
constexpr ::UnityEngine::Rendering::OccluderParameters const& UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData::__cordl_internal_get_occluderParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occluderParams;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData::__cordl_internal_set_occluderParams(::UnityEngine::Rendering::OccluderParameters value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___occluderParams = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::OccluderSubviewUpdate>*&
UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData::__cordl_internal_get_occluderSubviewUpdates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occluderSubviewUpdates;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::OccluderSubviewUpdate>* const&
UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData::__cordl_internal_get_occluderSubviewUpdates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occluderSubviewUpdates;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData::__cordl_internal_set_occluderSubviewUpdates(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::OccluderSubviewUpdate>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___occluderSubviewUpdates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::OccluderHandles& UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData::__cordl_internal_get_occluderHandles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occluderHandles;
}
constexpr ::UnityEngine::Rendering::OccluderHandles const& UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData::__cordl_internal_get_occluderHandles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occluderHandles;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData::__cordl_internal_set_occluderHandles(::UnityEngine::Rendering::OccluderHandles value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___occluderHandles = value;
}
inline void UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData* UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData::OcclusionCullingCommon_UpdateOccludersPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OcclusionCullingCommon___c::*)()>(
    &::UnityEngine::Rendering::OcclusionCullingCommon___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x661797c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon___c._RenderDebugOcclusionTestOverlay_b__29_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OcclusionCullingCommon___c::*)(
    ::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*)>(
    &::UnityEngine::Rendering::OcclusionCullingCommon___c::_RenderDebugOcclusionTestOverlay_b__29_0)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6617980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon___c*>::get(), "<RenderDebugOcclusionTestOverlay>b__29_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon___c._RenderDebugOccluderOverlay_b__32_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OcclusionCullingCommon___c::*)(
    ::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::OcclusionCullingCommon___c::_RenderDebugOccluderOverlay_b__32_0)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6617abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon___c*>::get(), "<RenderDebugOccluderOverlay>b__32_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon___c._UpdateInstanceOccluders_b__37_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OcclusionCullingCommon___c::*)(
    ::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*)>(
    &::UnityEngine::Rendering::OcclusionCullingCommon___c::_UpdateInstanceOccluders_b__37_0)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x6617c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon___c*>::get(), "<UpdateInstanceOccluders>b__37_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::OcclusionCullingCommon___c::setStaticF___9(::UnityEngine::Rendering::OcclusionCullingCommon___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::OcclusionCullingCommon___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon___c*>::get>(
      std::forward<::UnityEngine::Rendering::OcclusionCullingCommon___c*>(value));
}
inline ::UnityEngine::Rendering::OcclusionCullingCommon___c* UnityEngine::Rendering::OcclusionCullingCommon___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::OcclusionCullingCommon___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon___c*>::get>();
}
inline void UnityEngine::Rendering::OcclusionCullingCommon___c::setStaticF___9__29_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*,
                                    "<>9__29_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*
UnityEngine::Rendering::OcclusionCullingCommon___c::getStaticF___9__29_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*,
                                           "<>9__29_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon___c*>::get>();
}
inline void UnityEngine::Rendering::OcclusionCullingCommon___c::setStaticF___9__32_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__32_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::OcclusionCullingCommon___c::getStaticF___9__32_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__32_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon___c*>::get>();
}
inline void UnityEngine::Rendering::OcclusionCullingCommon___c::setStaticF___9__37_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*,
                                    "<>9__37_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*
UnityEngine::Rendering::OcclusionCullingCommon___c::getStaticF___9__37_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*,
                                           "<>9__37_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon___c*>::get>();
}
inline void UnityEngine::Rendering::OcclusionCullingCommon___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::OcclusionCullingCommon___c::_RenderDebugOcclusionTestOverlay_b__29_0(::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData* data,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext* ctx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon___c*>::get(), "<RenderDebugOcclusionTestOverlay>b__29_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, ctx);
}
inline void UnityEngine::Rendering::OcclusionCullingCommon___c::_RenderDebugOccluderOverlay_b__32_0(::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData* data,
                                                                                                    ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext ctx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon___c*>::get(), "<RenderDebugOccluderOverlay>b__32_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, ctx);
}
inline void UnityEngine::Rendering::OcclusionCullingCommon___c::_UpdateInstanceOccluders_b__37_0(::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData* data,
                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon___c*>::get(), "<UpdateInstanceOccluders>b__37_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::OcclusionCullingCommon___c* UnityEngine::Rendering::OcclusionCullingCommon___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::OcclusionCullingCommon___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OcclusionCullingCommon___c::OcclusionCullingCommon___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OcclusionCullingCommon::*)(::UnityEngine::Rendering::GPUResidentDrawerResources*)>(
    &::UnityEngine::Rendering::OcclusionCullingCommon::Init)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x6613f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon.UseOcclusionDebug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::UnityEngine::Rendering::OccluderContext>)>(
    &::UnityEngine::Rendering::OcclusionCullingCommon::UseOcclusionDebug)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6614318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "UseOcclusionDebug", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderContext>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon.PrepareCulling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OcclusionCullingCommon::*)(
    ::UnityEngine::Rendering::ComputeCommandBuffer*, ::ByRef<::UnityEngine::Rendering::OccluderContext>, ::ByRef<::UnityEngine::Rendering::OcclusionCullingSettings>,
    ::ByRef<::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings>, ::ByRef<::UnityEngine::Rendering::OcclusionTestComputeShader>, bool)>(
    &::UnityEngine::Rendering::OcclusionCullingCommon::PrepareCulling)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6614328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "PrepareCulling", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ComputeCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderContext>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OcclusionCullingSettings>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OcclusionTestComputeShader>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon.SetDepthPyramid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::ComputeCommandBuffer*, ::ByRef<::UnityEngine::Rendering::OcclusionTestComputeShader>, int32_t, ::ByRef<::UnityEngine::Rendering::OccluderHandles>)>(
        &::UnityEngine::Rendering::OcclusionCullingCommon::SetDepthPyramid)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6614b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "SetDepthPyramid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ComputeCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OcclusionTestComputeShader>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderHandles>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon.SetDebugPyramid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::ComputeCommandBuffer*, ::ByRef<::UnityEngine::Rendering::OcclusionTestComputeShader>, int32_t, ::ByRef<::UnityEngine::Rendering::OccluderHandles>)>(
        &::UnityEngine::Rendering::OcclusionCullingCommon::SetDebugPyramid)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6614ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "SetDebugPyramid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ComputeCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OcclusionTestComputeShader>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderHandles>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon.RenderDebugOcclusionTestOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OcclusionCullingCommon::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*, int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(
    &::UnityEngine::Rendering::OcclusionCullingCommon::RenderDebugOcclusionTestOverlay)> {
  constexpr static std::size_t size = 0x880;
  constexpr static std::size_t addrs = 0x6614c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "RenderDebugOcclusionTestOverlay", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon.RenderDebugOccluderOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OcclusionCullingCommon::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*, ::UnityEngine::Vector2, float_t,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Rendering::OcclusionCullingCommon::RenderDebugOccluderOverlay)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0x661567c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "RenderDebugOccluderOverlay", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon.DispatchDebugClear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OcclusionCullingCommon::*)(::UnityEngine::Rendering::ComputeCommandBuffer*, int32_t)>(
    &::UnityEngine::Rendering::OcclusionCullingCommon::DispatchDebugClear)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x661481c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "DispatchDebugClear", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ComputeCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon.PrepareOccluders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::OccluderHandles (::UnityEngine::Rendering::OcclusionCullingCommon::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::ByRef<::UnityEngine::Rendering::OccluderParameters>)>(&::UnityEngine::Rendering::OcclusionCullingCommon::PrepareOccluders)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x6615bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "PrepareOccluders", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderParameters>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon.CreateFarDepthPyramid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OcclusionCullingCommon::*)(
    ::UnityEngine::Rendering::ComputeCommandBuffer*, ::ByRef<::UnityEngine::Rendering::OccluderParameters>, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>,
    ::ByRef<::UnityEngine::Rendering::OccluderHandles>)>(&::UnityEngine::Rendering::OcclusionCullingCommon::CreateFarDepthPyramid)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x66162dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "CreateFarDepthPyramid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ComputeCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderParameters>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderHandles>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon.UpdateInstanceOccluders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::OcclusionCullingCommon::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::ByRef<::UnityEngine::Rendering::OccluderParameters>, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>)>(
    &::UnityEngine::Rendering::OcclusionCullingCommon::UpdateInstanceOccluders)> {
  constexpr static std::size_t size = 0x79c;
  constexpr static std::size_t addrs = 0x6616500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "UpdateInstanceOccluders", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderParameters>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon.UpdateSilhouettePlanes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OcclusionCullingCommon::*)(
    int32_t, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>)>(&::UnityEngine::Rendering::OcclusionCullingCommon::UpdateSilhouettePlanes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6616c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "UpdateSilhouettePlanes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon.GetOcclusionTestDebugOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::OcclusionCullingDebugOutput (::UnityEngine::Rendering::OcclusionCullingCommon::*)(int32_t)>(
    &::UnityEngine::Rendering::OcclusionCullingCommon::GetOcclusionTestDebugOutput)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6615508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "GetOcclusionTestDebugOutput",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon.UpdateOccluderStats
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OcclusionCullingCommon::*)(::UnityEngine::Rendering::DebugRendererBatcherStats*)>(
    &::UnityEngine::Rendering::OcclusionCullingCommon::UpdateOccluderStats)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x6616ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "UpdateOccluderStats", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugRendererBatcherStats*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon.HasOccluderContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::OcclusionCullingCommon::*)(int32_t)>(
    &::UnityEngine::Rendering::OcclusionCullingCommon::HasOccluderContext)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6617028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "HasOccluderContext",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon.GetOccluderContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::OcclusionCullingCommon::*)(
    int32_t, ::ByRef<::UnityEngine::Rendering::OccluderContext>)>(&::UnityEngine::Rendering::OcclusionCullingCommon::GetOccluderContext)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6617084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "GetOccluderContext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderContext>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon.UpdateFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OcclusionCullingCommon::*)()>(
    &::UnityEngine::Rendering::OcclusionCullingCommon::UpdateFrame)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x66171ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(),
                                                                               "UpdateFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon.NewContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::OcclusionCullingCommon::*)(int32_t)>(
    &::UnityEngine::Rendering::OcclusionCullingCommon::NewContext)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x6615e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "NewContext",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon.DeleteContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OcclusionCullingCommon::*)(int32_t)>(
    &::UnityEngine::Rendering::OcclusionCullingCommon::DeleteContext)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6616130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "DeleteContext",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OcclusionCullingCommon::*)()>(
    &::UnityEngine::Rendering::OcclusionCullingCommon::Dispose)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x6617428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OcclusionCullingCommon::*)()>(
    &::UnityEngine::Rendering::OcclusionCullingCommon::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66176a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommon._RenderDebugOcclusionTestOverlay_b__29_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OcclusionCullingCommon::*)(
    ::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlayPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::OcclusionCullingCommon::_RenderDebugOcclusionTestOverlay_b__29_1)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x66176f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "<RenderDebugOcclusionTestOverlay>b__29_1",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlayPassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_DebugOcclusionTestMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugOcclusionTestMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_DebugOcclusionTestMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugOcclusionTestMaterial;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_set_m_DebugOcclusionTestMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugOcclusionTestMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_OccluderDebugViewMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OccluderDebugViewMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_OccluderDebugViewMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OccluderDebugViewMaterial;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_set_m_OccluderDebugViewMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OccluderDebugViewMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_OcclusionDebugCS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OcclusionDebugCS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_OcclusionDebugCS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OcclusionDebugCS;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_set_m_OcclusionDebugCS(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OcclusionDebugCS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_ClearOcclusionDebugKernel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClearOcclusionDebugKernel;
}
constexpr int32_t const& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_ClearOcclusionDebugKernel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClearOcclusionDebugKernel;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_set_m_ClearOcclusionDebugKernel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClearOcclusionDebugKernel = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_OccluderDepthPyramidCS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OccluderDepthPyramidCS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_OccluderDepthPyramidCS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OccluderDepthPyramidCS;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_set_m_OccluderDepthPyramidCS(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OccluderDepthPyramidCS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_OccluderDepthDownscaleKernel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OccluderDepthDownscaleKernel;
}
constexpr int32_t const& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_OccluderDepthDownscaleKernel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OccluderDepthDownscaleKernel;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_set_m_OccluderDepthDownscaleKernel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OccluderDepthDownscaleKernel = value;
}
constexpr int32_t& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_FrameIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameIndex;
}
constexpr int32_t const& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_FrameIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameIndex;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_set_m_FrameIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FrameIndex = value;
}
constexpr ::UnityEngine::Rendering::SilhouettePlaneCache& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_SilhouettePlaneCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SilhouettePlaneCache;
}
constexpr ::UnityEngine::Rendering::SilhouettePlaneCache const& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_SilhouettePlaneCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SilhouettePlaneCache;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_set_m_SilhouettePlaneCache(::UnityEngine::Rendering::SilhouettePlaneCache value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SilhouettePlaneCache = value;
}
constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t, int32_t>& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_ViewIDToIndexMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ViewIDToIndexMap;
}
constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t, int32_t> const& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_ViewIDToIndexMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ViewIDToIndexMap;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_set_m_ViewIDToIndexMap(::Unity::Collections::NativeParallelHashMap_2<int32_t, int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ViewIDToIndexMap = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::OccluderContext>*& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_OccluderContextData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OccluderContextData;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::OccluderContext>* const& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_OccluderContextData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OccluderContextData;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_set_m_OccluderContextData(::System::Collections::Generic::List_1<::UnityEngine::Rendering::OccluderContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OccluderContextData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::OcclusionCullingCommon_OccluderContextSlot>&
UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_OccluderContextSlots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OccluderContextSlots;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::OcclusionCullingCommon_OccluderContextSlot> const&
UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_OccluderContextSlots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OccluderContextSlots;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_set_m_OccluderContextSlots(
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::OcclusionCullingCommon_OccluderContextSlot> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OccluderContextSlots = value;
}
constexpr ::Unity::Collections::NativeList_1<int32_t>& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_FreeOccluderContexts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreeOccluderContexts;
}
constexpr ::Unity::Collections::NativeList_1<int32_t> const& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_FreeOccluderContexts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreeOccluderContexts;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_set_m_FreeOccluderContexts(::Unity::Collections::NativeList_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FreeOccluderContexts = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables>&
UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_CommonShaderVariables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommonShaderVariables;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables> const&
UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_CommonShaderVariables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommonShaderVariables;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_set_m_CommonShaderVariables(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CommonShaderVariables = value;
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_CommonConstantBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommonConstantBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_CommonConstantBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommonConstantBuffer;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_set_m_CommonConstantBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CommonConstantBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables>&
UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_DebugShaderVariables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugShaderVariables;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables> const&
UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_DebugShaderVariables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugShaderVariables;
}
constexpr void
UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_set_m_DebugShaderVariables(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugShaderVariables = value;
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_DebugConstantBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugConstantBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_DebugConstantBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugConstantBuffer;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_set_m_DebugConstantBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugConstantBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_ProfilingSamplerUpdateOccluders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSamplerUpdateOccluders;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_ProfilingSamplerUpdateOccluders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSamplerUpdateOccluders;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_set_m_ProfilingSamplerUpdateOccluders(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProfilingSamplerUpdateOccluders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_ProfilingSamplerOcclusionTestOverlay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSamplerOcclusionTestOverlay;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_ProfilingSamplerOcclusionTestOverlay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSamplerOcclusionTestOverlay;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_set_m_ProfilingSamplerOcclusionTestOverlay(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProfilingSamplerOcclusionTestOverlay)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_ProfilingSamplerOccluderOverlay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSamplerOccluderOverlay;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_get_m_ProfilingSamplerOccluderOverlay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSamplerOccluderOverlay;
}
constexpr void UnityEngine::Rendering::OcclusionCullingCommon::__cordl_internal_set_m_ProfilingSamplerOccluderOverlay(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProfilingSamplerOccluderOverlay)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::OcclusionCullingCommon::setStaticF_s_MaxContextGCFrame(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_MaxContextGCFrame", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::OcclusionCullingCommon::getStaticF_s_MaxContextGCFrame() {
  return ::cordl_internals::getStaticField<int32_t, "s_MaxContextGCFrame", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get>();
}
inline void UnityEngine::Rendering::OcclusionCullingCommon::Init(::UnityEngine::Rendering::GPUResidentDrawerResources* resources) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resources);
}
inline bool UnityEngine::Rendering::OcclusionCullingCommon::UseOcclusionDebug(::ByRef<::UnityEngine::Rendering::OccluderContext> occluderCtx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "UseOcclusionDebug", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderContext>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, occluderCtx);
}
inline void UnityEngine::Rendering::OcclusionCullingCommon::PrepareCulling(::UnityEngine::Rendering::ComputeCommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::OccluderContext> occluderCtx,
                                                                           ::ByRef<::UnityEngine::Rendering::OcclusionCullingSettings> settings,
                                                                           ::ByRef<::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings> subviewSettings,
                                                                           ::ByRef<::UnityEngine::Rendering::OcclusionTestComputeShader> shader, bool useOcclusionDebug) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "PrepareCulling", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ComputeCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderContext>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OcclusionCullingSettings>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OcclusionTestComputeShader>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, occluderCtx, settings, subviewSettings, shader, useOcclusionDebug);
}
inline void UnityEngine::Rendering::OcclusionCullingCommon::SetDepthPyramid(::UnityEngine::Rendering::ComputeCommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::OcclusionTestComputeShader> shader,
                                                                            int32_t kernel, ::ByRef<::UnityEngine::Rendering::OccluderHandles> occluderHandles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "SetDepthPyramid", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ComputeCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OcclusionTestComputeShader>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderHandles>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, shader, kernel, occluderHandles);
}
inline void UnityEngine::Rendering::OcclusionCullingCommon::SetDebugPyramid(::UnityEngine::Rendering::ComputeCommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::OcclusionTestComputeShader> shader,
                                                                            int32_t kernel, ::ByRef<::UnityEngine::Rendering::OccluderHandles> occluderHandles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "SetDebugPyramid", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ComputeCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OcclusionTestComputeShader>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderHandles>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, shader, kernel, occluderHandles);
}
inline void UnityEngine::Rendering::OcclusionCullingCommon::RenderDebugOcclusionTestOverlay(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                            ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* debugSettings, int32_t viewInstanceID,
                                                                                            ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "RenderDebugOcclusionTestOverlay", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, debugSettings, viewInstanceID, colorBuffer);
}
inline void UnityEngine::Rendering::OcclusionCullingCommon::RenderDebugOccluderOverlay(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                       ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* debugSettings, ::UnityEngine::Vector2 screenPos,
                                                                                       float_t maxHeight, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "RenderDebugOccluderOverlay", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, debugSettings, screenPos, maxHeight, colorBuffer);
}
inline void UnityEngine::Rendering::OcclusionCullingCommon::DispatchDebugClear(::UnityEngine::Rendering::ComputeCommandBuffer* cmd, int32_t viewInstanceID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "DispatchDebugClear", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ComputeCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, viewInstanceID);
}
inline ::UnityEngine::Rendering::OccluderHandles UnityEngine::Rendering::OcclusionCullingCommon::PrepareOccluders(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                                  ::ByRef<::UnityEngine::Rendering::OccluderParameters> occluderParams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "PrepareOccluders", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderParameters>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::OccluderHandles, false>(this, ___internal_method, renderGraph, occluderParams);
}
inline void UnityEngine::Rendering::OcclusionCullingCommon::CreateFarDepthPyramid(::UnityEngine::Rendering::ComputeCommandBuffer* cmd,
                                                                                  ::ByRef<::UnityEngine::Rendering::OccluderParameters> occluderParams,
                                                                                  ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate> occluderSubviewUpdates,
                                                                                  ::ByRef<::UnityEngine::Rendering::OccluderHandles> occluderHandles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "CreateFarDepthPyramid", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ComputeCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderParameters>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderHandles>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, occluderParams, occluderSubviewUpdates, occluderHandles);
}
inline bool UnityEngine::Rendering::OcclusionCullingCommon::UpdateInstanceOccluders(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                    ::ByRef<::UnityEngine::Rendering::OccluderParameters> occluderParams,
                                                                                    ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate> occluderSubviewUpdates) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "UpdateInstanceOccluders", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderParameters>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, renderGraph, occluderParams, occluderSubviewUpdates);
}
inline void UnityEngine::Rendering::OcclusionCullingCommon::UpdateSilhouettePlanes(int32_t viewInstanceID, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> planes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "UpdateSilhouettePlanes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewInstanceID, planes);
}
inline ::UnityEngine::Rendering::OcclusionCullingDebugOutput UnityEngine::Rendering::OcclusionCullingCommon::GetOcclusionTestDebugOutput(int32_t viewInstanceID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "GetOcclusionTestDebugOutput",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::OcclusionCullingDebugOutput, false>(this, ___internal_method, viewInstanceID);
}
inline void UnityEngine::Rendering::OcclusionCullingCommon::UpdateOccluderStats(::UnityEngine::Rendering::DebugRendererBatcherStats* debugStats) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "UpdateOccluderStats", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugRendererBatcherStats*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, debugStats);
}
inline bool UnityEngine::Rendering::OcclusionCullingCommon::HasOccluderContext(int32_t viewInstanceID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "HasOccluderContext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, viewInstanceID);
}
inline bool UnityEngine::Rendering::OcclusionCullingCommon::GetOccluderContext(int32_t viewInstanceID, ::ByRef<::UnityEngine::Rendering::OccluderContext> occluderContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "GetOccluderContext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderContext>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, viewInstanceID, occluderContext);
}
inline void UnityEngine::Rendering::OcclusionCullingCommon::UpdateFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(),
                                                                             "UpdateFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::OcclusionCullingCommon::NewContext(int32_t viewInstanceID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "NewContext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, viewInstanceID);
}
inline void UnityEngine::Rendering::OcclusionCullingCommon::DeleteContext(int32_t viewInstanceID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "DeleteContext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewInstanceID);
}
inline void UnityEngine::Rendering::OcclusionCullingCommon::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::OcclusionCullingCommon::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::OcclusionCullingCommon::_RenderDebugOcclusionTestOverlay_b__29_1(::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlayPassData* data,
                                                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext ctx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(), "<RenderDebugOcclusionTestOverlay>b__29_1",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlayPassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, ctx);
}
inline ::UnityEngine::Rendering::OcclusionCullingCommon* UnityEngine::Rendering::OcclusionCullingCommon::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::OcclusionCullingCommon*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::OcclusionCullingCommon::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::OcclusionCullingCommon::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OcclusionCullingCommon::OcclusionCullingCommon() {}
