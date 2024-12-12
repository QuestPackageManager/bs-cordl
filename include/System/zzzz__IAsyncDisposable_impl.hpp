#pragma once
// IWYU pragma private; include "System/IAsyncDisposable.hpp"
#include "System/zzzz__IAsyncDisposable_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
inline ::System::Threading::Tasks::ValueTask System::IAsyncDisposable::DisposeAsync() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IAsyncDisposable*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask, false>(this, ___internal_method);
}
