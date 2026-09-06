#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IDebugDisplaySettingsPanelDisposable.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsPanelDisposable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsPanel_def.hpp"
/// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsPanel"
constexpr UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable::operator ::UnityEngine::Rendering::IDebugDisplaySettingsPanel*() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsPanel*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsPanel"
constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsPanel* UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable::i___UnityEngine__Rendering__IDebugDisplaySettingsPanel() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsPanel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
