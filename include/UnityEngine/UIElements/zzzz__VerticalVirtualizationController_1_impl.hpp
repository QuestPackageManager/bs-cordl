#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VerticalVirtualizationController_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionVirtualizationController_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VerticalVirtualizationController_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__SerializedVirtualizationData_def.hpp"
#include "UnityEngine/UIElements/zzzz__VerticalVirtualizationController_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
template <typename T>
inline void UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>::setStaticF___9(::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>*>::get>(
      std::forward<::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>*>(value));
}
template <typename T> inline ::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>* UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>*>::get>();
}
template <typename T> inline void UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>::setStaticF___9__30_0(::System::Func_1<T>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<T>*, "<>9__30_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>*>::get>(
      std::forward<::System::Func_1<T>*>(value));
}
template <typename T> inline ::System::Func_1<T>* UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>::getStaticF___9__30_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<T>*, "<>9__30_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>*>::get>();
}
template <typename T> inline void UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>::setStaticF___9__30_1(::System::Action_1<T>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<T>*, "<>9__30_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>*>::get>(
      std::forward<::System::Action_1<T>*>(value));
}
template <typename T> inline ::System::Action_1<T>* UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>::getStaticF___9__30_1() {
  return ::cordl_internals::getStaticField<::System::Action_1<T>*, "<>9__30_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>*>::get>();
}
template <typename T> inline void UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>::setStaticF___9__30_2(::System::Action_1<T>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<T>*, "<>9__30_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>*>::get>(
      std::forward<::System::Action_1<T>*>(value));
}
template <typename T> inline ::System::Action_1<T>* UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>::getStaticF___9__30_2() {
  return ::cordl_internals::getStaticField<::System::Action_1<T>*, "<>9__30_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>*>::get>();
}
template <typename T> inline ::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>* UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>*>());
}
template <typename T> inline void UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>::__ctor_b__30_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>*>::get(),
                                               "<.ctor>b__30_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>::__ctor_b__30_1(T i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>*>::get(), "<.ctor>b__30_1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
template <typename T> inline void UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>::__ctor_b__30_2(T i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>*>::get(), "<.ctor>b__30_2",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>::__VerticalVirtualizationController_1____c() {}
template <typename T> constexpr ::UnityEngine::Pool::ObjectPool_1<T>*& UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_get_m_Pool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pool;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Pool::ObjectPool_1<T>*> const& UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_get_m_Pool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pool;
}
template <typename T> constexpr void UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_set_m_Pool(::UnityEngine::Pool::ObjectPool_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Pool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::UnityEngine::UIElements::BaseVerticalCollectionView*& UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_get_m_CollectionView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CollectionView;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseVerticalCollectionView*> const&
UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_get_m_CollectionView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CollectionView;
}
template <typename T>
constexpr void UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_set_m_CollectionView(::UnityEngine::UIElements::BaseVerticalCollectionView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CollectionView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_get_m_ActiveItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveItems;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const&
UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_get_m_ActiveItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveItems;
}
template <typename T> constexpr void UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_set_m_ActiveItems(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ActiveItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_get_m_DraggedItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DraggedItem;
}
template <typename T> constexpr T const& UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_get_m_DraggedItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DraggedItem;
}
template <typename T> constexpr void UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_set_m_DraggedItem(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DraggedItem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_get_m_LastFocusedElementIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastFocusedElementIndex;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_get_m_LastFocusedElementIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastFocusedElementIndex;
}
template <typename T> constexpr void UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_set_m_LastFocusedElementIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastFocusedElementIndex = value;
}
template <typename T>
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_get_m_LastFocusedElementTreeChildIndexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastFocusedElementTreeChildIndexes;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const&
UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_get_m_LastFocusedElementTreeChildIndexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastFocusedElementTreeChildIndexes;
}
template <typename T>
constexpr void UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_set_m_LastFocusedElementTreeChildIndexes(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LastFocusedElementTreeChildIndexes)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Func_2<T, bool>*& UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_get_m_VisibleItemPredicateDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisibleItemPredicateDelegate;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<T, bool>*> const&
UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_get_m_VisibleItemPredicateDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisibleItemPredicateDelegate;
}
template <typename T> constexpr void UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_set_m_VisibleItemPredicateDelegate(::System::Func_2<T, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VisibleItemPredicateDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_get_m_ScrollInsertionList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollInsertionList;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const&
UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_get_m_ScrollInsertionList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollInsertionList;
}
template <typename T> constexpr void UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_set_m_ScrollInsertionList(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ScrollInsertionList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_get_m_EmptyRows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EmptyRows;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const&
UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_get_m_EmptyRows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EmptyRows;
}
template <typename T> constexpr void UnityEngine::UIElements::VerticalVirtualizationController_1<T>::__cordl_internal_set_m_EmptyRows(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_EmptyRows)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ReusableCollectionItem*>* UnityEngine::UIElements::VerticalVirtualizationController_1<T>::get_activeItems() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ReusableCollectionItem*>*, false>(this, ___internal_method);
}
template <typename T> inline int32_t UnityEngine::UIElements::VerticalVirtualizationController_1<T>::get_itemsCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*>::get(), "get_itemsCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::VerticalVirtualizationController_1<T>::VisibleItemPredicate(T i) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, i);
}
template <typename T> inline T UnityEngine::UIElements::VerticalVirtualizationController_1<T>::get_firstVisibleItem() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*>::get(), "get_firstVisibleItem",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::UIElements::VerticalVirtualizationController_1<T>::get_lastVisibleItem() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*>::get(), "get_lastVisibleItem",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline int32_t UnityEngine::UIElements::VerticalVirtualizationController_1<T>::get_visibleItemCount() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::SerializedVirtualizationData* UnityEngine::UIElements::VerticalVirtualizationController_1<T>::get_serializedData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*>::get(), "get_serializedData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::SerializedVirtualizationData*, false>(this, ___internal_method);
}
template <typename T> inline int32_t UnityEngine::UIElements::VerticalVirtualizationController_1<T>::get_firstVisibleIndex() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::VerticalVirtualizationController_1<T>::set_firstVisibleIndex(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline float_t UnityEngine::UIElements::VerticalVirtualizationController_1<T>::get_lastHeight() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*>::get(), "get_lastHeight",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::VerticalVirtualizationController_1<T>::get_alwaysRebindOnRefresh() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T>
inline ::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*
UnityEngine::UIElements::VerticalVirtualizationController_1<T>::New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* collectionView) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*>(collectionView));
}
template <typename T> inline void UnityEngine::UIElements::VerticalVirtualizationController_1<T>::_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* collectionView) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collectionView);
}
template <typename T> inline void UnityEngine::UIElements::VerticalVirtualizationController_1<T>::Refresh(bool rebuild) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rebuild);
}
template <typename T> inline void UnityEngine::UIElements::VerticalVirtualizationController_1<T>::Setup(T recycledItem, int32_t newIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recycledItem, newIndex);
}
template <typename T> inline void UnityEngine::UIElements::VerticalVirtualizationController_1<T>::OnFocus(::UnityEngine::UIElements::VisualElement* leafTarget) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, leafTarget);
}
template <typename T> inline void UnityEngine::UIElements::VerticalVirtualizationController_1<T>::OnBlur(::UnityEngine::UIElements::VisualElement* willFocus) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, willFocus);
}
template <typename T> inline void UnityEngine::UIElements::VerticalVirtualizationController_1<T>::HandleFocus(::UnityEngine::UIElements::ReusableCollectionItem* recycledItem, int32_t previousIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*>::get(), "HandleFocus", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ReusableCollectionItem*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recycledItem, previousIndex);
}
template <typename T> inline void UnityEngine::UIElements::VerticalVirtualizationController_1<T>::UpdateBackground() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::VerticalVirtualizationController_1<T>::StartDragItem(::UnityEngine::UIElements::ReusableCollectionItem* item) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void UnityEngine::UIElements::VerticalVirtualizationController_1<T>::EndDrag(int32_t dropIndex) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dropIndex);
}
/// @param activeItemIndex: int32_t (default: static_cast<int32_t>(0xffffffff))
/// @param scrollViewIndex: int32_t (default: static_cast<int32_t>(0xffffffff))
template <typename T> inline T UnityEngine::UIElements::VerticalVirtualizationController_1<T>::GetOrMakeItemAtIndex(int32_t activeItemIndex, int32_t scrollViewIndex) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, activeItemIndex, scrollViewIndex);
}
template <typename T> inline void UnityEngine::UIElements::VerticalVirtualizationController_1<T>::ReleaseItem(int32_t activeItemsIndex) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, activeItemsIndex);
}
template <typename T> inline void UnityEngine::UIElements::VerticalVirtualizationController_1<T>::OnDestroyItem(::UnityEngine::UIElements::ReusableCollectionItem* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*>::get(), "OnDestroyItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ReusableCollectionItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline int32_t UnityEngine::UIElements::VerticalVirtualizationController_1<T>::GetDraggedIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*>::get(), "GetDraggedIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::VerticalVirtualizationController_1<T>::VerticalVirtualizationController_1() {}
