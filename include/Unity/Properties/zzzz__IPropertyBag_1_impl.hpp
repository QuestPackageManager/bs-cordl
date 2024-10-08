#pragma once
// IWYU pragma private; include "Unity/Properties/IPropertyBag_1.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_def.hpp"
/// @brief Convert operator to "::Unity::Properties::IPropertyBag"
template <typename TContainer> constexpr Unity::Properties::IPropertyBag_1<TContainer>::operator ::Unity::Properties::IPropertyBag*() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyBag"
template <typename TContainer> constexpr ::Unity::Properties::IPropertyBag* Unity::Properties::IPropertyBag_1<TContainer>::i___Unity__Properties__IPropertyBag() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag*>(static_cast<void*>(this));
}
