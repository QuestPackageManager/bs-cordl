#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\NativeRenderPassCompiler\NativePassCompiler.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(
    ::GlobalNamespace::RenderGraphCompilationCache*)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x67ef4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::RenderGraphCompilationCache*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Finalize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x67ef61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Dispose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67ef6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Cleanup)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x67ef660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*, bool, ::StringW,
    bool, int32_t, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Initialize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x67ef724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                { "Initialize",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*>(), ::i2c::type_of<bool>(),
                                                    ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.Compile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Compile)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x67ef830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                             { "Compile", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Clear)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x67ef7bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(), { "Clear", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.SetPassStatesForNativePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::SetPassStatesForNativePass)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67f1cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                             { "SetPassStatesForNativePass", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.SetupContextData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::SetupContextData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x67ef870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                             { "SetupContextData", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.BuildGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::BuildGraph)> {
  constexpr static std::size_t size = 0xe34;
  constexpr static std::size_t addrs = 0x67ef910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(), { "BuildGraph", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.CullUnusedRenderPasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::CullUnusedRenderPasses)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x67f0744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(), { "CullUnusedRenderPasses", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.TryMergeNativePasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::TryMergeNativePasses)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x67f0b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(), { "TryMergeNativePasses", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.FindResourceUsageRanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::FindResourceUsageRanges)> {
  constexpr static std::size_t size = 0x948;
  constexpr static std::size_t addrs = 0x67f0e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(), { "FindResourceUsageRanges", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.PrepareNativeRenderPasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::PrepareNativeRenderPasses)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x67f1c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(), { "PrepareNativeRenderPasses", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.IsGlobalTextureInPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*, ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::IsGlobalTextureInPass)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x67f22d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                            { "IsGlobalTextureInPass",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.DetectMemoryLessResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::DetectMemoryLessResources)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x67f1778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(), { "DetectMemoryLessResources", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.IsSameNativeSubPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::SubPassDescriptor>, ::by_ref<::UnityEngine::Rendering::SubPassDescriptor>)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::IsSameNativeSubPass)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x67f2424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
            { "IsSameNativeSubPass", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubPassDescriptor>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubPassDescriptor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.ExecuteCreateRessource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteCreateRessource)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x67f259c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                             { "ExecuteCreateRessource",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.DetermineLoadStoreActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::DetermineLoadStoreActions)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x67f1d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                         { "DetermineLoadStoreActions", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.ValidateNativePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>, int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ValidateNativePass)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x67f2a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                { "ValidateNativePass",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.ValidateAttachmentRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ValidateAttachmentRenderTarget)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x67f2bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                             { "ValidateAttachmentRenderTarget",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.ExecuteBeginRenderPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteBeginRenderPass)> {
  constexpr static std::size_t size = 0x5b8;
  constexpr static std::size_t addrs = 0x67f2cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                             { "ExecuteBeginRenderPass",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.ExecuteDestroyResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteDestroyResource)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x67f3288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                             { "ExecuteDestroyResource",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.SetRandomWriteTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(
    ::by_ref<::UnityEngine::Rendering::CommandBuffer*>, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*, int32_t, ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle,
    bool)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::SetRandomWriteTarget)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x67f36bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                            { "SetRandomWriteTarget",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CommandBuffer*>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.ExecuteGraphNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*,
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteGraphNode)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x67f38d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                             { "ExecuteGraphNode",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.ExecuteGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*,
    ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*>)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteGraph)> {
  constexpr static std::size_t size = 0x6b4;
  constexpr static std::size_t addrs = 0x67f3b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                { "ExecuteGraph",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                    ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.MakeAttachmentInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::UnityEngine::Rendering::RenderGraphModule::
        NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo* (*)(Il2CppObject*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>,
                                                                                        int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::MakeAttachmentInfo)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x67f4208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                { "MakeAttachmentInfo",
                                                  {},
                                                  { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>(),
                                                    ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.MakePassBreakInfoMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(Il2CppObject*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::MakePassBreakInfoMessage)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x67f4694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                         { "MakePassBreakInfoMessage",
                                           {},
                                           { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.MakePassMergeMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(Il2CppObject*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>,
                                                                     ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::MakePassMergeMessage)> {
  constexpr static std::size_t size = 0x72c;
  constexpr static std::size_t addrs = 0x67f47d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                { "MakePassMergeMessage",
                                                  {},
                                                  { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.InjectSpaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::InjectSpaces)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x67f4f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(), { "InjectSpaces", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.GenerateNativeCompilerDebugData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>)>(
        &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::GenerateNativeCompilerDebugData)> {
  constexpr static std::size_t size = 0x4334;
  constexpr static std::size_t addrs = 0x67f5074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                { "GenerateNativeCompilerDebugData", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>>() } })));
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
  this->___contextData = value;
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
  this->___defaultContextData = value;
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
  this->___previousCommandBuffer = value;
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
  this->___toVisitPassIds = value;
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
  this->___m_CompilationCache = value;
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
  this->___graphPassNamesForDebug = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::_ctor(::GlobalNamespace::RenderGraphCompilationCache* cache) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::RenderGraphCompilationCache*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cache);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Finalize() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Cleanup() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Initialize(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>* renderPasses, bool disableCulling, ::StringW debugName, bool useCompilationCaching,
    int32_t graphHash, int32_t frameIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                           { "Initialize",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, resources, renderPasses, disableCulling, debugName, useCompilationCaching, graphHash, frameIndex);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Compile(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                           { "Compile", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resources);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Clear(bool clearContextData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(), { "Clear", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clearContextData);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::SetPassStatesForNativePass(int32_t nativePassId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                                                         { "SetPassStatesForNativePass", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nativePassId);
}
inline void
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::SetupContextData(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                           { "SetupContextData", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resources);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::BuildGraph() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(), { "BuildGraph", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::CullUnusedRenderPasses() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(), { "CullUnusedRenderPasses", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::TryMergeNativePasses() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(), { "TryMergeNativePasses", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::FindResourceUsageRanges() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(), { "FindResourceUsageRanges", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::PrepareNativeRenderPasses() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(), { "PrepareNativeRenderPasses", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::IsGlobalTextureInPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass,
                                                                                                                           ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                          { "IsGlobalTextureInPass",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pass, handle);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::DetectMemoryLessResources() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(), { "DetectMemoryLessResources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::IsSameNativeSubPass(::by_ref<::UnityEngine::Rendering::SubPassDescriptor> a,
                                                                                                                         ::by_ref<::UnityEngine::Rendering::SubPassDescriptor> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
          { "IsSameNativeSubPass", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubPassDescriptor>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubPassDescriptor>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteCreateRessource(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> pass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                           { "ExecuteCreateRessource",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rgContext, resources, pass);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::DetermineLoadStoreActions(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> nativePass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                       { "DetermineLoadStoreActions", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nativePass);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ValidateNativePass(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> nativePass, int32_t width, int32_t height, int32_t depth, int32_t samples,
    int32_t attachmentCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                              { "ValidateNativePass",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nativePass, width, height, depth, samples, attachmentCount);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ValidateAttachmentRenderTarget(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo> attRenderTargetInfo, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
    int32_t nativePassWidth, int32_t nativePassHeight, int32_t nativePassMSAASamples) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                                                         { "ValidateAttachmentRenderTarget",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attRenderTargetInfo, resources, nativePassWidth, nativePassHeight, nativePassMSAASamples);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteBeginRenderPass(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> nativePass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                           { "ExecuteBeginRenderPass",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rgContext, resources, nativePass);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteDestroyResource(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> pass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                           { "ExecuteDestroyResource",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rgContext, resources, pass);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::SetRandomWriteTarget(
    ::by_ref<::UnityEngine::Rendering::CommandBuffer*> cmd, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources, int32_t index,
    ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle resource, bool preserveCounterValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                          { "SetRandomWriteTarget",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CommandBuffer*>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, resources, index, resource, preserveCounterValue);
}
inline void
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteGraphNode(::by_ref<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*> rgContext,
                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                                                         { "ExecuteGraphNode",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rgContext, resources, pass);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteGraph(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
    ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*> passes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                              { "ExecuteGraph",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                  ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rgContext, resources, passes);
}
inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::MakeAttachmentInfo(
    Il2CppObject* ctx, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> nativePass, int32_t attachmentIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                              { "MakeAttachmentInfo",
                                                {},
                                                { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>(),
                                                  ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*>(nullptr, ___internal_method, ctx,
                                                                                                                                                                       nativePass, attachmentIndex);
}
inline ::StringW UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::MakePassBreakInfoMessage(
    Il2CppObject* ctx, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> nativePass) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
          { "MakePassBreakInfoMessage", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, ctx, nativePass);
}
inline ::StringW UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::MakePassMergeMessage(
    Il2CppObject* ctx, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> pass,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> prevPass,
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit mergeResult) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                              { "MakePassMergeMessage",
                                                {},
                                                { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, ctx, pass, prevPass, mergeResult);
}
inline ::StringW UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::InjectSpaces(::StringW camelCaseString) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                                                                         { "InjectSpaces", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, camelCaseString);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::GenerateNativeCompilerDebugData(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*> debugData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                                              { "GenerateNativeCompilerDebugData", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, debugData);
}
inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::New_ctor(::GlobalNamespace::RenderGraphCompilationCache* cache) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(cache));
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
