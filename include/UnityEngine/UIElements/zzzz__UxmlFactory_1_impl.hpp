#pragma once
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_1_def.hpp"
template <typename TCreatedType> inline ::UnityEngine::UIElements::UxmlFactory_1<TCreatedType>* UnityEngine::UIElements::UxmlFactory_1<TCreatedType>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UxmlFactory_1<TCreatedType>*>());
}
template <typename TCreatedType> inline void UnityEngine::UIElements::UxmlFactory_1<TCreatedType>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlFactory_1<TCreatedType>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TCreatedType> constexpr ::UnityEngine::UIElements::UxmlFactory_1<TCreatedType>::UxmlFactory_1() {}
