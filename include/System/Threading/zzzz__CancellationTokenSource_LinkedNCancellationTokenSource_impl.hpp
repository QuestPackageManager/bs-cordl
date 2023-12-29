#pragma once
#include "System/Threading/zzzz__CancellationTokenSource_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_LinkedNCancellationTokenSource_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
inline void System::Threading::__CancellationTokenSource__LinkedNCancellationTokenSource::setStaticF_s_linkedTokenCancelDelegate(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "s_linkedTokenCancelDelegate",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__CancellationTokenSource__LinkedNCancellationTokenSource*>::get>(
      std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Threading::__CancellationTokenSource__LinkedNCancellationTokenSource::getStaticF_s_linkedTokenCancelDelegate() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "s_linkedTokenCancelDelegate",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__CancellationTokenSource__LinkedNCancellationTokenSource*>::get>();
}
// Ctor Parameters []
constexpr ::System::Threading::__CancellationTokenSource__LinkedNCancellationTokenSource::__CancellationTokenSource__LinkedNCancellationTokenSource() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
