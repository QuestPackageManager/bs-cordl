#pragma once
// IWYU pragma private; include "Unity/Burst/IFunctionPointer.hpp"
#include "Unity/Burst/zzzz__IFunctionPointer_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
inline ::Unity::Burst::IFunctionPointer* Unity::Burst::IFunctionPointer::FromIntPtr(::System::IntPtr ptr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::IFunctionPointer*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::IFunctionPointer*, false>(this, ___internal_method, ptr);
}
