#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IBaseUxmlObjectFactory.hpp"
#include "UnityEngine/UIElements/zzzz__IBaseUxmlFactory_impl.hpp"
#include "UnityEngine/UIElements/zzzz__IBaseUxmlObjectFactory_def.hpp"
/// @brief Convert operator to "::UnityEngine::UIElements::IBaseUxmlFactory"
constexpr UnityEngine::UIElements::IBaseUxmlObjectFactory::operator ::UnityEngine::UIElements::IBaseUxmlFactory*() noexcept {
  return static_cast<::UnityEngine::UIElements::IBaseUxmlFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IBaseUxmlFactory"
constexpr ::UnityEngine::UIElements::IBaseUxmlFactory* UnityEngine::UIElements::IBaseUxmlObjectFactory::i___UnityEngine__UIElements__IBaseUxmlFactory() noexcept {
  return static_cast<::UnityEngine::UIElements::IBaseUxmlFactory*>(static_cast<void*>(this));
}
