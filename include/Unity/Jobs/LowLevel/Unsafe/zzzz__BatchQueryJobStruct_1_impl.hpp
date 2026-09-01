#pragma once
// IWYU pragma private; include "Unity\Jobs\LowLevel\Unsafe\BatchQueryJobStruct_1.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__BatchQueryJobStruct_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
template <typename T> inline void Unity::Jobs::LowLevel::Unsafe::BatchQueryJobStruct_1<T>::setStaticF_jobReflectionData(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "jobReflectionData", ::Unity::Jobs::LowLevel::Unsafe::BatchQueryJobStruct_1<T>>(std::forward<::System::IntPtr>(value));
}
template <typename T> inline ::System::IntPtr Unity::Jobs::LowLevel::Unsafe::BatchQueryJobStruct_1<T>::getStaticF_jobReflectionData() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "jobReflectionData", ::Unity::Jobs::LowLevel::Unsafe::BatchQueryJobStruct_1<T>>();
}
template <typename T> inline ::System::IntPtr Unity::Jobs::LowLevel::Unsafe::BatchQueryJobStruct_1<T>::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::BatchQueryJobStruct_1<T>>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Jobs::LowLevel::Unsafe::BatchQueryJobStruct_1<T>::BatchQueryJobStruct_1() {}
