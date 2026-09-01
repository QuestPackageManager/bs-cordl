#pragma once
// IWYU pragma private; include "Unity\Collections\NativeRingQueueDisposeJob.hpp"
#include "Unity/Collections/zzzz__NativeRingQueueDispose_impl.hpp"
#include "Unity/Collections/zzzz__NativeRingQueueDisposeJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::Unity::Collections::NativeRingQueueDisposeJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeRingQueueDisposeJob::*)()>(&::Unity::Collections::NativeRingQueueDisposeJob::Execute)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c32d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeRingQueueDisposeJob>(), { "Execute", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeRingQueueDisposeJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeRingQueueDisposeJob>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr Unity::Collections::NativeRingQueueDisposeJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* Unity::Collections::NativeRingQueueDisposeJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Data", ty: "::Unity::Collections::NativeRingQueueDispose", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeRingQueueDisposeJob::NativeRingQueueDisposeJob(::Unity::Collections::NativeRingQueueDispose Data) noexcept {
  this->Data = Data;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeRingQueueDisposeJob::NativeRingQueueDisposeJob() {}
