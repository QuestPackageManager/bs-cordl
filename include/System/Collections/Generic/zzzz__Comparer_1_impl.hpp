#pragma once
// IWYU pragma private; include "System/Collections/Generic/Comparer_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__Comparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline void System::Collections::Generic::Comparer_1<T>::setStaticF_defaultComparer(::System::Collections::Generic::Comparer_1<T>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Comparer_1<T>*, "defaultComparer", ::System::Collections::Generic::Comparer_1<T>*>(
      std::forward<::System::Collections::Generic::Comparer_1<T>*>(value));
}
template <typename T> inline ::System::Collections::Generic::Comparer_1<T>* System::Collections::Generic::Comparer_1<T>::getStaticF_defaultComparer() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Comparer_1<T>*, "defaultComparer", ::System::Collections::Generic::Comparer_1<T>*>();
}
template <typename T> inline ::System::Collections::Generic::Comparer_1<T>* System::Collections::Generic::Comparer_1<T>::get_Default() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::Comparer_1<T>*>(), { "get_Default", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Comparer_1<T>*>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::Comparer_1<T>* System::Collections::Generic::Comparer_1<T>::CreateComparer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::Comparer_1<T>*>(), { "CreateComparer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Comparer_1<T>*>(nullptr, ___internal_method);
}
template <typename T> inline int32_t System::Collections::Generic::Comparer_1<T>::Compare(T x, T y) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::Comparer_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
template <typename T> inline int32_t System::Collections::Generic::Comparer_1<T>::System_Collections_IComparer_Compare(::System::Object* x, ::System::Object* y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::Comparer_1<T>*>(),
                                                           { "System.Collections.IComparer.Compare", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
template <typename T> inline void System::Collections::Generic::Comparer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::Comparer_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::Comparer_1<T>* System::Collections::Generic::Comparer_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::Comparer_1<T>*>());
}
/// @brief Convert operator to "::System::Collections::IComparer"
template <typename T> constexpr System::Collections::Generic::Comparer_1<T>::operator ::System::Collections::IComparer*() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IComparer"
template <typename T> constexpr ::System::Collections::IComparer* System::Collections::Generic::Comparer_1<T>::i___System__Collections__IComparer() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<T>"
template <typename T> constexpr System::Collections::Generic::Comparer_1<T>::operator ::System::Collections::Generic::IComparer_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IComparer_1<T>* System::Collections::Generic::Comparer_1<T>::i___System__Collections__Generic__IComparer_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::Comparer_1<T>::Comparer_1() {}
