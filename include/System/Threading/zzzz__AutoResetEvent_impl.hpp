#pragma once
// IWYU pragma private; include "System/Threading/AutoResetEvent.hpp"
#include "System/Threading/zzzz__EventWaitHandle_impl.hpp"
#include "System/Threading/zzzz__AutoResetEvent_def.hpp"
//  Writing Method size for method: ::System::Threading::AutoResetEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::AutoResetEvent::*)(bool)>(&::System::Threading::AutoResetEvent::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e4ced0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AutoResetEvent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void System::Threading::AutoResetEvent::_ctor(bool initialState) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AutoResetEvent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialState);
}
inline ::System::Threading::AutoResetEvent* System::Threading::AutoResetEvent::New_ctor(bool initialState) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::AutoResetEvent*>(initialState));
}
// Ctor Parameters []
constexpr ::System::Threading::AutoResetEvent::AutoResetEvent() {}
