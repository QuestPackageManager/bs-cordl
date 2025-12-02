#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OcclusionCullingCommonShaderVariables.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingCommonShaderVariables_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionTestSubviewSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingCommonShaderVariables_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer::OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer(
    float_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer::OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer::OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer(
    uint32_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer::OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer::OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer(
    float_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer::OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer::OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer(
    float_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer::OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer(
    float_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables::*)(
    ::ByRef<::UnityEngine::Rendering::OccluderContext>, ::ByRef<::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings>, bool, bool)>(
    &::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables::_ctor)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x66144f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderContext>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::OcclusionCullingCommonShaderVariables::_ctor(::ByRef<::UnityEngine::Rendering::OccluderContext> occluderCtx,
                                                                                 ::ByRef<::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings> subviewSettings,
                                                                                 bool occlusionOverlayCountVisible, bool overrideOcclusionTestToAlwaysPass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderContext>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, occluderCtx, subviewSettings, occlusionOverlayCountVisible, overrideOcclusionTestToAlwaysPass);
}
// Ctor Parameters [CppParam { name: "_OccluderMipBounds", ty: "::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_ViewProjMatrix", ty: "::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_ViewOriginWorldSpace", ty: "::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_FacingDirWorldSpace", ty: "::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "_RadialDirWorldSpace", ty: "::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_DepthSizeInOccluderPixels", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OccluderDepthPyramidSize", ty: "::UnityEngine::Vector4", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_OccluderMipLayoutSizeX", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OccluderMipLayoutSizeY", ty: "uint32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_OcclusionTestDebugFlags", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OcclusionCullingCommonPad0", ty: "uint32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_OcclusionTestCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OccluderSubviewIndices", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_CullingSplitIndices", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_CullingSplitMask", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables::OcclusionCullingCommonShaderVariables(
    ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer _OccluderMipBounds,
    ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer _ViewProjMatrix,
    ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer _ViewOriginWorldSpace,
    ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer _FacingDirWorldSpace,
    ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer _RadialDirWorldSpace, ::UnityEngine::Vector4 _DepthSizeInOccluderPixels,
    ::UnityEngine::Vector4 _OccluderDepthPyramidSize, uint32_t _OccluderMipLayoutSizeX, uint32_t _OccluderMipLayoutSizeY, uint32_t _OcclusionTestDebugFlags, uint32_t _OcclusionCullingCommonPad0,
    int32_t _OcclusionTestCount, int32_t _OccluderSubviewIndices, int32_t _CullingSplitIndices, int32_t _CullingSplitMask) noexcept {
  this->_OccluderMipBounds = _OccluderMipBounds;
  this->_ViewProjMatrix = _ViewProjMatrix;
  this->_ViewOriginWorldSpace = _ViewOriginWorldSpace;
  this->_FacingDirWorldSpace = _FacingDirWorldSpace;
  this->_RadialDirWorldSpace = _RadialDirWorldSpace;
  this->_DepthSizeInOccluderPixels = _DepthSizeInOccluderPixels;
  this->_OccluderDepthPyramidSize = _OccluderDepthPyramidSize;
  this->_OccluderMipLayoutSizeX = _OccluderMipLayoutSizeX;
  this->_OccluderMipLayoutSizeY = _OccluderMipLayoutSizeY;
  this->_OcclusionTestDebugFlags = _OcclusionTestDebugFlags;
  this->_OcclusionCullingCommonPad0 = _OcclusionCullingCommonPad0;
  this->_OcclusionTestCount = _OcclusionTestCount;
  this->_OccluderSubviewIndices = _OccluderSubviewIndices;
  this->_CullingSplitIndices = _CullingSplitIndices;
  this->_CullingSplitMask = _CullingSplitMask;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables::OcclusionCullingCommonShaderVariables() {}
