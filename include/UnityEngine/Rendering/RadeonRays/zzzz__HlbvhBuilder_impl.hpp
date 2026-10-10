#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/HlbvhBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__HlbvhBuilder_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__BottomLevelLevelAccelStruct_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__HlbvhBuilder_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__IndexFormat_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__RadeonRaysShaders_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__RadixSort_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout (*)(uint32_t)>(
    &::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout::Create)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6dfba1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout>(), { "Create", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout.Reserve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout::*)(uint32_t)>(
    &::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout::Reserve)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6dfc50c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout>(), { "Reserve", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout::Create(uint32_t triangleCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout>(), { "Create", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout>(nullptr, ___internal_method, triangleCount);
}
inline uint32_t UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout::Reserve(uint32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout>(), { "Reserve", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, size);
}
// Ctor Parameters [CppParam { name: "PrimitiveRefs", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MortonCodes", ty: "uint32_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "SortedPrimitiveRefs", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SortedMortonCodes", ty: "uint32_t",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SortMemory", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Aabb", ty: "uint32_t",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LeafParents", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "InternalNodeRange",
// ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TotalSize", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout::HlbvhBuilder_ScratchBufferLayout(uint32_t PrimitiveRefs, uint32_t MortonCodes, uint32_t SortedPrimitiveRefs,
                                                                                                                   uint32_t SortedMortonCodes, uint32_t SortMemory, uint32_t Aabb, uint32_t LeafParents,
                                                                                                                   uint32_t InternalNodeRange, uint32_t TotalSize) noexcept {
  this->PrimitiveRefs = PrimitiveRefs;
  this->MortonCodes = MortonCodes;
  this->SortedPrimitiveRefs = SortedPrimitiveRefs;
  this->SortedMortonCodes = SortedMortonCodes;
  this->SortMemory = SortMemory;
  this->Aabb = Aabb;
  this->LeafParents = LeafParents;
  this->InternalNodeRange = InternalNodeRange;
  this->TotalSize = TotalSize;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout::HlbvhBuilder_ScratchBufferLayout() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::HlbvhBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::HlbvhBuilder::*)(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders*)>(
    &::UnityEngine::Rendering::RadeonRays::HlbvhBuilder::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6dfb7d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhBuilder*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::HlbvhBuilder.GetScratchDataSizeInDwords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Rendering::RadeonRays::HlbvhBuilder::*)(uint32_t)>(
    &::UnityEngine::Rendering::RadeonRays::HlbvhBuilder::GetScratchDataSizeInDwords)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6dfb9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhBuilder*>(), { "GetScratchDataSizeInDwords", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::HlbvhBuilder.GetBvhNodeCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::UnityEngine::Rendering::RadeonRays::HlbvhBuilder::GetBvhNodeCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dfb23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhBuilder*>(), { "GetBvhNodeCount", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::HlbvhBuilder.GetResultDataSizeInDwords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Rendering::RadeonRays::HlbvhBuilder::*)(uint32_t)>(
    &::UnityEngine::Rendering::RadeonRays::HlbvhBuilder::GetResultDataSizeInDwords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dfba90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhBuilder*>(), { "GetResultDataSizeInDwords", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::HlbvhBuilder.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::HlbvhBuilder::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, int32_t, uint32_t, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t, ::UnityEngine::Rendering::RadeonRays::IndexFormat,
    uint32_t, ::UnityEngine::GraphicsBuffer*, ::by_ref<::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct const>)>(&::UnityEngine::Rendering::RadeonRays::HlbvhBuilder::Execute)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x6dfba98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhBuilder*>(),
                                                { "Execute",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::IndexFormat>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::HlbvhBuilder.BindKernelArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::HlbvhBuilder::*)(
    ::UnityEngine::Rendering::CommandBuffer*, int32_t, ::UnityEngine::GraphicsBuffer*, ::UnityEngine::GraphicsBuffer*, ::UnityEngine::GraphicsBuffer*,
    ::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout, ::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct, bool)>(
    &::UnityEngine::Rendering::RadeonRays::HlbvhBuilder::BindKernelArguments)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6dfbf7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhBuilder*>(),
                                                { "BindKernelArguments",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                    ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::RadeonRays::HlbvhBuilder::__cordl_internal_get_shaderBuildHlbvh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaderBuildHlbvh;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::RadeonRays::HlbvhBuilder::__cordl_internal_get_shaderBuildHlbvh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaderBuildHlbvh;
}
constexpr void UnityEngine::Rendering::RadeonRays::HlbvhBuilder::__cordl_internal_set_shaderBuildHlbvh(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shaderBuildHlbvh = value;
}
constexpr int32_t& UnityEngine::Rendering::RadeonRays::HlbvhBuilder::__cordl_internal_get_kernelInit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelInit;
}
constexpr int32_t const& UnityEngine::Rendering::RadeonRays::HlbvhBuilder::__cordl_internal_get_kernelInit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelInit;
}
constexpr void UnityEngine::Rendering::RadeonRays::HlbvhBuilder::__cordl_internal_set_kernelInit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kernelInit = value;
}
constexpr int32_t& UnityEngine::Rendering::RadeonRays::HlbvhBuilder::__cordl_internal_get_kernelCalculateAabb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelCalculateAabb;
}
constexpr int32_t const& UnityEngine::Rendering::RadeonRays::HlbvhBuilder::__cordl_internal_get_kernelCalculateAabb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelCalculateAabb;
}
constexpr void UnityEngine::Rendering::RadeonRays::HlbvhBuilder::__cordl_internal_set_kernelCalculateAabb(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kernelCalculateAabb = value;
}
constexpr int32_t& UnityEngine::Rendering::RadeonRays::HlbvhBuilder::__cordl_internal_get_kernelCalculateMortonCodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelCalculateMortonCodes;
}
constexpr int32_t const& UnityEngine::Rendering::RadeonRays::HlbvhBuilder::__cordl_internal_get_kernelCalculateMortonCodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelCalculateMortonCodes;
}
constexpr void UnityEngine::Rendering::RadeonRays::HlbvhBuilder::__cordl_internal_set_kernelCalculateMortonCodes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kernelCalculateMortonCodes = value;
}
constexpr int32_t& UnityEngine::Rendering::RadeonRays::HlbvhBuilder::__cordl_internal_get_kernelBuildTreeBottomUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelBuildTreeBottomUp;
}
constexpr int32_t const& UnityEngine::Rendering::RadeonRays::HlbvhBuilder::__cordl_internal_get_kernelBuildTreeBottomUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelBuildTreeBottomUp;
}
constexpr void UnityEngine::Rendering::RadeonRays::HlbvhBuilder::__cordl_internal_set_kernelBuildTreeBottomUp(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kernelBuildTreeBottomUp = value;
}
constexpr ::UnityEngine::Rendering::RadeonRays::RadixSort*& UnityEngine::Rendering::RadeonRays::HlbvhBuilder::__cordl_internal_get_radixSort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radixSort;
}
constexpr ::UnityEngine::Rendering::RadeonRays::RadixSort* const& UnityEngine::Rendering::RadeonRays::HlbvhBuilder::__cordl_internal_get_radixSort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radixSort;
}
constexpr void UnityEngine::Rendering::RadeonRays::HlbvhBuilder::__cordl_internal_set_radixSort(::UnityEngine::Rendering::RadeonRays::RadixSort* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___radixSort = value;
}
inline void UnityEngine::Rendering::RadeonRays::HlbvhBuilder::_ctor(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders* shaders) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhBuilder*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shaders);
}
inline uint32_t UnityEngine::Rendering::RadeonRays::HlbvhBuilder::GetScratchDataSizeInDwords(uint32_t triangleCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhBuilder*>(), { "GetScratchDataSizeInDwords", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, triangleCount);
}
inline uint32_t UnityEngine::Rendering::RadeonRays::HlbvhBuilder::GetBvhNodeCount(uint32_t leafCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhBuilder*>(), { "GetBvhNodeCount", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, leafCount);
}
inline uint32_t UnityEngine::Rendering::RadeonRays::HlbvhBuilder::GetResultDataSizeInDwords(uint32_t triangleCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhBuilder*>(), { "GetResultDataSizeInDwords", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, triangleCount);
}
inline void UnityEngine::Rendering::RadeonRays::HlbvhBuilder::Execute(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* vertices, int32_t verticesOffset,
                                                                      uint32_t vertexStride, ::UnityEngine::GraphicsBuffer* indices, int32_t indicesOffset, int32_t baseIndex,
                                                                      ::UnityEngine::Rendering::RadeonRays::IndexFormat indexFormat, uint32_t triangleCount, ::UnityEngine::GraphicsBuffer* scratch,
                                                                      /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct const> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhBuilder*>(),
                                              { "Execute",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::IndexFormat>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, vertices, verticesOffset, vertexStride, indices, indicesOffset, baseIndex, indexFormat, triangleCount, scratch,
                                                   result);
}
inline void UnityEngine::Rendering::RadeonRays::HlbvhBuilder::BindKernelArguments(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t kernel, ::UnityEngine::GraphicsBuffer* vertices,
                                                                                  ::UnityEngine::GraphicsBuffer* indices, ::UnityEngine::GraphicsBuffer* scratch,
                                                                                  ::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout scratchLayout,
                                                                                  ::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct result, bool setSortedCodes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhBuilder*>(),
                                                           { "BindKernelArguments",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                               ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, kernel, vertices, indices, scratch, scratchLayout, result, setSortedCodes);
}
inline ::UnityEngine::Rendering::RadeonRays::HlbvhBuilder* UnityEngine::Rendering::RadeonRays::HlbvhBuilder::New_ctor(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders* shaders) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RadeonRays::HlbvhBuilder*>(shaders));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::HlbvhBuilder::HlbvhBuilder() {}
