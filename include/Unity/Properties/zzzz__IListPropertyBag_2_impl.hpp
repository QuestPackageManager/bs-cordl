#pragma once
// IWYU pragma private; include "Unity/Properties/IListPropertyBag_2.hpp"
#include "Unity/Properties/zzzz__IListPropertyBag_2_def.hpp"
#include "Unity/Properties/zzzz__ICollectionPropertyBagAccept_1_def.hpp"
#include "Unity/Properties/zzzz__ICollectionPropertyBag_2_def.hpp"
#include "Unity/Properties/zzzz__IIndexedProperties_1_def.hpp"
#include "Unity/Properties/zzzz__IListPropertyAccept_1_def.hpp"
#include "Unity/Properties/zzzz__IListPropertyBagAccept_1_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_def.hpp"
/// @brief Convert operator to "::Unity::Properties::ICollectionPropertyBag_2<TList,TElement>"
template <typename TList, typename TElement> constexpr Unity::Properties::IListPropertyBag_2<TList, TElement>::operator ::Unity::Properties::ICollectionPropertyBag_2<TList, TElement>*() noexcept {
  return static_cast<::Unity::Properties::ICollectionPropertyBag_2<TList, TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::ICollectionPropertyBag_2<TList,TElement>"
template <typename TList, typename TElement>
constexpr ::Unity::Properties::ICollectionPropertyBag_2<TList, TElement>*
Unity::Properties::IListPropertyBag_2<TList, TElement>::i___Unity__Properties__ICollectionPropertyBag_2_TList_TElement_() noexcept {
  return static_cast<::Unity::Properties::ICollectionPropertyBag_2<TList, TElement>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IPropertyBag_1<TList>"
template <typename TList, typename TElement> constexpr Unity::Properties::IListPropertyBag_2<TList, TElement>::operator ::Unity::Properties::IPropertyBag_1<TList>*() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag_1<TList>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyBag_1<TList>"
template <typename TList, typename TElement>
constexpr ::Unity::Properties::IPropertyBag_1<TList>* Unity::Properties::IListPropertyBag_2<TList, TElement>::i___Unity__Properties__IPropertyBag_1_TList_() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag_1<TList>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IPropertyBag"
template <typename TList, typename TElement> constexpr Unity::Properties::IListPropertyBag_2<TList, TElement>::operator ::Unity::Properties::IPropertyBag*() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyBag"
template <typename TList, typename TElement> constexpr ::Unity::Properties::IPropertyBag* Unity::Properties::IListPropertyBag_2<TList, TElement>::i___Unity__Properties__IPropertyBag() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::ICollectionPropertyBagAccept_1<TList>"
template <typename TList, typename TElement> constexpr Unity::Properties::IListPropertyBag_2<TList, TElement>::operator ::Unity::Properties::ICollectionPropertyBagAccept_1<TList>*() noexcept {
  return static_cast<::Unity::Properties::ICollectionPropertyBagAccept_1<TList>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::ICollectionPropertyBagAccept_1<TList>"
template <typename TList, typename TElement>
constexpr ::Unity::Properties::ICollectionPropertyBagAccept_1<TList>* Unity::Properties::IListPropertyBag_2<TList, TElement>::i___Unity__Properties__ICollectionPropertyBagAccept_1_TList_() noexcept {
  return static_cast<::Unity::Properties::ICollectionPropertyBagAccept_1<TList>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IListPropertyBagAccept_1<TList>"
template <typename TList, typename TElement> constexpr Unity::Properties::IListPropertyBag_2<TList, TElement>::operator ::Unity::Properties::IListPropertyBagAccept_1<TList>*() noexcept {
  return static_cast<::Unity::Properties::IListPropertyBagAccept_1<TList>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IListPropertyBagAccept_1<TList>"
template <typename TList, typename TElement>
constexpr ::Unity::Properties::IListPropertyBagAccept_1<TList>* Unity::Properties::IListPropertyBag_2<TList, TElement>::i___Unity__Properties__IListPropertyBagAccept_1_TList_() noexcept {
  return static_cast<::Unity::Properties::IListPropertyBagAccept_1<TList>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IListPropertyAccept_1<TList>"
template <typename TList, typename TElement> constexpr Unity::Properties::IListPropertyBag_2<TList, TElement>::operator ::Unity::Properties::IListPropertyAccept_1<TList>*() noexcept {
  return static_cast<::Unity::Properties::IListPropertyAccept_1<TList>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IListPropertyAccept_1<TList>"
template <typename TList, typename TElement>
constexpr ::Unity::Properties::IListPropertyAccept_1<TList>* Unity::Properties::IListPropertyBag_2<TList, TElement>::i___Unity__Properties__IListPropertyAccept_1_TList_() noexcept {
  return static_cast<::Unity::Properties::IListPropertyAccept_1<TList>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IIndexedProperties_1<TList>"
template <typename TList, typename TElement> constexpr Unity::Properties::IListPropertyBag_2<TList, TElement>::operator ::Unity::Properties::IIndexedProperties_1<TList>*() noexcept {
  return static_cast<::Unity::Properties::IIndexedProperties_1<TList>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IIndexedProperties_1<TList>"
template <typename TList, typename TElement>
constexpr ::Unity::Properties::IIndexedProperties_1<TList>* Unity::Properties::IListPropertyBag_2<TList, TElement>::i___Unity__Properties__IIndexedProperties_1_TList_() noexcept {
  return static_cast<::Unity::Properties::IIndexedProperties_1<TList>*>(static_cast<void*>(this));
}
