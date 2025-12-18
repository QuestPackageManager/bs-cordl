#pragma once
// IWYU pragma private; include "Unity/Collections/NativeQueueDispose.hpp"
#include "Unity/Collections/zzzz__NativeQueueDispose_def.hpp"
#include "Unity/Collections/zzzz__UnsafeQueue_1_def.hpp"
//  Writing Method size for method: ::Unity::Collections::NativeQueueDispose.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeQueueDispose::*)()>(&::Unity::Collections::NativeQueueDispose::Dispose)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x630cb70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeQueueDispose>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeQueueDispose::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeQueueDispose>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_QueueData", ty: "::Unity::Collections::UnsafeQueue_1<int32_t>*", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeQueueDispose::NativeQueueDispose(::Unity::Collections::UnsafeQueue_1<int32_t>* m_QueueData) noexcept {
  this->m_QueueData = m_QueueData;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeQueueDispose::NativeQueueDispose() {}
