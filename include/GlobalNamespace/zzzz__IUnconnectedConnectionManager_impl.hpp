#pragma once
#include "GlobalNamespace/zzzz__IUnconnectedConnectionManager_def.hpp"
#include "GlobalNamespace/zzzz__IUnconnectedMessageSender_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
/// @brief Convert operator to "::GlobalNamespace::IUnconnectedMessageSender"
constexpr GlobalNamespace::IUnconnectedConnectionManager::operator ::GlobalNamespace::IUnconnectedMessageSender*() noexcept {
  return static_cast<::GlobalNamespace::IUnconnectedMessageSender*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPollable"
constexpr GlobalNamespace::IUnconnectedConnectionManager::operator ::GlobalNamespace::IPollable*() noexcept {
  return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::IUnconnectedConnectionManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
