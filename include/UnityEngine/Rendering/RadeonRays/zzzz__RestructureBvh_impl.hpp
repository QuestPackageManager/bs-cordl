#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/RestructureBvh.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__RestructureBvh_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__BottomLevelLevelAccelStruct_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__RadeonRaysShaders_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__RestructureBvh_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::RestructureBvh_ScratchBufferLayout.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RadeonRays::RestructureBvh_ScratchBufferLayout (*)(uint32_t)>(
    &::UnityEngine::Rendering::RadeonRays::RestructureBvh_ScratchBufferLayout::Create)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6dfe5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RestructureBvh_ScratchBufferLayout>(), { "Create", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::RestructureBvh_ScratchBufferLayout.Reserve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Rendering::RadeonRays::RestructureBvh_ScratchBufferLayout::*)(uint32_t)>(
    &::UnityEngine::Rendering::RadeonRays::RestructureBvh_ScratchBufferLayout::Reserve)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6dfe6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RestructureBvh_ScratchBufferLayout>(), { "Reserve", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::RadeonRays::RestructureBvh_ScratchBufferLayout UnityEngine::Rendering::RadeonRays::RestructureBvh_ScratchBufferLayout::Create(uint32_t triangleCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RestructureBvh_ScratchBufferLayout>(), { "Create", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RadeonRays::RestructureBvh_ScratchBufferLayout>(nullptr, ___internal_method, triangleCount);
}
inline uint32_t UnityEngine::Rendering::RadeonRays::RestructureBvh_ScratchBufferLayout::Reserve(uint32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RestructureBvh_ScratchBufferLayout>(), { "Reserve", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, size);
}
// Ctor Parameters [CppParam { name: "LeafParents", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TreeletCount", ty: "uint32_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "TreeletRoots", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PrimitiveCounts", ty: "uint32_t", modifiers:
// "", def_value: Some("{}"), comment: None }, CppParam { name: "TotalSize", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RadeonRays::RestructureBvh_ScratchBufferLayout::RestructureBvh_ScratchBufferLayout(uint32_t LeafParents, uint32_t TreeletCount, uint32_t TreeletRoots,
                                                                                                                       uint32_t PrimitiveCounts, uint32_t TotalSize) noexcept {
  this->LeafParents = LeafParents;
  this->TreeletCount = TreeletCount;
  this->TreeletRoots = TreeletRoots;
  this->PrimitiveCounts = PrimitiveCounts;
  this->TotalSize = TotalSize;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::RestructureBvh_ScratchBufferLayout::RestructureBvh_ScratchBufferLayout() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::RestructureBvh._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::RestructureBvh::*)(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders*)>(
    &::UnityEngine::Rendering::RadeonRays::RestructureBvh::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6dfd2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RestructureBvh*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::RestructureBvh.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::RestructureBvh::*)()>(&::UnityEngine::Rendering::RadeonRays::RestructureBvh::Dispose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6dfd428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RestructureBvh*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::RestructureBvh.GetScratchDataSizeInDwords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::Rendering::RadeonRays::RestructureBvh::*)(uint32_t)>(
    &::UnityEngine::Rendering::RadeonRays::RestructureBvh::GetScratchDataSizeInDwords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dfdb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RestructureBvh*>(), { "GetScratchDataSizeInDwords", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::RestructureBvh.GetBvhNodeCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::UnityEngine::Rendering::RadeonRays::RestructureBvh::GetBvhNodeCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dfe5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RestructureBvh*>(), { "GetBvhNodeCount", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::RestructureBvh.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::RestructureBvh::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, int32_t, uint32_t, uint32_t, ::UnityEngine::GraphicsBuffer*,
    ::by_ref<::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct const>)>(&::UnityEngine::Rendering::RadeonRays::RestructureBvh::Execute)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x6dfd6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RestructureBvh*>(),
                                                             { "Execute",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::RestructureBvh.BindKernelArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::RestructureBvh::*)(
    ::UnityEngine::Rendering::CommandBuffer*, int32_t, ::UnityEngine::GraphicsBuffer*, ::UnityEngine::GraphicsBuffer*, ::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct)>(
    &::UnityEngine::Rendering::RadeonRays::RestructureBvh::BindKernelArguments)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6dfe5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RestructureBvh*>(),
                                                { "BindKernelArguments",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                    ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::RadeonRays::RestructureBvh::__cordl_internal_get_shader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shader;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::RadeonRays::RestructureBvh::__cordl_internal_get_shader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shader;
}
constexpr void UnityEngine::Rendering::RadeonRays::RestructureBvh::__cordl_internal_set_shader(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shader = value;
}
constexpr int32_t& UnityEngine::Rendering::RadeonRays::RestructureBvh::__cordl_internal_get_kernelInitPrimitiveCounts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelInitPrimitiveCounts;
}
constexpr int32_t const& UnityEngine::Rendering::RadeonRays::RestructureBvh::__cordl_internal_get_kernelInitPrimitiveCounts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelInitPrimitiveCounts;
}
constexpr void UnityEngine::Rendering::RadeonRays::RestructureBvh::__cordl_internal_set_kernelInitPrimitiveCounts(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kernelInitPrimitiveCounts = value;
}
constexpr int32_t& UnityEngine::Rendering::RadeonRays::RestructureBvh::__cordl_internal_get_kernelFindTreeletRoots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelFindTreeletRoots;
}
constexpr int32_t const& UnityEngine::Rendering::RadeonRays::RestructureBvh::__cordl_internal_get_kernelFindTreeletRoots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelFindTreeletRoots;
}
constexpr void UnityEngine::Rendering::RadeonRays::RestructureBvh::__cordl_internal_set_kernelFindTreeletRoots(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kernelFindTreeletRoots = value;
}
constexpr int32_t& UnityEngine::Rendering::RadeonRays::RestructureBvh::__cordl_internal_get_kernelRestructure() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelRestructure;
}
constexpr int32_t const& UnityEngine::Rendering::RadeonRays::RestructureBvh::__cordl_internal_get_kernelRestructure() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelRestructure;
}
constexpr void UnityEngine::Rendering::RadeonRays::RestructureBvh::__cordl_internal_set_kernelRestructure(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kernelRestructure = value;
}
constexpr int32_t& UnityEngine::Rendering::RadeonRays::RestructureBvh::__cordl_internal_get_kernelPrepareTreeletsDispatchSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelPrepareTreeletsDispatchSize;
}
constexpr int32_t const& UnityEngine::Rendering::RadeonRays::RestructureBvh::__cordl_internal_get_kernelPrepareTreeletsDispatchSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelPrepareTreeletsDispatchSize;
}
constexpr void UnityEngine::Rendering::RadeonRays::RestructureBvh::__cordl_internal_set_kernelPrepareTreeletsDispatchSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kernelPrepareTreeletsDispatchSize = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::Rendering::RadeonRays::RestructureBvh::__cordl_internal_get_treeletDispatchIndirectBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___treeletDispatchIndirectBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::Rendering::RadeonRays::RestructureBvh::__cordl_internal_get_treeletDispatchIndirectBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___treeletDispatchIndirectBuffer;
}
constexpr void UnityEngine::Rendering::RadeonRays::RestructureBvh::__cordl_internal_set_treeletDispatchIndirectBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___treeletDispatchIndirectBuffer = value;
}
inline void UnityEngine::Rendering::RadeonRays::RestructureBvh::_ctor(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders* shaders) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RestructureBvh*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shaders);
}
inline void UnityEngine::Rendering::RadeonRays::RestructureBvh::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RestructureBvh*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint64_t UnityEngine::Rendering::RadeonRays::RestructureBvh::GetScratchDataSizeInDwords(uint32_t triangleCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RestructureBvh*>(), { "GetScratchDataSizeInDwords", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, triangleCount);
}
inline uint32_t UnityEngine::Rendering::RadeonRays::RestructureBvh::GetBvhNodeCount(uint32_t leafCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RestructureBvh*>(), { "GetBvhNodeCount", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, leafCount);
}
inline void UnityEngine::Rendering::RadeonRays::RestructureBvh::Execute(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* vertices, int32_t verticesOffset,
                                                                        uint32_t vertexStride, uint32_t triangleCount, ::UnityEngine::GraphicsBuffer* scratch,
                                                                        /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct const> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RestructureBvh*>(),
                                                           { "Execute",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, vertices, verticesOffset, vertexStride, triangleCount, scratch, result);
}
inline void UnityEngine::Rendering::RadeonRays::RestructureBvh::BindKernelArguments(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t kernel, ::UnityEngine::GraphicsBuffer* vertices,
                                                                                    ::UnityEngine::GraphicsBuffer* scratch, ::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RestructureBvh*>(),
                                              { "BindKernelArguments",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                  ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, kernel, vertices, scratch, result);
}
inline ::UnityEngine::Rendering::RadeonRays::RestructureBvh* UnityEngine::Rendering::RadeonRays::RestructureBvh::New_ctor(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders* shaders) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RadeonRays::RestructureBvh*>(shaders));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::RadeonRays::RestructureBvh::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::RadeonRays::RestructureBvh::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::RestructureBvh::RestructureBvh() {}
