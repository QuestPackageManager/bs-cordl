#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IUxmlObjectFactory_1.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlObjectFactory_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IBaseUxmlFactory_def.hpp"
#include "UnityEngine/UIElements/zzzz__IBaseUxmlObjectFactory_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
template <typename T> inline T UnityEngine::UIElements::IUxmlObjectFactory_1<T>::CreateObject(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IUxmlObjectFactory_1<T>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, bag, cc);
}
/// @brief Convert operator to "::UnityEngine::UIElements::IBaseUxmlObjectFactory"
template <typename T> constexpr UnityEngine::UIElements::IUxmlObjectFactory_1<T>::operator ::UnityEngine::UIElements::IBaseUxmlObjectFactory*() noexcept {
  return static_cast<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IBaseUxmlObjectFactory"
template <typename T> constexpr ::UnityEngine::UIElements::IBaseUxmlObjectFactory* UnityEngine::UIElements::IUxmlObjectFactory_1<T>::i___UnityEngine__UIElements__IBaseUxmlObjectFactory() noexcept {
  return static_cast<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IBaseUxmlFactory"
template <typename T> constexpr UnityEngine::UIElements::IUxmlObjectFactory_1<T>::operator ::UnityEngine::UIElements::IBaseUxmlFactory*() noexcept {
  return static_cast<::UnityEngine::UIElements::IBaseUxmlFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IBaseUxmlFactory"
template <typename T> constexpr ::UnityEngine::UIElements::IBaseUxmlFactory* UnityEngine::UIElements::IUxmlObjectFactory_1<T>::i___UnityEngine__UIElements__IBaseUxmlFactory() noexcept {
  return static_cast<::UnityEngine::UIElements::IBaseUxmlFactory*>(static_cast<void*>(this));
}
