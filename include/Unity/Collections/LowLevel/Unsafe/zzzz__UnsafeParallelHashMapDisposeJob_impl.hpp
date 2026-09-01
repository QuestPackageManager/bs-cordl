#pragma once
// IWYU pragma private; include "Unity\Collections\LowLevel\Unsafe\UnsafeParallelHashMapDisposeJob.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMapDisposeJob_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMapData_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDisposeJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDisposeJob::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDisposeJob::Execute)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64cefe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDisposeJob>(), { "Execute", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDisposeJob::Execute() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDisposeJob>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDisposeJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDisposeJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Data", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Allocator", ty:
// "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDisposeJob::UnsafeParallelHashMapDisposeJob(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* Data,
                                                                                                                   ::Unity::Collections::AllocatorManager_AllocatorHandle Allocator) noexcept {
  this->Data = Data;
  this->Allocator = Allocator;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDisposeJob::UnsafeParallelHashMapDisposeJob() {}
