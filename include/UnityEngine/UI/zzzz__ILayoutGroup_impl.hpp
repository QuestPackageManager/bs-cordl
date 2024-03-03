#pragma once
#include "UnityEngine/UI/zzzz__ILayoutGroup_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutController_def.hpp"
/// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
constexpr UnityEngine::UI::ILayoutGroup::operator ::UnityEngine::UI::ILayoutController*() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutController*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::ILayoutController"
constexpr ::UnityEngine::UI::ILayoutController* UnityEngine::UI::ILayoutGroup::i___UnityEngine__UI__ILayoutController() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutController*>(static_cast<void*>(this));
}
