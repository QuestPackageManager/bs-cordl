#pragma once
#include "UnityEngine/UIElements/UIR/Implementation/zzzz__ClipMethod_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataDirtyTypes_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainVEData_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataDirtyTypes_def.hpp"
#include "UnityEngine/UIElements/UIR/Implementation/zzzz__ClipMethod_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshHandle_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainTextEntry_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextureEntry_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BasicNode_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainCommand_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainVEData.get_lastClosingOrLastCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::RenderChainCommand* (::UnityEngine::UIElements::UIR::RenderChainVEData::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChainVEData::get_lastClosingOrLastCommand)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2e91e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainVEData>::get(),
                                                                               "get_lastClosingOrLastCommand", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainVEData.AllocatesID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::UIR::BMPAlloc)>(
    &::UnityEngine::UIElements::UIR::RenderChainVEData::AllocatesID)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2e91e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainVEData>::get(), "AllocatesID", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BMPAlloc>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainVEData.InheritsID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::UIR::BMPAlloc)>(&::UnityEngine::UIElements::UIR::RenderChainVEData::InheritsID)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2e91e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainVEData>::get(), "InheritsID", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BMPAlloc>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::UIR::RenderChainCommand* UnityEngine::UIElements::UIR::RenderChainVEData::get_lastClosingOrLastCommand() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainVEData>::get(),
                                                                             "get_lastClosingOrLastCommand", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderChainCommand*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::RenderChainVEData::AllocatesID(::UnityEngine::UIElements::UIR::BMPAlloc alloc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainVEData>::get(), "AllocatesID", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BMPAlloc>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, alloc);
}
inline bool UnityEngine::UIElements::UIR::RenderChainVEData::InheritsID(::UnityEngine::UIElements::UIR::BMPAlloc alloc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainVEData>::get(), "InheritsID", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BMPAlloc>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, alloc);
}
// Ctor Parameters [CppParam { name: "prev", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "next", ty:
// "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "groupTransformAncestor", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "boneTransformAncestor", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "prevDirty",
// ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "nextDirty", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "hierarchyDepth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dirtiedValues", ty:
// "::UnityEngine::UIElements::UIR::RenderDataDirtyTypes", modifiers: "", def_value: Some("{}") }, CppParam { name: "dirtyID", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "firstCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "lastCommand", ty:
// "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "firstClosingCommand", ty:
// "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "lastClosingCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "isInChain", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isHierarchyHidden", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "localFlipsWinding", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "localTransformScaleZero", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "worldFlipsWinding", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "clipMethod", ty:
// "::UnityEngine::UIElements::UIR::Implementation::ClipMethod", modifiers: "", def_value: Some("{}") }, CppParam { name: "childrenStencilRef", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "childrenMaskDepth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "disableNudging", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "usesLegacyText", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "::UnityEngine::UIElements::UIR::MeshHandle*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "closingData", ty: "::UnityEngine::UIElements::UIR::MeshHandle*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "verticesSpace", ty: "::UnityEngine::Matrix4x4",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "displacementUVStart", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "displacementUVEnd", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "transformID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "clipRectID", ty:
// "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "opacityID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "textCoreSettingsID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "backgroundColorID", ty:
// "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "borderLeftColorID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "borderTopColorID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "borderRightColorID", ty:
// "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "borderBottomColorID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "tintColorID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "compositeOpacity", ty: "float_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "backgroundColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "prevText", ty:
// "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "nextText", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "textEntries", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChainTextEntry>*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "textures", ty: "::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::UIElements::UIR::RenderChainVEData::RenderChainVEData(
    ::UnityEngine::UIElements::VisualElement* prev, ::UnityEngine::UIElements::VisualElement* next, ::UnityEngine::UIElements::VisualElement* groupTransformAncestor,
    ::UnityEngine::UIElements::VisualElement* boneTransformAncestor, ::UnityEngine::UIElements::VisualElement* prevDirty, ::UnityEngine::UIElements::VisualElement* nextDirty, int32_t hierarchyDepth,
    ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtiedValues, uint32_t dirtyID, ::UnityEngine::UIElements::UIR::RenderChainCommand* firstCommand,
    ::UnityEngine::UIElements::UIR::RenderChainCommand* lastCommand, ::UnityEngine::UIElements::UIR::RenderChainCommand* firstClosingCommand,
    ::UnityEngine::UIElements::UIR::RenderChainCommand* lastClosingCommand, bool isInChain, bool isHierarchyHidden, bool localFlipsWinding, bool localTransformScaleZero, bool worldFlipsWinding,
    ::UnityEngine::UIElements::UIR::Implementation::ClipMethod clipMethod, int32_t childrenStencilRef, int32_t childrenMaskDepth, bool disableNudging, bool usesLegacyText,
    ::UnityEngine::UIElements::UIR::MeshHandle* data, ::UnityEngine::UIElements::UIR::MeshHandle* closingData, ::UnityEngine::Matrix4x4 verticesSpace, int32_t displacementUVStart,
    int32_t displacementUVEnd, ::UnityEngine::UIElements::UIR::BMPAlloc transformID, ::UnityEngine::UIElements::UIR::BMPAlloc clipRectID, ::UnityEngine::UIElements::UIR::BMPAlloc opacityID,
    ::UnityEngine::UIElements::UIR::BMPAlloc textCoreSettingsID, ::UnityEngine::UIElements::UIR::BMPAlloc backgroundColorID, ::UnityEngine::UIElements::UIR::BMPAlloc borderLeftColorID,
    ::UnityEngine::UIElements::UIR::BMPAlloc borderTopColorID, ::UnityEngine::UIElements::UIR::BMPAlloc borderRightColorID, ::UnityEngine::UIElements::UIR::BMPAlloc borderBottomColorID,
    ::UnityEngine::UIElements::UIR::BMPAlloc tintColorID, float_t compositeOpacity, ::UnityEngine::Color backgroundColor, ::UnityEngine::UIElements::VisualElement* prevText,
    ::UnityEngine::UIElements::VisualElement* nextText, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChainTextEntry>* textEntries,
    ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>* textures) noexcept {
  this->prev = prev;
  this->next = next;
  this->groupTransformAncestor = groupTransformAncestor;
  this->boneTransformAncestor = boneTransformAncestor;
  this->prevDirty = prevDirty;
  this->nextDirty = nextDirty;
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
  this->clipMethod = clipMethod;
  this->childrenStencilRef = childrenStencilRef;
  this->childrenMaskDepth = childrenMaskDepth;
  this->disableNudging = disableNudging;
  this->usesLegacyText = usesLegacyText;
  this->data = data;
  this->closingData = closingData;
  this->verticesSpace = verticesSpace;
  this->displacementUVStart = displacementUVStart;
  this->displacementUVEnd = displacementUVEnd;
  this->transformID = transformID;
  this->clipRectID = clipRectID;
  this->opacityID = opacityID;
  this->textCoreSettingsID = textCoreSettingsID;
  this->backgroundColorID = backgroundColorID;
  this->borderLeftColorID = borderLeftColorID;
  this->borderTopColorID = borderTopColorID;
  this->borderRightColorID = borderRightColorID;
  this->borderBottomColorID = borderBottomColorID;
  this->tintColorID = tintColorID;
  this->compositeOpacity = compositeOpacity;
  this->backgroundColor = backgroundColor;
  this->prevText = prevText;
  this->nextText = nextText;
  this->textEntries = textEntries;
  this->textures = textures;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::RenderChainVEData::RenderChainVEData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
