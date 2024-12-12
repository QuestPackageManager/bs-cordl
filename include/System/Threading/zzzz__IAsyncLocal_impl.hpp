#pragma once
// IWYU pragma private; include "System/Threading/IAsyncLocal.hpp"
#include "System/Threading/zzzz__IAsyncLocal_def.hpp"
#include "System/zzzz__Object_def.hpp"
inline void System::Threading::IAsyncLocal::OnValueChanged(::System::Object* previousValue, ::System::Object* currentValue, bool contextChanged) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::IAsyncLocal*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, previousValue, currentValue, contextChanged);
}
