#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UxmlObjectListAttributeDescription_1.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectAttributeDescription_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectListAttributeDescription_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
template <typename T>
inline ::System::Collections::Generic::List_1<T>* UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<T>::GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                                                                                    ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(this, ___internal_method, bag, cc);
}
template <typename T> inline void UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<T>* UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<T>::UxmlObjectListAttributeDescription_1() {}
