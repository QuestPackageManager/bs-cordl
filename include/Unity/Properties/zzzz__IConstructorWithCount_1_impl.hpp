#pragma once
// IWYU pragma private; include "Unity\Properties\IConstructorWithCount_1.hpp"
#include "Unity/Properties/zzzz__IConstructorWithCount_1_def.hpp"
#include "Unity/Properties/zzzz__IConstructor_def.hpp"
template <typename T> inline T Unity::Properties::IConstructorWithCount_1<T>::InstantiateWithCount(int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IConstructorWithCount_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, count);
}
/// @brief Convert operator to "::Unity::Properties::IConstructor"
template <typename T> constexpr Unity::Properties::IConstructorWithCount_1<T>::operator ::Unity::Properties::IConstructor*() noexcept {
  return static_cast<::Unity::Properties::IConstructor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IConstructor"
template <typename T> constexpr ::Unity::Properties::IConstructor* Unity::Properties::IConstructorWithCount_1<T>::i___Unity__Properties__IConstructor() noexcept {
  return static_cast<::Unity::Properties::IConstructor*>(static_cast<void*>(this));
}
