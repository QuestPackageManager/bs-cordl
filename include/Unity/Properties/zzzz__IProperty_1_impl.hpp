#pragma once
// IWYU pragma private; include "Unity/Properties/IProperty_1.hpp"
#include "Unity/Properties/zzzz__IProperty_1_def.hpp"
#include "Unity/Properties/zzzz__IProperty_def.hpp"
/// @brief Convert operator to "::Unity::Properties::IProperty"
template <typename TContainer> constexpr Unity::Properties::IProperty_1<TContainer>::operator ::Unity::Properties::IProperty*() noexcept {
  return static_cast<::Unity::Properties::IProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IProperty"
template <typename TContainer> constexpr ::Unity::Properties::IProperty* Unity::Properties::IProperty_1<TContainer>::i___Unity__Properties__IProperty() noexcept {
  return static_cast<::Unity::Properties::IProperty*>(static_cast<void*>(this));
}
