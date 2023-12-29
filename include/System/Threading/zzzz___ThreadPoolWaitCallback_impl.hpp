#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz___ThreadPoolWaitCallback_def.hpp"
//  Writing Method size for method: ::System::Threading::_ThreadPoolWaitCallback.PerformWaitCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Threading::_ThreadPoolWaitCallback::PerformWaitCallback)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24c2288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::_ThreadPoolWaitCallback*>::get(),
                                                                               "PerformWaitCallback", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline bool System::Threading::_ThreadPoolWaitCallback::PerformWaitCallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::_ThreadPoolWaitCallback*>::get(),
                                                                             "PerformWaitCallback", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Threading::_ThreadPoolWaitCallback::_ThreadPoolWaitCallback() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
