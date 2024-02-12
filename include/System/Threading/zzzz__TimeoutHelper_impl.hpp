#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__TimeoutHelper_def.hpp"
//  Writing Method size for method: ::System::Threading::TimeoutHelper.GetTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)()>(&::System::Threading::TimeoutHelper::GetTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2636af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::TimeoutHelper*>::get(), "GetTime",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::TimeoutHelper.UpdateTimeOut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(uint32_t, int32_t)>(&::System::Threading::TimeoutHelper::UpdateTimeOut)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2636bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::TimeoutHelper*>::get(), "UpdateTimeOut", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline uint32_t System::Threading::TimeoutHelper::GetTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::TimeoutHelper*>::get(), "GetTime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method);
}
inline int32_t System::Threading::TimeoutHelper::UpdateTimeOut(uint32_t startTime, int32_t originalWaitMillisecondsTimeout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::TimeoutHelper*>::get(), "UpdateTimeOut", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, startTime, originalWaitMillisecondsTimeout);
}
// Ctor Parameters []
constexpr ::System::Threading::TimeoutHelper::TimeoutHelper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
