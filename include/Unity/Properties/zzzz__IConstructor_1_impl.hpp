#pragma once
// IWYU pragma private; include "Unity/Properties/IConstructor_1.hpp"
#include "Unity/Properties/zzzz__IConstructor_1_def.hpp"
#include "Unity/Properties/zzzz__IConstructor_def.hpp"
/// @brief Convert operator to "::Unity::Properties::IConstructor"
template <typename T> constexpr Unity::Properties::IConstructor_1<T>::operator ::Unity::Properties::IConstructor*() noexcept {
  return static_cast<::Unity::Properties::IConstructor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IConstructor"
template <typename T> constexpr ::Unity::Properties::IConstructor* Unity::Properties::IConstructor_1<T>::i___Unity__Properties__IConstructor() noexcept {
  return static_cast<::Unity::Properties::IConstructor*>(static_cast<void*>(this));
}
template <typename T> inline T Unity::Properties::IConstructor_1<T>::Instantiate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IConstructor_1<T>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
