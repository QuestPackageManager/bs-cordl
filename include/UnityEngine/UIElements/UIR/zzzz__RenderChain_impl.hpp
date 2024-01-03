#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ChainBuilderStats_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChain_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Transform3x4_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRVEShaderInfoAllocator_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChain_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseRuntimePanel_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BasicNodePool_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRenderDevice_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__AtlasBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/UIElements/UIR/Implementation/zzzz__UIRStylePainter_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/UIElements/UIR/Implementation/zzzz__UIRTextUpdatePainter_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainCommand_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChain_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VectorImageManager_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextureEntry_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureRegistry_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataDirtyTypes_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataDirtyTypeClasses_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Transform3x4_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking.EnsureFits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking::*)(int32_t)>(
    &::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking::EnsureFits)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2e91588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking>::get(), "EnsureFits",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking.RegisterDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses)>(
    &::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking::RegisterDirty)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2e916a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking>::get(), "RegisterDirty", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderDataDirtyTypes>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking.ClearDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes)>(&::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking::ClearDirty)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2e91860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking>::get(), "ClearDirty", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderDataDirtyTypes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking::*)()>(
    &::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking::Reset)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2e919f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking>::get(), "Reset",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking::EnsureFits(int32_t maxDepth) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking>::get(), "EnsureFits",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxDepth);
}
inline void UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking::RegisterDirty(::UnityEngine::UIElements::VisualElement* ve,
                                                                                                  ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtyTypes,
                                                                                                  ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses dirtyTypeClass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking>::get(), "RegisterDirty", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderDataDirtyTypes>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, dirtyTypes, dirtyTypeClass);
}
inline void UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking::ClearDirty(::UnityEngine::UIElements::VisualElement* ve,
                                                                                               ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtyTypesInverse) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking>::get(), "ClearDirty", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderDataDirtyTypes>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, dirtyTypesInverse);
}
inline void UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking>::get(), "Reset",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "heads", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "tails", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "minDepths", ty:
// "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "maxDepths", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "dirtyID", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking::__RenderChain__DepthOrderedDirtyTracking(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* heads, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* tails,
    ::ArrayW<int32_t, ::Array<int32_t>*> minDepths, ::ArrayW<int32_t, ::Array<int32_t>*> maxDepths, uint32_t dirtyID) noexcept {
  this->heads = heads;
  this->tails = tails;
  this->minDepths = minDepths;
  this->maxDepths = maxDepths;
  this->dirtyID = dirtyID;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking::__RenderChain__DepthOrderedDirtyTracking() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::__RenderChain__RenderChainStaticIndexAllocator.AllocateIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::UIElements::UIR::RenderChain*)>(
    &::UnityEngine::UIElements::UIR::__RenderChain__RenderChainStaticIndexAllocator::AllocateIndex)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2e91a68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain__RenderChainStaticIndexAllocator>::get(), "AllocateIndex", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::__RenderChain__RenderChainStaticIndexAllocator.FreeIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::UnityEngine::UIElements::UIR::__RenderChain__RenderChainStaticIndexAllocator::FreeIndex)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2e91bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain__RenderChainStaticIndexAllocator>::get(),
                                                 "FreeIndex", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::__RenderChain__RenderChainStaticIndexAllocator.AccessIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::RenderChain* (*)(int32_t)>(
    &::UnityEngine::UIElements::UIR::__RenderChain__RenderChainStaticIndexAllocator::AccessIndex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2e91c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain__RenderChainStaticIndexAllocator>::get(), "AccessIndex",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void
UnityEngine::UIElements::UIR::__RenderChain__RenderChainStaticIndexAllocator::setStaticF_renderChains(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChain*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChain*>*, "renderChains",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain__RenderChainStaticIndexAllocator>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChain*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChain*>* UnityEngine::UIElements::UIR::__RenderChain__RenderChainStaticIndexAllocator::getStaticF_renderChains() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChain*>*, "renderChains",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain__RenderChainStaticIndexAllocator>::get>();
}
inline int32_t UnityEngine::UIElements::UIR::__RenderChain__RenderChainStaticIndexAllocator::AllocateIndex(::UnityEngine::UIElements::UIR::RenderChain* renderChain) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain__RenderChainStaticIndexAllocator>::get(), "AllocateIndex", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, renderChain);
}
inline void UnityEngine::UIElements::UIR::__RenderChain__RenderChainStaticIndexAllocator::FreeIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain__RenderChainStaticIndexAllocator>::get(),
                                               "FreeIndex", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, index);
}
inline ::UnityEngine::UIElements::UIR::RenderChain* UnityEngine::UIElements::UIR::__RenderChain__RenderChainStaticIndexAllocator::AccessIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain__RenderChainStaticIndexAllocator>::get(),
                                               "AccessIndex", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderChain*, false>(nullptr, ___internal_method, index);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::__RenderChain__RenderChainStaticIndexAllocator::__RenderChain__RenderChainStaticIndexAllocator() {}
// Ctor Parameters [CppParam { name: "standardMaterial", ty: "::UnityEngine::Material*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "initialMaterial", ty:
// "::UnityEngine::Material*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "matPropBlock", ty: "::UnityEngine::MaterialPropertyBlock*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "firstCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "device", ty:
// "::UnityEngine::UIElements::UIR::UIRenderDevice*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "vectorAtlas", ty: "::UnityEngine::Texture*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "shaderInfoAtlas", ty: "::UnityEngine::Texture*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "dpiScale", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "transformConstants", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "clipRectConstants", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData::__RenderChain__RenderNodeData(
    ::UnityEngine::Material* standardMaterial, ::UnityEngine::Material* initialMaterial, ::UnityEngine::MaterialPropertyBlock* matPropBlock,
    ::UnityEngine::UIElements::UIR::RenderChainCommand* firstCommand, ::UnityEngine::UIElements::UIR::UIRenderDevice* device, ::UnityEngine::Texture* vectorAtlas,
    ::UnityEngine::Texture* shaderInfoAtlas, float_t dpiScale, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4> transformConstants,
    ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4> clipRectConstants) noexcept {
  this->standardMaterial = standardMaterial;
  this->initialMaterial = initialMaterial;
  this->matPropBlock = matPropBlock;
  this->firstCommand = firstCommand;
  this->device = device;
  this->vectorAtlas = vectorAtlas;
  this->shaderInfoAtlas = shaderInfoAtlas;
  this->dpiScale = dpiScale;
  this->transformConstants = transformConstants;
  this->clipRectConstants = clipRectConstants;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData::__RenderChain__RenderNodeData() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::__RenderChain____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::__RenderChain____c::*)()>(
    &::UnityEngine::UIElements::UIR::__RenderChain____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e91db0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain____c*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::__RenderChain____c.__ctor_b__37_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::RenderChainCommand* (::UnityEngine::UIElements::UIR::__RenderChain____c::*)()>(
    &::UnityEngine::UIElements::UIR::__RenderChain____c::__ctor_b__37_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2e91db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain____c*>::get(),
                                                                               "<.ctor>b__37_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::__RenderChain____c.__ctor_b__37_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::__RenderChain____c::*)(::UnityEngine::UIElements::UIR::RenderChainCommand*)>(
    &::UnityEngine::UIElements::UIR::__RenderChain____c::__ctor_b__37_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e91e14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain____c*>::get(), "<.ctor>b__37_1", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::__RenderChain____c::setStaticF___9(::UnityEngine::UIElements::UIR::__RenderChain____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UIR::__RenderChain____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain____c*>::get>(
      std::forward<::UnityEngine::UIElements::UIR::__RenderChain____c*>(value));
}
inline ::UnityEngine::UIElements::UIR::__RenderChain____c* UnityEngine::UIElements::UIR::__RenderChain____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UIR::__RenderChain____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain____c*>::get>();
}
inline void UnityEngine::UIElements::UIR::__RenderChain____c::setStaticF___9__37_0(::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*, "<>9__37_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain____c*>::get>(
      std::forward<::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*>(value));
}
inline ::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* UnityEngine::UIElements::UIR::__RenderChain____c::getStaticF___9__37_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*, "<>9__37_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain____c*>::get>();
}
inline void UnityEngine::UIElements::UIR::__RenderChain____c::setStaticF___9__37_1(::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*, "<>9__37_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain____c*>::get>(
      std::forward<::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*>(value));
}
inline ::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* UnityEngine::UIElements::UIR::__RenderChain____c::getStaticF___9__37_1() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*, "<>9__37_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain____c*>::get>();
}
inline ::UnityEngine::UIElements::UIR::__RenderChain____c* UnityEngine::UIElements::UIR::__RenderChain____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::UIR::__RenderChain____c*>());
}
inline void UnityEngine::UIElements::UIR::__RenderChain____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain____c*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::RenderChainCommand* UnityEngine::UIElements::UIR::__RenderChain____c::__ctor_b__37_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain____c*>::get(),
                                                                             "<.ctor>b__37_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderChainCommand*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::__RenderChain____c::__ctor_b__37_1(::UnityEngine::UIElements::UIR::RenderChainCommand* cmd) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__RenderChain____c*>::get(), "<.ctor>b__37_1", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::__RenderChain____c::__RenderChain____c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::_ctor)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x2e8c544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVisualElementPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.Constructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(
    ::UnityEngine::UIElements::BaseVisualElementPanel*, ::UnityEngine::UIElements::UIR::UIRenderDevice*, ::UnityEngine::UIElements::AtlasBase*, ::UnityEngine::UIElements::UIR::VectorImageManager*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::Constructor)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x2e8c8fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "Constructor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVisualElementPanel*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AtlasBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::VectorImageManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.Destructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)()>(&::UnityEngine::UIElements::UIR::RenderChain::Destructor)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x2e8cc84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "Destructor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_disposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8d01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "get_disposed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_disposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(bool)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_disposed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e8d024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_disposed",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)()>(&::UnityEngine::UIElements::UIR::RenderChain::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2e8d030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(bool)>(&::UnityEngine::UIElements::UIR::RenderChain::Dispose)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2e8d0a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "Dispose", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.ProcessChanges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::ProcessChanges)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x2e8d0cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "ProcessChanges", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)()>(&::UnityEngine::UIElements::UIR::RenderChain::Render)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x2e8d8c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "Render",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.ProcessTextRegen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(bool)>(
    &::UnityEngine::UIElements::UIR::RenderChain::ProcessTextRegen)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2e8d698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "ProcessTextRegen",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnChildAdded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnChildAdded)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2e8eb60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnChildAdded", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnChildrenReordered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnChildrenReordered)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2e8eee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnChildrenReordered", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnChildRemoving
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnChildRemoving)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2e8f0a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnChildRemoving", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.StopTrackingGroupTransformElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::StopTrackingGroupTransformElement)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2e8f1a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "StopTrackingGroupTransformElement", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnRenderHintsChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnRenderHintsChanged)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2e8f1f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnRenderHintsChanged", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnClippingChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*, bool)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnClippingChanged)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2e8ed2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnClippingChanged", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnOpacityChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*, bool)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnOpacityChanged)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2e8edc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnOpacityChanged", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnColorChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnColorChanged)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2e8f298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnColorChanged", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnTransformOrSizeChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*, bool, bool)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnTransformOrSizeChanged)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2e8f320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnTransformOrSizeChanged", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnVisualsChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*, bool)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnVisualsChanged)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2e8ee54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnVisualsChanged", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_panel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BaseVisualElementPanel* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8f3b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "get_panel",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_panel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8f3c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_panel", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVisualElementPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_device
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::UIRenderDevice* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8f3c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "get_device", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_device
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::UIR::UIRenderDevice*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8f3d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_device", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_atlas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::AtlasBase* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_atlas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8f3d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "get_atlas",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_atlas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::AtlasBase*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_atlas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8f3e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_atlas", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AtlasBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_vectorImageManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::VectorImageManager* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_vectorImageManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8f3e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "get_vectorImageManager", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_vectorImageManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::UIR::VectorImageManager*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_vectorImageManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8f3f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_vectorImageManager", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::VectorImageManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_painter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_painter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8f3f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "get_painter", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_painter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*)>(&::UnityEngine::UIElements::UIR::RenderChain::set_painter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8f400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_painter", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_drawStats
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_drawStats)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8f408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "get_drawStats", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_drawStats
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(bool)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_drawStats)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e8f410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_drawStats",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_drawInCameras
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_drawInCameras)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8f41c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "get_drawInCameras", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_drawInCameras
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(bool)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_drawInCameras)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e8f424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_drawInCameras",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_defaultShader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::Shader*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_defaultShader)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2e8f430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_defaultShader", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_defaultWorldSpaceShader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::Shader*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_defaultWorldSpaceShader)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2e8f4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_defaultWorldSpaceShader",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.GetStandardMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::GetStandardMaterial)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2e8dc00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "GetStandardMaterial", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.GetStandardWorldSpaceMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::GetStandardWorldSpaceMaterial)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2e8f590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "GetStandardWorldSpaceMaterial", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.EnsureFitsDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(int32_t)>(
    &::UnityEngine::UIElements::UIR::RenderChain::EnsureFitsDepth)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e8f67c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "EnsureFitsDepth",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.ChildWillBeRemoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::ChildWillBeRemoved)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2e8f688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "ChildWillBeRemoved", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.AllocCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::RenderChainCommand* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::AllocCommand)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2e8f740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "AllocCommand", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.FreeCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::UIR::RenderChainCommand*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::FreeCommand)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2e8f7a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "FreeCommand", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.OnRenderCommandAdded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::UIR::RenderChainCommand*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::OnRenderCommandAdded)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2e8f858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "OnRenderCommandAdded", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.OnRenderCommandsRemoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(
    ::UnityEngine::UIElements::UIR::RenderChainCommand*, ::UnityEngine::UIElements::UIR::RenderChainCommand*)>(&::UnityEngine::UIElements::UIR::RenderChain::OnRenderCommandsRemoved)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2e8f8e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "OnRenderCommandsRemoved", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.AddTextElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::AddTextElement)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2e8f90c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "AddTextElement", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.RemoveTextElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::RemoveTextElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2e8f940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "RemoveTextElement", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.OnGroupTransformElementChangedTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::OnGroupTransformElementChangedTransform)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2e8f994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "OnGroupTransformElementChangedTransform", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.AccessRenderNodeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData (*)(void*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::AccessRenderNodeData)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2e8fac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "AccessRenderNodeData",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.OnRenderNodeExecute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*)>(&::UnityEngine::UIElements::UIR::RenderChain::OnRenderNodeExecute)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2e8fb98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "OnRenderNodeExecute",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.OnRegisterIntermediateRenderers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera*)>(&::UnityEngine::UIElements::UIR::RenderChain::OnRegisterIntermediateRenderers)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x2e8fc40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "OnRegisterIntermediateRenderers",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.OnRegisterIntermediateRendererMat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::BaseRuntimePanel*, ::UnityEngine::UIElements::UIR::RenderChain*,
                                                                                           ByRef<::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData>, ::UnityEngine::Camera*, int32_t)>(
    &::UnityEngine::UIElements::UIR::RenderChain::OnRegisterIntermediateRendererMat)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x2e900a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "OnRegisterIntermediateRendererMat", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseRuntimePanel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.RepaintTexturedElements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::RepaintTexturedElements)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2e903f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "RepaintTexturedElements", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.OnFontReset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::Font*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::OnFontReset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e904d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "OnFontReset",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.AppendTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Texture*, ::UnityEngine::UIElements::TextureId, bool)>(&::UnityEngine::UIElements::UIR::RenderChain::AppendTexture)> {
  constexpr static std::size_t size = 0x10a8;
  constexpr static std::size_t addrs = 0x2e904e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "AppendTexture", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextureId>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.ResetTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::ResetTextures)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2e8cf10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "ResetTextures", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.DrawStats
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)()>(&::UnityEngine::UIElements::UIR::RenderChain::DrawStats)> {
  constexpr static std::size_t size = 0xe74;
  constexpr static std::size_t addrs = 0x2e8dcec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "DrawStats",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.GetFirstElementInPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::GetFirstElementInPanel)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2e8cec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "GetFirstElementInPanel", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::UIR::RenderChain::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& UnityEngine::UIElements::UIR::RenderChain::__get_m_FirstCommand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstCommand;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::RenderChainCommand*> const& UnityEngine::UIElements::UIR::RenderChain::__get_m_FirstCommand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstCommand;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_FirstCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FirstCommand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking& UnityEngine::UIElements::UIR::RenderChain::__get_m_DirtyTracker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DirtyTracker;
}
constexpr ::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking const& UnityEngine::UIElements::UIR::RenderChain::__get_m_DirtyTracker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DirtyTracker;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_DirtyTracker(::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DirtyTracker = value;
}
constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*& UnityEngine::UIElements::UIR::RenderChain::__get_m_CommandPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommandPool;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*> const&
UnityEngine::UIElements::UIR::RenderChain::__get_m_CommandPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommandPool;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_CommandPool(::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CommandPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::TextureEntry>*& UnityEngine::UIElements::UIR::RenderChain::__get_m_TexturePool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TexturePool;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::TextureEntry>*> const&
UnityEngine::UIElements::UIR::RenderChain::__get_m_TexturePool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TexturePool;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_TexturePool(::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::TextureEntry>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TexturePool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData>*& UnityEngine::UIElements::UIR::RenderChain::__get_m_RenderNodesData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderNodesData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData>*> const&
UnityEngine::UIElements::UIR::RenderChain::__get_m_RenderNodesData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderNodesData;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_RenderNodesData(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RenderNodesData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Shader*& UnityEngine::UIElements::UIR::RenderChain::__get_m_DefaultShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultShader;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& UnityEngine::UIElements::UIR::RenderChain::__get_m_DefaultShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultShader;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_DefaultShader(::UnityEngine::Shader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DefaultShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Shader*& UnityEngine::UIElements::UIR::RenderChain::__get_m_DefaultWorldSpaceShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultWorldSpaceShader;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& UnityEngine::UIElements::UIR::RenderChain::__get_m_DefaultWorldSpaceShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultWorldSpaceShader;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_DefaultWorldSpaceShader(::UnityEngine::Shader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DefaultWorldSpaceShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Material*& UnityEngine::UIElements::UIR::RenderChain::__get_m_DefaultMat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultMat;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& UnityEngine::UIElements::UIR::RenderChain::__get_m_DefaultMat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultMat;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_DefaultMat(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DefaultMat)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Material*& UnityEngine::UIElements::UIR::RenderChain::__get_m_DefaultWorldSpaceMat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultWorldSpaceMat;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& UnityEngine::UIElements::UIR::RenderChain::__get_m_DefaultWorldSpaceMat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultWorldSpaceMat;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_DefaultWorldSpaceMat(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DefaultWorldSpaceMat)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::UIR::RenderChain::__get_m_BlockDirtyRegistration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlockDirtyRegistration;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderChain::__get_m_BlockDirtyRegistration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlockDirtyRegistration;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_BlockDirtyRegistration(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlockDirtyRegistration = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::RenderChain::__get_m_StaticIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StaticIndex;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::RenderChain::__get_m_StaticIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StaticIndex;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_StaticIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StaticIndex = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::RenderChain::__get_m_ActiveRenderNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveRenderNodes;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::RenderChain::__get_m_ActiveRenderNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveRenderNodes;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_ActiveRenderNodes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActiveRenderNodes = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::RenderChain::__get_m_CustomMaterialCommands() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CustomMaterialCommands;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::RenderChain::__get_m_CustomMaterialCommands() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CustomMaterialCommands;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_CustomMaterialCommands(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CustomMaterialCommands = value;
}
constexpr ::UnityEngine::UIElements::UIR::ChainBuilderStats& UnityEngine::UIElements::UIR::RenderChain::__get_m_Stats() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Stats;
}
constexpr ::UnityEngine::UIElements::UIR::ChainBuilderStats const& UnityEngine::UIElements::UIR::RenderChain::__get_m_Stats() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Stats;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_Stats(::UnityEngine::UIElements::UIR::ChainBuilderStats value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Stats = value;
}
constexpr uint32_t& UnityEngine::UIElements::UIR::RenderChain::__get_m_StatsElementsAdded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StatsElementsAdded;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::RenderChain::__get_m_StatsElementsAdded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StatsElementsAdded;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_StatsElementsAdded(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StatsElementsAdded = value;
}
constexpr uint32_t& UnityEngine::UIElements::UIR::RenderChain::__get_m_StatsElementsRemoved() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StatsElementsRemoved;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::RenderChain::__get_m_StatsElementsRemoved() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StatsElementsRemoved;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_StatsElementsRemoved(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StatsElementsRemoved = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::UIR::RenderChain::__get_m_FirstTextElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstTextElement;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::UIR::RenderChain::__get_m_FirstTextElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstTextElement;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_FirstTextElement(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FirstTextElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*& UnityEngine::UIElements::UIR::RenderChain::__get_m_TextUpdatePainter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextUpdatePainter;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*> const&
UnityEngine::UIElements::UIR::RenderChain::__get_m_TextUpdatePainter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextUpdatePainter;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_TextUpdatePainter(::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TextUpdatePainter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UIElements::UIR::RenderChain::__get_m_TextElementCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextElementCount;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::RenderChain::__get_m_TextElementCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextElementCount;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_TextElementCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextElementCount = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::RenderChain::__get_m_DirtyTextStartIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DirtyTextStartIndex;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::RenderChain::__get_m_DirtyTextStartIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DirtyTextStartIndex;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_DirtyTextStartIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DirtyTextStartIndex = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::RenderChain::__get_m_DirtyTextRemaining() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DirtyTextRemaining;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::RenderChain::__get_m_DirtyTextRemaining() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DirtyTextRemaining;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_DirtyTextRemaining(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DirtyTextRemaining = value;
}
constexpr bool& UnityEngine::UIElements::UIR::RenderChain::__get_m_FontWasReset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontWasReset;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderChain::__get_m_FontWasReset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontWasReset;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_FontWasReset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FontWasReset = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2>*&
UnityEngine::UIElements::UIR::RenderChain::__get_m_LastGroupTransformElementScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastGroupTransformElementScale;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2>*> const&
UnityEngine::UIElements::UIR::RenderChain::__get_m_LastGroupTransformElementScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastGroupTransformElementScale;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_LastGroupTransformElementScale(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LastGroupTransformElementScale)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::TextureRegistry*& UnityEngine::UIElements::UIR::RenderChain::__get_m_TextureRegistry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureRegistry;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TextureRegistry*> const& UnityEngine::UIElements::UIR::RenderChain::__get_m_TextureRegistry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureRegistry;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_TextureRegistry(::UnityEngine::UIElements::TextureRegistry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TextureRegistry)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::UIR::RenderChain::__get__disposed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderChain::__get__disposed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set__disposed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& UnityEngine::UIElements::UIR::RenderChain::__get__panel_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____panel_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseVisualElementPanel*> const& UnityEngine::UIElements::UIR::RenderChain::__get__panel_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____panel_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set__panel_k__BackingField(::UnityEngine::UIElements::BaseVisualElementPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____panel_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::UIRenderDevice*& UnityEngine::UIElements::UIR::RenderChain::__get__device_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____device_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::UIRenderDevice*> const& UnityEngine::UIElements::UIR::RenderChain::__get__device_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____device_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set__device_k__BackingField(::UnityEngine::UIElements::UIR::UIRenderDevice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____device_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::AtlasBase*& UnityEngine::UIElements::UIR::RenderChain::__get__atlas_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____atlas_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::AtlasBase*> const& UnityEngine::UIElements::UIR::RenderChain::__get__atlas_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____atlas_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set__atlas_k__BackingField(::UnityEngine::UIElements::AtlasBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____atlas_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::VectorImageManager*& UnityEngine::UIElements::UIR::RenderChain::__get__vectorImageManager_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vectorImageManager_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::VectorImageManager*> const& UnityEngine::UIElements::UIR::RenderChain::__get__vectorImageManager_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vectorImageManager_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set__vectorImageManager_k__BackingField(::UnityEngine::UIElements::UIR::VectorImageManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vectorImageManager_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator& UnityEngine::UIElements::UIR::RenderChain::__get_shaderInfoAllocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaderInfoAllocator;
}
constexpr ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator const& UnityEngine::UIElements::UIR::RenderChain::__get_shaderInfoAllocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaderInfoAllocator;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_shaderInfoAllocator(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shaderInfoAllocator = value;
}
constexpr ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*& UnityEngine::UIElements::UIR::RenderChain::__get__painter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____painter_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*> const&
UnityEngine::UIElements::UIR::RenderChain::__get__painter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____painter_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set__painter_k__BackingField(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____painter_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::UIR::RenderChain::__get__drawStats_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____drawStats_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderChain::__get__drawStats_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____drawStats_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set__drawStats_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____drawStats_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::UIR::RenderChain::__get__drawInCameras_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____drawInCameras_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderChain::__get__drawInCameras_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____drawInCameras_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set__drawInCameras_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____drawInCameras_k__BackingField = value;
}
inline void UnityEngine::UIElements::UIR::RenderChain::setStaticF_s_MarkerProcess(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerProcess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::getStaticF_s_MarkerProcess() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerProcess",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>();
}
inline void UnityEngine::UIElements::UIR::RenderChain::setStaticF_s_MarkerClipProcessing(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerClipProcessing",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::getStaticF_s_MarkerClipProcessing() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerClipProcessing",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>();
}
inline void UnityEngine::UIElements::UIR::RenderChain::setStaticF_s_MarkerOpacityProcessing(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerOpacityProcessing",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::getStaticF_s_MarkerOpacityProcessing() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerOpacityProcessing",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>();
}
inline void UnityEngine::UIElements::UIR::RenderChain::setStaticF_s_MarkerColorsProcessing(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerColorsProcessing",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::getStaticF_s_MarkerColorsProcessing() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerColorsProcessing",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>();
}
inline void UnityEngine::UIElements::UIR::RenderChain::setStaticF_s_MarkerTransformProcessing(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerTransformProcessing",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::getStaticF_s_MarkerTransformProcessing() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerTransformProcessing",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>();
}
inline void UnityEngine::UIElements::UIR::RenderChain::setStaticF_s_MarkerVisualsProcessing(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerVisualsProcessing",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::getStaticF_s_MarkerVisualsProcessing() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerVisualsProcessing",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>();
}
inline void UnityEngine::UIElements::UIR::RenderChain::setStaticF_s_MarkerTextRegen(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerTextRegen", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::getStaticF_s_MarkerTextRegen() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerTextRegen",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>();
}
inline void UnityEngine::UIElements::UIR::RenderChain::setStaticF_OnPreRender(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "OnPreRender", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>(
      std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::UIElements::UIR::RenderChain::getStaticF_OnPreRender() {
  return ::cordl_internals::getStaticField<::System::Action*, "OnPreRender", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>();
}
inline ::UnityEngine::UIElements::UIR::RenderChain* UnityEngine::UIElements::UIR::RenderChain::New_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::UIR::RenderChain*>(panel));
}
inline void UnityEngine::UIElements::UIR::RenderChain::_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVisualElementPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::UIR::RenderChain::Constructor(::UnityEngine::UIElements::BaseVisualElementPanel* panelObj, ::UnityEngine::UIElements::UIR::UIRenderDevice* deviceObj,
                                                                   ::UnityEngine::UIElements::AtlasBase* atlas, ::UnityEngine::UIElements::UIR::VectorImageManager* vectorImageMan) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "Constructor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVisualElementPanel*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AtlasBase*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::VectorImageManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, panelObj, deviceObj, atlas, vectorImageMan);
}
inline void UnityEngine::UIElements::UIR::RenderChain::Destructor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "Destructor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::RenderChain::get_disposed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "get_disposed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_disposed", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::RenderChain::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "Dispose", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void UnityEngine::UIElements::UIR::RenderChain::ProcessChanges() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "ProcessChanges", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::Render() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "Render",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::ProcessTextRegen(bool timeSliced) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "ProcessTextRegen",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeSliced);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnChildAdded(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnChildAdded", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnChildrenReordered(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnChildrenReordered", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnChildRemoving(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnChildRemoving", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::StopTrackingGroupTransformElement(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "StopTrackingGroupTransformElement", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnRenderHintsChanged(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnRenderHintsChanged", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnClippingChanged(::UnityEngine::UIElements::VisualElement* ve, bool hierarchical) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnClippingChanged", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, hierarchical);
}
/// @param hierarchical: bool (default: false)
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnOpacityChanged(::UnityEngine::UIElements::VisualElement* ve, bool hierarchical) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnOpacityChanged", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, hierarchical);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnColorChanged(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnColorChanged", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnTransformOrSizeChanged(::UnityEngine::UIElements::VisualElement* ve, bool transformChanged, bool clipRectSizeChanged) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnTransformOrSizeChanged", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, transformChanged, clipRectSizeChanged);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnVisualsChanged(::UnityEngine::UIElements::VisualElement* ve, bool hierarchical) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnVisualsChanged", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, hierarchical);
}
inline ::UnityEngine::UIElements::BaseVisualElementPanel* UnityEngine::UIElements::UIR::RenderChain::get_panel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "get_panel",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BaseVisualElementPanel*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_panel(::UnityEngine::UIElements::BaseVisualElementPanel* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_panel", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVisualElementPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIR::UIRenderDevice* UnityEngine::UIElements::UIR::RenderChain::get_device() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "get_device",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::UIRenderDevice*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_device(::UnityEngine::UIElements::UIR::UIRenderDevice* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_device", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::AtlasBase* UnityEngine::UIElements::UIR::RenderChain::get_atlas() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "get_atlas",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::AtlasBase*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_atlas(::UnityEngine::UIElements::AtlasBase* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_atlas", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AtlasBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIR::VectorImageManager* UnityEngine::UIElements::UIR::RenderChain::get_vectorImageManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "get_vectorImageManager", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::VectorImageManager*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_vectorImageManager(::UnityEngine::UIElements::UIR::VectorImageManager* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_vectorImageManager", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::VectorImageManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter* UnityEngine::UIElements::UIR::RenderChain::get_painter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "get_painter",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_painter(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_painter", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::UIR::RenderChain::get_drawStats() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "get_drawStats", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_drawStats(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_drawStats",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::UIR::RenderChain::get_drawInCameras() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "get_drawInCameras", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_drawInCameras(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_drawInCameras",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_defaultShader(::UnityEngine::Shader* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_defaultShader",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_defaultWorldSpaceShader(::UnityEngine::Shader* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_defaultWorldSpaceShader",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Material* UnityEngine::UIElements::UIR::RenderChain::GetStandardMaterial() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "GetStandardMaterial", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(this, ___internal_method);
}
inline ::UnityEngine::Material* UnityEngine::UIElements::UIR::RenderChain::GetStandardWorldSpaceMaterial() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "GetStandardWorldSpaceMaterial", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::EnsureFitsDepth(int32_t depth) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "EnsureFitsDepth",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, depth);
}
inline void UnityEngine::UIElements::UIR::RenderChain::ChildWillBeRemoved(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "ChildWillBeRemoved", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline ::UnityEngine::UIElements::UIR::RenderChainCommand* UnityEngine::UIElements::UIR::RenderChain::AllocCommand() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "AllocCommand", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderChainCommand*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::FreeCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* cmd) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "FreeCommand", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::UIElements::UIR::RenderChain::OnRenderCommandAdded(::UnityEngine::UIElements::UIR::RenderChainCommand* command) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "OnRenderCommandAdded", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, command);
}
inline void UnityEngine::UIElements::UIR::RenderChain::OnRenderCommandsRemoved(::UnityEngine::UIElements::UIR::RenderChainCommand* firstCommand,
                                                                               ::UnityEngine::UIElements::UIR::RenderChainCommand* lastCommand) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "OnRenderCommandsRemoved", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstCommand, lastCommand);
}
inline void UnityEngine::UIElements::UIR::RenderChain::AddTextElement(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "AddTextElement", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::RemoveTextElement(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "RemoveTextElement", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::OnGroupTransformElementChangedTransform(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "OnGroupTransformElementChangedTransform", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline ::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData UnityEngine::UIElements::UIR::RenderChain::AccessRenderNodeData(void* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "AccessRenderNodeData",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData, false>(nullptr, ___internal_method, obj);
}
inline void UnityEngine::UIElements::UIR::RenderChain::OnRenderNodeExecute(void* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "OnRenderNodeExecute",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
inline void UnityEngine::UIElements::UIR::RenderChain::OnRegisterIntermediateRenderers(::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "OnRegisterIntermediateRenderers",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, camera);
}
inline void UnityEngine::UIElements::UIR::RenderChain::OnRegisterIntermediateRendererMat(::UnityEngine::UIElements::BaseRuntimePanel* rtp, ::UnityEngine::UIElements::UIR::RenderChain* renderChain,
                                                                                         ByRef<::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData> rnd, ::UnityEngine::Camera* camera,
                                                                                         int32_t sameDistanceSortPriority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "OnRegisterIntermediateRendererMat", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseRuntimePanel*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rtp, renderChain, rnd, camera, sameDistanceSortPriority);
}
inline void UnityEngine::UIElements::UIR::RenderChain::RepaintTexturedElements() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "RepaintTexturedElements", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::OnFontReset(::UnityEngine::Font* font) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "OnFontReset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, font);
}
inline void UnityEngine::UIElements::UIR::RenderChain::AppendTexture(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::Texture* src, ::UnityEngine::UIElements::TextureId id, bool isAtlas) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "AppendTexture", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextureId>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, src, id, isAtlas);
}
inline void UnityEngine::UIElements::UIR::RenderChain::ResetTextures(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "ResetTextures", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::DrawStats() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "DrawStats",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::UIR::RenderChain::GetFirstElementInPanel(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "GetFirstElementInPanel", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(nullptr, ___internal_method, ve);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::RenderChain::RenderChain() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
