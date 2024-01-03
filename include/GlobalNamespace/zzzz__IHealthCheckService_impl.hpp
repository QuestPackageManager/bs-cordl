#pragma once
#include "GlobalNamespace/zzzz__IHealthCheckService_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
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
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
