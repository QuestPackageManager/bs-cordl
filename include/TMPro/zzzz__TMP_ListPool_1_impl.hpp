#pragma once
// IWYU pragma private; include "TMPro/TMP_ListPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__TMP_ListPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_ListPool_1_def.hpp"
#include "TMPro/zzzz__TMP_ObjectPool_1_def.hpp"
template <typename T> inline void TMPro::TMP_ListPool_1___c<T>::setStaticF___9(::TMPro::TMP_ListPool_1___c<T>* value) {
  ::cordl_internals::setStaticField<::TMPro::TMP_ListPool_1___c<T>*, "<>9", ::TMPro::TMP_ListPool_1___c<T>*>(std::forward<::TMPro::TMP_ListPool_1___c<T>*>(value));
}
template <typename T> inline ::TMPro::TMP_ListPool_1___c<T>* TMPro::TMP_ListPool_1___c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::TMPro::TMP_ListPool_1___c<T>*, "<>9", ::TMPro::TMP_ListPool_1___c<T>*>();
}
template <typename T> inline void TMPro::TMP_ListPool_1___c<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_ListPool_1___c<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void TMPro::TMP_ListPool_1___c<T>::__cctor_b__3_0(::System::Collections::Generic::List_1<T>* l) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_ListPool_1___c<T>*>(), { "<.cctor>b__3_0", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, l);
}
template <typename T> inline ::TMPro::TMP_ListPool_1___c<T>* TMPro::TMP_ListPool_1___c<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_ListPool_1___c<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::TMPro::TMP_ListPool_1___c<T>::TMP_ListPool_1___c() {}
template <typename T> inline void TMPro::TMP_ListPool_1<T>::setStaticF_s_ListPool(::TMPro::TMP_ObjectPool_1<::System::Collections::Generic::List_1<T>*>* value) {
  ::cordl_internals::setStaticField<::TMPro::TMP_ObjectPool_1<::System::Collections::Generic::List_1<T>*>*, "s_ListPool", ::TMPro::TMP_ListPool_1<T>*>(
      std::forward<::TMPro::TMP_ObjectPool_1<::System::Collections::Generic::List_1<T>*>*>(value));
}
template <typename T> inline ::TMPro::TMP_ObjectPool_1<::System::Collections::Generic::List_1<T>*>* TMPro::TMP_ListPool_1<T>::getStaticF_s_ListPool() {
  return ::cordl_internals::getStaticField<::TMPro::TMP_ObjectPool_1<::System::Collections::Generic::List_1<T>*>*, "s_ListPool", ::TMPro::TMP_ListPool_1<T>*>();
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* TMPro::TMP_ListPool_1<T>::Get() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_ListPool_1<T>*>(), { "Get", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method);
}
template <typename T> inline void TMPro::TMP_ListPool_1<T>::Release(::System::Collections::Generic::List_1<T>* toRelease) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_ListPool_1<T>*>(), { "Release", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, toRelease);
}
// Ctor Parameters []
template <typename T> constexpr ::TMPro::TMP_ListPool_1<T>::TMP_ListPool_1() {}
