#pragma once
// IWYU pragma private; include "Unity\Collections\NativeQueueDispose.hpp"
#include "Unity/Collections/zzzz__NativeQueueDispose_def.hpp"
#include "Unity/Collections/zzzz__UnsafeQueue_1_def.hpp"
//  Writing Method size for method: ::Unity::Collections::NativeQueueDispose.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeQueueDispose::*)()>(&::Unity::Collections::NativeQueueDispose::Dispose)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x64c31ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeQueueDispose>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeQueueDispose::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeQueueDispose>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_QueueData", ty: "::Unity::Collections::UnsafeQueue_1<int32_t>*", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeQueueDispose::NativeQueueDispose(::Unity::Collections::UnsafeQueue_1<int32_t>* m_QueueData) noexcept {
  this->m_QueueData = m_QueueData;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeQueueDispose::NativeQueueDispose() {}
