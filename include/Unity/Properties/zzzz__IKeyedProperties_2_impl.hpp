#pragma once
// IWYU pragma private; include "Unity/Properties/IKeyedProperties_2.hpp"
#include "Unity/Properties/zzzz__IKeyedProperties_2_def.hpp"
#include "Unity/Properties/zzzz__IProperty_1_def.hpp"
template <typename TContainer, typename TKey>
inline bool Unity::Properties::IKeyedProperties_2<TContainer, TKey>::TryGetProperty(::ByRef<TContainer> container, TKey key, ::ByRef<::Unity::Properties::IProperty_1<TContainer>*> property) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IKeyedProperties_2<TContainer, TKey>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, container, key, property);
}
