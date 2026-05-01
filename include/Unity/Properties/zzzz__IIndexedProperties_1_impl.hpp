#pragma once
// IWYU pragma private; include "Unity/Properties/IIndexedProperties_1.hpp"
#include "Unity/Properties/zzzz__IIndexedProperties_1_def.hpp"
#include "Unity/Properties/zzzz__IProperty_1_def.hpp"
template <typename TContainer>
inline bool Unity::Properties::IIndexedProperties_1<TContainer>::TryGetProperty(::ByRef<TContainer> container, int32_t index, ::ByRef<::Unity::Properties::IProperty_1<TContainer>*> property) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IIndexedProperties_1<TContainer>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, container, index, property);
}
