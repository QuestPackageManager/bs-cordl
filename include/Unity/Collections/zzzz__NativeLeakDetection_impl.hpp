#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeLeakDetection_def.hpp"
//  Writing Method size for method: ::Unity::Collections::NativeLeakDetection.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::Collections::NativeLeakDetection::Initialize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2c9ea40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeLeakDetection*>::get(), "Initialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeLeakDetection::setStaticF_s_NativeLeakDetectionMode(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_NativeLeakDetectionMode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeLeakDetection*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Unity::Collections::NativeLeakDetection::getStaticF_s_NativeLeakDetectionMode() {
  return ::cordl_internals::getStaticField<int32_t, "s_NativeLeakDetectionMode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeLeakDetection*>::get>();
}
inline void Unity::Collections::NativeLeakDetection::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeLeakDetection*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeLeakDetection::NativeLeakDetection() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
