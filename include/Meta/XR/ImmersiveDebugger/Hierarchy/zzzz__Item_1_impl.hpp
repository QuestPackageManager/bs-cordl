#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\Hierarchy\Item_1.hpp"
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__Item_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__Item_1_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> constexpr T& Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>::__cordl_internal_get__owner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____owner;
}
template <typename T> constexpr T const& Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>::__cordl_internal_get__owner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____owner;
}
template <typename T> constexpr void Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>::__cordl_internal_set__owner(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____owner = value;
}
template <typename T> inline ::System::Object* Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>::get_Owner() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename T> inline T Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>::get_TypedOwner() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>*>(), { "get_TypedOwner", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>::SetOwner(T owner) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>*>(), { "SetOwner", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
template <typename T> inline ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>::BuildHandle() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>(this, ___internal_method);
}
template <typename T> inline void Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>* Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>::Item_1() {}
