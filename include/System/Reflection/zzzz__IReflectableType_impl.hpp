#pragma once
// IWYU pragma private; include "System/Reflection/IReflectableType.hpp"
#include "System/Reflection/zzzz__IReflectableType_def.hpp"
#include "System/Reflection/zzzz__TypeInfo_def.hpp"
inline ::System::Reflection::TypeInfo* System::Reflection::IReflectableType::GetTypeInfo() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::IReflectableType*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::TypeInfo*, false>(this, ___internal_method);
}
