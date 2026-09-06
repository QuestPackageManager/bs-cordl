#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FixedHeightVirtualizationController_1.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VerticalVirtualizationController_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FixedHeightVirtualizationController_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
template <typename T> constexpr ::System::Nullable_1<int32_t>& UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::__cordl_internal_get_m_ScrolledToItemIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrolledToItemIndex;
}
template <typename T> constexpr ::System::Nullable_1<int32_t> const& UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::__cordl_internal_get_m_ScrolledToItemIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrolledToItemIndex;
}
template <typename T> constexpr void UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::__cordl_internal_set_m_ScrolledToItemIndex(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScrolledToItemIndex = value;
}
template <typename T> inline float_t UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::get_resolvedItemHeight() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>*>(), { "get_resolvedItemHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::VisibleItemPredicate(T i) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, i);
}
template <typename T> inline void UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* collectionView) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVerticalCollectionView*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collectionView);
}
template <typename T> inline void UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::OnGeometryChangedEvent(::UnityEngine::UIElements::GeometryChangedEvent* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>*>(),
                                                                                         { "OnGeometryChangedEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
template <typename T> inline int32_t UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::GetIndexFromPosition(::UnityEngine::Vector2 position) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, position);
}
template <typename T> inline float_t UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::GetExpectedItemHeight(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, index);
}
template <typename T> inline float_t UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::GetExpectedContentHeight() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::ScrollToItem(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
template <typename T> inline void UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::Resize(::UnityEngine::Vector2 size) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
template <typename T> inline void UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::OnScroll(::UnityEngine::Vector2 scrollOffset) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scrollOffset);
}
template <typename T> inline T UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::GetOrMakeItemAtIndex(int32_t activeItemIndex, int32_t scrollViewIndex) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, activeItemIndex, scrollViewIndex);
}
template <typename T> inline void UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::EndDrag(int32_t dropIndex) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dropIndex);
}
template <typename T>
inline ::UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>*
UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* collectionView) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>*>(collectionView));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::FixedHeightVirtualizationController_1() {}
