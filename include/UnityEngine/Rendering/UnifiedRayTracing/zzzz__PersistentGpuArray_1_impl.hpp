#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/PersistentGpuArray_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__BlockAllocator_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__PersistentGpuArray_1_def.hpp"
#include "System/Collections/zzzz__BitArray_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__BlockAllocator_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
template <typename Tstruct>
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator& UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::__cordl_internal_get_m_SlotAllocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SlotAllocator;
}
template <typename Tstruct>
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator const& UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::__cordl_internal_get_m_SlotAllocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SlotAllocator;
}
template <typename Tstruct>
constexpr void UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::__cordl_internal_set_m_SlotAllocator(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SlotAllocator = value;
}
template <typename Tstruct> constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::__cordl_internal_get_m_GpuBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GpuBuffer;
}
template <typename Tstruct> constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::__cordl_internal_get_m_GpuBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GpuBuffer;
}
template <typename Tstruct> constexpr void UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::__cordl_internal_set_m_GpuBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GpuBuffer = value;
}
template <typename Tstruct> constexpr ::Unity::Collections::NativeArray_1<Tstruct>& UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::__cordl_internal_get_m_CpuList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CpuList;
}
template <typename Tstruct>
constexpr ::Unity::Collections::NativeArray_1<Tstruct> const& UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::__cordl_internal_get_m_CpuList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CpuList;
}
template <typename Tstruct>
constexpr void UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::__cordl_internal_set_m_CpuList(::Unity::Collections::NativeArray_1<Tstruct> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CpuList = value;
}
template <typename Tstruct> constexpr ::System::Collections::BitArray*& UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::__cordl_internal_get_m_Updates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Updates;
}
template <typename Tstruct> constexpr ::System::Collections::BitArray* const& UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::__cordl_internal_get_m_Updates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Updates;
}
template <typename Tstruct> constexpr void UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::__cordl_internal_set_m_Updates(::System::Collections::BitArray* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Updates = value;
}
template <typename Tstruct> constexpr bool& UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::__cordl_internal_get_m_gpuBufferDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_gpuBufferDirty;
}
template <typename Tstruct> constexpr bool const& UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::__cordl_internal_get_m_gpuBufferDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_gpuBufferDirty;
}
template <typename Tstruct> constexpr void UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::__cordl_internal_set_m_gpuBufferDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_gpuBufferDirty = value;
}
template <typename Tstruct> constexpr int32_t& UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::__cordl_internal_get_m_ElementCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementCount;
}
template <typename Tstruct> constexpr int32_t const& UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::__cordl_internal_get_m_ElementCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementCount;
}
template <typename Tstruct> constexpr void UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::__cordl_internal_set_m_ElementCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ElementCount = value;
}
template <typename Tstruct> inline int32_t UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::get_elementCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>*>(), { "get_elementCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename Tstruct> inline void UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::_ctor(int32_t initialSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialSize);
}
template <typename Tstruct> inline void UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename Tstruct>
inline ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::Add(Tstruct element) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>*>(), { "Add", {}, { ::i2c::type_of<Tstruct>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>(this, ___internal_method, element);
}
template <typename Tstruct>
inline ::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation> UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::Add(int32_t elementCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>*>(), { "Add", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>>(this, ___internal_method, elementCount);
}
template <typename Tstruct>
inline void UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::Remove(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation allocation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>*>(),
                                                           { "Remove", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allocation);
}
template <typename Tstruct> inline void UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename Tstruct>
inline void UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::Set(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation allocation, Tstruct element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>*>(),
                                                           { "Set", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>(), ::i2c::type_of<Tstruct>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allocation, element);
}
template <typename Tstruct>
inline Tstruct UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::Get(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation allocation) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>*>(),
                                                                                         { "Get", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>() } })));
  return ::cordl_internals::RunMethodRethrow<Tstruct>(this, ___internal_method, allocation);
}
template <typename Tstruct> inline void UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::ModifyForEach(::System::Func_2<Tstruct, Tstruct>* lambda) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>*>(),
                                                                                         { "ModifyForEach", {}, { ::i2c::type_of<::System::Func_2<Tstruct, Tstruct>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lambda);
}
template <typename Tstruct> inline ::UnityEngine::ComputeBuffer* UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::GetGpuBuffer(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>*>(),
                                                                                         { "GetGpuBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ComputeBuffer*>(this, ___internal_method, cmd);
}
template <typename Tstruct> inline void UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::Grow() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>*>(), { "Grow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename Tstruct>
inline ::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>* UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::New_ctor(int32_t initialSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>*>(initialSize));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename Tstruct> constexpr UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename Tstruct> constexpr ::System::IDisposable* UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename Tstruct> constexpr ::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>::PersistentGpuArray_1() {}
