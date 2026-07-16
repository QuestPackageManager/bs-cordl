#pragma once
// IWYU pragma private; include "Unity/Collections/NativeReferenceDisposeJob.hpp"
#include "Unity/Collections/zzzz__NativeReferenceDispose_impl.hpp"
#include "Unity/Collections/zzzz__NativeReferenceDisposeJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::Unity::Collections::NativeReferenceDisposeJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeReferenceDisposeJob::*)()>(&::Unity::Collections::NativeReferenceDisposeJob::Execute)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64bda4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeReferenceDisposeJob>(), { "Execute", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeReferenceDisposeJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeReferenceDisposeJob>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr Unity::Collections::NativeReferenceDisposeJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* Unity::Collections::NativeReferenceDisposeJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Data", ty: "::Unity::Collections::NativeReferenceDispose", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeReferenceDisposeJob::NativeReferenceDisposeJob(::Unity::Collections::NativeReferenceDispose Data) noexcept {
  this->Data = Data;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeReferenceDisposeJob::NativeReferenceDisposeJob() {}
