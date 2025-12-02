#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RendererUtils/RendererListDesc.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_impl.hpp"
#include "UnityEngine/Rendering/zzzz__PerObjectData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderQueueRange_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SortingCriteria_impl.hpp"
#include "UnityEngine/Rendering/RendererUtils/zzzz__RendererListDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererListParams_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RendererUtils::RendererListDesc.get_batchLayerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::Rendering::RendererUtils::RendererListDesc::*)()>(
    &::UnityEngine::Rendering::RendererUtils::RendererListDesc::get_batchLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f9fac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererListDesc>::get(),
                                                                               "get_batchLayerMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RendererUtils::RendererListDesc.get_cullingResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::CullingResults (::UnityEngine::Rendering::RendererUtils::RendererListDesc::*)()>(
    &::UnityEngine::Rendering::RendererUtils::RendererListDesc::get_cullingResult)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68f9fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererListDesc>::get(),
                                                                               "get_cullingResult", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RendererUtils::RendererListDesc.get_camera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::Rendering::RendererUtils::RendererListDesc::*)()>(
    &::UnityEngine::Rendering::RendererUtils::RendererListDesc::get_camera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f9fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererListDesc>::get(),
                                                                               "get_camera", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RendererUtils::RendererListDesc.get_passName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ShaderTagId (::UnityEngine::Rendering::RendererUtils::RendererListDesc::*)()>(
    &::UnityEngine::Rendering::RendererUtils::RendererListDesc::get_passName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f9fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererListDesc>::get(),
                                                                               "get_passName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RendererUtils::RendererListDesc.get_passNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Rendering::ShaderTagId, ::Array<::UnityEngine::Rendering::ShaderTagId>*> (
    ::UnityEngine::Rendering::RendererUtils::RendererListDesc::*)()>(&::UnityEngine::Rendering::RendererUtils::RendererListDesc::get_passNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f9fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererListDesc>::get(),
                                                                               "get_passNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RendererUtils::RendererListDesc.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RendererUtils::RendererListDesc::*)()>(
    &::UnityEngine::Rendering::RendererUtils::RendererListDesc::IsValid)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x68f9fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererListDesc>::get(),
                                                                               "IsValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RendererUtils::RendererListDesc.ConvertToParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RendererListParams (*)(::ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc>)>(
    &::UnityEngine::Rendering::RendererUtils::RendererListDesc::ConvertToParameters)> {
  constexpr static std::size_t size = 0x750;
  constexpr static std::size_t addrs = 0x68fa0fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererListDesc>::get(), "ConvertToParameters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RendererUtils::RendererListDesc::setStaticF_s_EmptyName(::UnityEngine::Rendering::ShaderTagId value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderTagId, "s_EmptyName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererListDesc>::get>(
      std::forward<::UnityEngine::Rendering::ShaderTagId>(value));
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Rendering::RendererUtils::RendererListDesc::getStaticF_s_EmptyName() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderTagId, "s_EmptyName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererListDesc>::get>();
}
inline uint32_t UnityEngine::Rendering::RendererUtils::RendererListDesc::get_batchLayerMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererListDesc>::get(),
                                                                             "get_batchLayerMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::CullingResults UnityEngine::Rendering::RendererUtils::RendererListDesc::get_cullingResult() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererListDesc>::get(),
                                                                             "get_cullingResult", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CullingResults, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::Rendering::RendererUtils::RendererListDesc::get_camera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererListDesc>::get(),
                                                                             "get_camera", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Rendering::RendererUtils::RendererListDesc::get_passName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererListDesc>::get(),
                                                                             "get_passName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderTagId, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Rendering::ShaderTagId, ::Array<::UnityEngine::Rendering::ShaderTagId>*> UnityEngine::Rendering::RendererUtils::RendererListDesc::get_passNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererListDesc>::get(),
                                                                             "get_passNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::ShaderTagId, ::Array<::UnityEngine::Rendering::ShaderTagId>*>, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::RendererUtils::RendererListDesc::IsValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererListDesc>::get(),
                                                                             "IsValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RendererListParams
UnityEngine::Rendering::RendererUtils::RendererListDesc::ConvertToParameters(::ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc> desc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererListDesc>::get(), "ConvertToParameters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererListParams, false>(nullptr, ___internal_method, desc);
}
// Ctor Parameters [CppParam { name: "sortingCriteria", ty: "::UnityEngine::Rendering::SortingCriteria", modifiers: "", def_value: Some("{}") }, CppParam { name: "rendererConfiguration", ty:
// "::UnityEngine::Rendering::PerObjectData", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderQueueRange", ty: "::UnityEngine::Rendering::RenderQueueRange", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "stateBlock", ty: "::System::Nullable_1<::UnityEngine::Rendering::RenderStateBlock>", modifiers: "", def_value: Some("{}") }, CppParam { name: "overrideShader", ty:
// "::UnityW<::UnityEngine::Shader>", modifiers: "", def_value: Some("{}") }, CppParam { name: "overrideMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "excludeObjectMotionVectors", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "layerMask", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "renderingLayerMask", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_batchLayerMask_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "overrideMaterialPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "overrideShaderPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "_cullingResult_k__BackingField", ty: "::UnityEngine::Rendering::CullingResults", modifiers: "", def_value: Some("{}") }, CppParam { name: "_camera_k__BackingField", ty:
// "::UnityW<::UnityEngine::Camera>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_passName_k__BackingField", ty: "::UnityEngine::Rendering::ShaderTagId", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_passNames_k__BackingField", ty: "::ArrayW<::UnityEngine::Rendering::ShaderTagId,::Array<::UnityEngine::Rendering::ShaderTagId>*>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Rendering::RendererUtils::RendererListDesc::RendererListDesc(
    ::UnityEngine::Rendering::SortingCriteria sortingCriteria, ::UnityEngine::Rendering::PerObjectData rendererConfiguration, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange,
    ::System::Nullable_1<::UnityEngine::Rendering::RenderStateBlock> stateBlock, ::UnityW<::UnityEngine::Shader> overrideShader, ::UnityW<::UnityEngine::Material> overrideMaterial,
    bool excludeObjectMotionVectors, int32_t layerMask, uint32_t renderingLayerMask, uint32_t _batchLayerMask_k__BackingField, int32_t overrideMaterialPassIndex, int32_t overrideShaderPassIndex,
    ::UnityEngine::Rendering::CullingResults _cullingResult_k__BackingField, ::UnityW<::UnityEngine::Camera> _camera_k__BackingField, ::UnityEngine::Rendering::ShaderTagId _passName_k__BackingField,
    ::ArrayW<::UnityEngine::Rendering::ShaderTagId, ::Array<::UnityEngine::Rendering::ShaderTagId>*> _passNames_k__BackingField) noexcept {
  this->sortingCriteria = sortingCriteria;
  this->rendererConfiguration = rendererConfiguration;
  this->renderQueueRange = renderQueueRange;
  this->stateBlock = stateBlock;
  this->overrideShader = overrideShader;
  this->overrideMaterial = overrideMaterial;
  this->excludeObjectMotionVectors = excludeObjectMotionVectors;
  this->layerMask = layerMask;
  this->renderingLayerMask = renderingLayerMask;
  this->_batchLayerMask_k__BackingField = _batchLayerMask_k__BackingField;
  this->overrideMaterialPassIndex = overrideMaterialPassIndex;
  this->overrideShaderPassIndex = overrideShaderPassIndex;
  this->_cullingResult_k__BackingField = _cullingResult_k__BackingField;
  this->_camera_k__BackingField = _camera_k__BackingField;
  this->_passName_k__BackingField = _passName_k__BackingField;
  this->_passNames_k__BackingField = _passNames_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RendererUtils::RendererListDesc::RendererListDesc() {}
