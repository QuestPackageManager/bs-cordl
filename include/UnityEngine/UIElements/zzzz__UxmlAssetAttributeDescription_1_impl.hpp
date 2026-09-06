#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlAssetAttributeDescription_1.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAssetAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
template <typename T> inline void UnityEngine::UIElements::UxmlAssetAttributeDescription_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAssetAttributeDescription_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline T UnityEngine::UIElements::UxmlAssetAttributeDescription_1<T>::GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UxmlAssetAttributeDescription_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, bag, cc);
}
template <typename T>
inline bool UnityEngine::UIElements::UxmlAssetAttributeDescription_1<T>::TryGetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc,
                                                                                            ::by_ref<T> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAssetAttributeDescription_1<T>*>(),
                          { "TryGetValueFromBag",
                            {},
                            { ::i2c::type_of<::UnityEngine::UIElements::IUxmlAttributes*>(), ::i2c::type_of<::UnityEngine::UIElements::CreationContext>(), ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bag, cc, value);
}
template <typename T> inline ::UnityEngine::UIElements::UxmlAssetAttributeDescription_1<T>* UnityEngine::UIElements::UxmlAssetAttributeDescription_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UxmlAssetAttributeDescription_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::UxmlAssetAttributeDescription_1<T>::UxmlAssetAttributeDescription_1() {}
