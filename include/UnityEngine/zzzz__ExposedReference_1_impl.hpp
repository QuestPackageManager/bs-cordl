#pragma once
// IWYU pragma private; include "UnityEngine\ExposedReference_1.hpp"
#include "UnityEngine/zzzz__PropertyName_impl.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
#include "UnityEngine/zzzz__IExposedPropertyTable_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
template <typename T> inline T UnityEngine::ExposedReference_1<T>::Resolve(::UnityEngine::IExposedPropertyTable* resolver) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ExposedReference_1<T>>(), { "Resolve", {}, { ::i2c::type_of<::UnityEngine::IExposedPropertyTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, resolver);
}
// Ctor Parameters [CppParam { name: "exposedName", ty: "::UnityEngine::PropertyName", modifiers: "", def_value: Some("{}") }, CppParam { name: "defaultValue", ty: "::UnityW<::UnityEngine::Object>",
// modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::UnityEngine::ExposedReference_1<T>::ExposedReference_1(::UnityEngine::PropertyName exposedName, ::UnityW<::UnityEngine::Object> defaultValue) noexcept {
  this->exposedName = exposedName;
  this->defaultValue = defaultValue;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::ExposedReference_1<T>::ExposedReference_1() {}
