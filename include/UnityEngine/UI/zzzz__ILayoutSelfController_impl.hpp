#pragma once
// IWYU pragma private; include "UnityEngine/UI/ILayoutSelfController.hpp"
#include "UnityEngine/UI/zzzz__ILayoutController_impl.hpp"
#include "UnityEngine/UI/zzzz__ILayoutSelfController_def.hpp"
/// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
constexpr UnityEngine::UI::ILayoutSelfController::operator ::UnityEngine::UI::ILayoutController*() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutController*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::ILayoutController"
constexpr ::UnityEngine::UI::ILayoutController* UnityEngine::UI::ILayoutSelfController::i___UnityEngine__UI__ILayoutController() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutController*>(static_cast<void*>(this));
}
