#pragma once
#include "Zenject/zzzz__IPlaceholderFactory_def.hpp"
#include "Zenject/zzzz__IValidatable_def.hpp"
/// @brief Convert operator to "::Zenject::IValidatable"
constexpr Zenject::IPlaceholderFactory::operator ::Zenject::IValidatable*() noexcept {
  return static_cast<::Zenject::IValidatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IValidatable"
constexpr ::Zenject::IValidatable* Zenject::IPlaceholderFactory::i___Zenject__IValidatable() noexcept {
  return static_cast<::Zenject::IValidatable*>(static_cast<void*>(this));
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
