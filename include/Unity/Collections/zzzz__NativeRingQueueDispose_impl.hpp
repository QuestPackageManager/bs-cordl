#pragma once
// IWYU pragma private; include "Unity/Collections/NativeRingQueueDispose.hpp"
#include "Unity/Collections/zzzz__NativeRingQueueDispose_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeRingQueue_1_def.hpp"
//  Writing Method size for method: ::Unity::Collections::NativeRingQueueDispose.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeRingQueueDispose::*)()>(&::Unity::Collections::NativeRingQueueDispose::Dispose)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x630cc10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeRingQueueDispose>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeRingQueueDispose::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeRingQueueDispose>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_QueueData", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<int32_t>*", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeRingQueueDispose::NativeRingQueueDispose(::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<int32_t>* m_QueueData) noexcept {
  this->m_QueueData = m_QueueData;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeRingQueueDispose::NativeRingQueueDispose() {}
