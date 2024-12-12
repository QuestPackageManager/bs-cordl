#pragma once
// IWYU pragma private; include "System/ICustomFormatter.hpp"
#include "System/zzzz__ICustomFormatter_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
inline ::StringW System::ICustomFormatter::Format(::StringW format, ::System::Object* arg, ::System::IFormatProvider* formatProvider) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ICustomFormatter*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, format, arg, formatProvider);
}
