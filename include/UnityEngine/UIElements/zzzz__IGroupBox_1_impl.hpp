#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IGroupBox_1.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupManager_impl.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBox_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBox_def.hpp"
/// @brief Convert operator to "::UnityEngine::UIElements::IGroupBox"
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::UnityEngine::UIElements::IGroupManager*>)
constexpr UnityEngine::UIElements::IGroupBox_1<T>::operator ::UnityEngine::UIElements::IGroupBox*() noexcept {
  return static_cast<::UnityEngine::UIElements::IGroupBox*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IGroupBox"
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::UnityEngine::UIElements::IGroupManager*>)
constexpr ::UnityEngine::UIElements::IGroupBox* UnityEngine::UIElements::IGroupBox_1<T>::i___UnityEngine__UIElements__IGroupBox() noexcept {
  return static_cast<::UnityEngine::UIElements::IGroupBox*>(static_cast<void*>(this));
}
