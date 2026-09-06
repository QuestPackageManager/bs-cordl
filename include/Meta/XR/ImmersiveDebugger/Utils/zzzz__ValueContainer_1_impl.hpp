#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Utils/ValueContainer_1.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__ValueStruct_1_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__ValueContainer_1_def.hpp"
template <typename T> constexpr ::ArrayW<::Meta::XR::ImmersiveDebugger::Utils::ValueStruct_1<T>>& Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>::__cordl_internal_get_Values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Values;
}
template <typename T> constexpr ::ArrayW<::Meta::XR::ImmersiveDebugger::Utils::ValueStruct_1<T>> const& Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>::__cordl_internal_get_Values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Values;
}
template <typename T> constexpr void Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>::__cordl_internal_set_Values(::ArrayW<::Meta::XR::ImmersiveDebugger::Utils::ValueStruct_1<T>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Values = value;
}
template <typename T> inline ::StringW Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>::get_Path() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>*>(), { "get_Path", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
template <typename T> inline ::UnityW<T> Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>::Load(::StringW assetName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>*>(), { "Load", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<T>>(nullptr, ___internal_method, assetName);
}
template <typename T> inline T Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>::get_Item(::StringW valueName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, valueName);
}
template <typename T> inline T Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>::GetValue(::StringW valueName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>*>(), { "GetValue", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, valueName);
}
template <typename T> inline void Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>* Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>::ValueContainer_1() {}
