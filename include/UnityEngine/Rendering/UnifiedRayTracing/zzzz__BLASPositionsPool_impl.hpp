#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/BLASPositionsPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__BlockAllocator_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__BLASPositionsPool_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__BlockAllocator_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__VertexBufferChunk_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::*)(::UnityEngine::ComputeShader*, ::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6e08c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::Dispose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e08d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool.get_VertexBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::get_VertexBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e08d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool*>(), { "get_VertexBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::Clear)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e08d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::*)(
    ::UnityEngine::Rendering::UnifiedRayTracing::VertexBufferChunk, ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::Add)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x6e08dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool*>(),
                                                             { "Add",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::VertexBufferChunk>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::*)(
    ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>)>(&::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::Remove)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e0925c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool*>(),
                                                             { "Remove", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::__cordl_internal_get_m_VerticesBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticesBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::__cordl_internal_get_m_VerticesBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticesBuffer;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::__cordl_internal_set_m_VerticesBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VerticesBuffer = value;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator& UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::__cordl_internal_get_m_VerticesAllocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticesAllocator;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator const& UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::__cordl_internal_get_m_VerticesAllocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticesAllocator;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::__cordl_internal_set_m_VerticesAllocator(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VerticesAllocator = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::__cordl_internal_get_m_CopyPositionsShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyPositionsShader;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::__cordl_internal_get_m_CopyPositionsShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyPositionsShader;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::__cordl_internal_set_m_CopyPositionsShader(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CopyPositionsShader = value;
}
constexpr int32_t& UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::__cordl_internal_get_m_CopyVerticesKernel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyVerticesKernel;
}
constexpr int32_t const& UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::__cordl_internal_get_m_CopyVerticesKernel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyVerticesKernel;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::__cordl_internal_set_m_CopyVerticesKernel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CopyVerticesKernel = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::__cordl_internal_get_m_CopyShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyShader;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::__cordl_internal_get_m_CopyShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyShader;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::__cordl_internal_set_m_CopyShader(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CopyShader = value;
}
inline void UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::_ctor(::UnityEngine::ComputeShader* copyPositionsShader, ::UnityEngine::ComputeShader* copyShader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyPositionsShader, copyShader);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::get_VertexBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool*>(), { "get_VertexBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::Add(::UnityEngine::Rendering::UnifiedRayTracing::VertexBufferChunk info,
                                                                              ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation> verticesAllocation) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool*>(),
                                                                                         { "Add",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::VertexBufferChunk>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, verticesAllocation);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::Remove(::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation> verticesAllocation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool*>(),
                                                           { "Remove", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, verticesAllocation);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool* UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::New_ctor(::UnityEngine::ComputeShader* copyPositionsShader,
                                                                                                                                              ::UnityEngine::ComputeShader* copyShader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool*>(copyPositionsShader, copyShader));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool::BLASPositionsPool() {}
