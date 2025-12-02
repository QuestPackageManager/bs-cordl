#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IRuntimePanel.hpp"
#include "UnityEngine/UIElements/zzzz__IRuntimePanel_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
/// @brief Convert operator to "::UnityEngine::UIElements::IPanel"
constexpr UnityEngine::UIElements::IRuntimePanel::operator ::UnityEngine::UIElements::IPanel*() noexcept {
  return static_cast<::UnityEngine::UIElements::IPanel*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IPanel"
constexpr ::UnityEngine::UIElements::IPanel* UnityEngine::UIElements::IRuntimePanel::i___UnityEngine__UIElements__IPanel() noexcept {
  return static_cast<::UnityEngine::UIElements::IPanel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::IRuntimePanel::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::IRuntimePanel::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
