#pragma once
// IWYU pragma private; include "Unity/Properties/ISetPropertyBag_2.hpp"
#include "Unity/Properties/zzzz__ISetPropertyBag_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__ICollectionPropertyBagAccept_1_def.hpp"
#include "Unity/Properties/zzzz__ICollectionPropertyBag_2_def.hpp"
#include "Unity/Properties/zzzz__IKeyedProperties_2_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_def.hpp"
#include "Unity/Properties/zzzz__ISetPropertyBagAccept_1_def.hpp"
/// @brief Convert operator to "::Unity::Properties::ICollectionPropertyBag_2<TSet,TElement>"
template <typename TSet, typename TElement> constexpr Unity::Properties::ISetPropertyBag_2<TSet, TElement>::operator ::Unity::Properties::ICollectionPropertyBag_2<TSet, TElement>*() noexcept {
  return static_cast<::Unity::Properties::ICollectionPropertyBag_2<TSet, TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::ICollectionPropertyBag_2<TSet,TElement>"
template <typename TSet, typename TElement>
constexpr ::Unity::Properties::ICollectionPropertyBag_2<TSet, TElement>*
Unity::Properties::ISetPropertyBag_2<TSet, TElement>::i___Unity__Properties__ICollectionPropertyBag_2_TSet_TElement_() noexcept {
  return static_cast<::Unity::Properties::ICollectionPropertyBag_2<TSet, TElement>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IPropertyBag_1<TSet>"
template <typename TSet, typename TElement> constexpr Unity::Properties::ISetPropertyBag_2<TSet, TElement>::operator ::Unity::Properties::IPropertyBag_1<TSet>*() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag_1<TSet>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyBag_1<TSet>"
template <typename TSet, typename TElement>
constexpr ::Unity::Properties::IPropertyBag_1<TSet>* Unity::Properties::ISetPropertyBag_2<TSet, TElement>::i___Unity__Properties__IPropertyBag_1_TSet_() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag_1<TSet>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IPropertyBag"
template <typename TSet, typename TElement> constexpr Unity::Properties::ISetPropertyBag_2<TSet, TElement>::operator ::Unity::Properties::IPropertyBag*() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyBag"
template <typename TSet, typename TElement> constexpr ::Unity::Properties::IPropertyBag* Unity::Properties::ISetPropertyBag_2<TSet, TElement>::i___Unity__Properties__IPropertyBag() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::ICollectionPropertyBagAccept_1<TSet>"
template <typename TSet, typename TElement> constexpr Unity::Properties::ISetPropertyBag_2<TSet, TElement>::operator ::Unity::Properties::ICollectionPropertyBagAccept_1<TSet>*() noexcept {
  return static_cast<::Unity::Properties::ICollectionPropertyBagAccept_1<TSet>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::ICollectionPropertyBagAccept_1<TSet>"
template <typename TSet, typename TElement>
constexpr ::Unity::Properties::ICollectionPropertyBagAccept_1<TSet>* Unity::Properties::ISetPropertyBag_2<TSet, TElement>::i___Unity__Properties__ICollectionPropertyBagAccept_1_TSet_() noexcept {
  return static_cast<::Unity::Properties::ICollectionPropertyBagAccept_1<TSet>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::ISetPropertyBagAccept_1<TSet>"
template <typename TSet, typename TElement> constexpr Unity::Properties::ISetPropertyBag_2<TSet, TElement>::operator ::Unity::Properties::ISetPropertyBagAccept_1<TSet>*() noexcept {
  return static_cast<::Unity::Properties::ISetPropertyBagAccept_1<TSet>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::ISetPropertyBagAccept_1<TSet>"
template <typename TSet, typename TElement>
constexpr ::Unity::Properties::ISetPropertyBagAccept_1<TSet>* Unity::Properties::ISetPropertyBag_2<TSet, TElement>::i___Unity__Properties__ISetPropertyBagAccept_1_TSet_() noexcept {
  return static_cast<::Unity::Properties::ISetPropertyBagAccept_1<TSet>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IKeyedProperties_2<TSet,::System::Object*>"
template <typename TSet, typename TElement> constexpr Unity::Properties::ISetPropertyBag_2<TSet, TElement>::operator ::Unity::Properties::IKeyedProperties_2<TSet, ::System::Object*>*() noexcept {
  return static_cast<::Unity::Properties::IKeyedProperties_2<TSet, ::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IKeyedProperties_2<TSet,::System::Object*>"
template <typename TSet, typename TElement>
constexpr ::Unity::Properties::IKeyedProperties_2<TSet, ::System::Object*>*
Unity::Properties::ISetPropertyBag_2<TSet, TElement>::i___Unity__Properties__IKeyedProperties_2_TSet___System__Object__() noexcept {
  return static_cast<::Unity::Properties::IKeyedProperties_2<TSet, ::System::Object*>*>(static_cast<void*>(this));
}
