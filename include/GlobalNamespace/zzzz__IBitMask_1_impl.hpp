#pragma once
#include "GlobalNamespace/zzzz__IBitMask_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
/// @brief Convert operator to "::System::IEquatable_1<T>"
template <typename T> constexpr GlobalNamespace::IBitMask_1<T>::operator ::System::IEquatable_1<T>*() noexcept {
  return static_cast<::System::IEquatable_1<T>*>(static_cast<void*>(this));
}
template <typename T> inline int32_t GlobalNamespace::IBitMask_1<T>::get_bitCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBitMask_1<T>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline T GlobalNamespace::IBitMask_1<T>::SetBits(int32_t offset, uint64_t bits) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBitMask_1<T>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, offset, bits);
}
template <typename T> inline uint64_t GlobalNamespace::IBitMask_1<T>::GetBits(int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBitMask_1<T>*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, offset, count);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
