#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlObjectAttributeDescription_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
template <typename T> constexpr T& UnityEngine::UIElements::UxmlObjectAttributeDescription_1<T>::__cordl_internal_get__defaultValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValue_k__BackingField;
}
template <typename T> constexpr T const& UnityEngine::UIElements::UxmlObjectAttributeDescription_1<T>::__cordl_internal_get__defaultValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValue_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::UxmlObjectAttributeDescription_1<T>::__cordl_internal_set__defaultValue_k__BackingField(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____defaultValue_k__BackingField, value);
}
template <typename T> inline T UnityEngine::UIElements::UxmlObjectAttributeDescription_1<T>::get_defaultValue() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<T>*>::get(), "get_defaultValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T>
inline T UnityEngine::UIElements::UxmlObjectAttributeDescription_1<T>::GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, bag, cc);
}
template <typename T> inline void UnityEngine::UIElements::UxmlObjectAttributeDescription_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<T>* UnityEngine::UIElements::UxmlObjectAttributeDescription_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<T>::UxmlObjectAttributeDescription_1() {}
