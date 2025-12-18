#pragma once
// IWYU pragma private; include "Unity/Collections/NativeRingQueueDisposeJob.hpp"
#include "Unity/Collections/zzzz__NativeRingQueueDispose_impl.hpp"
#include "Unity/Collections/zzzz__NativeRingQueueDisposeJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::Unity::Collections::NativeRingQueueDisposeJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeRingQueueDisposeJob::*)()>(
    &::Unity::Collections::NativeRingQueueDisposeJob::Execute)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x630cc5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeRingQueueDisposeJob>::get(),
                                                                               "Execute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeRingQueueDisposeJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeRingQueueDisposeJob>::get(), "Execute",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr Unity::Collections::NativeRingQueueDisposeJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* Unity::Collections::NativeRingQueueDisposeJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "Data", ty: "::Unity::Collections::NativeRingQueueDispose", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeRingQueueDisposeJob::NativeRingQueueDisposeJob(::Unity::Collections::NativeRingQueueDispose Data) noexcept {
  this->Data = Data;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeRingQueueDisposeJob::NativeRingQueueDisposeJob() {}
