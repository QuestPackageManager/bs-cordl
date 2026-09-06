#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/IJEnumerable_1.hpp"
#include "Newtonsoft/Json/Linq/zzzz__IJEnumerable_1_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::IJEnumerable_1<T>::get_Item(::System::Object* key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::IJEnumerable_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(this, ___internal_method, key);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr Newtonsoft::Json::Linq::IJEnumerable_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* Newtonsoft::Json::Linq::IJEnumerable_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr Newtonsoft::Json::Linq::IJEnumerable_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* Newtonsoft::Json::Linq::IJEnumerable_1<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
