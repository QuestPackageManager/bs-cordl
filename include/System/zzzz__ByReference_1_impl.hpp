#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__ByReference_1_def.hpp"
template <typename T> inline void System::ByReference_1<T>::_ctor(ByRef<T> value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ByReference_1<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ByRef<T> System::ByReference_1<T>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ByReference_1<T>>::get(), "get_Value",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<ByRef<T>, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_value", ty: "void*", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::System::ByReference_1<T>::ByReference_1(void* _value) noexcept {
  this->_value = _value;
}
// Ctor Parameters []
template <typename T> constexpr ::System::ByReference_1<T>::ByReference_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
