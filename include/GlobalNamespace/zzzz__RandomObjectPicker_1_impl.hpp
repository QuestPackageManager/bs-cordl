#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomObjectPicker_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RandomObjectPicker_1_def.hpp"
template <typename T> constexpr ::ArrayW<T, ::Array<T>*>& GlobalNamespace::RandomObjectPicker_1<T>::__cordl_internal_get__objects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objects;
}
template <typename T> constexpr ::ArrayW<T, ::Array<T>*> const& GlobalNamespace::RandomObjectPicker_1<T>::__cordl_internal_get__objects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objects;
}
template <typename T> constexpr void GlobalNamespace::RandomObjectPicker_1<T>::__cordl_internal_set__objects(::ArrayW<T, ::Array<T>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____objects, value);
}
template <typename T> constexpr float_t& GlobalNamespace::RandomObjectPicker_1<T>::__cordl_internal_get__lastPickTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPickTime;
}
template <typename T> constexpr float_t const& GlobalNamespace::RandomObjectPicker_1<T>::__cordl_internal_get__lastPickTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPickTime;
}
template <typename T> constexpr void GlobalNamespace::RandomObjectPicker_1<T>::__cordl_internal_set__lastPickTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastPickTime = value;
}
template <typename T> constexpr float_t& GlobalNamespace::RandomObjectPicker_1<T>::__cordl_internal_get__minimumPickInterval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minimumPickInterval;
}
template <typename T> constexpr float_t const& GlobalNamespace::RandomObjectPicker_1<T>::__cordl_internal_get__minimumPickInterval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minimumPickInterval;
}
template <typename T> constexpr void GlobalNamespace::RandomObjectPicker_1<T>::__cordl_internal_set__minimumPickInterval(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minimumPickInterval = value;
}
template <typename T> inline void GlobalNamespace::RandomObjectPicker_1<T>::_ctor(T obj, float_t minimumPickInterval) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomObjectPicker_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, minimumPickInterval);
}
template <typename T> inline void GlobalNamespace::RandomObjectPicker_1<T>::_ctor(::ArrayW<T, ::Array<T>*> objects, float_t minimumPickInterval) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomObjectPicker_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objects, minimumPickInterval);
}
template <typename T> inline T GlobalNamespace::RandomObjectPicker_1<T>::PickRandomObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomObjectPicker_1<T>*>::get(),
                                                                             "PickRandomObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::RandomObjectPicker_1<T>* GlobalNamespace::RandomObjectPicker_1<T>::New_ctor(T obj, float_t minimumPickInterval) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RandomObjectPicker_1<T>*>(obj, minimumPickInterval));
}
template <typename T> inline ::GlobalNamespace::RandomObjectPicker_1<T>* GlobalNamespace::RandomObjectPicker_1<T>::New_ctor(::ArrayW<T, ::Array<T>*> objects, float_t minimumPickInterval) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RandomObjectPicker_1<T>*>(objects, minimumPickInterval));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::RandomObjectPicker_1<T>::RandomObjectPicker_1() {}
