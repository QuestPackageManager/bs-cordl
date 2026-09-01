#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ObjectParameter_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ObjectParameter_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__ObjectParameter_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_def.hpp"
template <typename T> inline void UnityEngine::Rendering::ObjectParameter_1___c<T>::setStaticF___9(::UnityEngine::Rendering::ObjectParameter_1___c<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ObjectParameter_1___c<T>*, "<>9", ::UnityEngine::Rendering::ObjectParameter_1___c<T>*>(
      std::forward<::UnityEngine::Rendering::ObjectParameter_1___c<T>*>(value));
}
template <typename T> inline ::UnityEngine::Rendering::ObjectParameter_1___c<T>* UnityEngine::Rendering::ObjectParameter_1___c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ObjectParameter_1___c<T>*, "<>9", ::UnityEngine::Rendering::ObjectParameter_1___c<T>*>();
}
template <typename T> inline void UnityEngine::Rendering::ObjectParameter_1___c<T>::setStaticF___9__9_0(::System::Func_2<::System::Reflection::FieldInfo*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::FieldInfo*, bool>*, "<>9__9_0", ::UnityEngine::Rendering::ObjectParameter_1___c<T>*>(
      std::forward<::System::Func_2<::System::Reflection::FieldInfo*, bool>*>(value));
}
template <typename T> inline ::System::Func_2<::System::Reflection::FieldInfo*, bool>* UnityEngine::Rendering::ObjectParameter_1___c<T>::getStaticF___9__9_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::FieldInfo*, bool>*, "<>9__9_0", ::UnityEngine::Rendering::ObjectParameter_1___c<T>*>();
}
template <typename T> inline void UnityEngine::Rendering::ObjectParameter_1___c<T>::setStaticF___9__9_1(::System::Func_2<::System::Reflection::FieldInfo*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::FieldInfo*, int32_t>*, "<>9__9_1", ::UnityEngine::Rendering::ObjectParameter_1___c<T>*>(
      std::forward<::System::Func_2<::System::Reflection::FieldInfo*, int32_t>*>(value));
}
template <typename T> inline ::System::Func_2<::System::Reflection::FieldInfo*, int32_t>* UnityEngine::Rendering::ObjectParameter_1___c<T>::getStaticF___9__9_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::FieldInfo*, int32_t>*, "<>9__9_1", ::UnityEngine::Rendering::ObjectParameter_1___c<T>*>();
}
template <typename T> inline void UnityEngine::Rendering::ObjectParameter_1___c<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObjectParameter_1___c<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::Rendering::ObjectParameter_1___c<T>::_set_value_b__9_0(::System::Reflection::FieldInfo* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObjectParameter_1___c<T>*>(), { "<set_value>b__9_0", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
template <typename T> inline int32_t UnityEngine::Rendering::ObjectParameter_1___c<T>::_set_value_b__9_1(::System::Reflection::FieldInfo* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObjectParameter_1___c<T>*>(), { "<set_value>b__9_1", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, t);
}
template <typename T> inline ::UnityEngine::Rendering::ObjectParameter_1___c<T>* UnityEngine::Rendering::ObjectParameter_1___c<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ObjectParameter_1___c<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::ObjectParameter_1___c<T>::ObjectParameter_1___c() {}
template <typename T>
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>*&
UnityEngine::Rendering::ObjectParameter_1<T>::__cordl_internal_get__parameters_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameters_k__BackingField;
}
template <typename T>
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* const&
UnityEngine::Rendering::ObjectParameter_1<T>::__cordl_internal_get__parameters_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameters_k__BackingField;
}
template <typename T>
constexpr void UnityEngine::Rendering::ObjectParameter_1<T>::__cordl_internal_set__parameters_k__BackingField(
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parameters_k__BackingField = value;
}
template <typename T> inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* UnityEngine::Rendering::ObjectParameter_1<T>::get_parameters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObjectParameter_1<T>*>(), { "get_parameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>*>(this, ___internal_method);
}
template <typename T>
inline void UnityEngine::Rendering::ObjectParameter_1<T>::set_parameters(::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObjectParameter_1<T>*>(),
                                              { "set_parameters", {}, { ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline bool UnityEngine::Rendering::ObjectParameter_1<T>::get_overrideState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObjectParameter_1<T>*>(), { "get_overrideState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::ObjectParameter_1<T>::set_overrideState(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObjectParameter_1<T>*>(), { "set_overrideState", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline T UnityEngine::Rendering::ObjectParameter_1<T>::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObjectParameter_1<T>*>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::ObjectParameter_1<T>::set_value(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObjectParameter_1<T>*>(), { "set_value", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Rendering::ObjectParameter_1<T>::_ctor(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObjectParameter_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Rendering::ObjectParameter_1<T>::Interp(::UnityEngine::Rendering::VolumeParameter* from, ::UnityEngine::Rendering::VolumeParameter* to, float_t t) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::ObjectParameter_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, t);
}
template <typename T> inline ::UnityEngine::Rendering::VolumeParameter* UnityEngine::Rendering::ObjectParameter_1<T>::_set_value_b__9_2(::System::Reflection::FieldInfo* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObjectParameter_1<T>*>(), { "<set_value>b__9_2", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::VolumeParameter*>(this, ___internal_method, t);
}
template <typename T> inline ::UnityEngine::Rendering::ObjectParameter_1<T>* UnityEngine::Rendering::ObjectParameter_1<T>::New_ctor(T value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ObjectParameter_1<T>*>(value));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::ObjectParameter_1<T>::ObjectParameter_1() {}
