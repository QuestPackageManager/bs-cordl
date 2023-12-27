#pragma once
#include "HoudiniEngineUnity/zzzz__IEquivableWrapperClass_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<T>"
template <typename T> constexpr HoudiniEngineUnity::IEquivableWrapperClass_1<T>::operator ::HoudiniEngineUnity::IEquivable_1<T>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<T>*>(static_cast<void*>(this));
}
template <typename T> inline bool HoudiniEngineUnity::IEquivableWrapperClass_1<T>::IsNull() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::IEquivableWrapperClass_1<T>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
