#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUPrefixSum.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUPrefixSum_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUPrefixSum_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs.DivUpGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs::DivUpGroup)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65a4950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs*>::get(), "DivUpGroup",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs.AlignUpGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs::AlignUpGroup)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65a4968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs*>::get(), "AlignUpGroup",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs.CalculateTotalBufferSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::ByRef<int32_t>, ::ByRef<int32_t>)>(
    &::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs::CalculateTotalBufferSize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x65a4980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs*>::get(), "CalculateTotalBufferSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::GPUPrefixSum_ShaderDefs::DivUpGroup(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs*>::get(), "DivUpGroup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::GPUPrefixSum_ShaderDefs::AlignUpGroup(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs*>::get(), "AlignUpGroup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::GPUPrefixSum_ShaderDefs::CalculateTotalBufferSize(int32_t maxElementCount, ::ByRef<int32_t> totalSize, ::ByRef<int32_t> levelCounts) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs*>::get(), "CalculateTotalBufferSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, maxElementCount, totalSize, levelCounts);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs::GPUPrefixSum_ShaderDefs() {}
// Ctor Parameters [CppParam { name: "count", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "offset", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "parentOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUPrefixSum_LevelOffsets::GPUPrefixSum_LevelOffsets(uint32_t count, uint32_t offset, uint32_t parentOffset) noexcept {
  this->count = count;
  this->offset = offset;
  this->parentOffset = parentOffset;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUPrefixSum_LevelOffsets::GPUPrefixSum_LevelOffsets() {}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources.get_output
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (
    ::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources::*)()>(&::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources::get_output)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x65a49d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources>::get(), "get_output",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources (*)(
    int32_t, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder, bool)>(
    &::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources::Create)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65a49e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources::*)(
    int32_t, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder, bool)>(
    &::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources::Initialize)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x65a4a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources::get_output() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources>::get(),
                                                                             "get_output", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources
UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources::Create(int32_t newMaxElementCount, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder builder, bool outputIsTemp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources, false>(nullptr, ___internal_method, newMaxElementCount, renderGraph, builder, outputIsTemp);
}
inline void UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources::Initialize(int32_t newMaxElementCount, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder builder, bool outputIsTemp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newMaxElementCount, renderGraph, builder, outputIsTemp);
}
// Ctor Parameters [CppParam { name: "alignedElementCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxBufferCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "maxLevelCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "prefixBuffer0", ty:
// "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "prefixBuffer1", ty:
// "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "totalLevelCountBuffer", ty:
// "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelOffsetBuffer", ty:
// "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "indirectDispatchArgsBuffer", ty:
// "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources::GPUPrefixSum_RenderGraphResources(
    int32_t alignedElementCount, int32_t maxBufferCount, int32_t maxLevelCount, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle prefixBuffer0,
    ::UnityEngine::Rendering::RenderGraphModule::BufferHandle prefixBuffer1, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle totalLevelCountBuffer,
    ::UnityEngine::Rendering::RenderGraphModule::BufferHandle levelOffsetBuffer, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle indirectDispatchArgsBuffer) noexcept {
  this->alignedElementCount = alignedElementCount;
  this->maxBufferCount = maxBufferCount;
  this->maxLevelCount = maxLevelCount;
  this->prefixBuffer0 = prefixBuffer0;
  this->prefixBuffer1 = prefixBuffer1;
  this->totalLevelCountBuffer = totalLevelCountBuffer;
  this->levelOffsetBuffer = levelOffsetBuffer;
  this->indirectDispatchArgsBuffer = indirectDispatchArgsBuffer;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources::GPUPrefixSum_RenderGraphResources() {}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum_SupportResources.get_output
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Rendering::GPUPrefixSum_SupportResources::*)()>(
    &::UnityEngine::Rendering::GPUPrefixSum_SupportResources::get_output)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a4d4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_SupportResources>::get(),
                                                                               "get_output", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum_SupportResources.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::GPUPrefixSum_SupportResources (*)(int32_t)>(
    &::UnityEngine::Rendering::GPUPrefixSum_SupportResources::Create)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65a4d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_SupportResources>::get(), "Create",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum_SupportResources.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::GPUPrefixSum_SupportResources (*)(
    ::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources)>(&::UnityEngine::Rendering::GPUPrefixSum_SupportResources::Load)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65a4fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_SupportResources>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum_SupportResources.Resize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUPrefixSum_SupportResources::*)(int32_t)>(
    &::UnityEngine::Rendering::GPUPrefixSum_SupportResources::Resize)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x65a4db0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_SupportResources>::get(), "Resize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum_SupportResources.LoadFromShaderGraph
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUPrefixSum_SupportResources::*)(
    ::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources)>(&::UnityEngine::Rendering::GPUPrefixSum_SupportResources::LoadFromShaderGraph)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x65a5048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_SupportResources>::get(), "LoadFromShaderGraph", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum_SupportResources.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUPrefixSum_SupportResources::*)()>(
    &::UnityEngine::Rendering::GPUPrefixSum_SupportResources::Dispose)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x65a512c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_SupportResources>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum_SupportResources._Dispose_g__TryFreeBuffer_15_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GraphicsBuffer*)>(
    &::UnityEngine::Rendering::GPUPrefixSum_SupportResources::_Dispose_g__TryFreeBuffer_15_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x65a51a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_SupportResources>::get(), "<Dispose>g__TryFreeBuffer|15_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::GPUPrefixSum_SupportResources::get_output() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_SupportResources>::get(),
                                                                             "get_output", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::GPUPrefixSum_SupportResources UnityEngine::Rendering::GPUPrefixSum_SupportResources::Create(int32_t maxElementCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_SupportResources>::get(), "Create",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUPrefixSum_SupportResources, false>(nullptr, ___internal_method, maxElementCount);
}
inline ::UnityEngine::Rendering::GPUPrefixSum_SupportResources
UnityEngine::Rendering::GPUPrefixSum_SupportResources::Load(::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources shaderGraphResources) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_SupportResources>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUPrefixSum_SupportResources, false>(nullptr, ___internal_method, shaderGraphResources);
}
inline void UnityEngine::Rendering::GPUPrefixSum_SupportResources::Resize(int32_t newMaxElementCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_SupportResources>::get(), "Resize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newMaxElementCount);
}
inline void UnityEngine::Rendering::GPUPrefixSum_SupportResources::LoadFromShaderGraph(::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources shaderGraphResources) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_SupportResources>::get(), "LoadFromShaderGraph", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shaderGraphResources);
}
inline void UnityEngine::Rendering::GPUPrefixSum_SupportResources::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_SupportResources>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUPrefixSum_SupportResources::_Dispose_g__TryFreeBuffer_15_0(::UnityEngine::GraphicsBuffer* resource) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_SupportResources>::get(), "<Dispose>g__TryFreeBuffer|15_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, resource);
}
// Ctor Parameters [CppParam { name: "ownsResources", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "alignedElementCount", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "maxBufferCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxLevelCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "prefixBuffer0", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "prefixBuffer1", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "totalLevelCountBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelOffsetBuffer", ty:
// "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "indirectDispatchArgsBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}")
// }]
constexpr ::UnityEngine::Rendering::GPUPrefixSum_SupportResources::GPUPrefixSum_SupportResources(bool ownsResources, int32_t alignedElementCount, int32_t maxBufferCount, int32_t maxLevelCount,
                                                                                                 ::UnityEngine::GraphicsBuffer* prefixBuffer0, ::UnityEngine::GraphicsBuffer* prefixBuffer1,
                                                                                                 ::UnityEngine::GraphicsBuffer* totalLevelCountBuffer, ::UnityEngine::GraphicsBuffer* levelOffsetBuffer,
                                                                                                 ::UnityEngine::GraphicsBuffer* indirectDispatchArgsBuffer) noexcept {
  this->ownsResources = ownsResources;
  this->alignedElementCount = alignedElementCount;
  this->maxBufferCount = maxBufferCount;
  this->maxLevelCount = maxLevelCount;
  this->prefixBuffer0 = prefixBuffer0;
  this->prefixBuffer1 = prefixBuffer1;
  this->totalLevelCountBuffer = totalLevelCountBuffer;
  this->levelOffsetBuffer = levelOffsetBuffer;
  this->indirectDispatchArgsBuffer = indirectDispatchArgsBuffer;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUPrefixSum_SupportResources::GPUPrefixSum_SupportResources() {}
// Ctor Parameters [CppParam { name: "exclusive", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "inputCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "input", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "supportResources", ty: "::UnityEngine::Rendering::GPUPrefixSum_SupportResources",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUPrefixSum_DirectArgs::GPUPrefixSum_DirectArgs(bool exclusive, int32_t inputCount, ::UnityEngine::GraphicsBuffer* input,
                                                                                     ::UnityEngine::Rendering::GPUPrefixSum_SupportResources supportResources) noexcept {
  this->exclusive = exclusive;
  this->inputCount = inputCount;
  this->input = input;
  this->supportResources = supportResources;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUPrefixSum_DirectArgs::GPUPrefixSum_DirectArgs() {}
// Ctor Parameters [CppParam { name: "exclusive", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "inputCountBufferByteOffset", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "inputCountBuffer", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "input", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "supportResources", ty: "::UnityEngine::Rendering::GPUPrefixSum_SupportResources", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUPrefixSum_IndirectDirectArgs::GPUPrefixSum_IndirectDirectArgs(bool exclusive, int32_t inputCountBufferByteOffset, ::UnityEngine::ComputeBuffer* inputCountBuffer,
                                                                                                     ::UnityEngine::GraphicsBuffer* input,
                                                                                                     ::UnityEngine::Rendering::GPUPrefixSum_SupportResources supportResources) noexcept {
  this->exclusive = exclusive;
  this->inputCountBufferByteOffset = inputCountBufferByteOffset;
  this->inputCountBuffer = inputCountBuffer;
  this->input = input;
  this->supportResources = supportResources;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUPrefixSum_IndirectDirectArgs::GPUPrefixSum_IndirectDirectArgs() {}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum_SystemResources.LoadKernels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUPrefixSum_SystemResources::*)()>(
    &::UnityEngine::Rendering::GPUPrefixSum_SystemResources::LoadKernels)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x65a4014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_SystemResources>::get(),
                                                                               "LoadKernels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUPrefixSum_SystemResources::LoadKernels() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_SystemResources>::get(),
                                                                             "LoadKernels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "computeAsset", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: Some("{}") }, CppParam { name: "kernelCalculateLevelDispatchArgsFromConst",
// ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "kernelCalculateLevelDispatchArgsFromBuffer", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "kernelPrefixSumOnGroup", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "kernelPrefixSumOnGroupExclusive", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "kernelPrefixSumNextInput", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "kernelPrefixSumResolveParent", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "kernelPrefixSumResolveParentExclusive", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUPrefixSum_SystemResources::GPUPrefixSum_SystemResources(::UnityW<::UnityEngine::ComputeShader> computeAsset, int32_t kernelCalculateLevelDispatchArgsFromConst,
                                                                                               int32_t kernelCalculateLevelDispatchArgsFromBuffer, int32_t kernelPrefixSumOnGroup,
                                                                                               int32_t kernelPrefixSumOnGroupExclusive, int32_t kernelPrefixSumNextInput,
                                                                                               int32_t kernelPrefixSumResolveParent, int32_t kernelPrefixSumResolveParentExclusive) noexcept {
  this->computeAsset = computeAsset;
  this->kernelCalculateLevelDispatchArgsFromConst = kernelCalculateLevelDispatchArgsFromConst;
  this->kernelCalculateLevelDispatchArgsFromBuffer = kernelCalculateLevelDispatchArgsFromBuffer;
  this->kernelPrefixSumOnGroup = kernelPrefixSumOnGroup;
  this->kernelPrefixSumOnGroupExclusive = kernelPrefixSumOnGroupExclusive;
  this->kernelPrefixSumNextInput = kernelPrefixSumNextInput;
  this->kernelPrefixSumResolveParent = kernelPrefixSumResolveParent;
  this->kernelPrefixSumResolveParentExclusive = kernelPrefixSumResolveParentExclusive;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUPrefixSum_SystemResources::GPUPrefixSum_SystemResources() {}
inline void UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::setStaticF__InputBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::getStaticF__InputBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "_InputBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::setStaticF__OutputBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_OutputBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::getStaticF__OutputBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "_OutputBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::setStaticF__InputCountBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputCountBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::getStaticF__InputCountBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "_InputCountBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::setStaticF__TotalLevelsBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_TotalLevelsBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::getStaticF__TotalLevelsBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "_TotalLevelsBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::setStaticF__OutputTotalLevelsBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_OutputTotalLevelsBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::getStaticF__OutputTotalLevelsBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "_OutputTotalLevelsBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::setStaticF__OutputDispatchLevelArgsBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_OutputDispatchLevelArgsBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::getStaticF__OutputDispatchLevelArgsBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "_OutputDispatchLevelArgsBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::setStaticF__LevelsOffsetsBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LevelsOffsetsBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::getStaticF__LevelsOffsetsBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "_LevelsOffsetsBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::setStaticF__OutputLevelsOffsetsBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_OutputLevelsOffsetsBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::getStaticF__OutputLevelsOffsetsBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "_OutputLevelsOffsetsBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::setStaticF__PrefixSumIntArgs(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_PrefixSumIntArgs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::getStaticF__PrefixSumIntArgs() {
  return ::cordl_internals::getStaticField<int32_t, "_PrefixSumIntArgs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::GPUPrefixSum_ShaderIDs() {}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUPrefixSum::*)(::UnityEngine::Rendering::GPUPrefixSum_SystemResources)>(
    &::UnityEngine::Rendering::GPUPrefixSum::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65a4000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUPrefixSum_SystemResources>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum.PackPrefixSumArgs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::GPUPrefixSum::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::GPUPrefixSum::PackPrefixSumArgs)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65a41ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum>::get(), "PackPrefixSumArgs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum.ExecuteCommonIndirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUPrefixSum::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, ::ByRef<::UnityEngine::Rendering::GPUPrefixSum_SupportResources>, bool)>(
    &::UnityEngine::Rendering::GPUPrefixSum::ExecuteCommonIndirect)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x65a4200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum>::get(), "ExecuteCommonIndirect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUPrefixSum_SupportResources>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum.DispatchDirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUPrefixSum::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::ByRef<::UnityEngine::Rendering::GPUPrefixSum_DirectArgs>)>(&::UnityEngine::Rendering::GPUPrefixSum::DispatchDirect)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x65a457c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum>::get(), "DispatchDirect", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUPrefixSum_DirectArgs>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum.DispatchIndirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUPrefixSum::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::ByRef<::UnityEngine::Rendering::GPUPrefixSum_IndirectDirectArgs>)>(&::UnityEngine::Rendering::GPUPrefixSum::DispatchIndirect)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x65a476c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum>::get(), "DispatchIndirect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUPrefixSum_IndirectDirectArgs>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUPrefixSum::_ctor(::UnityEngine::Rendering::GPUPrefixSum_SystemResources resources) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUPrefixSum_SystemResources>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resources);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::GPUPrefixSum::PackPrefixSumArgs(int32_t a, int32_t b, int32_t c, int32_t d) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum>::get(), "PackPrefixSumArgs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method, a, b, c, d);
}
inline void UnityEngine::Rendering::GPUPrefixSum::ExecuteCommonIndirect(::UnityEngine::Rendering::CommandBuffer* cmdBuffer, ::UnityEngine::GraphicsBuffer* inputBuffer,
                                                                        ::ByRef<::UnityEngine::Rendering::GPUPrefixSum_SupportResources> supportResources, bool isExclusive) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum>::get(), "ExecuteCommonIndirect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUPrefixSum_SupportResources>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmdBuffer, inputBuffer, supportResources, isExclusive);
}
inline void UnityEngine::Rendering::GPUPrefixSum::DispatchDirect(::UnityEngine::Rendering::CommandBuffer* cmdBuffer, ::ByRef<::UnityEngine::Rendering::GPUPrefixSum_DirectArgs> arguments) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum>::get(), "DispatchDirect", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUPrefixSum_DirectArgs>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmdBuffer, arguments);
}
inline void UnityEngine::Rendering::GPUPrefixSum::DispatchIndirect(::UnityEngine::Rendering::CommandBuffer* cmdBuffer, ::ByRef<::UnityEngine::Rendering::GPUPrefixSum_IndirectDirectArgs> arguments) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUPrefixSum>::get(), "DispatchIndirect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUPrefixSum_IndirectDirectArgs>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmdBuffer, arguments);
}
// Ctor Parameters [CppParam { name: "resources", ty: "::UnityEngine::Rendering::GPUPrefixSum_SystemResources", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUPrefixSum::GPUPrefixSum(::UnityEngine::Rendering::GPUPrefixSum_SystemResources resources) noexcept {
  this->resources = resources;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUPrefixSum::GPUPrefixSum() {}
