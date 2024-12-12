#pragma once
// IWYU pragma private; include "GlobalNamespace/IHealthCheckService.hpp"
#include "GlobalNamespace/zzzz__IPollable_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "GlobalNamespace/zzzz__IHealthCheckService_def.hpp"
/// @brief Convert operator to "::GlobalNamespace::IPollable"
constexpr GlobalNamespace::IHealthCheckService::operator ::GlobalNamespace::IPollable*() noexcept {
  return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPollable"
constexpr ::GlobalNamespace::IPollable* GlobalNamespace::IHealthCheckService::i___GlobalNamespace__IPollable() noexcept {
  return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::IHealthCheckService::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::IHealthCheckService::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
