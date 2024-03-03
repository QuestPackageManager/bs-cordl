#pragma once
#include "System/ComponentModel/Design/zzzz__IDesigner_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
/// @brief Convert operator to "::System::IDisposable"
constexpr System::ComponentModel::Design::IDesigner::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::ComponentModel::Design::IDesigner::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
