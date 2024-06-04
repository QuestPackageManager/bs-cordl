#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/ICriticalNotifyCompletion.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::ICriticalNotifyCompletion.UnsafeOnCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::ICriticalNotifyCompletion::*)(::System::Action*)>(
    &::System::Runtime::CompilerServices::ICriticalNotifyCompletion::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>::get(), 0));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr System::Runtime::CompilerServices::ICriticalNotifyCompletion::operator ::System::Runtime::CompilerServices::INotifyCompletion*() noexcept {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* System::Runtime::CompilerServices::ICriticalNotifyCompletion::i___System__Runtime__CompilerServices__INotifyCompletion() noexcept {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(this));
}
inline void System::Runtime::CompilerServices::ICriticalNotifyCompletion::UnsafeOnCompleted(::System::Action* continuation) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation);
}
