#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__State_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRenderDevice_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRenderDevice_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__DrawBufferRange_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__DrawParams_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshHandle_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Page_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainCommand_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__State_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextureSlotManager_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Transform3x4_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRenderDevice_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Utility_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "id", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "allocTime", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "meshHandle", ty: "::UnityEngine::UIElements::UIR::MeshHandle*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "permAllocVerts", ty: "::UnityEngine::UIElements::UIR::Alloc",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "permAllocIndices", ty: "::UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "permPage", ty:
// "::UnityEngine::UIElements::UIR::Page*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "copyBackIndices", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate::__UIRenderDevice__AllocToUpdate(uint32_t id, uint32_t allocTime, ::UnityEngine::UIElements::UIR::MeshHandle* meshHandle,
                                                                                                           ::UnityEngine::UIElements::UIR::Alloc permAllocVerts,
                                                                                                           ::UnityEngine::UIElements::UIR::Alloc permAllocIndices,
                                                                                                           ::UnityEngine::UIElements::UIR::Page* permPage, bool copyBackIndices) noexcept {
  this->id = id;
  this->allocTime = allocTime;
  this->meshHandle = meshHandle;
  this->permAllocVerts = permAllocVerts;
  this->permAllocIndices = permAllocIndices;
  this->permPage = permPage;
  this->copyBackIndices = copyBackIndices;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate::__UIRenderDevice__AllocToUpdate() {}
// Ctor Parameters [CppParam { name: "alloc", ty: "::UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "page", ty: "::UnityEngine::UIElements::UIR::Page*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "vertices", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToFree::__UIRenderDevice__AllocToFree(::UnityEngine::UIElements::UIR::Alloc alloc, ::UnityEngine::UIElements::UIR::Page* page,
                                                                                                       bool vertices) noexcept {
  this->alloc = alloc;
  this->page = page;
  this->vertices = vertices;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToFree::__UIRenderDevice__AllocToFree() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree::*)()>(
    &::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree::Dispose)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x331f83c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "handle", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "page", ty: "::UnityEngine::UIElements::UIR::Page*", modifiers: "", def_value:
// Some("nullptr") }]
constexpr ::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree::__UIRenderDevice__DeviceToFree(uint32_t handle, ::UnityEngine::UIElements::UIR::Page* page) noexcept {
  this->handle = handle;
  this->page = page;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree::__UIRenderDevice__DeviceToFree() {}
// Ctor Parameters [CppParam { name: "stateMatProps", ty: "::UnityEngine::MaterialPropertyBlock*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "defaultMat", ty:
// "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "curState", ty: "::UnityEngine::UIElements::UIR::State", modifiers: "", def_value: Some("{}") },
// CppParam { name: "curPage", ty: "::UnityEngine::UIElements::UIR::Page*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "mustApplyMaterial", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "mustApplyCommonBlock", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "mustApplyStateBlock", ty: "bool", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "mustApplyStencil", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState::__UIRenderDevice__EvaluationState(::UnityEngine::MaterialPropertyBlock* stateMatProps,
                                                                                                               ::UnityW<::UnityEngine::Material> defaultMat,
                                                                                                               ::UnityEngine::UIElements::UIR::State curState,
                                                                                                               ::UnityEngine::UIElements::UIR::Page* curPage, bool mustApplyMaterial,
                                                                                                               bool mustApplyCommonBlock, bool mustApplyStateBlock, bool mustApplyStencil) noexcept {
  this->stateMatProps = stateMatProps;
  this->defaultMat = defaultMat;
  this->curState = curState;
  this->curPage = curPage;
  this->mustApplyMaterial = mustApplyMaterial;
  this->mustApplyCommonBlock = mustApplyCommonBlock;
  this->mustApplyStateBlock = mustApplyStateBlock;
  this->mustApplyStencil = mustApplyStencil;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState::__UIRenderDevice__EvaluationState() {}
// Ctor Parameters [CppParam { name: "currentFrameIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "totalIndices", ty: "uint32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "commandCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawCommandCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "materialSetCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawRangeCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "drawRangeCallCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "immediateDraws", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "stencilRefChanges", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics::__UIRenderDevice__DrawStatistics(int32_t currentFrameIndex, uint32_t totalIndices, uint32_t commandCount,
                                                                                                             uint32_t drawCommandCount, uint32_t materialSetCount, uint32_t drawRangeCount,
                                                                                                             uint32_t drawRangeCallCount, uint32_t immediateDraws,
                                                                                                             uint32_t stencilRefChanges) noexcept {
  this->currentFrameIndex = currentFrameIndex;
  this->totalIndices = totalIndices;
  this->commandCount = commandCount;
  this->drawCommandCount = drawCommandCount;
  this->materialSetCount = materialSetCount;
  this->drawRangeCount = drawRangeCount;
  this->drawRangeCallCount = drawRangeCallCount;
  this->immediateDraws = immediateDraws;
  this->stencilRefChanges = stencilRefChanges;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics::__UIRenderDevice__DrawStatistics() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::__UIRenderDevice____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::__UIRenderDevice____c::*)()>(
    &::UnityEngine::UIElements::UIR::__UIRenderDevice____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3324fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__UIRenderDevice____c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::__UIRenderDevice____c.__ctor_b__53_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::MeshHandle* (::UnityEngine::UIElements::UIR::__UIRenderDevice____c::*)()>(
    &::UnityEngine::UIElements::UIR::__UIRenderDevice____c::__ctor_b__53_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3324fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__UIRenderDevice____c*>::get(),
                                                                               "<.ctor>b__53_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::__UIRenderDevice____c.__ctor_b__53_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::__UIRenderDevice____c::*)(::UnityEngine::UIElements::UIR::MeshHandle*)>(
    &::UnityEngine::UIElements::UIR::__UIRenderDevice____c::__ctor_b__53_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3325020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__UIRenderDevice____c*>::get(), "<.ctor>b__53_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::MeshHandle*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::__UIRenderDevice____c::setStaticF___9(::UnityEngine::UIElements::UIR::__UIRenderDevice____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UIR::__UIRenderDevice____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__UIRenderDevice____c*>::get>(
      std::forward<::UnityEngine::UIElements::UIR::__UIRenderDevice____c*>(value));
}
inline ::UnityEngine::UIElements::UIR::__UIRenderDevice____c* UnityEngine::UIElements::UIR::__UIRenderDevice____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UIR::__UIRenderDevice____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__UIRenderDevice____c*>::get>();
}
inline void UnityEngine::UIElements::UIR::__UIRenderDevice____c::setStaticF___9__53_0(::System::Func_1<::UnityEngine::UIElements::UIR::MeshHandle*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::UIElements::UIR::MeshHandle*>*, "<>9__53_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__UIRenderDevice____c*>::get>(
      std::forward<::System::Func_1<::UnityEngine::UIElements::UIR::MeshHandle*>*>(value));
}
inline ::System::Func_1<::UnityEngine::UIElements::UIR::MeshHandle*>* UnityEngine::UIElements::UIR::__UIRenderDevice____c::getStaticF___9__53_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::UIElements::UIR::MeshHandle*>*, "<>9__53_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__UIRenderDevice____c*>::get>();
}
inline void UnityEngine::UIElements::UIR::__UIRenderDevice____c::setStaticF___9__53_1(::System::Action_1<::UnityEngine::UIElements::UIR::MeshHandle*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::UIElements::UIR::MeshHandle*>*, "<>9__53_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__UIRenderDevice____c*>::get>(
      std::forward<::System::Action_1<::UnityEngine::UIElements::UIR::MeshHandle*>*>(value));
}
inline ::System::Action_1<::UnityEngine::UIElements::UIR::MeshHandle*>* UnityEngine::UIElements::UIR::__UIRenderDevice____c::getStaticF___9__53_1() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::UIElements::UIR::MeshHandle*>*, "<>9__53_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__UIRenderDevice____c*>::get>();
}
inline ::UnityEngine::UIElements::UIR::__UIRenderDevice____c* UnityEngine::UIElements::UIR::__UIRenderDevice____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::__UIRenderDevice____c*>());
}
inline void UnityEngine::UIElements::UIR::__UIRenderDevice____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__UIRenderDevice____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::MeshHandle* UnityEngine::UIElements::UIR::__UIRenderDevice____c::__ctor_b__53_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__UIRenderDevice____c*>::get(),
                                                                             "<.ctor>b__53_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::MeshHandle*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::__UIRenderDevice____c::__ctor_b__53_1(::UnityEngine::UIElements::UIR::MeshHandle* mh) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__UIRenderDevice____c*>::get(), "<.ctor>b__53_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::MeshHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mh);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::__UIRenderDevice____c::__UIRenderDevice____c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.get_maxVerticesPerPage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::UIElements::UIR::UIRenderDevice::*)()>(
    &::UnityEngine::UIElements::UIR::UIRenderDevice::get_maxVerticesPerPage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x331dd48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                               "get_maxVerticesPerPage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.get_breakBatches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::UIRenderDevice::*)()>(
    &::UnityEngine::UIElements::UIR::UIRenderDevice::get_breakBatches)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x331dd50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                               "get_breakBatches", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.set_breakBatches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::UIRenderDevice::*)(bool)>(
    &::UnityEngine::UIElements::UIR::UIRenderDevice::set_breakBatches)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x331dd58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "set_breakBatches",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::UIRenderDevice::*)(uint32_t, uint32_t)>(
    &::UnityEngine::UIElements::UIR::UIRenderDevice::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x331e11c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::UIRenderDevice::*)(uint32_t, uint32_t, bool)>(
    &::UnityEngine::UIElements::UIR::UIRenderDevice::_ctor)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x331e124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.get_defaultShaderInfoTexFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)()>(
    &::UnityEngine::UIElements::UIR::UIRenderDevice::get_defaultShaderInfoTexFloat)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x331e82c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                               "get_defaultShaderInfoTexFloat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.get_defaultShaderInfoTexARGB8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)()>(
    &::UnityEngine::UIElements::UIR::UIRenderDevice::get_defaultShaderInfoTexARGB8)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x331ebc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                               "get_defaultShaderInfoTexARGB8", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.get_vertexTexturingIsAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::UIElements::UIR::UIRenderDevice::get_vertexTexturingIsAvailable)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x331ee8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                               "get_vertexTexturingIsAvailable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.get_shaderModelIs35
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::UIElements::UIR::UIRenderDevice::get_shaderModelIs35)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x331f070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                               "get_shaderModelIs35", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.InitVertexDeclaration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::UIRenderDevice::*)()>(
    &::UnityEngine::UIElements::UIR::UIRenderDevice::InitVertexDeclaration)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x331f254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                               "InitVertexDeclaration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.CompleteCreation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::UIRenderDevice::*)()>(
    &::UnityEngine::UIElements::UIR::UIRenderDevice::CompleteCreation)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x331f4bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                               "CompleteCreation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.get_fullyCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::UIRenderDevice::*)()>(
    &::UnityEngine::UIElements::UIR::UIRenderDevice::get_fullyCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x331f660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                               "get_fullyCreated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.get_disposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::UIRenderDevice::*)()>(
    &::UnityEngine::UIElements::UIR::UIRenderDevice::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x331f670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                               "get_disposed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.set_disposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::UIRenderDevice::*)(bool)>(
    &::UnityEngine::UIElements::UIR::UIRenderDevice::set_disposed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x331f678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "set_disposed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::UIRenderDevice::*)()>(
    &::UnityEngine::UIElements::UIR::UIRenderDevice::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x331f684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::UIRenderDevice::*)(bool)>(
    &::UnityEngine::UIElements::UIR::UIRenderDevice::Dispose)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x331f6f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.Allocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::MeshHandle* (
    ::UnityEngine::UIElements::UIR::UIRenderDevice::*)(uint32_t, uint32_t, ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>,
                                                       ByRef<::Unity::Collections::NativeSlice_1<uint16_t>>, ByRef<uint16_t>)>(&::UnityEngine::UIElements::UIR::UIRenderDevice::Allocate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x331fc04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "Allocate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeSlice_1<uint16_t>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::UIRenderDevice::*)(
    ::UnityEngine::UIElements::UIR::MeshHandle*, uint32_t, ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>)>(&::UnityEngine::UIElements::UIR::UIRenderDevice::Update)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x33202f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::MeshHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::UIRenderDevice::*)(
    ::UnityEngine::UIElements::UIR::MeshHandle*, uint32_t, uint32_t, ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>,
    ByRef<::Unity::Collections::NativeSlice_1<uint16_t>>, ByRef<uint16_t>)>(&::UnityEngine::UIElements::UIR::UIRenderDevice::Update)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3320bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::MeshHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeSlice_1<uint16_t>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.TryAllocFromPage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::UIRenderDevice::*)(
    ::UnityEngine::UIElements::UIR::Page*, uint32_t, uint32_t, ByRef<::UnityEngine::UIElements::UIR::Alloc>, ByRef<::UnityEngine::UIElements::UIR::Alloc>, bool)>(
    &::UnityEngine::UIElements::UIR::UIRenderDevice::TryAllocFromPage)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3320d4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "TryAllocFromPage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Page*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::Alloc>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::Alloc>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.Allocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::UIRenderDevice::*)(
    ::UnityEngine::UIElements::UIR::MeshHandle*, uint32_t, uint32_t, ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>,
    ByRef<::Unity::Collections::NativeSlice_1<uint16_t>>, bool)>(&::UnityEngine::UIElements::UIR::UIRenderDevice::Allocate)> {
  constexpr static std::size_t size = 0x634;
  constexpr static std::size_t addrs = 0x331fcc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "Allocate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::MeshHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeSlice_1<uint16_t>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.UpdateAfterGPUUsedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::UIRenderDevice::*)(
    ::UnityEngine::UIElements::UIR::MeshHandle*, uint32_t, uint32_t, ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>,
    ByRef<::Unity::Collections::NativeSlice_1<uint16_t>>, ByRef<uint16_t>, ByRef<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate>, bool)>(
    &::UnityEngine::UIElements::UIR::UIRenderDevice::UpdateAfterGPUUsedData)> {
  constexpr static std::size_t size = 0x704;
  constexpr static std::size_t addrs = 0x33204c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "UpdateAfterGPUUsedData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::MeshHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeSlice_1<uint16_t>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.Free
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::UIRenderDevice::*)(::UnityEngine::UIElements::UIR::MeshHandle*)>(
    &::UnityEngine::UIElements::UIR::UIRenderDevice::Free)> {
  constexpr static std::size_t size = 0x84c;
  constexpr static std::size_t addrs = 0x33211a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "Free", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::MeshHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.GetClipSpaceParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (*)()>(&::UnityEngine::UIElements::UIR::UIRenderDevice::GetClipSpaceParams)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x33219f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                               "GetClipSpaceParams", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.OnFrameRenderingBegin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::UIRenderDevice::*)()>(
    &::UnityEngine::UIElements::UIR::UIRenderDevice::OnFrameRenderingBegin)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3321ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                               "OnFrameRenderingBegin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.ApplyDrawCommandState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::UIRenderDevice::*)(
    ::UnityEngine::UIElements::UIR::RenderChainCommand*, int32_t, ::UnityEngine::Material*, bool, bool, ByRef<::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState>)>(
    &::UnityEngine::UIElements::UIR::UIRenderDevice::ApplyDrawCommandState)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x3322510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "ApplyDrawCommandState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.ApplyBatchState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::UIRenderDevice::*)(
    ByRef<::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState>, bool)>(&::UnityEngine::UIElements::UIR::UIRenderDevice::ApplyBatchState)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3322734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "ApplyBatchState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.EvaluateChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::UIRenderDevice::*)(
    ::UnityEngine::UIElements::UIR::RenderChainCommand*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::UnityEngine::Texture*, ::UnityEngine::Texture*, float_t,
    ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>, ::UnityEngine::MaterialPropertyBlock*, bool,
    ByRef<::System::Exception*>)>(&::UnityEngine::UIElements::UIR::UIRenderDevice::EvaluateChain)> {
  constexpr static std::size_t size = 0x1118;
  constexpr static std::size_t addrs = 0x33228b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "EvaluateChain", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 11>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Exception*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.UpdateFenceValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::UIRenderDevice::*)()>(
    &::UnityEngine::UIElements::UIR::UIRenderDevice::UpdateFenceValue)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x33249a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                               "UpdateFenceValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.KickRanges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::UIRenderDevice::*)(
    ::cordl_internals::Ptr<::UnityEngine::UIElements::UIR::DrawBufferRange>, ByRef<int32_t>, ByRef<int32_t>, int32_t, ::UnityEngine::UIElements::UIR::Page*)>(
    &::UnityEngine::UIElements::UIR::UIRenderDevice::KickRanges)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x3323b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "KickRanges", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::UIElements::UIR::DrawBufferRange>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Page*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.WaitOnCpuFence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::UIRenderDevice::*)(uint32_t)>(
    &::UnityEngine::UIElements::UIR::UIRenderDevice::WaitOnCpuFence)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3324a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "WaitOnCpuFence",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.AdvanceFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::UIRenderDevice::*)()>(
    &::UnityEngine::UIElements::UIR::UIRenderDevice::AdvanceFrame)> {
  constexpr static std::size_t size = 0x9b4;
  constexpr static std::size_t addrs = 0x3321b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                               "AdvanceFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.PruneUnusedPages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::UIRenderDevice::*)()>(
    &::UnityEngine::UIElements::UIR::UIRenderDevice::PruneUnusedPages)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3324af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                               "PruneUnusedPages", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.PrepareForGfxDeviceRecreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIR::UIRenderDevice::PrepareForGfxDeviceRecreate)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3324c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                               "PrepareForGfxDeviceRecreate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.WrapUpGfxDeviceRecreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIR::UIRenderDevice::WrapUpGfxDeviceRecreate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3324dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                               "WrapUpGfxDeviceRecreate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.FlushAllPendingDeviceDisposes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIR::UIRenderDevice::FlushAllPendingDeviceDisposes)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3324e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                               "FlushAllPendingDeviceDisposes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.GatherDrawStatistics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics (
    ::UnityEngine::UIElements::UIR::UIRenderDevice::*)()>(&::UnityEngine::UIElements::UIR::UIRenderDevice::GatherDrawStatistics)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3324e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                               "GatherDrawStatistics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.ProcessDeviceFreeQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIR::UIRenderDevice::ProcessDeviceFreeQueue)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x331f868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                               "ProcessDeviceFreeQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.OnEngineUpdateGlobal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIR::UIRenderDevice::OnEngineUpdateGlobal)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3324eb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                               "OnEngineUpdateGlobal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRenderDevice.OnFlushPendingResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIR::UIRenderDevice::OnFlushPendingResources)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3324f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                               "OnFlushPendingResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::UIR::UIRenderDevice::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::UIR::UIRenderDevice::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr bool& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_MockDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MockDevice;
}
constexpr bool const& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_MockDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MockDevice;
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_set_m_MockDevice(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MockDevice = value;
}
constexpr void*& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_DefaultStencilState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultStencilState;
}
constexpr void* const& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_DefaultStencilState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultStencilState;
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_set_m_DefaultStencilState(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultStencilState = value;
}
constexpr void*& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_VertexDecl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertexDecl;
}
constexpr void* const& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_VertexDecl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertexDecl;
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_set_m_VertexDecl(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VertexDecl = value;
}
constexpr ::UnityEngine::UIElements::UIR::Page*& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_FirstPage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstPage;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::Page*> const& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_FirstPage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstPage;
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_set_m_FirstPage(::UnityEngine::UIElements::UIR::Page* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FirstPage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_NextPageVertexCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextPageVertexCount;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_NextPageVertexCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextPageVertexCount;
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_set_m_NextPageVertexCount(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NextPageVertexCount = value;
}
constexpr uint32_t& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_LargeMeshVertexCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LargeMeshVertexCount;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_LargeMeshVertexCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LargeMeshVertexCount;
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_set_m_LargeMeshVertexCount(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LargeMeshVertexCount = value;
}
constexpr float_t& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_IndexToVertexCountRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexToVertexCountRatio;
}
constexpr float_t const& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_IndexToVertexCountRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexToVertexCountRatio;
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_set_m_IndexToVertexCountRatio(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IndexToVertexCountRatio = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToFree>*>*&
UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_DeferredFrees() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeferredFrees;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToFree>*>*> const&
UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_DeferredFrees() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeferredFrees;
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_set_m_DeferredFrees(
    ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToFree>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DeferredFrees)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate>*>*&
UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_Updates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Updates;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate>*>*> const&
UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_Updates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Updates;
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_set_m_Updates(
    ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Updates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_Fences() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Fences;
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_Fences() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Fences;
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_set_m_Fences(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Fences)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::MaterialPropertyBlock*& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_StandardMatProps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StandardMatProps;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> const& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_StandardMatProps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StandardMatProps;
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_set_m_StandardMatProps(::UnityEngine::MaterialPropertyBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StandardMatProps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_FrameIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameIndex;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_FrameIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameIndex;
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_set_m_FrameIndex(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FrameIndex = value;
}
constexpr uint32_t& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_NextUpdateID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextUpdateID;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_NextUpdateID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextUpdateID;
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_set_m_NextUpdateID(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NextUpdateID = value;
}
constexpr ::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_DrawStats() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawStats;
}
constexpr ::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics const& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_DrawStats() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawStats;
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_set_m_DrawStats(::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DrawStats = value;
}
constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::MeshHandle*>*& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_MeshHandles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshHandles;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::MeshHandle*>*> const&
UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_MeshHandles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshHandles;
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_set_m_MeshHandles(::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::MeshHandle*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MeshHandles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::DrawParams*& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_DrawParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawParams;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::DrawParams*> const& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_DrawParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawParams;
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_set_m_DrawParams(::UnityEngine::UIElements::UIR::DrawParams* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DrawParams)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::TextureSlotManager*& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_TextureSlotManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureSlotManager;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::TextureSlotManager*> const&
UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get_m_TextureSlotManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureSlotManager;
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_set_m_TextureSlotManager(::UnityEngine::UIElements::UIR::TextureSlotManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TextureSlotManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get__maxVerticesPerPage_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxVerticesPerPage_k__BackingField;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get__maxVerticesPerPage_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxVerticesPerPage_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_set__maxVerticesPerPage_k__BackingField(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxVerticesPerPage_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get__breakBatches_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____breakBatches_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get__breakBatches_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____breakBatches_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_set__breakBatches_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____breakBatches_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get__disposed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_get__disposed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__cordl_internal_set__disposed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed_k__BackingField = value;
}
inline void
UnityEngine::UIElements::UIR::UIRenderDevice::setStaticF_m_DeviceFreeQueue(::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*, "m_DeviceFreeQueue",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>(
      std::forward<::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*>(value));
}
inline ::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>* UnityEngine::UIElements::UIR::UIRenderDevice::getStaticF_m_DeviceFreeQueue() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*, "m_DeviceFreeQueue",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>();
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::setStaticF_m_ActiveDeviceCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "m_ActiveDeviceCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::UIR::UIRenderDevice::getStaticF_m_ActiveDeviceCount() {
  return ::cordl_internals::getStaticField<int32_t, "m_ActiveDeviceCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>();
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::setStaticF_m_SubscribedToNotifications(bool value) {
  ::cordl_internals::setStaticField<bool, "m_SubscribedToNotifications", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>(
      std::forward<bool>(value));
}
inline bool UnityEngine::UIElements::UIR::UIRenderDevice::getStaticF_m_SubscribedToNotifications() {
  return ::cordl_internals::getStaticField<bool, "m_SubscribedToNotifications", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>();
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::setStaticF_m_SynchronousFree(bool value) {
  ::cordl_internals::setStaticField<bool, "m_SynchronousFree", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>(std::forward<bool>(value));
}
inline bool UnityEngine::UIElements::UIR::UIRenderDevice::getStaticF_m_SynchronousFree() {
  return ::cordl_internals::getStaticField<bool, "m_SynchronousFree", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>();
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::setStaticF_s_FontTexPropID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_FontTexPropID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::UIR::UIRenderDevice::getStaticF_s_FontTexPropID() {
  return ::cordl_internals::getStaticField<int32_t, "s_FontTexPropID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>();
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::setStaticF_s_FontTexSDFScaleID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_FontTexSDFScaleID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::UIR::UIRenderDevice::getStaticF_s_FontTexSDFScaleID() {
  return ::cordl_internals::getStaticField<int32_t, "s_FontTexSDFScaleID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>();
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::setStaticF_s_GradientSettingsTexID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_GradientSettingsTexID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::UIR::UIRenderDevice::getStaticF_s_GradientSettingsTexID() {
  return ::cordl_internals::getStaticField<int32_t, "s_GradientSettingsTexID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>();
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::setStaticF_s_ShaderInfoTexID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_ShaderInfoTexID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::UIR::UIRenderDevice::getStaticF_s_ShaderInfoTexID() {
  return ::cordl_internals::getStaticField<int32_t, "s_ShaderInfoTexID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>();
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::setStaticF_s_TransformsPropID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_TransformsPropID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::UIR::UIRenderDevice::getStaticF_s_TransformsPropID() {
  return ::cordl_internals::getStaticField<int32_t, "s_TransformsPropID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>();
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::setStaticF_s_ClipRectsPropID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_ClipRectsPropID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::UIR::UIRenderDevice::getStaticF_s_ClipRectsPropID() {
  return ::cordl_internals::getStaticField<int32_t, "s_ClipRectsPropID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>();
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::setStaticF_s_ClipSpaceParamsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_ClipSpaceParamsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::UIR::UIRenderDevice::getStaticF_s_ClipSpaceParamsID() {
  return ::cordl_internals::getStaticField<int32_t, "s_ClipSpaceParamsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>();
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::setStaticF_s_MarkerAllocate(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerAllocate",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::UIRenderDevice::getStaticF_s_MarkerAllocate() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerAllocate",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>();
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::setStaticF_s_MarkerFree(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerFree", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::UIRenderDevice::getStaticF_s_MarkerFree() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerFree",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>();
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::setStaticF_s_MarkerAdvanceFrame(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerAdvanceFrame",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::UIRenderDevice::getStaticF_s_MarkerAdvanceFrame() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerAdvanceFrame",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>();
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::setStaticF_s_MarkerFence(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerFence", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::UIRenderDevice::getStaticF_s_MarkerFence() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerFence",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>();
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::setStaticF_s_MarkerBeforeDraw(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerBeforeDraw",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::UIRenderDevice::getStaticF_s_MarkerBeforeDraw() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerBeforeDraw",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>();
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::setStaticF_s_VertexTexturingIsAvailable(::System::Nullable_1<bool> value) {
  ::cordl_internals::setStaticField<::System::Nullable_1<bool>, "s_VertexTexturingIsAvailable",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>(std::forward<::System::Nullable_1<bool>>(value));
}
inline ::System::Nullable_1<bool> UnityEngine::UIElements::UIR::UIRenderDevice::getStaticF_s_VertexTexturingIsAvailable() {
  return ::cordl_internals::getStaticField<::System::Nullable_1<bool>, "s_VertexTexturingIsAvailable",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>();
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::setStaticF_s_ShaderModelIs35(::System::Nullable_1<bool> value) {
  ::cordl_internals::setStaticField<::System::Nullable_1<bool>, "s_ShaderModelIs35", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>(
      std::forward<::System::Nullable_1<bool>>(value));
}
inline ::System::Nullable_1<bool> UnityEngine::UIElements::UIR::UIRenderDevice::getStaticF_s_ShaderModelIs35() {
  return ::cordl_internals::getStaticField<::System::Nullable_1<bool>, "s_ShaderModelIs35",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>();
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::setStaticF_s_DefaultShaderInfoTexFloat(::UnityW<::UnityEngine::Texture2D> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2D>, "s_DefaultShaderInfoTexFloat",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>(
      std::forward<::UnityW<::UnityEngine::Texture2D>>(value));
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::UIElements::UIR::UIRenderDevice::getStaticF_s_DefaultShaderInfoTexFloat() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2D>, "s_DefaultShaderInfoTexFloat",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>();
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::setStaticF_s_DefaultShaderInfoTexARGB8(::UnityW<::UnityEngine::Texture2D> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2D>, "s_DefaultShaderInfoTexARGB8",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>(
      std::forward<::UnityW<::UnityEngine::Texture2D>>(value));
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::UIElements::UIR::UIRenderDevice::getStaticF_s_DefaultShaderInfoTexARGB8() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2D>, "s_DefaultShaderInfoTexARGB8",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get>();
}
inline uint32_t UnityEngine::UIElements::UIR::UIRenderDevice::get_maxVerticesPerPage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                             "get_maxVerticesPerPage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::UIRenderDevice::get_breakBatches() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                             "get_breakBatches", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::set_breakBatches(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "set_breakBatches",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
/// @param initialVertexCapacity: uint32_t (default: static_cast<uint32_t>(0x2000000u))
/// @param initialIndexCapacity: uint32_t (default: static_cast<uint32_t>(0x4020000u))
inline ::UnityEngine::UIElements::UIR::UIRenderDevice* UnityEngine::UIElements::UIR::UIRenderDevice::New_ctor(uint32_t initialVertexCapacity, uint32_t initialIndexCapacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::UIRenderDevice*>(initialVertexCapacity, initialIndexCapacity));
}
/// @param initialVertexCapacity: uint32_t (default: static_cast<uint32_t>(0x2000000u))
/// @param initialIndexCapacity: uint32_t (default: static_cast<uint32_t>(0x4020000u))
inline void UnityEngine::UIElements::UIR::UIRenderDevice::_ctor(uint32_t initialVertexCapacity, uint32_t initialIndexCapacity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialVertexCapacity, initialIndexCapacity);
}
inline ::UnityEngine::UIElements::UIR::UIRenderDevice* UnityEngine::UIElements::UIR::UIRenderDevice::New_ctor(uint32_t initialVertexCapacity, uint32_t initialIndexCapacity, bool mockDevice) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::UIRenderDevice*>(initialVertexCapacity, initialIndexCapacity, mockDevice));
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::_ctor(uint32_t initialVertexCapacity, uint32_t initialIndexCapacity, bool mockDevice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialVertexCapacity, initialIndexCapacity, mockDevice);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::UIElements::UIR::UIRenderDevice::get_defaultShaderInfoTexFloat() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                             "get_defaultShaderInfoTexFloat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::UIElements::UIR::UIRenderDevice::get_defaultShaderInfoTexARGB8() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                             "get_defaultShaderInfoTexARGB8", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::UIRenderDevice::get_vertexTexturingIsAvailable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                             "get_vertexTexturingIsAvailable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::UIRenderDevice::get_shaderModelIs35() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                             "get_shaderModelIs35", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::InitVertexDeclaration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                             "InitVertexDeclaration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::CompleteCreation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                             "CompleteCreation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::UIRenderDevice::get_fullyCreated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                             "get_fullyCreated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::UIRenderDevice::get_disposed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                             "get_disposed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "set_disposed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::UnityEngine::UIElements::UIR::MeshHandle* UnityEngine::UIElements::UIR::UIRenderDevice::Allocate(uint32_t vertexCount, uint32_t indexCount,
                                                                                                          ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>> vertexData,
                                                                                                          ByRef<::Unity::Collections::NativeSlice_1<uint16_t>> indexData, ByRef<uint16_t> indexOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "Allocate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeSlice_1<uint16_t>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::MeshHandle*, false>(this, ___internal_method, vertexCount, indexCount, vertexData, indexData, indexOffset);
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::Update(::UnityEngine::UIElements::UIR::MeshHandle* mesh, uint32_t vertexCount,
                                                                 ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>> vertexData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::MeshHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, vertexCount, vertexData);
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::Update(::UnityEngine::UIElements::UIR::MeshHandle* mesh, uint32_t vertexCount, uint32_t indexCount,
                                                                 ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>> vertexData,
                                                                 ByRef<::Unity::Collections::NativeSlice_1<uint16_t>> indexData, ByRef<uint16_t> indexOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::MeshHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeSlice_1<uint16_t>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, vertexCount, indexCount, vertexData, indexData, indexOffset);
}
inline bool UnityEngine::UIElements::UIR::UIRenderDevice::TryAllocFromPage(::UnityEngine::UIElements::UIR::Page* page, uint32_t vertexCount, uint32_t indexCount,
                                                                           ByRef<::UnityEngine::UIElements::UIR::Alloc> va, ByRef<::UnityEngine::UIElements::UIR::Alloc> ia, bool shortLived) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "TryAllocFromPage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Page*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::Alloc>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::Alloc>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, page, vertexCount, indexCount, va, ia, shortLived);
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::Allocate(::UnityEngine::UIElements::UIR::MeshHandle* meshHandle, uint32_t vertexCount, uint32_t indexCount,
                                                                   ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>> vertexData,
                                                                   ByRef<::Unity::Collections::NativeSlice_1<uint16_t>> indexData, bool shortLived) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "Allocate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::MeshHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeSlice_1<uint16_t>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, meshHandle, vertexCount, indexCount, vertexData, indexData, shortLived);
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::UpdateAfterGPUUsedData(::UnityEngine::UIElements::UIR::MeshHandle* mesh, uint32_t vertexCount, uint32_t indexCount,
                                                                                 ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>> vertexData,
                                                                                 ByRef<::Unity::Collections::NativeSlice_1<uint16_t>> indexData, ByRef<uint16_t> indexOffset,
                                                                                 ByRef<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate> allocToUpdate, bool copyBackIndices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "UpdateAfterGPUUsedData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::MeshHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeSlice_1<uint16_t>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, vertexCount, indexCount, vertexData, indexData, indexOffset, allocToUpdate, copyBackIndices);
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::Free(::UnityEngine::UIElements::UIR::MeshHandle* mesh) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "Free", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::MeshHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh);
}
inline ::UnityEngine::Vector4 UnityEngine::UIElements::UIR::UIRenderDevice::GetClipSpaceParams() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                             "GetClipSpaceParams", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::OnFrameRenderingBegin() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                             "OnFrameRenderingBegin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::Unity::Collections::NativeSlice_1<T> UnityEngine::UIElements::UIR::UIRenderDevice::PtrToSlice(::cordl_internals::Ptr<void> p, int32_t count) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "PtrToSlice",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeSlice_1<T>, false>(nullptr, ___internal_method, p, count);
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::ApplyDrawCommandState(::UnityEngine::UIElements::UIR::RenderChainCommand* cmd, int32_t textureSlot, ::UnityEngine::Material* newMat,
                                                                                bool newMatDiffers, bool newFontDiffers, ByRef<::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState> st) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "ApplyDrawCommandState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, textureSlot, newMat, newMatDiffers, newFontDiffers, st);
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::ApplyBatchState(ByRef<::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState> st, bool allowMaterialChange) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "ApplyBatchState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, st, allowMaterialChange);
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::EvaluateChain(::UnityEngine::UIElements::UIR::RenderChainCommand* head, ::UnityEngine::Material* initialMat,
                                                                        ::UnityEngine::Material* defaultMat, ::UnityEngine::Texture* gradientSettings, ::UnityEngine::Texture* shaderInfo,
                                                                        float_t pixelsPerPoint, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4> transforms,
                                                                        ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4> clipRects, ::UnityEngine::MaterialPropertyBlock* stateMatProps,
                                                                        bool allowMaterialChange, ByRef<::System::Exception*> immediateException) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "EvaluateChain", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 11>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Exception*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, head, initialMat, defaultMat, gradientSettings, shaderInfo, pixelsPerPoint, transforms, clipRects, stateMatProps,
                                                          allowMaterialChange, immediateException);
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::UpdateFenceValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                             "UpdateFenceValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::KickRanges(::cordl_internals::Ptr<::UnityEngine::UIElements::UIR::DrawBufferRange> ranges, ByRef<int32_t> rangesReady,
                                                                     ByRef<int32_t> rangesStart, int32_t rangesCount, ::UnityEngine::UIElements::UIR::Page* curPage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "KickRanges", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::UIElements::UIR::DrawBufferRange>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Page*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ranges, rangesReady, rangesStart, rangesCount, curPage);
}
template <typename I, typename T>
inline void UnityEngine::UIElements::UIR::UIRenderDevice::DrawRanges(::UnityEngine::UIElements::UIR::__Utility__GPUBuffer_1<I>* ib, ::UnityEngine::UIElements::UIR::__Utility__GPUBuffer_1<T>* vb,
                                                                     ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange> ranges) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "DrawRanges",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<I>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__Utility__GPUBuffer_1<I>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__Utility__GPUBuffer_1<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<I>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ib, vb, ranges);
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::WaitOnCpuFence(uint32_t fence) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(), "WaitOnCpuFence",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fence);
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::AdvanceFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                             "AdvanceFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::PruneUnusedPages() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                             "PruneUnusedPages", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::PrepareForGfxDeviceRecreate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                             "PrepareForGfxDeviceRecreate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::WrapUpGfxDeviceRecreate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                             "WrapUpGfxDeviceRecreate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::FlushAllPendingDeviceDisposes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                             "FlushAllPendingDeviceDisposes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics UnityEngine::UIElements::UIR::UIRenderDevice::GatherDrawStatistics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                             "GatherDrawStatistics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::ProcessDeviceFreeQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                             "ProcessDeviceFreeQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::OnEngineUpdateGlobal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                             "OnEngineUpdateGlobal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::UIRenderDevice::OnFlushPendingResources() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                             "OnFlushPendingResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::UIRenderDevice::UIRenderDevice() {}
