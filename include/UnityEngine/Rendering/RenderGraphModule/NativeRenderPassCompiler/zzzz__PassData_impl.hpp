#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/PassData.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassMergeState_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ExtendedFeatureFlags_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPassType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShadingRateCombiner_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShadingRateFragmentSize_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassData_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__Name_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassFragmentData_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassInputData_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassOutputData_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassRandomWriteData_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData.get_fragmentInfoHasShadingRateImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::get_fragmentInfoHasShadingRateImage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c270d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(), { "get_fragmentInfoHasShadingRateImage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData.GetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name (
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::*)(Il2CppObject*)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::GetName)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6c270e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(), { "GetName", {}, { ::i2c::type_of<Il2CppObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c27164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                                                { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData.ResetAndInitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::ResetAndInitialize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c271f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                                         { "ResetAndInitialize", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData.Outputs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassOutputData> (
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::*)(Il2CppObject*)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::Outputs)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c2728c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(), { "Outputs", {}, { ::i2c::type_of<Il2CppObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData.Inputs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassInputData> (
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::*)(Il2CppObject*)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::Inputs)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c27320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(), { "Inputs", {}, { ::i2c::type_of<Il2CppObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData.Fragments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData> (
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::*)(Il2CppObject*)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::Fragments)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c273b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                                                                                           { "Fragments", {}, { ::i2c::type_of<Il2CppObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData.SampledTexturesIfRaster
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> (
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::*)(Il2CppObject*)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::SampledTexturesIfRaster)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c27448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                                                                                           { "SampledTexturesIfRaster", {}, { ::i2c::type_of<Il2CppObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData.ShadingRateImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData (
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::*)(Il2CppObject*)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::ShadingRateImage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6c274dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                                                                                           { "ShadingRateImage", {}, { ::i2c::type_of<Il2CppObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData.FragmentInputs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData> (
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::*)(Il2CppObject*)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::FragmentInputs)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c27578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                                                                                           { "FragmentInputs", {}, { ::i2c::type_of<Il2CppObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData.FirstUsedResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> (
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::*)(Il2CppObject*)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::FirstUsedResources)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c2760c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                                                                                           { "FirstUsedResources", {}, { ::i2c::type_of<Il2CppObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData.RandomWriteTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassRandomWriteData> (
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::*)(Il2CppObject*)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::RandomWriteTextures)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c276a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                                                                                           { "RandomWriteTextures", {}, { ::i2c::type_of<Il2CppObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData.LastUsedResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> (
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::*)(Il2CppObject*)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::LastUsedResources)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c27734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                                                                                           { "LastUsedResources", {}, { ::i2c::type_of<Il2CppObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData.TrySetupAndValidateFragmentInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>, Il2CppObject*, ::by_ref<::StringW>)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::TrySetupAndValidateFragmentInfo)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6c277c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                            { "TrySetupAndValidateFragmentInfo",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(), ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData.TryAddFragment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>, Il2CppObject*, ::by_ref<::StringW>)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::TryAddFragment)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c278c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                            { "TryAddFragment",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(), ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData.TryAddFragmentInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>, Il2CppObject*, ::by_ref<::StringW>)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::TryAddFragmentInput)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c278e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                            { "TryAddFragmentInput",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(), ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData.AddRandomAccessResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::AddRandomAccessResource)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c27900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(), { "AddRandomAccessResource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData.AddFirstUse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>, Il2CppObject*)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::AddFirstUse)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6c27910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                                                { "AddFirstUse", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(), ::i2c::type_of<Il2CppObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData.AddLastUse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>, Il2CppObject*)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::AddLastUse)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6c27ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                                                { "AddLastUse", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(), ::i2c::type_of<Il2CppObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData.IsUsedAsFragment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>, Il2CppObject*)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::IsUsedAsFragment)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6c27c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                                         { "IsUsedAsFragment", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(), ::i2c::type_of<Il2CppObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData.DisconnectFromResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::*)(
    Il2CppObject*, ::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::DisconnectFromResources)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x6c27e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                                         { "DisconnectFromResources",
                                           {},
                                           { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>(),
                                             ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::get_fragmentInfoHasShadingRateImage() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(), { "get_fragmentInfoHasShadingRateImage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::GetName(Il2CppObject* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(), { "GetName", {}, { ::i2c::type_of<Il2CppObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>(*this, ___internal_method, ctx);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::_ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*> pass,
                                                                                                 int32_t passIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pass, passIndex);
}
inline void
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::ResetAndInitialize(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*> pass,
                                                                                                  int32_t passIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                                              { "ResetAndInitialize", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pass, passIndex);
}
inline ::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassOutputData>
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::Outputs(Il2CppObject* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(), { "Outputs", {}, { ::i2c::type_of<Il2CppObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassOutputData>>(*this, ___internal_method, ctx);
}
inline ::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassInputData>
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::Inputs(Il2CppObject* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(), { "Inputs", {}, { ::i2c::type_of<Il2CppObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassInputData>>(*this, ___internal_method, ctx);
}
inline ::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData>
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::Fragments(Il2CppObject* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(), { "Fragments", {}, { ::i2c::type_of<Il2CppObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData>>(*this, ___internal_method, ctx);
}
inline ::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::SampledTexturesIfRaster(Il2CppObject* ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                                                                                         { "SampledTexturesIfRaster", {}, { ::i2c::type_of<Il2CppObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(*this, ___internal_method, ctx);
}
inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::ShadingRateImage(Il2CppObject* ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                                                                                         { "ShadingRateImage", {}, { ::i2c::type_of<Il2CppObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData>(*this, ___internal_method, ctx);
}
inline ::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData>
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::FragmentInputs(Il2CppObject* ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                                                                                         { "FragmentInputs", {}, { ::i2c::type_of<Il2CppObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData>>(*this, ___internal_method, ctx);
}
inline ::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::FirstUsedResources(Il2CppObject* ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                                                                                         { "FirstUsedResources", {}, { ::i2c::type_of<Il2CppObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(*this, ___internal_method, ctx);
}
inline ::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassRandomWriteData>
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::RandomWriteTextures(Il2CppObject* ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                                                                                         { "RandomWriteTextures", {}, { ::i2c::type_of<Il2CppObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassRandomWriteData>>(*this, ___internal_method, ctx);
}
inline ::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::LastUsedResources(Il2CppObject* ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                                                                                         { "LastUsedResources", {}, { ::i2c::type_of<Il2CppObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(*this, ___internal_method, ctx);
}
inline bool UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::TrySetupAndValidateFragmentInfo(
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> h, Il2CppObject* ctx, ::by_ref<::StringW> errorMessage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                          { "TrySetupAndValidateFragmentInfo",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(), ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, h, ctx, errorMessage);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::TryAddFragment(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> h,
                                                                                                          Il2CppObject* ctx, ::by_ref<::StringW> errorMessage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                          { "TryAddFragment",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(), ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, h, ctx, errorMessage);
}
inline void
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::TryAddFragmentInput(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> h,
                                                                                                   Il2CppObject* ctx, ::by_ref<::StringW> errorMessage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                          { "TryAddFragmentInput",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(), ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, h, ctx, errorMessage);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::AddRandomAccessResource() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(), { "AddRandomAccessResource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::AddFirstUse(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> h,
                                                                                                       Il2CppObject* ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                                              { "AddFirstUse", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(), ::i2c::type_of<Il2CppObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, h, ctx);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::AddLastUse(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> h,
                                                                                                      Il2CppObject* ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                                              { "AddLastUse", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(), ::i2c::type_of<Il2CppObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, h, ctx);
}
inline bool UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::IsUsedAsFragment(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> h,
                                                                                                            Il2CppObject* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                                       { "IsUsedAsFragment", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(), ::i2c::type_of<Il2CppObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, h, ctx);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::DisconnectFromResources(
    Il2CppObject* ctx, ::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>* unusedVersionedResourceIdCullingStack, int32_t type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>(),
                                       { "DisconnectFromResources",
                                         {},
                                         { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>(),
                                           ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ctx, unusedVersionedResourceIdCullingStack, type);
}
// Ctor Parameters [CppParam { name: "passId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "type", ty:
// "::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hasFoveatedRasterization", ty: "bool", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "extendedFeatureFlags", ty: "::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "tag", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shadingRateFragmentSize", ty:
// "::UnityEngine::Rendering::ShadingRateFragmentSize", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "primitiveShadingRateCombiner", ty:
// "::UnityEngine::Rendering::ShadingRateCombiner", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fragmentShadingRateCombiner", ty:
// "::UnityEngine::Rendering::ShadingRateCombiner", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mergeState", ty:
// "::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassMergeState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nativePassIndex", ty: "int32_t",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nativeSubPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "firstInput",
// ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "numInputs", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "firstOutput", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "numOutputs", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam {
// name: "firstFragment", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "numFragments", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "firstFragmentInput", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "numFragmentInputs", ty: "int32_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "firstSampledOnlyRaster", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "numSampledOnlyRaster", ty: "int32_t",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "firstRandomAccessResource", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "numRandomAccessResources", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "firstCreate", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None
// }, CppParam { name: "numCreated", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "firstDestroy", ty: "int32_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "numDestroyed", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shadingRateImageIndex", ty: "int32_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "fragmentInfoWidth", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fragmentInfoHeight", ty:
// "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fragmentInfoVolumeDepth", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "fragmentInfoSamples", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "waitOnGraphicsFencePassId", ty: "int32_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "awaitingMyGraphicsFencePassId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "asyncCompute", ty: "bool", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "hasSideEffects", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "culled", ty: "bool", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "beginNativeSubpass", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fragmentInfoValid", ty: "bool",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fragmentInfoHasDepth", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "insertGraphicsFence", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hasShadingRateStates", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::PassData(
    int32_t passId, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType type, bool hasFoveatedRasterization,
    ::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags extendedFeatureFlags, int32_t tag, ::UnityEngine::Rendering::ShadingRateFragmentSize shadingRateFragmentSize,
    ::UnityEngine::Rendering::ShadingRateCombiner primitiveShadingRateCombiner, ::UnityEngine::Rendering::ShadingRateCombiner fragmentShadingRateCombiner,
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassMergeState mergeState, int32_t nativePassIndex, int32_t nativeSubPassIndex, int32_t firstInput, int32_t numInputs,
    int32_t firstOutput, int32_t numOutputs, int32_t firstFragment, int32_t numFragments, int32_t firstFragmentInput, int32_t numFragmentInputs, int32_t firstSampledOnlyRaster,
    int32_t numSampledOnlyRaster, int32_t firstRandomAccessResource, int32_t numRandomAccessResources, int32_t firstCreate, int32_t numCreated, int32_t firstDestroy, int32_t numDestroyed,
    int32_t shadingRateImageIndex, int32_t fragmentInfoWidth, int32_t fragmentInfoHeight, int32_t fragmentInfoVolumeDepth, int32_t fragmentInfoSamples, int32_t waitOnGraphicsFencePassId,
    int32_t awaitingMyGraphicsFencePassId, bool asyncCompute, bool hasSideEffects, bool culled, bool beginNativeSubpass, bool fragmentInfoValid, bool fragmentInfoHasDepth, bool insertGraphicsFence,
    bool hasShadingRateStates) noexcept {
  this->passId = passId;
  this->type = type;
  this->hasFoveatedRasterization = hasFoveatedRasterization;
  this->extendedFeatureFlags = extendedFeatureFlags;
  this->tag = tag;
  this->shadingRateFragmentSize = shadingRateFragmentSize;
  this->primitiveShadingRateCombiner = primitiveShadingRateCombiner;
  this->fragmentShadingRateCombiner = fragmentShadingRateCombiner;
  this->mergeState = mergeState;
  this->nativePassIndex = nativePassIndex;
  this->nativeSubPassIndex = nativeSubPassIndex;
  this->firstInput = firstInput;
  this->numInputs = numInputs;
  this->firstOutput = firstOutput;
  this->numOutputs = numOutputs;
  this->firstFragment = firstFragment;
  this->numFragments = numFragments;
  this->firstFragmentInput = firstFragmentInput;
  this->numFragmentInputs = numFragmentInputs;
  this->firstSampledOnlyRaster = firstSampledOnlyRaster;
  this->numSampledOnlyRaster = numSampledOnlyRaster;
  this->firstRandomAccessResource = firstRandomAccessResource;
  this->numRandomAccessResources = numRandomAccessResources;
  this->firstCreate = firstCreate;
  this->numCreated = numCreated;
  this->firstDestroy = firstDestroy;
  this->numDestroyed = numDestroyed;
  this->shadingRateImageIndex = shadingRateImageIndex;
  this->fragmentInfoWidth = fragmentInfoWidth;
  this->fragmentInfoHeight = fragmentInfoHeight;
  this->fragmentInfoVolumeDepth = fragmentInfoVolumeDepth;
  this->fragmentInfoSamples = fragmentInfoSamples;
  this->waitOnGraphicsFencePassId = waitOnGraphicsFencePassId;
  this->awaitingMyGraphicsFencePassId = awaitingMyGraphicsFencePassId;
  this->asyncCompute = asyncCompute;
  this->hasSideEffects = hasSideEffects;
  this->culled = culled;
  this->beginNativeSubpass = beginNativeSubpass;
  this->fragmentInfoValid = fragmentInfoValid;
  this->fragmentInfoHasDepth = fragmentInfoHasDepth;
  this->insertGraphicsFence = insertGraphicsFence;
  this->hasShadingRateStates = hasShadingRateStates;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData::PassData() {}
