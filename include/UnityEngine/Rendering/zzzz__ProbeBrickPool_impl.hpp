#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeBrickPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeSHBands_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeBrickPool_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeBrickPool_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeReferenceVolume_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeSHBands_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeTextureMemoryBudget_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc.flattenIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc::flattenIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x656ab04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>::get(), "flattenIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc::flattenIndex(int32_t sx, int32_t sy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>::get(), "flattenIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, sx, sy);
}
// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "z", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc::ProbeBrickPool_BrickChunkAlloc(int32_t x, int32_t y, int32_t z) noexcept {
  this->x = x;
  this->y = y;
  this->z = z;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc::ProbeBrickPool_BrickChunkAlloc() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool_DataLocation.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeBrickPool_DataLocation::*)()>(
    &::UnityEngine::Rendering::ProbeBrickPool_DataLocation::Cleanup)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x656bbf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool_DataLocation>::get(),
                                                                               "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ProbeBrickPool_DataLocation::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool_DataLocation>::get(),
                                                                             "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "TexL0_L1rx", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TexL1_G_ry", ty:
// "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TexL1_B_rz", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "TexL2_0", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TexL2_1", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "TexL2_2", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TexL2_3", ty: "::UnityW<::UnityEngine::Texture>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "TexProbeOcclusion", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TexValidity", ty:
// "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TexSkyOcclusion", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "TexSkyShadingDirectionIndices", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeBrickPool_DataLocation::ProbeBrickPool_DataLocation(::UnityW<::UnityEngine::Texture> TexL0_L1rx, ::UnityW<::UnityEngine::Texture> TexL1_G_ry,
                                                                                             ::UnityW<::UnityEngine::Texture> TexL1_B_rz, ::UnityW<::UnityEngine::Texture> TexL2_0,
                                                                                             ::UnityW<::UnityEngine::Texture> TexL2_1, ::UnityW<::UnityEngine::Texture> TexL2_2,
                                                                                             ::UnityW<::UnityEngine::Texture> TexL2_3, ::UnityW<::UnityEngine::Texture> TexProbeOcclusion,
                                                                                             ::UnityW<::UnityEngine::Texture> TexValidity, ::UnityW<::UnityEngine::Texture> TexSkyOcclusion,
                                                                                             ::UnityW<::UnityEngine::Texture> TexSkyShadingDirectionIndices, int32_t width, int32_t height,
                                                                                             int32_t depth) noexcept {
  this->TexL0_L1rx = TexL0_L1rx;
  this->TexL1_G_ry = TexL1_G_ry;
  this->TexL1_B_rz = TexL1_B_rz;
  this->TexL2_0 = TexL2_0;
  this->TexL2_1 = TexL2_1;
  this->TexL2_2 = TexL2_2;
  this->TexL2_3 = TexL2_3;
  this->TexProbeOcclusion = TexProbeOcclusion;
  this->TexValidity = TexValidity;
  this->TexSkyOcclusion = TexSkyOcclusion;
  this->TexSkyShadingDirectionIndices = TexSkyShadingDirectionIndices;
  this->width = width;
  this->height = height;
  this->depth = depth;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeBrickPool_DataLocation::ProbeBrickPool_DataLocation() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.DivRoundUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::ProbeBrickPool::DivRoundUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x656ae30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "DivRoundUp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.get_estimatedVMemCost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeBrickPool::*)()>(
    &::UnityEngine::Rendering::ProbeBrickPool::get_estimatedVMemCost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x656ae40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(),
                                                                               "get_estimatedVMemCost", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.set_estimatedVMemCost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeBrickPool::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeBrickPool::set_estimatedVMemCost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x656ae48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "set_estimatedVMemCost",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Rendering::ProbeBrickPool::Initialize)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x656ae50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "Initialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.GetValidityTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::Rendering::ProbeBrickPool::*)()>(
    &::UnityEngine::Rendering::ProbeBrickPool::GetValidityTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x656b2a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(),
                                                                               "GetValidityTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.GetSkyOcclusionTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::Rendering::ProbeBrickPool::*)()>(
    &::UnityEngine::Rendering::ProbeBrickPool::GetSkyOcclusionTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x656b2a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(),
                                                                               "GetSkyOcclusionTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.GetSkyShadingDirectionIndicesTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::Rendering::ProbeBrickPool::*)()>(
    &::UnityEngine::Rendering::ProbeBrickPool::GetSkyShadingDirectionIndicesTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x656b2b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "GetSkyShadingDirectionIndicesTexture",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.GetProbeOcclusionTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::Rendering::ProbeBrickPool::*)()>(
    &::UnityEngine::Rendering::ProbeBrickPool::GetProbeOcclusionTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x656b2b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(),
                                                                               "GetProbeOcclusionTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeBrickPool::*)(
    ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget, ::UnityEngine::Rendering::ProbeVolumeSHBands, bool, bool, bool, bool, bool)>(&::UnityEngine::Rendering::ProbeBrickPool::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x656b2c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeSHBands>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.AllocatePool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeBrickPool::*)(int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::ProbeBrickPool::AllocatePool)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x656b43c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "AllocatePool", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.GetRemainingChunkCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeBrickPool::*)()>(
    &::UnityEngine::Rendering::ProbeBrickPool::GetRemainingChunkCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x656bb58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(),
                                                                               "GetRemainingChunkCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.EnsureTextureValidity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeBrickPool::*)()>(
    &::UnityEngine::Rendering::ProbeBrickPool::EnsureTextureValidity)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x656bb60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(),
                                                                               "EnsureTextureValidity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.EnsureTextureValidity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeBrickPool::*)(bool, bool, bool, bool)>(
    &::UnityEngine::Rendering::ProbeBrickPool::EnsureTextureValidity)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x656bce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "EnsureTextureValidity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.GetChunkSizeInBrickCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::ProbeBrickPool::GetChunkSizeInBrickCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x656bd74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(),
                                                                               "GetChunkSizeInBrickCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.GetChunkSizeInProbeCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::ProbeBrickPool::GetChunkSizeInProbeCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x656bd7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(),
                                                                               "GetChunkSizeInProbeCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.GetPoolWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeBrickPool::*)()>(&::UnityEngine::Rendering::ProbeBrickPool::GetPoolWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x656bd84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "GetPoolWidth",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.GetPoolHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeBrickPool::*)()>(&::UnityEngine::Rendering::ProbeBrickPool::GetPoolHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x656bd8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(),
                                                                               "GetPoolHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.GetPoolDimensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3Int (::UnityEngine::Rendering::ProbeBrickPool::*)()>(
    &::UnityEngine::Rendering::ProbeBrickPool::GetPoolDimensions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x656bd94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(),
                                                                               "GetPoolDimensions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.GetRuntimeResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeBrickPool::*)(
    ::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources>)>(&::UnityEngine::Rendering::ProbeBrickPool::GetRuntimeResources)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x656bda4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "GetRuntimeResources", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeBrickPool::*)()>(&::UnityEngine::Rendering::ProbeBrickPool::Clear)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x656c08c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.GetChunkCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Rendering::ProbeBrickPool::GetChunkCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x656c0ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "GetChunkCount", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.Allocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeBrickPool::*)(
    int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*, bool)>(&::UnityEngine::Rendering::ProbeBrickPool::Allocate)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x656c104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "Allocate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.Deallocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeBrickPool::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*)>(&::UnityEngine::Rendering::ProbeBrickPool::Deallocate)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x656c388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "Deallocate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeBrickPool::*)(
    ::UnityEngine::Rendering::ProbeBrickPool_DataLocation, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*,
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*, int32_t, ::UnityEngine::Rendering::ProbeVolumeSHBands)>(
    &::UnityEngine::Rendering::ProbeBrickPool::Update)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x656c4dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeBrickPool_DataLocation>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeSHBands>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeBrickPool::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*,
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*, bool,
    ::UnityEngine::Texture*, ::UnityEngine::Rendering::ProbeVolumeSHBands, bool, ::UnityEngine::Texture*, bool, ::UnityEngine::Texture*, bool)>(&::UnityEngine::Rendering::ProbeBrickPool::Update)> {
  constexpr static std::size_t size = 0x970;
  constexpr static std::size_t addrs = 0x656c98c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 12>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeSHBands>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.UpdateValidity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeBrickPool::*)(
    ::UnityEngine::Rendering::ProbeBrickPool_DataLocation, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*,
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*, int32_t)>(&::UnityEngine::Rendering::ProbeBrickPool::UpdateValidity)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x656d330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "UpdateValidity", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 4>{
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeBrickPool_DataLocation>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.ProbeCountToDataLocSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3Int (*)(int32_t)>(&::UnityEngine::Rendering::ProbeBrickPool::ProbeCountToDataLocSize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x656d4d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "ProbeCountToDataLocSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.EstimateMemoryCost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Rendering::ProbeBrickPool::EstimateMemoryCost)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x656d53c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "EstimateMemoryCost", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.EstimateMemoryCostForBlending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(
    ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget, bool, ::UnityEngine::Rendering::ProbeVolumeSHBands)>(&::UnityEngine::Rendering::ProbeBrickPool::EstimateMemoryCostForBlending)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x656d564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "EstimateMemoryCostForBlending", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeSHBands>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.CreateDataTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture> (*)(
    int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::StringW, bool, ::ByRef<int32_t>)>(&::UnityEngine::Rendering::ProbeBrickPool::CreateDataTexture)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x656d6a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "CreateDataTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.CreateDataLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ProbeBrickPool_DataLocation (*)(
    int32_t, bool, ::UnityEngine::Rendering::ProbeVolumeSHBands, ::StringW, bool, bool, bool, bool, bool, bool, ::ByRef<int32_t>)>(&::UnityEngine::Rendering::ProbeBrickPool::CreateDataLocation)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x656b568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "CreateDataLocation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeSHBands>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.DerivePoolSizeFromBudget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget, ::ByRef<int32_t>, ::ByRef<int32_t>,
                                                                                           ::ByRef<int32_t>)>(&::UnityEngine::Rendering::ProbeBrickPool::DerivePoolSizeFromBudget)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x656b428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "DerivePoolSizeFromBudget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeBrickPool::*)()>(&::UnityEngine::Rendering::ProbeBrickPool::Cleanup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x656d8d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "Cleanup",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_get__estimatedVMemCost_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____estimatedVMemCost_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_get__estimatedVMemCost_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____estimatedVMemCost_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_set__estimatedVMemCost_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____estimatedVMemCost_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::ProbeBrickPool_DataLocation& UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_get_m_Pool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pool;
}
constexpr ::UnityEngine::Rendering::ProbeBrickPool_DataLocation const& UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_get_m_Pool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pool;
}
constexpr void UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_set_m_Pool(::UnityEngine::Rendering::ProbeBrickPool_DataLocation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Pool = value;
}
constexpr ::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc& UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_get_m_NextFreeChunk() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextFreeChunk;
}
constexpr ::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc const& UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_get_m_NextFreeChunk() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextFreeChunk;
}
constexpr void UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_set_m_NextFreeChunk(::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NextFreeChunk = value;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*& UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_get_m_FreeList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreeList;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* const& UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_get_m_FreeList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreeList;
}
constexpr void UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_set_m_FreeList(::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FreeList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_get_m_AvailableChunkCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AvailableChunkCount;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_get_m_AvailableChunkCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AvailableChunkCount;
}
constexpr void UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_set_m_AvailableChunkCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AvailableChunkCount = value;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeSHBands& UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_get_m_SHBands() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SHBands;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeSHBands const& UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_get_m_SHBands() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SHBands;
}
constexpr void UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_set_m_SHBands(::UnityEngine::Rendering::ProbeVolumeSHBands value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SHBands = value;
}
constexpr bool& UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_get_m_ContainsValidity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContainsValidity;
}
constexpr bool const& UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_get_m_ContainsValidity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContainsValidity;
}
constexpr void UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_set_m_ContainsValidity(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContainsValidity = value;
}
constexpr bool& UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_get_m_ContainsProbeOcclusion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContainsProbeOcclusion;
}
constexpr bool const& UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_get_m_ContainsProbeOcclusion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContainsProbeOcclusion;
}
constexpr void UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_set_m_ContainsProbeOcclusion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContainsProbeOcclusion = value;
}
constexpr bool& UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_get_m_ContainsRenderingLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContainsRenderingLayers;
}
constexpr bool const& UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_get_m_ContainsRenderingLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContainsRenderingLayers;
}
constexpr void UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_set_m_ContainsRenderingLayers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContainsRenderingLayers = value;
}
constexpr bool& UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_get_m_ContainsSkyOcclusion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContainsSkyOcclusion;
}
constexpr bool const& UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_get_m_ContainsSkyOcclusion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContainsSkyOcclusion;
}
constexpr void UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_set_m_ContainsSkyOcclusion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContainsSkyOcclusion = value;
}
constexpr bool& UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_get_m_ContainsSkyShadingDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContainsSkyShadingDirection;
}
constexpr bool const& UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_get_m_ContainsSkyShadingDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContainsSkyShadingDirection;
}
constexpr void UnityEngine::Rendering::ProbeBrickPool::__cordl_internal_set_m_ContainsSkyShadingDirection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContainsSkyShadingDirection = value;
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF__Out_L0_L1Rx(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Out_L0_L1Rx", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF__Out_L0_L1Rx() {
  return ::cordl_internals::getStaticField<int32_t, "_Out_L0_L1Rx", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF__Out_L1G_L1Ry(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Out_L1G_L1Ry", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF__Out_L1G_L1Ry() {
  return ::cordl_internals::getStaticField<int32_t, "_Out_L1G_L1Ry", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF__Out_L1B_L1Rz(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Out_L1B_L1Rz", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF__Out_L1B_L1Rz() {
  return ::cordl_internals::getStaticField<int32_t, "_Out_L1B_L1Rz", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF__Out_Shared(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Out_Shared", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF__Out_Shared() {
  return ::cordl_internals::getStaticField<int32_t, "_Out_Shared", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF__Out_ProbeOcclusion(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Out_ProbeOcclusion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF__Out_ProbeOcclusion() {
  return ::cordl_internals::getStaticField<int32_t, "_Out_ProbeOcclusion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF__Out_SkyOcclusionL0L1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Out_SkyOcclusionL0L1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF__Out_SkyOcclusionL0L1() {
  return ::cordl_internals::getStaticField<int32_t, "_Out_SkyOcclusionL0L1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF__Out_SkyShadingDirectionIndices(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Out_SkyShadingDirectionIndices", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF__Out_SkyShadingDirectionIndices() {
  return ::cordl_internals::getStaticField<int32_t, "_Out_SkyShadingDirectionIndices", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF__Out_L2_0(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Out_L2_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF__Out_L2_0() {
  return ::cordl_internals::getStaticField<int32_t, "_Out_L2_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF__Out_L2_1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Out_L2_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF__Out_L2_1() {
  return ::cordl_internals::getStaticField<int32_t, "_Out_L2_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF__Out_L2_2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Out_L2_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF__Out_L2_2() {
  return ::cordl_internals::getStaticField<int32_t, "_Out_L2_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF__Out_L2_3(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Out_L2_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF__Out_L2_3() {
  return ::cordl_internals::getStaticField<int32_t, "_Out_L2_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF__ProbeVolumeScratchBufferLayout(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ProbeVolumeScratchBufferLayout", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF__ProbeVolumeScratchBufferLayout() {
  return ::cordl_internals::getStaticField<int32_t, "_ProbeVolumeScratchBufferLayout", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF__ProbeVolumeScratchBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ProbeVolumeScratchBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF__ProbeVolumeScratchBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "_ProbeVolumeScratchBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF_s_DataUploadCS(::UnityW<::UnityEngine::ComputeShader> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::ComputeShader>, "s_DataUploadCS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>(
      std::forward<::UnityW<::UnityEngine::ComputeShader>>(value));
}
inline ::UnityW<::UnityEngine::ComputeShader> UnityEngine::Rendering::ProbeBrickPool::getStaticF_s_DataUploadCS() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::ComputeShader>, "s_DataUploadCS",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF_s_DataUploadKernel(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_DataUploadKernel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF_s_DataUploadKernel() {
  return ::cordl_internals::getStaticField<int32_t, "s_DataUploadKernel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF_s_DataUploadL2CS(::UnityW<::UnityEngine::ComputeShader> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::ComputeShader>, "s_DataUploadL2CS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>(
      std::forward<::UnityW<::UnityEngine::ComputeShader>>(value));
}
inline ::UnityW<::UnityEngine::ComputeShader> UnityEngine::Rendering::ProbeBrickPool::getStaticF_s_DataUploadL2CS() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::ComputeShader>, "s_DataUploadL2CS",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF_s_DataUploadL2Kernel(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_DataUploadL2Kernel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF_s_DataUploadL2Kernel() {
  return ::cordl_internals::getStaticField<int32_t, "s_DataUploadL2Kernel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF_s_DataUpload_Shared(::UnityEngine::Rendering::LocalKeyword value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::LocalKeyword, "s_DataUpload_Shared",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>(
      std::forward<::UnityEngine::Rendering::LocalKeyword>(value));
}
inline ::UnityEngine::Rendering::LocalKeyword UnityEngine::Rendering::ProbeBrickPool::getStaticF_s_DataUpload_Shared() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::LocalKeyword, "s_DataUpload_Shared",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF_s_DataUpload_ProbeOcclusion(::UnityEngine::Rendering::LocalKeyword value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::LocalKeyword, "s_DataUpload_ProbeOcclusion",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>(
      std::forward<::UnityEngine::Rendering::LocalKeyword>(value));
}
inline ::UnityEngine::Rendering::LocalKeyword UnityEngine::Rendering::ProbeBrickPool::getStaticF_s_DataUpload_ProbeOcclusion() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::LocalKeyword, "s_DataUpload_ProbeOcclusion",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF_s_DataUpload_SkyOcclusion(::UnityEngine::Rendering::LocalKeyword value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::LocalKeyword, "s_DataUpload_SkyOcclusion",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>(
      std::forward<::UnityEngine::Rendering::LocalKeyword>(value));
}
inline ::UnityEngine::Rendering::LocalKeyword UnityEngine::Rendering::ProbeBrickPool::getStaticF_s_DataUpload_SkyOcclusion() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::LocalKeyword, "s_DataUpload_SkyOcclusion",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF_s_DataUpload_SkyShadingDirection(::UnityEngine::Rendering::LocalKeyword value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::LocalKeyword, "s_DataUpload_SkyShadingDirection",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>(
      std::forward<::UnityEngine::Rendering::LocalKeyword>(value));
}
inline ::UnityEngine::Rendering::LocalKeyword UnityEngine::Rendering::ProbeBrickPool::getStaticF_s_DataUpload_SkyShadingDirection() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::LocalKeyword, "s_DataUpload_SkyShadingDirection",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get>();
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::DivRoundUp(int32_t x, int32_t y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "DivRoundUp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, x, y);
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::get_estimatedVMemCost() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(),
                                                                             "get_estimatedVMemCost", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeBrickPool::set_estimatedVMemCost(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "set_estimatedVMemCost",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::ProbeBrickPool::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Rendering::ProbeBrickPool::GetValidityTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(),
                                                                             "GetValidityTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Rendering::ProbeBrickPool::GetSkyOcclusionTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(),
                                                                             "GetSkyOcclusionTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Rendering::ProbeBrickPool::GetSkyShadingDirectionIndicesTexture() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "GetSkyShadingDirectionIndicesTexture",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Rendering::ProbeBrickPool::GetProbeOcclusionTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(),
                                                                             "GetProbeOcclusionTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeBrickPool::_ctor(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget, ::UnityEngine::Rendering::ProbeVolumeSHBands shBands,
                                                          bool allocateValidityData, bool allocateRenderingLayerData, bool allocateSkyOcclusion, bool allocateSkyShadingData,
                                                          bool allocateProbeOcclusionData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeSHBands>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, memoryBudget, shBands, allocateValidityData, allocateRenderingLayerData, allocateSkyOcclusion,
                                                          allocateSkyShadingData, allocateProbeOcclusionData);
}
inline void UnityEngine::Rendering::ProbeBrickPool::AllocatePool(int32_t width, int32_t height, int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "AllocatePool", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height, depth);
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::GetRemainingChunkCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(),
                                                                             "GetRemainingChunkCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeBrickPool::EnsureTextureValidity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(),
                                                                             "EnsureTextureValidity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeBrickPool::EnsureTextureValidity(bool renderingLayers, bool skyOcclusion, bool skyDirection, bool probeOcclusion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "EnsureTextureValidity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, renderingLayers, skyOcclusion, skyDirection, probeOcclusion);
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::GetChunkSizeInBrickCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(),
                                                                             "GetChunkSizeInBrickCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::GetChunkSizeInProbeCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(),
                                                                             "GetChunkSizeInProbeCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::GetPoolWidth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "GetPoolWidth",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::GetPoolHeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "GetPoolHeight",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3Int UnityEngine::Rendering::ProbeBrickPool::GetPoolDimensions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(),
                                                                             "GetPoolDimensions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeBrickPool::GetRuntimeResources(::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources> rr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "GetRuntimeResources", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rr);
}
inline void UnityEngine::Rendering::ProbeBrickPool::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::GetChunkCount(int32_t brickCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "GetChunkCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, brickCount);
}
inline bool UnityEngine::Rendering::ProbeBrickPool::Allocate(int32_t numberOfBrickChunks,
                                                             ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* outAllocations, bool ignoreErrorLog) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "Allocate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, numberOfBrickChunks, outAllocations, ignoreErrorLog);
}
inline void UnityEngine::Rendering::ProbeBrickPool::Deallocate(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* allocations) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "Deallocate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allocations);
}
inline void UnityEngine::Rendering::ProbeBrickPool::Update(::UnityEngine::Rendering::ProbeBrickPool_DataLocation source,
                                                           ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* srcLocations,
                                                           ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* dstLocations, int32_t destStartIndex,
                                                           ::UnityEngine::Rendering::ProbeVolumeSHBands bands) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeBrickPool_DataLocation>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeSHBands>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, srcLocations, dstLocations, destStartIndex, bands);
}
inline void UnityEngine::Rendering::ProbeBrickPool::Update(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* dataBuffer,
                                                           ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout layout,
                                                           ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* dstLocations, bool updateSharedData,
                                                           ::UnityEngine::Texture* validityTexture, ::UnityEngine::Rendering::ProbeVolumeSHBands bands, bool skyOcclusion,
                                                           ::UnityEngine::Texture* skyOcclusionTexture, bool skyShadingDirections, ::UnityEngine::Texture* skyShadingDirectionsTexture,
                                                           bool probeOcclusion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 12>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeSHBands>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, dataBuffer, layout, dstLocations, updateSharedData, validityTexture, bands, skyOcclusion, skyOcclusionTexture,
                                                          skyShadingDirections, skyShadingDirectionsTexture, probeOcclusion);
}
inline void UnityEngine::Rendering::ProbeBrickPool::UpdateValidity(::UnityEngine::Rendering::ProbeBrickPool_DataLocation source,
                                                                   ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* srcLocations,
                                                                   ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* dstLocations,
                                                                   int32_t destStartIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "UpdateValidity", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeBrickPool_DataLocation>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, srcLocations, dstLocations, destStartIndex);
}
inline ::UnityEngine::Vector3Int UnityEngine::Rendering::ProbeBrickPool::ProbeCountToDataLocSize(int32_t numProbes) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "ProbeCountToDataLocSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int, false>(nullptr, ___internal_method, numProbes);
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::EstimateMemoryCost(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "EstimateMemoryCost", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, width, height, depth, format);
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::EstimateMemoryCostForBlending(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget, bool compressed,
                                                                                     ::UnityEngine::Rendering::ProbeVolumeSHBands bands) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "EstimateMemoryCostForBlending", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeSHBands>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, memoryBudget, compressed, bands);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Rendering::ProbeBrickPool::CreateDataTexture(int32_t width, int32_t height, int32_t depth,
                                                                                                  ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::StringW name,
                                                                                                  bool allocateRendertexture, ::ByRef<int32_t> allocatedBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "CreateDataTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>, false>(nullptr, ___internal_method, width, height, depth, format, name, allocateRendertexture, allocatedBytes);
}
inline ::UnityEngine::Rendering::ProbeBrickPool_DataLocation
UnityEngine::Rendering::ProbeBrickPool::CreateDataLocation(int32_t numProbes, bool compressed, ::UnityEngine::Rendering::ProbeVolumeSHBands bands, ::StringW name, bool allocateRendertexture,
                                                           bool allocateValidityData, bool allocateRenderingLayers, bool allocateSkyOcclusionData, bool allocateSkyShadingDirectionData,
                                                           bool allocateProbeOcclusionData, ::ByRef<int32_t> allocatedBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "CreateDataLocation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeSHBands>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeBrickPool_DataLocation, false>(nullptr, ___internal_method, numProbes, compressed, bands, name, allocateRendertexture,
                                                                                                           allocateValidityData, allocateRenderingLayers, allocateSkyOcclusionData,
                                                                                                           allocateSkyShadingDirectionData, allocateProbeOcclusionData, allocatedBytes);
}
inline void UnityEngine::Rendering::ProbeBrickPool::DerivePoolSizeFromBudget(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget, ::ByRef<int32_t> width, ::ByRef<int32_t> height,
                                                                             ::ByRef<int32_t> depth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "DerivePoolSizeFromBudget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, memoryBudget, width, height, depth);
}
inline void UnityEngine::Rendering::ProbeBrickPool::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickPool*>::get(), "Cleanup",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeBrickPool* UnityEngine::Rendering::ProbeBrickPool::New_ctor(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget,
                                                                                                  ::UnityEngine::Rendering::ProbeVolumeSHBands shBands, bool allocateValidityData,
                                                                                                  bool allocateRenderingLayerData, bool allocateSkyOcclusion, bool allocateSkyShadingData,
                                                                                                  bool allocateProbeOcclusionData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeBrickPool*>(memoryBudget, shBands, allocateValidityData, allocateRenderingLayerData, allocateSkyOcclusion,
                                                                                             allocateSkyShadingData, allocateProbeOcclusionData));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeBrickPool::ProbeBrickPool() {}
