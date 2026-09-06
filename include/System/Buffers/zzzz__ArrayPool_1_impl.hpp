#pragma once
// IWYU pragma private; include "System/Buffers/ArrayPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Buffers/zzzz__ArrayPool_1_def.hpp"
template <typename T> inline void System::Buffers::ArrayPool_1<T>::setStaticF__Shared_k__BackingField(::System::Buffers::ArrayPool_1<T>* value) {
  ::cordl_internals::setStaticField<::System::Buffers::ArrayPool_1<T>*, "<Shared>k__BackingField", ::System::Buffers::ArrayPool_1<T>*>(std::forward<::System::Buffers::ArrayPool_1<T>*>(value));
}
template <typename T> inline ::System::Buffers::ArrayPool_1<T>* System::Buffers::ArrayPool_1<T>::getStaticF__Shared_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Buffers::ArrayPool_1<T>*, "<Shared>k__BackingField", ::System::Buffers::ArrayPool_1<T>*>();
}
template <typename T> inline ::System::Buffers::ArrayPool_1<T>* System::Buffers::ArrayPool_1<T>::get_Shared() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::ArrayPool_1<T>*>(), { "get_Shared", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Buffers::ArrayPool_1<T>*>(nullptr, ___internal_method);
}
template <typename T> inline ::ArrayW<T> System::Buffers::ArrayPool_1<T>::Rent(int32_t minimumLength) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Buffers::ArrayPool_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method, minimumLength);
}
template <typename T> inline void System::Buffers::ArrayPool_1<T>::Return(::ArrayW<T> array, bool clearArray) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Buffers::ArrayPool_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, clearArray);
}
template <typename T> inline void System::Buffers::ArrayPool_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::ArrayPool_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Buffers::ArrayPool_1<T>* System::Buffers::ArrayPool_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Buffers::ArrayPool_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::System::Buffers::ArrayPool_1<T>::ArrayPool_1() {}
