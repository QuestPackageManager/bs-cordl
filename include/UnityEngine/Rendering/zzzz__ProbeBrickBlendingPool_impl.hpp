#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ProbeBrickBlendingPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeSHBands_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeTextureMemoryBudget_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeBrickBlendingPool_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeBrickPool_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeReferenceVolume_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeBlendingTextureMemoryBudget_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeSHBands_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickBlendingPool.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Rendering::ProbeBrickBlendingPool::Initialize)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x678c8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickBlendingPool.get_isAllocated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeBrickBlendingPool::*)()>(&::UnityEngine::Rendering::ProbeBrickBlendingPool::get_isAllocated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x678ca3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(), { "get_isAllocated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickBlendingPool.get_estimatedVMemCost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeBrickBlendingPool::*)()>(&::UnityEngine::Rendering::ProbeBrickBlendingPool::get_estimatedVMemCost)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x678ca4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(), { "get_estimatedVMemCost", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickBlendingPool.GetPoolWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeBrickBlendingPool::*)()>(&::UnityEngine::Rendering::ProbeBrickBlendingPool::GetPoolWidth)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x678cb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(), { "GetPoolWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickBlendingPool.GetPoolHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeBrickBlendingPool::*)()>(&::UnityEngine::Rendering::ProbeBrickBlendingPool::GetPoolHeight)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x678cb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(), { "GetPoolHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickBlendingPool.GetPoolDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeBrickBlendingPool::*)()>(&::UnityEngine::Rendering::ProbeBrickBlendingPool::GetPoolDepth)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x678cb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(), { "GetPoolDepth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickBlendingPool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickBlendingPool::*)(
    ::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget, ::UnityEngine::Rendering::ProbeVolumeSHBands, bool)>(&::UnityEngine::Rendering::ProbeBrickBlendingPool::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x678cbac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickBlendingPool.AllocateResourcesIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickBlendingPool::*)()>(&::UnityEngine::Rendering::ProbeBrickBlendingPool::AllocateResourcesIfNeeded)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x678cbb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(), { "AllocateResourcesIfNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickBlendingPool.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickBlendingPool::*)(
    ::UnityEngine::Rendering::ProbeBrickPool_DataLocation, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*,
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*, int32_t, ::UnityEngine::Rendering::ProbeVolumeSHBands, int32_t)>(
    &::UnityEngine::Rendering::ProbeBrickBlendingPool::Update)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x678cd00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(),
                                                             { "Update",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::ProbeBrickPool_DataLocation>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickBlendingPool.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickBlendingPool::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*,
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*,
    ::UnityEngine::Rendering::ProbeVolumeSHBands, int32_t, ::UnityEngine::Texture*, bool, ::UnityEngine::Texture*, bool, ::UnityEngine::Texture*, bool)>(
    &::UnityEngine::Rendering::ProbeBrickBlendingPool::Update)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x678cd78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(),
                            { "Update",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>(),
                                ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<bool>(),
                                ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickBlendingPool.PerformBlending
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickBlendingPool::*)(
    ::UnityEngine::Rendering::CommandBuffer*, float_t, ::UnityEngine::Rendering::ProbeBrickPool*)>(&::UnityEngine::Rendering::ProbeBrickBlendingPool::PerformBlending)> {
  constexpr static std::size_t size = 0xcc0;
  constexpr static std::size_t addrs = 0x678ce54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(),
            { "PerformBlending", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeBrickPool*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickBlendingPool.BlendChunks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickBlendingPool::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*, ::UnityEngine::Rendering::ProbeBrickPool*)>(&::UnityEngine::Rendering::ProbeBrickBlendingPool::BlendChunks)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x678db14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(),
                            { "BlendChunks", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeBrickPool*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickBlendingPool.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickBlendingPool::*)()>(&::UnityEngine::Rendering::ProbeBrickBlendingPool::Clear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x678dc40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickBlendingPool.Allocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeBrickBlendingPool::*)(
    int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*)>(&::UnityEngine::Rendering::ProbeBrickBlendingPool::Allocate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x678dc50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(),
                            { "Allocate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickBlendingPool.Deallocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickBlendingPool::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*)>(&::UnityEngine::Rendering::ProbeBrickBlendingPool::Deallocate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x678dca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(),
                                                { "Deallocate", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickBlendingPool.EnsureTextureValidity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickBlendingPool::*)()>(&::UnityEngine::Rendering::ProbeBrickBlendingPool::EnsureTextureValidity)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x678dd20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(), { "EnsureTextureValidity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickBlendingPool.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickBlendingPool::*)()>(&::UnityEngine::Rendering::ProbeBrickBlendingPool::Cleanup)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x678dd50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Vector4>& UnityEngine::Rendering::ProbeBrickBlendingPool::__cordl_internal_get_m_ChunkList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChunkList;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& UnityEngine::Rendering::ProbeBrickBlendingPool::__cordl_internal_get_m_ChunkList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChunkList;
}
constexpr void UnityEngine::Rendering::ProbeBrickBlendingPool::__cordl_internal_set_m_ChunkList(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ChunkList = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeBrickBlendingPool::__cordl_internal_get_m_MappedChunks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MappedChunks;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeBrickBlendingPool::__cordl_internal_get_m_MappedChunks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MappedChunks;
}
constexpr void UnityEngine::Rendering::ProbeBrickBlendingPool::__cordl_internal_set_m_MappedChunks(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MappedChunks = value;
}
constexpr ::UnityEngine::Rendering::ProbeBrickPool*& UnityEngine::Rendering::ProbeBrickBlendingPool::__cordl_internal_get_m_State0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_State0;
}
constexpr ::UnityEngine::Rendering::ProbeBrickPool* const& UnityEngine::Rendering::ProbeBrickBlendingPool::__cordl_internal_get_m_State0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_State0;
}
constexpr void UnityEngine::Rendering::ProbeBrickBlendingPool::__cordl_internal_set_m_State0(::UnityEngine::Rendering::ProbeBrickPool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_State0 = value;
}
constexpr ::UnityEngine::Rendering::ProbeBrickPool*& UnityEngine::Rendering::ProbeBrickBlendingPool::__cordl_internal_get_m_State1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_State1;
}
constexpr ::UnityEngine::Rendering::ProbeBrickPool* const& UnityEngine::Rendering::ProbeBrickBlendingPool::__cordl_internal_get_m_State1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_State1;
}
constexpr void UnityEngine::Rendering::ProbeBrickBlendingPool::__cordl_internal_set_m_State1(::UnityEngine::Rendering::ProbeBrickPool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_State1 = value;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget& UnityEngine::Rendering::ProbeBrickBlendingPool::__cordl_internal_get_m_MemoryBudget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MemoryBudget;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget const& UnityEngine::Rendering::ProbeBrickBlendingPool::__cordl_internal_get_m_MemoryBudget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MemoryBudget;
}
constexpr void UnityEngine::Rendering::ProbeBrickBlendingPool::__cordl_internal_set_m_MemoryBudget(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MemoryBudget = value;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeSHBands& UnityEngine::Rendering::ProbeBrickBlendingPool::__cordl_internal_get_m_ShBands() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShBands;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeSHBands const& UnityEngine::Rendering::ProbeBrickBlendingPool::__cordl_internal_get_m_ShBands() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShBands;
}
constexpr void UnityEngine::Rendering::ProbeBrickBlendingPool::__cordl_internal_set_m_ShBands(::UnityEngine::Rendering::ProbeVolumeSHBands value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShBands = value;
}
constexpr bool& UnityEngine::Rendering::ProbeBrickBlendingPool::__cordl_internal_get_m_ProbeOcclusion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProbeOcclusion;
}
constexpr bool const& UnityEngine::Rendering::ProbeBrickBlendingPool::__cordl_internal_get_m_ProbeOcclusion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProbeOcclusion;
}
constexpr void UnityEngine::Rendering::ProbeBrickBlendingPool::__cordl_internal_set_m_ProbeOcclusion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProbeOcclusion = value;
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::setStaticF_stateBlendShader(::UnityW<::UnityEngine::ComputeShader> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::ComputeShader>, "stateBlendShader", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>(
      std::forward<::UnityW<::UnityEngine::ComputeShader>>(value));
}
inline ::UnityW<::UnityEngine::ComputeShader> UnityEngine::Rendering::ProbeBrickBlendingPool::getStaticF_stateBlendShader() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::ComputeShader>, "stateBlendShader", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::setStaticF_scenarioBlendingKernel(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "scenarioBlendingKernel", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickBlendingPool::getStaticF_scenarioBlendingKernel() {
  return ::cordl_internals::getStaticField<int32_t, "scenarioBlendingKernel", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::setStaticF__PoolDim_LerpFactor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_PoolDim_LerpFactor", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickBlendingPool::getStaticF__PoolDim_LerpFactor() {
  return ::cordl_internals::getStaticField<int32_t, "_PoolDim_LerpFactor", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::setStaticF__ChunkList(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ChunkList", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickBlendingPool::getStaticF__ChunkList() {
  return ::cordl_internals::getStaticField<int32_t, "_ChunkList", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::setStaticF__State0_L0_L1Rx(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_State0_L0_L1Rx", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickBlendingPool::getStaticF__State0_L0_L1Rx() {
  return ::cordl_internals::getStaticField<int32_t, "_State0_L0_L1Rx", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::setStaticF__State0_L1G_L1Ry(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_State0_L1G_L1Ry", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickBlendingPool::getStaticF__State0_L1G_L1Ry() {
  return ::cordl_internals::getStaticField<int32_t, "_State0_L1G_L1Ry", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::setStaticF__State0_L1B_L1Rz(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_State0_L1B_L1Rz", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickBlendingPool::getStaticF__State0_L1B_L1Rz() {
  return ::cordl_internals::getStaticField<int32_t, "_State0_L1B_L1Rz", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::setStaticF__State0_L2_0(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_State0_L2_0", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickBlendingPool::getStaticF__State0_L2_0() {
  return ::cordl_internals::getStaticField<int32_t, "_State0_L2_0", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::setStaticF__State0_L2_1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_State0_L2_1", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickBlendingPool::getStaticF__State0_L2_1() {
  return ::cordl_internals::getStaticField<int32_t, "_State0_L2_1", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::setStaticF__State0_L2_2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_State0_L2_2", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickBlendingPool::getStaticF__State0_L2_2() {
  return ::cordl_internals::getStaticField<int32_t, "_State0_L2_2", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::setStaticF__State0_L2_3(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_State0_L2_3", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickBlendingPool::getStaticF__State0_L2_3() {
  return ::cordl_internals::getStaticField<int32_t, "_State0_L2_3", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::setStaticF__State0_ProbeOcclusion(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_State0_ProbeOcclusion", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickBlendingPool::getStaticF__State0_ProbeOcclusion() {
  return ::cordl_internals::getStaticField<int32_t, "_State0_ProbeOcclusion", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::setStaticF__State1_L0_L1Rx(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_State1_L0_L1Rx", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickBlendingPool::getStaticF__State1_L0_L1Rx() {
  return ::cordl_internals::getStaticField<int32_t, "_State1_L0_L1Rx", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::setStaticF__State1_L1G_L1Ry(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_State1_L1G_L1Ry", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickBlendingPool::getStaticF__State1_L1G_L1Ry() {
  return ::cordl_internals::getStaticField<int32_t, "_State1_L1G_L1Ry", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::setStaticF__State1_L1B_L1Rz(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_State1_L1B_L1Rz", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickBlendingPool::getStaticF__State1_L1B_L1Rz() {
  return ::cordl_internals::getStaticField<int32_t, "_State1_L1B_L1Rz", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::setStaticF__State1_L2_0(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_State1_L2_0", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickBlendingPool::getStaticF__State1_L2_0() {
  return ::cordl_internals::getStaticField<int32_t, "_State1_L2_0", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::setStaticF__State1_L2_1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_State1_L2_1", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickBlendingPool::getStaticF__State1_L2_1() {
  return ::cordl_internals::getStaticField<int32_t, "_State1_L2_1", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::setStaticF__State1_L2_2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_State1_L2_2", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickBlendingPool::getStaticF__State1_L2_2() {
  return ::cordl_internals::getStaticField<int32_t, "_State1_L2_2", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::setStaticF__State1_L2_3(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_State1_L2_3", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickBlendingPool::getStaticF__State1_L2_3() {
  return ::cordl_internals::getStaticField<int32_t, "_State1_L2_3", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::setStaticF__State1_ProbeOcclusion(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_State1_ProbeOcclusion", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeBrickBlendingPool::getStaticF__State1_ProbeOcclusion() {
  return ::cordl_internals::getStaticField<int32_t, "_State1_ProbeOcclusion", ::UnityEngine::Rendering::ProbeBrickBlendingPool*>();
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeBrickBlendingPool::get_isAllocated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(), { "get_isAllocated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeBrickBlendingPool::get_estimatedVMemCost() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(), { "get_estimatedVMemCost", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeBrickBlendingPool::GetPoolWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(), { "GetPoolWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeBrickBlendingPool::GetPoolHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(), { "GetPoolHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeBrickBlendingPool::GetPoolDepth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(), { "GetPoolDepth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::_ctor(::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget memoryBudget, ::UnityEngine::Rendering::ProbeVolumeSHBands shBands,
                                                                  bool probeOcclusion) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memoryBudget, shBands, probeOcclusion);
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::AllocateResourcesIfNeeded() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(), { "AllocateResourcesIfNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::Update(::UnityEngine::Rendering::ProbeBrickPool_DataLocation source,
                                                                   ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* srcLocations,
                                                                   ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* dstLocations,
                                                                   int32_t destStartIndex, ::UnityEngine::Rendering::ProbeVolumeSHBands bands, int32_t state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(),
                                                           { "Update",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::ProbeBrickPool_DataLocation>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, srcLocations, dstLocations, destStartIndex, bands, state);
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::Update(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* dataBuffer,
                                                                   ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout layout,
                                                                   ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* dstLocations,
                                                                   ::UnityEngine::Rendering::ProbeVolumeSHBands bands, int32_t state, ::UnityEngine::Texture* validityTexture, bool skyOcclusion,
                                                                   ::UnityEngine::Texture* skyOcclusionTexture, bool skyShadingDirections, ::UnityEngine::Texture* skyShadingDirectionsTexture,
                                                                   bool probeOcclusion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(),
                                       { "Update",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>(),
                                           ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, dataBuffer, layout, dstLocations, bands, state, validityTexture, skyOcclusion, skyOcclusionTexture,
                                                   skyShadingDirections, skyShadingDirectionsTexture, probeOcclusion);
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::PerformBlending(::UnityEngine::Rendering::CommandBuffer* cmd, float_t factor, ::UnityEngine::Rendering::ProbeBrickPool* dstPool) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(),
          { "PerformBlending", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeBrickPool*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, factor, dstPool);
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::BlendChunks(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell, ::UnityEngine::Rendering::ProbeBrickPool* dstPool) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(),
                          { "BlendChunks", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeBrickPool*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cell, dstPool);
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeBrickBlendingPool::Allocate(int32_t numberOfBrickChunks,
                                                                     ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* outAllocations) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(),
                          { "Allocate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, numberOfBrickChunks, outAllocations);
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::Deallocate(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* allocations) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(),
                                              { "Deallocate", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allocations);
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::EnsureTextureValidity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(), { "EnsureTextureValidity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeBrickBlendingPool::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeBrickBlendingPool* UnityEngine::Rendering::ProbeBrickBlendingPool::New_ctor(::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget memoryBudget,
                                                                                                                  ::UnityEngine::Rendering::ProbeVolumeSHBands shBands, bool probeOcclusion) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeBrickBlendingPool*>(memoryBudget, shBands, probeOcclusion));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeBrickBlendingPool::ProbeBrickBlendingPool() {}
