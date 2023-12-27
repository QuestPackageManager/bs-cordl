#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RandomObjectPicker_1_def.hpp"
template <typename T> constexpr ::ArrayW<T, ::Array<T>*>& GlobalNamespace::RandomObjectPicker_1<T>::__get__objects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____objects;
}
template <typename T> constexpr ::ArrayW<T, ::Array<T>*> const& GlobalNamespace::RandomObjectPicker_1<T>::__get__objects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____objects;
}
template <typename T> constexpr void GlobalNamespace::RandomObjectPicker_1<T>::__set__objects(::ArrayW<T, ::Array<T>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____objects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr float_t& GlobalNamespace::RandomObjectPicker_1<T>::__get__lastPickTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lastPickTime;
}
template <typename T> constexpr float_t const& GlobalNamespace::RandomObjectPicker_1<T>::__get__lastPickTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lastPickTime;
}
template <typename T> constexpr void GlobalNamespace::RandomObjectPicker_1<T>::__set__lastPickTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____lastPickTime = value;
}
template <typename T> constexpr float_t& GlobalNamespace::RandomObjectPicker_1<T>::__get__minimumPickInterval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minimumPickInterval;
}
template <typename T> constexpr float_t const& GlobalNamespace::RandomObjectPicker_1<T>::__get__minimumPickInterval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minimumPickInterval;
}
template <typename T> constexpr void GlobalNamespace::RandomObjectPicker_1<T>::__set__minimumPickInterval(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____minimumPickInterval = value;
}
template <typename T> inline ::GlobalNamespace::RandomObjectPicker_1<T>* GlobalNamespace::RandomObjectPicker_1<T>::New_ctor(T obj, float_t minimumPickInterval) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RandomObjectPicker_1<T>*>(obj, minimumPickInterval));
}
template <typename T> inline void GlobalNamespace::RandomObjectPicker_1<T>::_ctor(T obj, float_t minimumPickInterval) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomObjectPicker_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, minimumPickInterval);
}
template <typename T> inline ::GlobalNamespace::RandomObjectPicker_1<T>* GlobalNamespace::RandomObjectPicker_1<T>::New_ctor(::ArrayW<T, ::Array<T>*> objects, float_t minimumPickInterval) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RandomObjectPicker_1<T>*>(objects, minimumPickInterval));
}
template <typename T> inline void GlobalNamespace::RandomObjectPicker_1<T>::_ctor(::ArrayW<T, ::Array<T>*> objects, float_t minimumPickInterval) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomObjectPicker_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objects, minimumPickInterval);
}
template <typename T> inline T GlobalNamespace::RandomObjectPicker_1<T>::PickRandomObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomObjectPicker_1<T>*>::get(),
                                                                             "PickRandomObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::RandomObjectPicker_1<T>::RandomObjectPicker_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
