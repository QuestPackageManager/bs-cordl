#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlTypeAttributeDescription_1.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlTypeAttributeDescription_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
template <typename TBase> inline void UnityEngine::UIElements::UxmlTypeAttributeDescription_1<TBase>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<TBase>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TBase>
inline ::System::Type* UnityEngine::UIElements::UxmlTypeAttributeDescription_1<TBase>::GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<TBase>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, bag, cc);
}
template <typename TBase> inline ::System::Type* UnityEngine::UIElements::UxmlTypeAttributeDescription_1<TBase>::ConvertValueToType(::StringW v, ::System::Type* defaultValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<TBase>*>(),
                                                                                         { "ConvertValueToType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, v, defaultValue);
}
template <typename TBase> inline ::System::Type* UnityEngine::UIElements::UxmlTypeAttributeDescription_1<TBase>::_GetValueFromBag_b__3_0(::StringW s, ::System::Type* type1) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<TBase>*>(),
                                                                                         { "<GetValueFromBag>b__3_0", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, s, type1);
}
template <typename TBase> inline ::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<TBase>* UnityEngine::UIElements::UxmlTypeAttributeDescription_1<TBase>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<TBase>*>());
}
// Ctor Parameters []
template <typename TBase> constexpr ::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<TBase>::UxmlTypeAttributeDescription_1() {}
