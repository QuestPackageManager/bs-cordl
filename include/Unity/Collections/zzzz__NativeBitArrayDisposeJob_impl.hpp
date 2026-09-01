#pragma once
// IWYU pragma private; include "Unity\Collections\NativeBitArrayDisposeJob.hpp"
#include "Unity/Collections/zzzz__NativeBitArrayDispose_impl.hpp"
#include "Unity/Collections/zzzz__NativeBitArrayDisposeJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::Unity::Collections::NativeBitArrayDisposeJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeBitArrayDisposeJob::*)()>(&::Unity::Collections::NativeBitArrayDisposeJob::Execute)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64c313c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArrayDisposeJob>(), { "Execute", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeBitArrayDisposeJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArrayDisposeJob>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr Unity::Collections::NativeBitArrayDisposeJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* Unity::Collections::NativeBitArrayDisposeJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Data", ty: "::Unity::Collections::NativeBitArrayDispose", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeBitArrayDisposeJob::NativeBitArrayDisposeJob(::Unity::Collections::NativeBitArrayDispose Data) noexcept {
  this->Data = Data;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeBitArrayDisposeJob::NativeBitArrayDisposeJob() {}
