#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/IAttributes.hpp"
#include "Unity/Properties/Internal/zzzz__IAttributes_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
inline void Unity::Properties::Internal::IAttributes::AddAttribute(::System::Attribute* attribute) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::IAttributes*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attribute);
}
inline void Unity::Properties::Internal::IAttributes::AddAttributes(::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* attributes) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::IAttributes*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributes);
}
