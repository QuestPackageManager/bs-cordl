#pragma once
// IWYU pragma private; include "Newtonsoft\Json\IArrayPool_1.hpp"
#include "Newtonsoft/Json/zzzz__IArrayPool_1_def.hpp"
template <typename T> inline ::ArrayW<T> Newtonsoft::Json::IArrayPool_1<T>::Rent(int32_t minimumLength) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::IArrayPool_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method, minimumLength);
}
template <typename T> inline void Newtonsoft::Json::IArrayPool_1<T>::Return(::ArrayW<T> array) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::IArrayPool_1<T>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array);
}
