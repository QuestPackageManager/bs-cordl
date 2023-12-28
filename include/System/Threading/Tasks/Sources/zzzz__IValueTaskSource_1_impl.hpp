#pragma once
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceStatus_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceOnCompletedFlags_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template <typename TResult> inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>::GetStatus(int16_t token) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Sources::ValueTaskSourceStatus, false>(this, ___internal_method, token);
}
template <typename TResult>
inline void System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>::OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, int16_t token,
                                                                                        ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation, state, token, flags);
}
template <typename TResult> inline TResult System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>::GetResult(int16_t token) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method, token);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
