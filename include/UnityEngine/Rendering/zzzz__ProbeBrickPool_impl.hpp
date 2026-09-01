#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ProbeBrickPool.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc::flattenIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67897f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>(),
                                                                                           { "flattenIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc::flattenIndex(int32_t sx, int32_t sy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>(), { "flattenIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, sx, sy);
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickPool_DataLocation::*)()>(&::UnityEngine::Rendering::ProbeBrickPool_DataLocation::Cleanup)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x678a8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool_DataLocation>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ProbeBrickPool_DataLocation::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool_DataLocation>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::ProbeBrickPool::DivRoundUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6789b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "DivRoundUp", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.get_estimatedVMemCost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeBrickPool::*)()>(&::UnityEngine::Rendering::ProbeBrickPool::get_estimatedVMemCost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6789b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "get_estimatedVMemCost", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.set_estimatedVMemCost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickPool::*)(int32_t)>(&::UnityEngine::Rendering::ProbeBrickPool::set_estimatedVMemCost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6789b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "set_estimatedVMemCost", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Rendering::ProbeBrickPool::Initialize)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x6789b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.GetValidityTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::Rendering::ProbeBrickPool::*)()>(
    &::UnityEngine::Rendering::ProbeBrickPool::GetValidityTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6789f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "GetValidityTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.GetSkyOcclusionTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::Rendering::ProbeBrickPool::*)()>(
    &::UnityEngine::Rendering::ProbeBrickPool::GetSkyOcclusionTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6789f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "GetSkyOcclusionTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.GetSkyShadingDirectionIndicesTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::Rendering::ProbeBrickPool::*)()>(
    &::UnityEngine::Rendering::ProbeBrickPool::GetSkyShadingDirectionIndicesTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6789fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "GetSkyShadingDirectionIndicesTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.GetProbeOcclusionTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::Rendering::ProbeBrickPool::*)()>(
    &::UnityEngine::Rendering::ProbeBrickPool::GetProbeOcclusionTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6789fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "GetProbeOcclusionTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickPool::*)(
    ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget, ::UnityEngine::Rendering::ProbeVolumeSHBands, bool, bool, bool, bool, bool)>(&::UnityEngine::Rendering::ProbeBrickPool::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6789fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>(),
                                                    ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.AllocatePool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickPool::*)(int32_t, int32_t, int32_t)>(&::UnityEngine::Rendering::ProbeBrickPool::AllocatePool)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x678a130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(),
                                                             { "AllocatePool", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.GetRemainingChunkCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeBrickPool::*)()>(&::UnityEngine::Rendering::ProbeBrickPool::GetRemainingChunkCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678a84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "GetRemainingChunkCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.EnsureTextureValidity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickPool::*)()>(&::UnityEngine::Rendering::ProbeBrickPool::EnsureTextureValidity)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x678a854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "EnsureTextureValidity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.EnsureTextureValidity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeBrickPool::*)(bool, bool, bool, bool)>(&::UnityEngine::Rendering::ProbeBrickPool::EnsureTextureValidity)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x678a9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(),
                                                             { "EnsureTextureValidity", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.GetChunkSizeInBrickCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::ProbeBrickPool::GetChunkSizeInBrickCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678aa68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "GetChunkSizeInBrickCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.GetChunkSizeInProbeCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::ProbeBrickPool::GetChunkSizeInProbeCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678aa70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "GetChunkSizeInProbeCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.GetPoolWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeBrickPool::*)()>(&::UnityEngine::Rendering::ProbeBrickPool::GetPoolWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678aa78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "GetPoolWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.GetPoolHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeBrickPool::*)()>(&::UnityEngine::Rendering::ProbeBrickPool::GetPoolHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678aa80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "GetPoolHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.GetPoolDimensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3Int (::UnityEngine::Rendering::ProbeBrickPool::*)()>(&::UnityEngine::Rendering::ProbeBrickPool::GetPoolDimensions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x678aa88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "GetPoolDimensions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.GetRuntimeResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickPool::*)(::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources>)>(
    &::UnityEngine::Rendering::ProbeBrickPool::GetRuntimeResources)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x678aa98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(),
                                                             { "GetRuntimeResources", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickPool::*)()>(&::UnityEngine::Rendering::ProbeBrickPool::Clear)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x678ad80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.GetChunkCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Rendering::ProbeBrickPool::GetChunkCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x678ade0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "GetChunkCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.Allocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeBrickPool::*)(
    int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*, bool)>(&::UnityEngine::Rendering::ProbeBrickPool::Allocate)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x678adf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(),
                                                { "Allocate",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(),
                                                    ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.Deallocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickPool::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*)>(&::UnityEngine::Rendering::ProbeBrickPool::Deallocate)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x678b07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(),
                                                { "Deallocate", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickPool::*)(
    ::UnityEngine::Rendering::ProbeBrickPool_DataLocation, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*,
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*, int32_t, ::UnityEngine::Rendering::ProbeVolumeSHBands)>(
    &::UnityEngine::Rendering::ProbeBrickPool::Update)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x678b1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(),
                                                             { "Update",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::ProbeBrickPool_DataLocation>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickPool::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*,
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*, bool,
    ::UnityEngine::Texture*, ::UnityEngine::Rendering::ProbeVolumeSHBands, bool, ::UnityEngine::Texture*, bool, ::UnityEngine::Texture*, bool)>(&::UnityEngine::Rendering::ProbeBrickPool::Update)> {
  constexpr static std::size_t size = 0x970;
  constexpr static std::size_t addrs = 0x678b680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(),
                                         { "Update",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>(),
                                             ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(), ::i2c::type_of<bool>(),
                                             ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>(), ::i2c::type_of<bool>(),
                                             ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.UpdateValidity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickPool::*)(
    ::UnityEngine::Rendering::ProbeBrickPool_DataLocation, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*,
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*, int32_t)>(&::UnityEngine::Rendering::ProbeBrickPool::UpdateValidity)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x678c024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(),
                                         { "UpdateValidity",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::ProbeBrickPool_DataLocation>(),
                                             ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(),
                                             ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.ProbeCountToDataLocSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3Int (*)(int32_t)>(&::UnityEngine::Rendering::ProbeBrickPool::ProbeCountToDataLocSize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x678c1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "ProbeCountToDataLocSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.EstimateMemoryCost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Rendering::ProbeBrickPool::EstimateMemoryCost)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x678c230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "EstimateMemoryCost",
                                                                                                                {},
                                                                                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                                  ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.EstimateMemoryCostForBlending
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget, bool, ::UnityEngine::Rendering::ProbeVolumeSHBands)>(
    &::UnityEngine::Rendering::ProbeBrickPool::EstimateMemoryCostForBlending)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x678c258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(),
                                                                                           { "EstimateMemoryCostForBlending",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget>(), ::i2c::type_of<bool>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.CreateDataTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::StringW, bool,
                                                                                            ::by_ref<int32_t>)>(&::UnityEngine::Rendering::ProbeBrickPool::CreateDataTexture)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x678c398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(),
                                         { "CreateDataTexture",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.CreateDataLocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ProbeBrickPool_DataLocation (*)(
    int32_t, bool, ::UnityEngine::Rendering::ProbeVolumeSHBands, ::StringW, bool, bool, bool, bool, bool, bool, ::by_ref<int32_t>)>(&::UnityEngine::Rendering::ProbeBrickPool::CreateDataLocation)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x678a25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(),
                            { "CreateDataLocation",
                              {},
                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.DerivePoolSizeFromBudget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::UnityEngine::Rendering::ProbeBrickPool::DerivePoolSizeFromBudget)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x678a11c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(),
                                                             { "DerivePoolSizeFromBudget",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                 ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickPool.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickPool::*)()>(&::UnityEngine::Rendering::ProbeBrickPool::Cleanup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678c5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "Cleanup", {}, {} })));
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
  this->___m_FreeList = value;
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
  ::cordl_internals::setStaticField<int32_t, "_Out_L0_L1Rx", ::UnityEngine::Rendering::ProbeBrickPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF__Out_L0_L1Rx() {
  return ::cordl_internals::getStaticField<int32_t, "_Out_L0_L1Rx", ::UnityEngine::Rendering::ProbeBrickPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF__Out_L1G_L1Ry(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Out_L1G_L1Ry", ::UnityEngine::Rendering::ProbeBrickPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF__Out_L1G_L1Ry() {
  return ::cordl_internals::getStaticField<int32_t, "_Out_L1G_L1Ry", ::UnityEngine::Rendering::ProbeBrickPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF__Out_L1B_L1Rz(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Out_L1B_L1Rz", ::UnityEngine::Rendering::ProbeBrickPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF__Out_L1B_L1Rz() {
  return ::cordl_internals::getStaticField<int32_t, "_Out_L1B_L1Rz", ::UnityEngine::Rendering::ProbeBrickPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF__Out_Shared(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Out_Shared", ::UnityEngine::Rendering::ProbeBrickPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF__Out_Shared() {
  return ::cordl_internals::getStaticField<int32_t, "_Out_Shared", ::UnityEngine::Rendering::ProbeBrickPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF__Out_ProbeOcclusion(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Out_ProbeOcclusion", ::UnityEngine::Rendering::ProbeBrickPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF__Out_ProbeOcclusion() {
  return ::cordl_internals::getStaticField<int32_t, "_Out_ProbeOcclusion", ::UnityEngine::Rendering::ProbeBrickPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF__Out_SkyOcclusionL0L1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Out_SkyOcclusionL0L1", ::UnityEngine::Rendering::ProbeBrickPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF__Out_SkyOcclusionL0L1() {
  return ::cordl_internals::getStaticField<int32_t, "_Out_SkyOcclusionL0L1", ::UnityEngine::Rendering::ProbeBrickPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF__Out_SkyShadingDirectionIndices(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Out_SkyShadingDirectionIndices", ::UnityEngine::Rendering::ProbeBrickPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF__Out_SkyShadingDirectionIndices() {
  return ::cordl_internals::getStaticField<int32_t, "_Out_SkyShadingDirectionIndices", ::UnityEngine::Rendering::ProbeBrickPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF__Out_L2_0(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Out_L2_0", ::UnityEngine::Rendering::ProbeBrickPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF__Out_L2_0() {
  return ::cordl_internals::getStaticField<int32_t, "_Out_L2_0", ::UnityEngine::Rendering::ProbeBrickPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF__Out_L2_1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Out_L2_1", ::UnityEngine::Rendering::ProbeBrickPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF__Out_L2_1() {
  return ::cordl_internals::getStaticField<int32_t, "_Out_L2_1", ::UnityEngine::Rendering::ProbeBrickPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF__Out_L2_2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Out_L2_2", ::UnityEngine::Rendering::ProbeBrickPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF__Out_L2_2() {
  return ::cordl_internals::getStaticField<int32_t, "_Out_L2_2", ::UnityEngine::Rendering::ProbeBrickPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF__Out_L2_3(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Out_L2_3", ::UnityEngine::Rendering::ProbeBrickPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF__Out_L2_3() {
  return ::cordl_internals::getStaticField<int32_t, "_Out_L2_3", ::UnityEngine::Rendering::ProbeBrickPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF__ProbeVolumeScratchBufferLayout(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ProbeVolumeScratchBufferLayout", ::UnityEngine::Rendering::ProbeBrickPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF__ProbeVolumeScratchBufferLayout() {
  return ::cordl_internals::getStaticField<int32_t, "_ProbeVolumeScratchBufferLayout", ::UnityEngine::Rendering::ProbeBrickPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF__ProbeVolumeScratchBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ProbeVolumeScratchBuffer", ::UnityEngine::Rendering::ProbeBrickPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF__ProbeVolumeScratchBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "_ProbeVolumeScratchBuffer", ::UnityEngine::Rendering::ProbeBrickPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF_s_DataUploadCS(::UnityW<::UnityEngine::ComputeShader> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::ComputeShader>, "s_DataUploadCS", ::UnityEngine::Rendering::ProbeBrickPool*>(std::forward<::UnityW<::UnityEngine::ComputeShader>>(value));
}
inline ::UnityW<::UnityEngine::ComputeShader> UnityEngine::Rendering::ProbeBrickPool::getStaticF_s_DataUploadCS() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::ComputeShader>, "s_DataUploadCS", ::UnityEngine::Rendering::ProbeBrickPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF_s_DataUploadKernel(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_DataUploadKernel", ::UnityEngine::Rendering::ProbeBrickPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF_s_DataUploadKernel() {
  return ::cordl_internals::getStaticField<int32_t, "s_DataUploadKernel", ::UnityEngine::Rendering::ProbeBrickPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF_s_DataUploadL2CS(::UnityW<::UnityEngine::ComputeShader> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::ComputeShader>, "s_DataUploadL2CS", ::UnityEngine::Rendering::ProbeBrickPool*>(std::forward<::UnityW<::UnityEngine::ComputeShader>>(value));
}
inline ::UnityW<::UnityEngine::ComputeShader> UnityEngine::Rendering::ProbeBrickPool::getStaticF_s_DataUploadL2CS() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::ComputeShader>, "s_DataUploadL2CS", ::UnityEngine::Rendering::ProbeBrickPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF_s_DataUploadL2Kernel(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_DataUploadL2Kernel", ::UnityEngine::Rendering::ProbeBrickPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::getStaticF_s_DataUploadL2Kernel() {
  return ::cordl_internals::getStaticField<int32_t, "s_DataUploadL2Kernel", ::UnityEngine::Rendering::ProbeBrickPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF_s_DataUpload_Shared(::UnityEngine::Rendering::LocalKeyword value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::LocalKeyword, "s_DataUpload_Shared", ::UnityEngine::Rendering::ProbeBrickPool*>(
      std::forward<::UnityEngine::Rendering::LocalKeyword>(value));
}
inline ::UnityEngine::Rendering::LocalKeyword UnityEngine::Rendering::ProbeBrickPool::getStaticF_s_DataUpload_Shared() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::LocalKeyword, "s_DataUpload_Shared", ::UnityEngine::Rendering::ProbeBrickPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF_s_DataUpload_ProbeOcclusion(::UnityEngine::Rendering::LocalKeyword value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::LocalKeyword, "s_DataUpload_ProbeOcclusion", ::UnityEngine::Rendering::ProbeBrickPool*>(
      std::forward<::UnityEngine::Rendering::LocalKeyword>(value));
}
inline ::UnityEngine::Rendering::LocalKeyword UnityEngine::Rendering::ProbeBrickPool::getStaticF_s_DataUpload_ProbeOcclusion() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::LocalKeyword, "s_DataUpload_ProbeOcclusion", ::UnityEngine::Rendering::ProbeBrickPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF_s_DataUpload_SkyOcclusion(::UnityEngine::Rendering::LocalKeyword value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::LocalKeyword, "s_DataUpload_SkyOcclusion", ::UnityEngine::Rendering::ProbeBrickPool*>(
      std::forward<::UnityEngine::Rendering::LocalKeyword>(value));
}
inline ::UnityEngine::Rendering::LocalKeyword UnityEngine::Rendering::ProbeBrickPool::getStaticF_s_DataUpload_SkyOcclusion() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::LocalKeyword, "s_DataUpload_SkyOcclusion", ::UnityEngine::Rendering::ProbeBrickPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickPool::setStaticF_s_DataUpload_SkyShadingDirection(::UnityEngine::Rendering::LocalKeyword value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::LocalKeyword, "s_DataUpload_SkyShadingDirection", ::UnityEngine::Rendering::ProbeBrickPool*>(
      std::forward<::UnityEngine::Rendering::LocalKeyword>(value));
}
inline ::UnityEngine::Rendering::LocalKeyword UnityEngine::Rendering::ProbeBrickPool::getStaticF_s_DataUpload_SkyShadingDirection() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::LocalKeyword, "s_DataUpload_SkyShadingDirection", ::UnityEngine::Rendering::ProbeBrickPool*>();
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::DivRoundUp(int32_t x, int32_t y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "DivRoundUp", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, y);
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::get_estimatedVMemCost() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "get_estimatedVMemCost", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeBrickPool::set_estimatedVMemCost(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "set_estimatedVMemCost", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::ProbeBrickPool::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Rendering::ProbeBrickPool::GetValidityTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "GetValidityTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Rendering::ProbeBrickPool::GetSkyOcclusionTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "GetSkyOcclusionTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Rendering::ProbeBrickPool::GetSkyShadingDirectionIndicesTexture() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "GetSkyShadingDirectionIndicesTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Rendering::ProbeBrickPool::GetProbeOcclusionTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "GetProbeOcclusionTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeBrickPool::_ctor(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget, ::UnityEngine::Rendering::ProbeVolumeSHBands shBands,
                                                          bool allocateValidityData, bool allocateRenderingLayerData, bool allocateSkyOcclusion, bool allocateSkyShadingData,
                                                          bool allocateProbeOcclusionData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>(),
                                                  ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memoryBudget, shBands, allocateValidityData, allocateRenderingLayerData, allocateSkyOcclusion, allocateSkyShadingData,
                                                   allocateProbeOcclusionData);
}
inline void UnityEngine::Rendering::ProbeBrickPool::AllocatePool(int32_t width, int32_t height, int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(),
                                                                                         { "AllocatePool", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth);
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::GetRemainingChunkCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "GetRemainingChunkCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeBrickPool::EnsureTextureValidity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "EnsureTextureValidity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeBrickPool::EnsureTextureValidity(bool renderingLayers, bool skyOcclusion, bool skyDirection, bool probeOcclusion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(),
                                                           { "EnsureTextureValidity", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, renderingLayers, skyOcclusion, skyDirection, probeOcclusion);
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::GetChunkSizeInBrickCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "GetChunkSizeInBrickCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::GetChunkSizeInProbeCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "GetChunkSizeInProbeCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::GetPoolWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "GetPoolWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::GetPoolHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "GetPoolHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3Int UnityEngine::Rendering::ProbeBrickPool::GetPoolDimensions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "GetPoolDimensions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeBrickPool::GetRuntimeResources(::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources> rr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(),
                                                           { "GetRuntimeResources", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rr);
}
inline void UnityEngine::Rendering::ProbeBrickPool::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::GetChunkCount(int32_t brickCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "GetChunkCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, brickCount);
}
inline bool UnityEngine::Rendering::ProbeBrickPool::Allocate(int32_t numberOfBrickChunks,
                                                             ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* outAllocations, bool ignoreErrorLog) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(),
                                              { "Allocate",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(),
                                                  ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, numberOfBrickChunks, outAllocations, ignoreErrorLog);
}
inline void UnityEngine::Rendering::ProbeBrickPool::Deallocate(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* allocations) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(),
                                              { "Deallocate", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allocations);
}
inline void UnityEngine::Rendering::ProbeBrickPool::Update(::UnityEngine::Rendering::ProbeBrickPool_DataLocation source,
                                                           ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* srcLocations,
                                                           ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* dstLocations, int32_t destStartIndex,
                                                           ::UnityEngine::Rendering::ProbeVolumeSHBands bands) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(),
                                                           { "Update",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::ProbeBrickPool_DataLocation>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, srcLocations, dstLocations, destStartIndex, bands);
}
inline void UnityEngine::Rendering::ProbeBrickPool::Update(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* dataBuffer,
                                                           ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout layout,
                                                           ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* dstLocations, bool updateSharedData,
                                                           ::UnityEngine::Texture* validityTexture, ::UnityEngine::Rendering::ProbeVolumeSHBands bands, bool skyOcclusion,
                                                           ::UnityEngine::Texture* skyOcclusionTexture, bool skyShadingDirections, ::UnityEngine::Texture* skyShadingDirectionsTexture,
                                                           bool probeOcclusion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(),
                                       { "Update",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>(),
                                           ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, dataBuffer, layout, dstLocations, updateSharedData, validityTexture, bands, skyOcclusion, skyOcclusionTexture,
                                                   skyShadingDirections, skyShadingDirectionsTexture, probeOcclusion);
}
inline void UnityEngine::Rendering::ProbeBrickPool::UpdateValidity(::UnityEngine::Rendering::ProbeBrickPool_DataLocation source,
                                                                   ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* srcLocations,
                                                                   ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* dstLocations,
                                                                   int32_t destStartIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(),
                                              { "UpdateValidity",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::ProbeBrickPool_DataLocation>(),
                                                  ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, srcLocations, dstLocations, destStartIndex);
}
inline ::UnityEngine::Vector3Int UnityEngine::Rendering::ProbeBrickPool::ProbeCountToDataLocSize(int32_t numProbes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "ProbeCountToDataLocSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(nullptr, ___internal_method, numProbes);
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::EstimateMemoryCost(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "EstimateMemoryCost",
                                                                                                              {},
                                                                                                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                                ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, width, height, depth, format);
}
inline int32_t UnityEngine::Rendering::ProbeBrickPool::EstimateMemoryCostForBlending(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget, bool compressed,
                                                                                     ::UnityEngine::Rendering::ProbeVolumeSHBands bands) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(),
                          { "EstimateMemoryCostForBlending",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, memoryBudget, compressed, bands);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Rendering::ProbeBrickPool::CreateDataTexture(int32_t width, int32_t height, int32_t depth,
                                                                                                  ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::StringW name,
                                                                                                  bool allocateRendertexture, ::by_ref<int32_t> allocatedBytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(),
                                       { "CreateDataTexture",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                           ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(nullptr, ___internal_method, width, height, depth, format, name, allocateRendertexture, allocatedBytes);
}
inline ::UnityEngine::Rendering::ProbeBrickPool_DataLocation
UnityEngine::Rendering::ProbeBrickPool::CreateDataLocation(int32_t numProbes, bool compressed, ::UnityEngine::Rendering::ProbeVolumeSHBands bands, ::StringW name, bool allocateRendertexture,
                                                           bool allocateValidityData, bool allocateRenderingLayers, bool allocateSkyOcclusionData, bool allocateSkyShadingDirectionData,
                                                           bool allocateProbeOcclusionData, ::by_ref<int32_t> allocatedBytes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(),
                          { "CreateDataLocation",
                            {},
                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                              ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeBrickPool_DataLocation>(nullptr, ___internal_method, numProbes, compressed, bands, name, allocateRendertexture,
                                                                                                    allocateValidityData, allocateRenderingLayers, allocateSkyOcclusionData,
                                                                                                    allocateSkyShadingDirectionData, allocateProbeOcclusionData, allocatedBytes);
}
inline void UnityEngine::Rendering::ProbeBrickPool::DerivePoolSizeFromBudget(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget, ::by_ref<int32_t> width, ::by_ref<int32_t> height,
                                                                             ::by_ref<int32_t> depth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(),
                                                           { "DerivePoolSizeFromBudget",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, memoryBudget, width, height, depth);
}
inline void UnityEngine::Rendering::ProbeBrickPool::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickPool*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeBrickPool* UnityEngine::Rendering::ProbeBrickPool::New_ctor(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget,
                                                                                                  ::UnityEngine::Rendering::ProbeVolumeSHBands shBands, bool allocateValidityData,
                                                                                                  bool allocateRenderingLayerData, bool allocateSkyOcclusion, bool allocateSkyShadingData,
                                                                                                  bool allocateProbeOcclusionData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeBrickPool*>(memoryBudget, shBands, allocateValidityData, allocateRenderingLayerData, allocateSkyOcclusion,
                                                                                                     allocateSkyShadingData, allocateProbeOcclusionData));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeBrickPool::ProbeBrickPool() {}
