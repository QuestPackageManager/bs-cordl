#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz___ThreadPoolWaitCallback_def.hpp"
//  Writing Method size for method: ::System::Threading::_ThreadPoolWaitCallback.PerformWaitCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Threading::_ThreadPoolWaitCallback::PerformWaitCallback)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x29a3d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::_ThreadPoolWaitCallback*>::get(),
                                                                               "PerformWaitCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool System::Threading::_ThreadPoolWaitCallback::PerformWaitCallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::_ThreadPoolWaitCallback*>::get(),
                                                                             "PerformWaitCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Threading::_ThreadPoolWaitCallback::_ThreadPoolWaitCallback() {}
