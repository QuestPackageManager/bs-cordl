#pragma once
// IWYU pragma private; include "Unity\Collections\NativeRingQueueDispose.hpp"
#include "Unity/Collections/zzzz__NativeRingQueueDispose_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeRingQueue_1_def.hpp"
//  Writing Method size for method: ::Unity::Collections::NativeRingQueueDispose.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeRingQueueDispose::*)()>(&::Unity::Collections::NativeRingQueueDispose::Dispose)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x64c328c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeRingQueueDispose>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeRingQueueDispose::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeRingQueueDispose>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_QueueData", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<int32_t>*", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeRingQueueDispose::NativeRingQueueDispose(::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<int32_t>* m_QueueData) noexcept {
  this->m_QueueData = m_QueueData;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeRingQueueDispose::NativeRingQueueDispose() {}
