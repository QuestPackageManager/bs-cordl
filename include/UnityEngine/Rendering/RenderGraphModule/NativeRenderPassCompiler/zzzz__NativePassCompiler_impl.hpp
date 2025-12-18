#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/NativePassCompiler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AttachmentDescriptor_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__NativePassCompiler_def.hpp"
#include "GlobalNamespace/zzzz__RenderGraphCompilationCache_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__Name_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__NativePassCompiler_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__NativePassData_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassBreakAudit_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassData_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__InternalRenderGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResourceRegistry_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderTargetInfo_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__SubPassDescriptor_def.hpp"
// Ctor Parameters [CppParam { name: "m_ResourcesForDebugOnly", ty: "::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_RenderPasses", ty: "::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "debugName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "disableCulling", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo::NativePassCompiler_RenderGraphInputInfo(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* m_ResourcesForDebugOnly,
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>* m_RenderPasses, ::StringW debugName, bool disableCulling) noexcept {
  this->m_ResourcesForDebugOnly = m_ResourcesForDebugOnly;
  this->m_RenderPasses = m_RenderPasses;
  this->debugName = debugName;
  this->disableCulling = disableCulling;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo::NativePassCompiler_RenderGraphInputInfo() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId::NativePassCompiler_NativeCompilerProfileId(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId::NativePassCompiler_NativeCompilerProfileId() {}
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId
    UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId::NRPRGComp_PrepareNativePass{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId
    UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId::NRPRGComp_SetupContextData{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId
    UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId::NRPRGComp_BuildGraph{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId
    UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId::NRPRGComp_CullNodes{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId
    UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId::NRPRGComp_TryMergeNativePasses{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId
    UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId::NRPRGComp_FindResourceUsageRanges{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId
    UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId::NRPRGComp_DetectMemorylessResources{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId
    UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId::NRPRGComp_ExecuteCreateResources{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId
    UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId::NRPRGComp_ExecuteBeginRenderpassCommand{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId
    UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId::NRPRGComp_ExecuteDestroyResources{ static_cast<int32_t>(0x9) };
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(
    ::GlobalNamespace::RenderGraphCompilationCache*)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6638378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RenderGraphCompilationCache*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Finalize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x66384b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Dispose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6638558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(),
                                    "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Cleanup)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66384f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(),
                                    "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*, bool, ::StringW,
    bool, int32_t, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Initialize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x66385bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "Initialize",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.Compile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Compile)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x66386c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "Compile",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Clear)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6638654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "Clear",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.SetPassStatesForNativePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::SetPassStatesForNativePass)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663ab94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "SetPassStatesForNativePass",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.SetupContextData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::SetupContextData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6638708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "SetupContextData",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.BuildGraph
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::BuildGraph)> {
  constexpr static std::size_t size = 0xe34;
  constexpr static std::size_t addrs = 0x66387a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(),
                                    "BuildGraph", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.CullUnusedRenderPasses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::CullUnusedRenderPasses)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x66395dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(),
                                    "CullUnusedRenderPasses", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.TryMergeNativePasses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::TryMergeNativePasses)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x66399b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(),
                                    "TryMergeNativePasses", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.FindResourceUsageRanges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::FindResourceUsageRanges)> {
  constexpr static std::size_t size = 0x948;
  constexpr static std::size_t addrs = 0x6639cc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(),
                                    "FindResourceUsageRanges", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.PrepareNativeRenderPasses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::PrepareNativeRenderPasses)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x663aaa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(),
                                    "PrepareNativeRenderPasses", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.IsGlobalTextureInPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*, ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle)>(
        &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::IsGlobalTextureInPass)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x663b16c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(),
                                    "IsGlobalTextureInPass", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.DetectMemoryLessResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::DetectMemoryLessResources)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x663a610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(),
                                    "DetectMemoryLessResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.IsSameNativeSubPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::UnityEngine::Rendering::SubPassDescriptor>, ::ByRef<::UnityEngine::Rendering::SubPassDescriptor>)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::IsSameNativeSubPass)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x663b2bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(),
                                    "IsSameNativeSubPass", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::SubPassDescriptor>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::SubPassDescriptor>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.ExecuteCreateRessource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*,
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteCreateRessource)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x663b434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "ExecuteCreateRessource",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.DetermineLoadStoreActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::DetermineLoadStoreActions)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x663aba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "DetermineLoadStoreActions",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.ValidateNativePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>, int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ValidateNativePass)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x663b8b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(),
                                    "ValidateNativePass", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 6>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.ValidateAttachmentRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ValidateAttachmentRenderTarget)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x663ba44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "ValidateAttachmentRenderTarget",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.ExecuteBeginRenderPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*,
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteBeginRenderPass)> {
  constexpr static std::size_t size = 0x5b8;
  constexpr static std::size_t addrs = 0x663bb68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "ExecuteBeginRenderPass",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.ExecuteDestroyResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*,
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteDestroyResource)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x663c120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "ExecuteDestroyResource",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.SetRandomWriteTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(
    ::ByRef<::UnityEngine::Rendering::CommandBuffer*>, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*, int32_t, ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle,
    bool)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::SetRandomWriteTarget)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x663c554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "SetRandomWriteTarget",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CommandBuffer*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.ExecuteGraphNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*,
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteGraphNode)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x663c770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "ExecuteGraphNode",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.ExecuteGraph
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*,
    ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*>)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteGraph)> {
  constexpr static std::size_t size = 0x6b4;
  constexpr static std::size_t addrs = 0x663c9ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "ExecuteGraph",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.MakeAttachmentInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::UnityEngine::Rendering::RenderGraphModule::
        NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo* (*)(Il2CppObject*, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>,
                                                                                        int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::MakeAttachmentInfo)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x663d0a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(),
                                    "MakeAttachmentInfo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.MakePassBreakInfoMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(Il2CppObject*, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>)>(
        &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::MakePassBreakInfoMessage)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x663d52c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "MakePassBreakInfoMessage",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.MakePassMergeMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(Il2CppObject*, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>,
                                                                                                ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>,
                                                                                                ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::MakePassMergeMessage)> {
  constexpr static std::size_t size = 0x72c;
  constexpr static std::size_t addrs = 0x663d66c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "MakePassMergeMessage",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.InjectSpaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::InjectSpaces)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x663dd98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "InjectSpaces",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.GenerateNativeCompilerDebugData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>)>(
        &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::GenerateNativeCompilerDebugData)> {
  constexpr static std::size_t size = 0x4334;
  constexpr static std::size_t addrs = 0x663df0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "GenerateNativeCompilerDebugData",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo&
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_graph() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graph;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo const&
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_graph() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graph;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_set_graph(
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___graph = value;
}
constexpr Il2CppObject*& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_contextData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contextData;
}
constexpr Il2CppObject* const& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_contextData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contextData;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_set_contextData(Il2CppObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___contextData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr Il2CppObject*& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_defaultContextData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultContextData;
}
constexpr Il2CppObject* const& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_defaultContextData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultContextData;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_set_defaultContextData(Il2CppObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultContextData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_previousCommandBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousCommandBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_previousCommandBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousCommandBuffer;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_set_previousCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___previousCommandBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Stack_1<int32_t>*& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_toVisitPassIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toVisitPassIds;
}
constexpr ::System::Collections::Generic::Stack_1<int32_t>* const&
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_toVisitPassIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toVisitPassIds;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_set_toVisitPassIds(::System::Collections::Generic::Stack_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___toVisitPassIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RenderGraphCompilationCache*& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_m_CompilationCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CompilationCache;
}
constexpr ::GlobalNamespace::RenderGraphCompilationCache* const&
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_m_CompilationCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CompilationCache;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_set_m_CompilationCache(::GlobalNamespace::RenderGraphCompilationCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CompilationCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::AttachmentDescriptor>&
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_m_BeginRenderPassAttachments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BeginRenderPassAttachments;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::AttachmentDescriptor> const&
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_m_BeginRenderPassAttachments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BeginRenderPassAttachments;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_set_m_BeginRenderPassAttachments(
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::AttachmentDescriptor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BeginRenderPassAttachments = value;
}
constexpr bool& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_m_Disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Disposed;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_m_Disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Disposed;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_set_m_Disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Disposed = value;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>*&
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_graphPassNamesForDebug() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphPassNamesForDebug;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>* const&
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_graphPassNamesForDebug() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphPassNamesForDebug;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_set_graphPassNamesForDebug(
    ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___graphPassNamesForDebug)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::_ctor(::GlobalNamespace::RenderGraphCompilationCache* cache) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RenderGraphCompilationCache*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cache);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Finalize() {
  auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "Dispose",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "Cleanup",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Initialize(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>* renderPasses, bool disableCulling, ::StringW debugName, bool useCompilationCaching,
    int32_t graphHash, int32_t frameIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "Initialize",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, resources, renderPasses, disableCulling, debugName, useCompilationCaching, graphHash, frameIndex);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Compile(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "Compile",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resources);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Clear(bool clearContextData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "Clear",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clearContextData);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::SetPassStatesForNativePass(int32_t nativePassId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "SetPassStatesForNativePass",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nativePassId);
}
inline void
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::SetupContextData(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "SetupContextData",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resources);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::BuildGraph() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(),
                                  "BuildGraph", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::CullUnusedRenderPasses() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(),
                                  "CullUnusedRenderPasses", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::TryMergeNativePasses() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(),
                                  "TryMergeNativePasses", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::FindResourceUsageRanges() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(),
                                  "FindResourceUsageRanges", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::PrepareNativeRenderPasses() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(),
                                  "PrepareNativeRenderPasses", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::IsGlobalTextureInPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass,
                                                                                                                           ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(),
                                  "IsGlobalTextureInPass", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pass, handle);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::DetectMemoryLessResources() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(),
                                  "DetectMemoryLessResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::IsSameNativeSubPass(::ByRef<::UnityEngine::Rendering::SubPassDescriptor> a,
                                                                                                                         ::ByRef<::UnityEngine::Rendering::SubPassDescriptor> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(),
                                  "IsSameNativeSubPass", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::SubPassDescriptor>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::SubPassDescriptor>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteCreateRessource(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> pass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "ExecuteCreateRessource",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rgContext, resources, pass);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::DetermineLoadStoreActions(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> nativePass) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(),
                                  "DetermineLoadStoreActions", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nativePass);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ValidateNativePass(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> nativePass, int32_t width, int32_t height, int32_t depth, int32_t samples, int32_t attachmentCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "ValidateNativePass",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nativePass, width, height, depth, samples, attachmentCount);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ValidateAttachmentRenderTarget(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo> attRenderTargetInfo, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
    int32_t nativePassWidth, int32_t nativePassHeight, int32_t nativePassMSAASamples) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "ValidateAttachmentRenderTarget",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attRenderTargetInfo, resources, nativePassWidth, nativePassHeight, nativePassMSAASamples);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteBeginRenderPass(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> nativePass) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(),
                                  "ExecuteBeginRenderPass", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rgContext, resources, nativePass);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteDestroyResource(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> pass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "ExecuteDestroyResource",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rgContext, resources, pass);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::SetRandomWriteTarget(
    ::ByRef<::UnityEngine::Rendering::CommandBuffer*> cmd, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources, int32_t index,
    ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle resource, bool preserveCounterValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "SetRandomWriteTarget",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CommandBuffer*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, resources, index, resource, preserveCounterValue);
}
inline void
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteGraphNode(::ByRef<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*> rgContext,
                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "ExecuteGraphNode",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rgContext, resources, pass);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteGraph(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
    ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*> passes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "ExecuteGraph",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rgContext, resources, passes);
}
inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::MakeAttachmentInfo(
    Il2CppObject* ctx, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> nativePass, int32_t attachmentIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "MakeAttachmentInfo",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*, false>(
      nullptr, ___internal_method, ctx, nativePass, attachmentIndex);
}
inline ::StringW UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::MakePassBreakInfoMessage(
    Il2CppObject* ctx, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> nativePass) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(),
                                  "MakePassBreakInfoMessage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, ctx, nativePass);
}
inline ::StringW UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::MakePassMergeMessage(
    Il2CppObject* ctx, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> pass,
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> prevPass,
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit mergeResult) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "MakePassMergeMessage",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, ctx, pass, prevPass, mergeResult);
}
inline ::StringW UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::InjectSpaces(::StringW camelCaseString) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "InjectSpaces",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, camelCaseString);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::GenerateNativeCompilerDebugData(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*> debugData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>::get(), "GenerateNativeCompilerDebugData",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, debugData);
}
inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::New_ctor(::GlobalNamespace::RenderGraphCompilationCache* cache) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(cache));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::NativePassCompiler() {}
