#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DynamicHeightVirtualizationController_1.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VerticalVirtualizationController_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DynamicHeightVirtualizationController_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "UnityEngine/UIElements/zzzz__DetachFromPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__DynamicHeightVirtualizationController_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualElementScheduledItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1_ContentHeightCacheInfo<T>::_ctor(float_t sum, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_ContentHeightCacheInfo<T>>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sum, count);
}
// Ctor Parameters [CppParam { name: "sum", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_ContentHeightCacheInfo<T>::DynamicHeightVirtualizationController_1_ContentHeightCacheInfo(float_t sum,
                                                                                                                                                                       int32_t count) noexcept {
  this->sum = sum;
  this->count = count;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_ContentHeightCacheInfo<T>::DynamicHeightVirtualizationController_1_ContentHeightCacheInfo() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_VirtualizationChange<T>::DynamicHeightVirtualizationController_1_VirtualizationChange(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_VirtualizationChange<T>::DynamicHeightVirtualizationController_1_VirtualizationChange() {}
template <typename T>
constexpr ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_VirtualizationChange<T> UnityEngine::UIElements::DynamicHeightVirtualizationController_1_VirtualizationChange<T>::None{
  static_cast<int32_t>(0x0)
};
template <typename T>
constexpr ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_VirtualizationChange<T> UnityEngine::UIElements::DynamicHeightVirtualizationController_1_VirtualizationChange<T>::Resize{
  static_cast<int32_t>(0x1)
};
template <typename T>
constexpr ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_VirtualizationChange<T> UnityEngine::UIElements::DynamicHeightVirtualizationController_1_VirtualizationChange<T>::Scroll{
  static_cast<int32_t>(0x2)
};
template <typename T>
constexpr ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_VirtualizationChange<T>
    UnityEngine::UIElements::DynamicHeightVirtualizationController_1_VirtualizationChange<T>::ForcedScroll{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_ScrollDirection<T>::DynamicHeightVirtualizationController_1_ScrollDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_ScrollDirection<T>::DynamicHeightVirtualizationController_1_ScrollDirection() {}
template <typename T>
constexpr ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_ScrollDirection<T> UnityEngine::UIElements::DynamicHeightVirtualizationController_1_ScrollDirection<T>::Idle{
  static_cast<int32_t>(0x0)
};
template <typename T>
constexpr ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_ScrollDirection<T> UnityEngine::UIElements::DynamicHeightVirtualizationController_1_ScrollDirection<T>::Up{
  static_cast<int32_t>(0x1)
};
template <typename T>
constexpr ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_ScrollDirection<T> UnityEngine::UIElements::DynamicHeightVirtualizationController_1_ScrollDirection<T>::Down{
  static_cast<int32_t>(0x2)
};
// Ctor Parameters [CppParam { name: "draggedIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1___c__DisplayClass69_0<T>::DynamicHeightVirtualizationController_1___c__DisplayClass69_0(
    int32_t draggedIndex, ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>* __4__this) noexcept {
  this->draggedIndex = draggedIndex;
  this->__4__this = __4__this;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1___c__DisplayClass69_0<T>::DynamicHeightVirtualizationController_1___c__DisplayClass69_0() {}
template <typename T> constexpr int32_t& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_HighestCachedIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighestCachedIndex;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_HighestCachedIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighestCachedIndex;
}
template <typename T> constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_set_m_HighestCachedIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HighestCachedIndex = value;
}
template <typename T>
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, float_t>*& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_ItemHeightCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemHeightCache;
}
template <typename T>
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, float_t>* const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_ItemHeightCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemHeightCache;
}
template <typename T>
constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_set_m_ItemHeightCache(::System::Collections::Generic::Dictionary_2<int32_t, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_ItemHeightCache, value);
}
template <typename T>
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_ContentHeightCacheInfo<T>>*&
UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_ContentHeightCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentHeightCache;
}
template <typename T>
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_ContentHeightCacheInfo<T>>* const&
UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_ContentHeightCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentHeightCache;
}
template <typename T>
constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_set_m_ContentHeightCache(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_ContentHeightCacheInfo<T>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_ContentHeightCache, value);
}
template <typename T> constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_WaitingCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WaitingCache;
}
template <typename T>
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_WaitingCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WaitingCache;
}
template <typename T>
constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_set_m_WaitingCache(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_WaitingCache, value);
}
template <typename T> constexpr ::System::Nullable_1<int32_t>& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_ScrolledToItemIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrolledToItemIndex;
}
template <typename T> constexpr ::System::Nullable_1<int32_t> const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_ScrolledToItemIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrolledToItemIndex;
}
template <typename T> constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_set_m_ScrolledToItemIndex(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScrolledToItemIndex = value;
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_ForcedFirstVisibleItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForcedFirstVisibleItem;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_ForcedFirstVisibleItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForcedFirstVisibleItem;
}
template <typename T> constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_set_m_ForcedFirstVisibleItem(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ForcedFirstVisibleItem = value;
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_ForcedLastVisibleItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForcedLastVisibleItem;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_ForcedLastVisibleItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForcedLastVisibleItem;
}
template <typename T> constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_set_m_ForcedLastVisibleItem(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ForcedLastVisibleItem = value;
}
template <typename T> constexpr bool& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_StickToBottom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StickToBottom;
}
template <typename T> constexpr bool const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_StickToBottom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StickToBottom;
}
template <typename T> constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_set_m_StickToBottom(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StickToBottom = value;
}
template <typename T>
constexpr ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_VirtualizationChange<T>&
UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_LastChange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastChange;
}
template <typename T>
constexpr ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_VirtualizationChange<T> const&
UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_LastChange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastChange;
}
template <typename T>
constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_set_m_LastChange(
    ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_VirtualizationChange<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastChange = value;
}
template <typename T>
constexpr ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_ScrollDirection<T>&
UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_ScrollDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollDirection;
}
template <typename T>
constexpr ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_ScrollDirection<T> const&
UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_ScrollDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollDirection;
}
template <typename T>
constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_set_m_ScrollDirection(
    ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_ScrollDirection<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScrollDirection = value;
}
template <typename T> constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_DelayedScrollOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DelayedScrollOffset;
}
template <typename T> constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_DelayedScrollOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DelayedScrollOffset;
}
template <typename T> constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_set_m_DelayedScrollOffset(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DelayedScrollOffset = value;
}
template <typename T> constexpr float_t& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_AccumulatedHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AccumulatedHeight;
}
template <typename T> constexpr float_t const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_AccumulatedHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AccumulatedHeight;
}
template <typename T> constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_set_m_AccumulatedHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AccumulatedHeight = value;
}
template <typename T> constexpr float_t& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_MinimumItemHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinimumItemHeight;
}
template <typename T> constexpr float_t const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_MinimumItemHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinimumItemHeight;
}
template <typename T> constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_set_m_MinimumItemHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MinimumItemHeight = value;
}
template <typename T> constexpr ::System::Action*& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_FillCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FillCallback;
}
template <typename T> constexpr ::System::Action* const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_FillCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FillCallback;
}
template <typename T> constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_set_m_FillCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_FillCallback, value);
}
template <typename T> constexpr ::System::Action*& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_ScrollCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollCallback;
}
template <typename T> constexpr ::System::Action* const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_ScrollCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollCallback;
}
template <typename T> constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_set_m_ScrollCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_ScrollCallback, value);
}
template <typename T> constexpr ::System::Action*& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_ScrollResetCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollResetCallback;
}
template <typename T> constexpr ::System::Action* const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_ScrollResetCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollResetCallback;
}
template <typename T> constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_set_m_ScrollResetCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_ScrollResetCallback, value);
}
template <typename T>
constexpr ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*&
UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_GeometryChangedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GeometryChangedCallback;
}
template <typename T>
constexpr ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* const&
UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_GeometryChangedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GeometryChangedCallback;
}
template <typename T>
constexpr void
UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_set_m_GeometryChangedCallback(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_GeometryChangedCallback, value);
}
template <typename T> constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_ScheduledItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScheduledItem;
}
template <typename T>
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_ScheduledItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScheduledItem;
}
template <typename T>
constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_set_m_ScheduledItem(::UnityEngine::UIElements::IVisualElementScheduledItem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_ScheduledItem, value);
}
template <typename T>
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_ScrollScheduledItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollScheduledItem;
}
template <typename T>
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_ScrollScheduledItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollScheduledItem;
}
template <typename T>
constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_set_m_ScrollScheduledItem(::UnityEngine::UIElements::IVisualElementScheduledItem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_ScrollScheduledItem, value);
}
template <typename T>
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_ScrollResetScheduledItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollResetScheduledItem;
}
template <typename T>
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_ScrollResetScheduledItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollResetScheduledItem;
}
template <typename T>
constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_set_m_ScrollResetScheduledItem(::UnityEngine::UIElements::IVisualElementScheduledItem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_ScrollResetScheduledItem, value);
}
template <typename T> constexpr ::System::Predicate_1<int32_t>*& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_IndexOutOfBoundsPredicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexOutOfBoundsPredicate;
}
template <typename T> constexpr ::System::Predicate_1<int32_t>* const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_IndexOutOfBoundsPredicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexOutOfBoundsPredicate;
}
template <typename T> constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_set_m_IndexOutOfBoundsPredicate(::System::Predicate_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_IndexOutOfBoundsPredicate, value);
}
template <typename T> constexpr bool& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_FillExecuted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FillExecuted;
}
template <typename T> constexpr bool const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_FillExecuted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FillExecuted;
}
template <typename T> constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_set_m_FillExecuted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FillExecuted = value;
}
template <typename T> constexpr int64_t& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_TimeSinceFillScheduledMs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeSinceFillScheduledMs;
}
template <typename T> constexpr int64_t const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_get_m_TimeSinceFillScheduledMs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeSinceFillScheduledMs;
}
template <typename T> constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__cordl_internal_set_m_TimeSinceFillScheduledMs(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TimeSinceFillScheduledMs = value;
}
template <typename T> inline float_t UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::get_defaultExpectedHeight() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                                               "get_defaultExpectedHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
template <typename T> inline float_t UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::get_contentPadding() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                                               "get_contentPadding", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::set_contentPadding(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "set_contentPadding",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline float_t UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::get_contentHeight() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                                               "get_contentHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::set_contentHeight(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "set_contentHeight",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline int32_t UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::get_anchoredIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                                               "get_anchoredIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::set_anchoredIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "set_anchoredIndex",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline float_t UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::get_anchorOffset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                                               "get_anchorOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::set_anchorOffset(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "set_anchorOffset",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline float_t UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::get_viewportMaxOffset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                                               "get_viewportMaxOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::get_alwaysRebindOnRefresh() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* collectionView) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collectionView);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::OnGeometryChangedEvent(::UnityEngine::UIElements::GeometryChangedEvent* _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "OnGeometryChangedEvent",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::Refresh(bool rebuild) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rebuild);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::ScrollToItem(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::Resize(::UnityEngine::Vector2 size) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::OnScroll(::UnityEngine::Vector2 scrollOffset) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scrollOffset);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::OnDetachFromPanelEvent(::UnityEngine::UIElements::DetachFromPanelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "OnDetachFromPanelEvent",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DetachFromPanelEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::OnScrollUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "OnScrollUpdate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::CycleItems(int32_t firstIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "CycleItems",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstIndex);
}
template <typename T> inline bool UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::NeedsFill() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "NeedsFill",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::Fill() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "Fill",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::UpdateScrollViewContainer(float_t previousHeight, float_t newHeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "UpdateScrollViewContainer",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, previousHeight, newHeight);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::ApplyScrollViewUpdate(bool dimensionsOnly) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "ApplyScrollViewUpdate",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dimensionsOnly);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::UpdateAnchor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "UpdateAnchor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::ScheduleFill() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "ScheduleFill",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::ScheduleScroll() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "ScheduleScroll",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::ScheduleScrollDirectionReset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                                               "ScheduleScrollDirectionReset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::ResetScroll() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "ResetScroll",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline int32_t UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::GetIndexFromPosition(::UnityEngine::Vector2 position) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, position);
}
template <typename T> inline float_t UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::GetExpectedItemHeight(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, index);
}
template <typename T> inline int32_t UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::GetFirstVisibleItem(float_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "GetFirstVisibleItem",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, offset);
}
template <typename T> inline float_t UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::GetExpectedContentHeight() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
template <typename T> inline float_t UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::GetContentHeightForIndex(int32_t lastIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "GetContentHeightForIndex",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, lastIndex);
}
template <typename T>
inline ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_ContentHeightCacheInfo<T>
UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::GetCachedContentHeight(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "GetCachedContentHeight",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_ContentHeightCacheInfo<T>, false>(this, ___internal_method, index);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::RegisterItemHeight(int32_t index, float_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "RegisterItemHeight",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, height);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::UnregisterItemHeight(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "UnregisterItemHeight",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::CleanItemHeightCache() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                                               "CleanItemHeightCache", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::OnRecycledItemGeometryChanged(::UnityEngine::UIElements::ReusableCollectionItem* item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                                  "OnRecycledItemGeometryChanged", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ReusableCollectionItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline bool UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::UpdateRegisteredHeight(::UnityEngine::UIElements::ReusableCollectionItem* item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "UpdateRegisteredHeight",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ReusableCollectionItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline T UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::GetOrMakeItemAtIndex(int32_t activeItemIndex, int32_t scrollViewIndex) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, activeItemIndex, scrollViewIndex);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::ReleaseItem(int32_t activeItemsIndex) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, activeItemsIndex);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::StartDragItem(::UnityEngine::UIElements::ReusableCollectionItem* item) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::EndDrag(int32_t dropIndex) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dropIndex);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::HideItem(int32_t activeItemsIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "HideItem",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, activeItemsIndex);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::MarkWaitingForLayout(T item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "MarkWaitingForLayout",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline bool UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::IsIndexOutOfBounds(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "IsIndexOutOfBounds",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, i);
}
template <typename T>
inline float_t UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::_GetContentHeightForIndex_g__GetContentHeightFromCachedHeight_69_0(
    int32_t index, ::ByRef<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_ContentHeightCacheInfo<T>> heightInfo,
    ::ByRef<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1___c__DisplayClass69_0<T>> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
      "<GetContentHeightForIndex>g__GetContentHeightFromCachedHeight|69_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1_ContentHeightCacheInfo<T>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1___c__DisplayClass69_0<T>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, index, heightInfo, _cordl_fixed_empty_name_whitespace);
}
template <typename T>
inline ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*
UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* collectionView) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>(collectionView));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::DynamicHeightVirtualizationController_1() {}
