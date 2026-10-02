#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/HlbvhTopLevelBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__HlbvhTopLevelBuilder_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__HlbvhTopLevelBuilder_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__RadeonRaysShaders_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__RadixSort_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__TopLevelAccelStruct_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout (*)(uint32_t)>(
    &::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout::Create)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6dfc6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout>(), { "Create", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout.Reserve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout::*)(uint32_t)>(
    &::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout::Reserve)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6dfcee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout>(), { "Reserve", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout::Create(uint32_t instanceCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout>(), { "Create", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout>(nullptr, ___internal_method, instanceCount);
}
inline uint32_t UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout::Reserve(uint32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout>(), { "Reserve", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, size);
}
// Ctor Parameters [CppParam { name: "Aabb", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MortonCodes", ty: "uint32_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "PrimitiveRefs", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SortedMortonCodes", ty: "uint32_t",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SortedPrimitiveRefs", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SortMemory",
// ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "InternalNodeRange", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "TotalSize", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout::HlbvhTopLevelBuilder_ScratchBufferLayout(uint32_t Aabb, uint32_t MortonCodes, uint32_t PrimitiveRefs,
                                                                                                                                   uint32_t SortedMortonCodes, uint32_t SortedPrimitiveRefs,
                                                                                                                                   uint32_t SortMemory, uint32_t InternalNodeRange,
                                                                                                                                   uint32_t TotalSize) noexcept {
  this->Aabb = Aabb;
  this->MortonCodes = MortonCodes;
  this->PrimitiveRefs = PrimitiveRefs;
  this->SortedMortonCodes = SortedMortonCodes;
  this->SortedPrimitiveRefs = SortedPrimitiveRefs;
  this->SortMemory = SortMemory;
  this->InternalNodeRange = InternalNodeRange;
  this->TotalSize = TotalSize;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout::HlbvhTopLevelBuilder_ScratchBufferLayout() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::*)(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders*)>(
    &::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6dfc554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder.GetScratchDataSizeInDwords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::*)(uint32_t)>(
    &::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::GetScratchDataSizeInDwords)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6dfc698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder*>(), { "GetScratchDataSizeInDwords", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder.GetBvhNodeCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::GetBvhNodeCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dfc730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder*>(), { "GetBvhNodeCount", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder.AllocateResultBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::*)(
    uint32_t, ::by_ref<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct>)>(&::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::AllocateResultBuffers)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6dfc738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder*>(),
                                         { "AllocateResultBuffers", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder.CreateEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::*)(::by_ref<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct>)>(
    &::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::CreateEmpty)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6dfc850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder*>(),
                                                             { "CreateEmpty", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*,
                                                                                                                            ::by_ref<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct>)>(
    &::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::Execute)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x6dfc98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder*>(),
                                                             { "Execute",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder.BindKernelArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::*)(
    ::UnityEngine::Rendering::CommandBuffer*, int32_t, ::UnityEngine::GraphicsBuffer*, ::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout,
    ::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct, bool)>(&::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::BindKernelArguments)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6dfcd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder*>(),
                                                { "BindKernelArguments",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::__cordl_internal_get_shaderBuildHlbvh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaderBuildHlbvh;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::__cordl_internal_get_shaderBuildHlbvh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaderBuildHlbvh;
}
constexpr void UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::__cordl_internal_set_shaderBuildHlbvh(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shaderBuildHlbvh = value;
}
constexpr int32_t& UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::__cordl_internal_get_kernelInit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelInit;
}
constexpr int32_t const& UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::__cordl_internal_get_kernelInit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelInit;
}
constexpr void UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::__cordl_internal_set_kernelInit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kernelInit = value;
}
constexpr int32_t& UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::__cordl_internal_get_kernelCalculateAabb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelCalculateAabb;
}
constexpr int32_t const& UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::__cordl_internal_get_kernelCalculateAabb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelCalculateAabb;
}
constexpr void UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::__cordl_internal_set_kernelCalculateAabb(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kernelCalculateAabb = value;
}
constexpr int32_t& UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::__cordl_internal_get_kernelCalculateMortonCodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelCalculateMortonCodes;
}
constexpr int32_t const& UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::__cordl_internal_get_kernelCalculateMortonCodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelCalculateMortonCodes;
}
constexpr void UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::__cordl_internal_set_kernelCalculateMortonCodes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kernelCalculateMortonCodes = value;
}
constexpr int32_t& UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::__cordl_internal_get_kernelBuildTreeBottomUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelBuildTreeBottomUp;
}
constexpr int32_t const& UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::__cordl_internal_get_kernelBuildTreeBottomUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelBuildTreeBottomUp;
}
constexpr void UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::__cordl_internal_set_kernelBuildTreeBottomUp(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kernelBuildTreeBottomUp = value;
}
constexpr ::UnityEngine::Rendering::RadeonRays::RadixSort*& UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::__cordl_internal_get_radixSort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radixSort;
}
constexpr ::UnityEngine::Rendering::RadeonRays::RadixSort* const& UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::__cordl_internal_get_radixSort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radixSort;
}
constexpr void UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::__cordl_internal_set_radixSort(::UnityEngine::Rendering::RadeonRays::RadixSort* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___radixSort = value;
}
inline void UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::_ctor(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders* shaders) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shaders);
}
inline uint64_t UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::GetScratchDataSizeInDwords(uint32_t instanceCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder*>(), { "GetScratchDataSizeInDwords", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, instanceCount);
}
inline uint32_t UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::GetBvhNodeCount(uint32_t leafCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder*>(), { "GetBvhNodeCount", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, leafCount);
}
inline void UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::AllocateResultBuffers(uint32_t instanceCount, ::by_ref<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct> accelStruct) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder*>(),
                                              { "AllocateResultBuffers", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceCount, accelStruct);
}
inline void UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::CreateEmpty(::by_ref<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct> accelStruct) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder*>(),
                                                           { "CreateEmpty", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accelStruct);
}
inline void UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::Execute(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* scratch,
                                                                              ::by_ref<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct> accelStruct) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder*>(),
                                                           { "Execute",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, scratch, accelStruct);
}
inline void UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::BindKernelArguments(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t kernel, ::UnityEngine::GraphicsBuffer* scratch,
                                                                                          ::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout scratchLayout,
                                                                                          ::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct accelStruct, bool setSortedCodes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder*>(),
                                                           { "BindKernelArguments",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, kernel, scratch, scratchLayout, accelStruct, setSortedCodes);
}
inline ::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder*
UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::New_ctor(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders* shaders) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder*>(shaders));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder::HlbvhTopLevelBuilder() {}
