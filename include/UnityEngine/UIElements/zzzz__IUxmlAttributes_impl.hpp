#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IUxmlAttributes.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
inline bool UnityEngine::UIElements::IUxmlAttributes::TryGetAttributeValue(::StringW attributeName, ::ByRef<::StringW> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IUxmlAttributes*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, attributeName, value);
}
