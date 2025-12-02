#pragma once
// IWYU pragma private; include "Unity/Properties/ICollectionPropertyBag_2.hpp"
#include "Unity/Properties/zzzz__ICollectionPropertyBag_2_def.hpp"
#include "Unity/Properties/zzzz__ICollectionPropertyBagAccept_1_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_def.hpp"
/// @brief Convert operator to "::Unity::Properties::IPropertyBag_1<TCollection>"
template <typename TCollection, typename TElement> constexpr Unity::Properties::ICollectionPropertyBag_2<TCollection, TElement>::operator ::Unity::Properties::IPropertyBag_1<TCollection>*() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag_1<TCollection>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyBag_1<TCollection>"
template <typename TCollection, typename TElement>
constexpr ::Unity::Properties::IPropertyBag_1<TCollection>* Unity::Properties::ICollectionPropertyBag_2<TCollection, TElement>::i___Unity__Properties__IPropertyBag_1_TCollection_() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag_1<TCollection>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IPropertyBag"
template <typename TCollection, typename TElement> constexpr Unity::Properties::ICollectionPropertyBag_2<TCollection, TElement>::operator ::Unity::Properties::IPropertyBag*() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyBag"
template <typename TCollection, typename TElement>
constexpr ::Unity::Properties::IPropertyBag* Unity::Properties::ICollectionPropertyBag_2<TCollection, TElement>::i___Unity__Properties__IPropertyBag() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::ICollectionPropertyBagAccept_1<TCollection>"
template <typename TCollection, typename TElement>
constexpr Unity::Properties::ICollectionPropertyBag_2<TCollection, TElement>::operator ::Unity::Properties::ICollectionPropertyBagAccept_1<TCollection>*() noexcept {
  return static_cast<::Unity::Properties::ICollectionPropertyBagAccept_1<TCollection>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::ICollectionPropertyBagAccept_1<TCollection>"
template <typename TCollection, typename TElement>
constexpr ::Unity::Properties::ICollectionPropertyBagAccept_1<TCollection>*
Unity::Properties::ICollectionPropertyBag_2<TCollection, TElement>::i___Unity__Properties__ICollectionPropertyBagAccept_1_TCollection_() noexcept {
  return static_cast<::Unity::Properties::ICollectionPropertyBagAccept_1<TCollection>*>(static_cast<void*>(this));
}
