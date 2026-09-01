#pragma once
// IWYU pragma private; include "Unity\Collections\UnsafeQueueDispose.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "Unity/Collections/zzzz__UnsafeQueueDispose_def.hpp"
#include "Unity/Collections/zzzz__UnsafeQueueBlockPoolData_def.hpp"
#include "Unity/Collections/zzzz__UnsafeQueueData_def.hpp"
//  Writing Method size for method: ::Unity::Collections::UnsafeQueueDispose.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::UnsafeQueueDispose::*)()>(&::Unity::Collections::UnsafeQueueDispose::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64c9664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueueDispose>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::UnsafeQueueDispose::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueueDispose>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::Unity::Collections::UnsafeQueueData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_QueuePool", ty:
// "::Unity::Collections::UnsafeQueueBlockPoolData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::UnsafeQueueDispose::UnsafeQueueDispose(::Unity::Collections::UnsafeQueueData* m_Buffer, ::Unity::Collections::UnsafeQueueBlockPoolData* m_QueuePool,
                                                                       ::Unity::Collections::AllocatorManager_AllocatorHandle m_AllocatorLabel) noexcept {
  this->m_Buffer = m_Buffer;
  this->m_QueuePool = m_QueuePool;
  this->m_AllocatorLabel = m_AllocatorLabel;
}
// Ctor Parameters []
constexpr ::Unity::Collections::UnsafeQueueDispose::UnsafeQueueDispose() {}
