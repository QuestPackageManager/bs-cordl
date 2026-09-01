#pragma once
// IWYU pragma private; include "System\Threading\AsyncLocalValueChangedArgs_1.hpp"
#include "System/Threading/zzzz__AsyncLocalValueChangedArgs_1_def.hpp"
template <typename T> inline T System::Threading::AsyncLocalValueChangedArgs_1<T>::get_CurrentValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::AsyncLocalValueChangedArgs_1<T>>(), { "get_CurrentValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline void System::Threading::AsyncLocalValueChangedArgs_1<T>::_ctor(T previousValue, T currentValue, bool contextChanged) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::AsyncLocalValueChangedArgs_1<T>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<T>(), ::i2c::type_of<T>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, previousValue, currentValue, contextChanged);
}
// Ctor Parameters [CppParam { name: "_PreviousValue_k__BackingField", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "_CurrentValue_k__BackingField", ty: "T", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_ThreadContextChanged_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::System::Threading::AsyncLocalValueChangedArgs_1<T>::AsyncLocalValueChangedArgs_1(T _PreviousValue_k__BackingField, T _CurrentValue_k__BackingField,
                                                                                             bool _ThreadContextChanged_k__BackingField) noexcept {
  this->_PreviousValue_k__BackingField = _PreviousValue_k__BackingField;
  this->_CurrentValue_k__BackingField = _CurrentValue_k__BackingField;
  this->_ThreadContextChanged_k__BackingField = _ThreadContextChanged_k__BackingField;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Threading::AsyncLocalValueChangedArgs_1<T>::AsyncLocalValueChangedArgs_1() {}
