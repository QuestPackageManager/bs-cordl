#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderChainVEData.hpp"
#include "UnityEngine/UIElements/UIR/Implementation/zzzz__ClipMethod_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataDirtyTypes_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataFlags_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainVEData_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BasicNode_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshHandle_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainCommand_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextureEntry_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainVEData.get_lastClosingOrLastCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::RenderChainCommand* (::UnityEngine::UIElements::UIR::RenderChainVEData::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChainVEData::get_lastClosingOrLastCommand)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x49af01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainVEData>::get(),
                                                                               "get_lastClosingOrLastCommand", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainVEData.AllocatesID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::UIR::BMPAlloc)>(
    &::UnityEngine::UIElements::UIR::RenderChainVEData::AllocatesID)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x49af034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainVEData>::get(), "AllocatesID", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BMPAlloc>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainVEData.InheritsID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::UIR::BMPAlloc)>(&::UnityEngine::UIElements::UIR::RenderChainVEData::InheritsID)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x49af0b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainVEData>::get(), "InheritsID", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BMPAlloc>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainVEData.get_isIgnoringDynamicColorHint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderChainVEData::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChainVEData::get_isIgnoringDynamicColorHint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x49af118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainVEData>::get(),
                                                                               "get_isIgnoringDynamicColorHint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::UIR::RenderChainCommand* UnityEngine::UIElements::UIR::RenderChainVEData::get_lastClosingOrLastCommand() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainVEData>::get(),
                                                                             "get_lastClosingOrLastCommand", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderChainCommand*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::RenderChainVEData::AllocatesID(::UnityEngine::UIElements::UIR::BMPAlloc alloc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainVEData>::get(), "AllocatesID", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BMPAlloc>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, alloc);
}
inline bool UnityEngine::UIElements::UIR::RenderChainVEData::InheritsID(::UnityEngine::UIElements::UIR::BMPAlloc alloc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainVEData>::get(), "InheritsID", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BMPAlloc>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, alloc);
}
inline bool UnityEngine::UIElements::UIR::RenderChainVEData::get_isIgnoringDynamicColorHint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainVEData>::get(),
                                                                             "get_isIgnoringDynamicColorHint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "prev", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}") }, CppParam { name: "next", ty:
// "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}") }, CppParam { name: "groupTransformAncestor", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "boneTransformAncestor", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}") }, CppParam { name: "prevDirty", ty:
// "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}") }, CppParam { name: "nextDirty", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "flags", ty: "::UnityEngine::UIElements::UIR::RenderDataFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "hierarchyDepth", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "dirtiedValues", ty: "::UnityEngine::UIElements::UIR::RenderDataDirtyTypes", modifiers: "", def_value: Some("{}") }, CppParam { name: "dirtyID", ty:
// "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "firstCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "lastCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: Some("{}") }, CppParam { name: "firstClosingCommand", ty:
// "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastClosingCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "isInChain", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isHierarchyHidden", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "localFlipsWinding", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "localTransformScaleZero", ty: "bool", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "worldFlipsWinding", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldTransformScaleZero", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "clipMethod", ty: "::UnityEngine::UIElements::UIR::Implementation::ClipMethod", modifiers: "", def_value: Some("{}") }, CppParam { name: "childrenStencilRef", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "childrenMaskDepth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "disableNudging", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "data", ty: "::UnityEngine::UIElements::UIR::MeshHandle*", modifiers: "", def_value: Some("{}") }, CppParam { name: "closingData", ty:
// "::UnityEngine::UIElements::UIR::MeshHandle*", modifiers: "", def_value: Some("{}") }, CppParam { name: "verticesSpace", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") },
// CppParam { name: "displacementUVStart", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "displacementUVEnd", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "transformID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "clipRectID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "opacityID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "textCoreSettingsID",
// ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "backgroundColorID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "borderLeftColorID", ty:
// "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "borderTopColorID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "borderRightColorID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "borderBottomColorID", ty:
// "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "tintColorID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "compositeOpacity", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "backgroundColor", ty: "::UnityEngine::Color", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "textures", ty: "::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::RenderChainVEData::RenderChainVEData(
    ::UnityEngine::UIElements::VisualElement* prev, ::UnityEngine::UIElements::VisualElement* next, ::UnityEngine::UIElements::VisualElement* groupTransformAncestor,
    ::UnityEngine::UIElements::VisualElement* boneTransformAncestor, ::UnityEngine::UIElements::VisualElement* prevDirty, ::UnityEngine::UIElements::VisualElement* nextDirty,
    ::UnityEngine::UIElements::UIR::RenderDataFlags flags, int32_t hierarchyDepth, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtiedValues, uint32_t dirtyID,
    ::UnityEngine::UIElements::UIR::RenderChainCommand* firstCommand, ::UnityEngine::UIElements::UIR::RenderChainCommand* lastCommand,
    ::UnityEngine::UIElements::UIR::RenderChainCommand* firstClosingCommand, ::UnityEngine::UIElements::UIR::RenderChainCommand* lastClosingCommand, bool isInChain, bool isHierarchyHidden,
    bool localFlipsWinding, bool localTransformScaleZero, bool worldFlipsWinding, bool worldTransformScaleZero, ::UnityEngine::UIElements::UIR::Implementation::ClipMethod clipMethod,
    int32_t childrenStencilRef, int32_t childrenMaskDepth, bool disableNudging, ::UnityEngine::UIElements::UIR::MeshHandle* data, ::UnityEngine::UIElements::UIR::MeshHandle* closingData,
    ::UnityEngine::Matrix4x4 verticesSpace, int32_t displacementUVStart, int32_t displacementUVEnd, ::UnityEngine::UIElements::UIR::BMPAlloc transformID,
    ::UnityEngine::UIElements::UIR::BMPAlloc clipRectID, ::UnityEngine::UIElements::UIR::BMPAlloc opacityID, ::UnityEngine::UIElements::UIR::BMPAlloc textCoreSettingsID,
    ::UnityEngine::UIElements::UIR::BMPAlloc colorID, ::UnityEngine::UIElements::UIR::BMPAlloc backgroundColorID, ::UnityEngine::UIElements::UIR::BMPAlloc borderLeftColorID,
    ::UnityEngine::UIElements::UIR::BMPAlloc borderTopColorID, ::UnityEngine::UIElements::UIR::BMPAlloc borderRightColorID, ::UnityEngine::UIElements::UIR::BMPAlloc borderBottomColorID,
    ::UnityEngine::UIElements::UIR::BMPAlloc tintColorID, float_t compositeOpacity, ::UnityEngine::Color backgroundColor,
    ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>* textures) noexcept {
  this->prev = prev;
  this->next = next;
  this->groupTransformAncestor = groupTransformAncestor;
  this->boneTransformAncestor = boneTransformAncestor;
  this->prevDirty = prevDirty;
  this->nextDirty = nextDirty;
  this->flags = flags;
  this->hierarchyDepth = hierarchyDepth;
  this->dirtiedValues = dirtiedValues;
  this->dirtyID = dirtyID;
  this->firstCommand = firstCommand;
  this->lastCommand = lastCommand;
  this->firstClosingCommand = firstClosingCommand;
  this->lastClosingCommand = lastClosingCommand;
  this->isInChain = isInChain;
  this->isHierarchyHidden = isHierarchyHidden;
  this->localFlipsWinding = localFlipsWinding;
  this->localTransformScaleZero = localTransformScaleZero;
  this->worldFlipsWinding = worldFlipsWinding;
  this->worldTransformScaleZero = worldTransformScaleZero;
  this->clipMethod = clipMethod;
  this->childrenStencilRef = childrenStencilRef;
  this->childrenMaskDepth = childrenMaskDepth;
  this->disableNudging = disableNudging;
  this->data = data;
  this->closingData = closingData;
  this->verticesSpace = verticesSpace;
  this->displacementUVStart = displacementUVStart;
  this->displacementUVEnd = displacementUVEnd;
  this->transformID = transformID;
  this->clipRectID = clipRectID;
  this->opacityID = opacityID;
  this->textCoreSettingsID = textCoreSettingsID;
  this->colorID = colorID;
  this->backgroundColorID = backgroundColorID;
  this->borderLeftColorID = borderLeftColorID;
  this->borderTopColorID = borderTopColorID;
  this->borderRightColorID = borderRightColorID;
  this->borderBottomColorID = borderBottomColorID;
  this->tintColorID = tintColorID;
  this->compositeOpacity = compositeOpacity;
  this->backgroundColor = backgroundColor;
  this->textures = textures;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::RenderChainVEData::RenderChainVEData() {}
