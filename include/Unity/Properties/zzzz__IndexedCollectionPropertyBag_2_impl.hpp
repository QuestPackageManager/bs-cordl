#pragma once
// IWYU pragma private; include "Unity/Properties/IndexedCollectionPropertyBag_2.hpp"
#include "Unity/Properties/zzzz__PropertyBag_1_impl.hpp"
#include "Unity/Properties/zzzz__Property_2_impl.hpp"
#include "Unity/Properties/zzzz__IndexedCollectionPropertyBag_2_def.hpp"
#include "Unity/Properties/zzzz__ICollectionPropertyBagAccept_1_def.hpp"
#include "Unity/Properties/zzzz__ICollectionPropertyBagVisitor_def.hpp"
#include "Unity/Properties/zzzz__ICollectionPropertyBag_2_def.hpp"
#include "Unity/Properties/zzzz__IConstructorWithCount_1_def.hpp"
#include "Unity/Properties/zzzz__IConstructor_def.hpp"
#include "Unity/Properties/zzzz__IIndexedCollectionPropertyBagEnumerator_1_def.hpp"
#include "Unity/Properties/zzzz__IIndexedProperties_1_def.hpp"
#include "Unity/Properties/zzzz__IListElementProperty_def.hpp"
#include "Unity/Properties/zzzz__IListPropertyAccept_1_def.hpp"
#include "Unity/Properties/zzzz__IListPropertyBagAccept_1_def.hpp"
#include "Unity/Properties/zzzz__IListPropertyBagVisitor_def.hpp"
#include "Unity/Properties/zzzz__IListPropertyBag_2_def.hpp"
#include "Unity/Properties/zzzz__IListPropertyVisitor_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_def.hpp"
#include "Unity/Properties/zzzz__IProperty_1_def.hpp"
#include "Unity/Properties/zzzz__IndexedCollectionPropertyBag_2_def.hpp"
#include "Unity/Properties/zzzz__IndexedCollectionSharedPropertyState_def.hpp"
#include "Unity/Properties/zzzz__PropertyCollection_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
template <typename TList, typename TElement> constexpr int32_t& Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>::__cordl_internal_get_m_Index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
template <typename TList, typename TElement> constexpr int32_t const& Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>::__cordl_internal_get_m_Index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
template <typename TList, typename TElement> constexpr void Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>::__cordl_internal_set_m_Index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Index = value;
}
template <typename TList, typename TElement> constexpr bool& Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>::__cordl_internal_get_m_IsReadOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsReadOnly;
}
template <typename TList, typename TElement> constexpr bool const& Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>::__cordl_internal_get_m_IsReadOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsReadOnly;
}
template <typename TList, typename TElement> constexpr void Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>::__cordl_internal_set_m_IsReadOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsReadOnly = value;
}
template <typename TList, typename TElement> inline int32_t Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>::get_Index() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>*>::get(),
                                               "get_Index", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TList, typename TElement> inline ::StringW Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>::get_Name() {
  auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TList, typename TElement> inline bool Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>::get_IsReadOnly() {
  auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TList, typename TElement> inline TElement Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>::GetValue(::ByRef<TList> container) {
  auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<TElement, false>(this, ___internal_method, container);
}
template <typename TList, typename TElement> inline void Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>::SetValue(::ByRef<TList> container, TElement value) {
  auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, value);
}
template <typename TList, typename TElement> inline void Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TList, typename TElement>
inline ::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>* Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>*>());
}
/// @brief Convert operator to "::Unity::Properties::IListElementProperty"
template <typename TList, typename TElement>
constexpr Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>::operator ::Unity::Properties::IListElementProperty*() noexcept {
  return static_cast<::Unity::Properties::IListElementProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IListElementProperty"
template <typename TList, typename TElement>
constexpr ::Unity::Properties::IListElementProperty* Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>::i___Unity__Properties__IListElementProperty() noexcept {
  return static_cast<::Unity::Properties::IListElementProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TList, typename TElement> constexpr ::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>::IndexedCollectionPropertyBag_2_ListElementProperty() {}
template <typename TList, typename TElement>
constexpr ::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>*&
Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::__cordl_internal_get_m_Property() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Property;
}
template <typename TList, typename TElement>
constexpr ::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>* const&
Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::__cordl_internal_get_m_Property() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Property;
}
template <typename TList, typename TElement>
constexpr void
Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::__cordl_internal_set_m_Property(::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_Property, value);
}
template <typename TList, typename TElement> inline ::Unity::Properties::PropertyCollection_1<TList> Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::GetProperties() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyCollection_1<TList>, false>(this, ___internal_method);
}
template <typename TList, typename TElement>
inline ::Unity::Properties::PropertyCollection_1<TList> Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::GetProperties(::ByRef<TList> container) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyCollection_1<TList>, false>(this, ___internal_method, container);
}
template <typename TList, typename TElement>
inline bool Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::TryGetProperty(::ByRef<TList> container, int32_t index, ::ByRef<::Unity::Properties::IProperty_1<TList>*> property) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>*>::get(), "TryGetProperty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TList>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Properties::IProperty_1<TList>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, container, index, property);
}
template <typename TList, typename TElement>
inline void Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::Unity_Properties_ICollectionPropertyBagAccept_TList__Accept(::Unity::Properties::ICollectionPropertyBagVisitor* visitor,
                                                                                                                                            ::ByRef<TList> container) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>*>::get(),
                                               "Unity.Properties.ICollectionPropertyBagAccept<TList>.Accept", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::ICollectionPropertyBagVisitor*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TList>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visitor, container);
}
template <typename TList, typename TElement>
inline void Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::Unity_Properties_IListPropertyBagAccept_TList__Accept(::Unity::Properties::IListPropertyBagVisitor* visitor,
                                                                                                                                      ::ByRef<TList> list) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>*>::get(),
                                               "Unity.Properties.IListPropertyBagAccept<TList>.Accept", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::IListPropertyBagVisitor*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TList>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visitor, list);
}
template <typename TList, typename TElement>
template <typename TContainer>
inline void Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::Unity_Properties_IListPropertyAccept_TList__Accept(::Unity::Properties::IListPropertyVisitor* visitor,
                                                                                                                                   ::Unity::Properties::Property_2<TContainer, TList>* property,
                                                                                                                                   ::ByRef<TContainer> container, ::ByRef<TList> list) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>*>::get(),
                                  "Unity.Properties.IListPropertyAccept<TList>.Accept", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get() },
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::IListPropertyVisitor*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::Property_2<TContainer, TList>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TContainer>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TList>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visitor, property, container, list);
}
template <typename TList, typename TElement>
inline TList Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::Unity_Properties_IConstructorWithCount_TList__InstantiateWithCount(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>*>::get(),
                                               "Unity.Properties.IConstructorWithCount<TList>.InstantiateWithCount", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<TList, false>(this, ___internal_method, count);
}
template <typename TList, typename TElement> inline TList Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::InstantiateWithCount(int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<TList, false>(this, ___internal_method, count);
}
template <typename TList, typename TElement>
inline int32_t Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::Unity_Properties_IIndexedCollectionPropertyBagEnumerator_TList__GetCount(::ByRef<TList> container) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>*>::get(),
                                               "Unity.Properties.IIndexedCollectionPropertyBagEnumerator<TList>.GetCount", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TList>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, container);
}
template <typename TList, typename TElement>
inline ::Unity::Properties::IProperty_1<TList>*
Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::Unity_Properties_IIndexedCollectionPropertyBagEnumerator_TList__GetSharedProperty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>*>::get(),
      "Unity.Properties.IIndexedCollectionPropertyBagEnumerator<TList>.GetSharedProperty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::IProperty_1<TList>*, false>(this, ___internal_method);
}
template <typename TList, typename TElement>
inline ::Unity::Properties::IndexedCollectionSharedPropertyState
Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::Unity_Properties_IIndexedCollectionPropertyBagEnumerator_TList__GetSharedPropertyState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>*>::get(),
      "Unity.Properties.IIndexedCollectionPropertyBagEnumerator<TList>.GetSharedPropertyState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::IndexedCollectionSharedPropertyState, false>(this, ___internal_method);
}
template <typename TList, typename TElement>
inline void Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::Unity_Properties_IIndexedCollectionPropertyBagEnumerator_TList__SetSharedPropertyState(
    ::Unity::Properties::IndexedCollectionSharedPropertyState state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>*>::get(),
                                  "Unity.Properties.IIndexedCollectionPropertyBagEnumerator<TList>.SetSharedPropertyState", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::IndexedCollectionSharedPropertyState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
template <typename TList, typename TElement> inline void Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TList, typename TElement>
inline ::Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>* Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>*>());
}
/// @brief Convert operator to "::Unity::Properties::IListPropertyBag_2<TList,TElement>"
template <typename TList, typename TElement>
constexpr Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::operator ::Unity::Properties::IListPropertyBag_2<TList, TElement>*() noexcept {
  return static_cast<::Unity::Properties::IListPropertyBag_2<TList, TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IListPropertyBag_2<TList,TElement>"
template <typename TList, typename TElement>
constexpr ::Unity::Properties::IListPropertyBag_2<TList, TElement>*
Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::i___Unity__Properties__IListPropertyBag_2_TList_TElement_() noexcept {
  return static_cast<::Unity::Properties::IListPropertyBag_2<TList, TElement>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::ICollectionPropertyBag_2<TList,TElement>"
template <typename TList, typename TElement>
constexpr Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::operator ::Unity::Properties::ICollectionPropertyBag_2<TList, TElement>*() noexcept {
  return static_cast<::Unity::Properties::ICollectionPropertyBag_2<TList, TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::ICollectionPropertyBag_2<TList,TElement>"
template <typename TList, typename TElement>
constexpr ::Unity::Properties::ICollectionPropertyBag_2<TList, TElement>*
Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::i___Unity__Properties__ICollectionPropertyBag_2_TList_TElement_() noexcept {
  return static_cast<::Unity::Properties::ICollectionPropertyBag_2<TList, TElement>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IPropertyBag_1<TList>"
template <typename TList, typename TElement> constexpr Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::operator ::Unity::Properties::IPropertyBag_1<TList>*() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag_1<TList>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyBag_1<TList>"
template <typename TList, typename TElement>
constexpr ::Unity::Properties::IPropertyBag_1<TList>* Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::i___Unity__Properties__IPropertyBag_1_TList_() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag_1<TList>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IPropertyBag"
template <typename TList, typename TElement> constexpr Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::operator ::Unity::Properties::IPropertyBag*() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyBag"
template <typename TList, typename TElement>
constexpr ::Unity::Properties::IPropertyBag* Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::i___Unity__Properties__IPropertyBag() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::ICollectionPropertyBagAccept_1<TList>"
template <typename TList, typename TElement>
constexpr Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::operator ::Unity::Properties::ICollectionPropertyBagAccept_1<TList>*() noexcept {
  return static_cast<::Unity::Properties::ICollectionPropertyBagAccept_1<TList>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::ICollectionPropertyBagAccept_1<TList>"
template <typename TList, typename TElement>
constexpr ::Unity::Properties::ICollectionPropertyBagAccept_1<TList>*
Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::i___Unity__Properties__ICollectionPropertyBagAccept_1_TList_() noexcept {
  return static_cast<::Unity::Properties::ICollectionPropertyBagAccept_1<TList>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IListPropertyBagAccept_1<TList>"
template <typename TList, typename TElement> constexpr Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::operator ::Unity::Properties::IListPropertyBagAccept_1<TList>*() noexcept {
  return static_cast<::Unity::Properties::IListPropertyBagAccept_1<TList>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IListPropertyBagAccept_1<TList>"
template <typename TList, typename TElement>
constexpr ::Unity::Properties::IListPropertyBagAccept_1<TList>* Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::i___Unity__Properties__IListPropertyBagAccept_1_TList_() noexcept {
  return static_cast<::Unity::Properties::IListPropertyBagAccept_1<TList>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IListPropertyAccept_1<TList>"
template <typename TList, typename TElement> constexpr Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::operator ::Unity::Properties::IListPropertyAccept_1<TList>*() noexcept {
  return static_cast<::Unity::Properties::IListPropertyAccept_1<TList>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IListPropertyAccept_1<TList>"
template <typename TList, typename TElement>
constexpr ::Unity::Properties::IListPropertyAccept_1<TList>* Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::i___Unity__Properties__IListPropertyAccept_1_TList_() noexcept {
  return static_cast<::Unity::Properties::IListPropertyAccept_1<TList>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IIndexedProperties_1<TList>"
template <typename TList, typename TElement> constexpr Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::operator ::Unity::Properties::IIndexedProperties_1<TList>*() noexcept {
  return static_cast<::Unity::Properties::IIndexedProperties_1<TList>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IIndexedProperties_1<TList>"
template <typename TList, typename TElement>
constexpr ::Unity::Properties::IIndexedProperties_1<TList>* Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::i___Unity__Properties__IIndexedProperties_1_TList_() noexcept {
  return static_cast<::Unity::Properties::IIndexedProperties_1<TList>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IConstructorWithCount_1<TList>"
template <typename TList, typename TElement> constexpr Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::operator ::Unity::Properties::IConstructorWithCount_1<TList>*() noexcept {
  return static_cast<::Unity::Properties::IConstructorWithCount_1<TList>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IConstructorWithCount_1<TList>"
template <typename TList, typename TElement>
constexpr ::Unity::Properties::IConstructorWithCount_1<TList>* Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::i___Unity__Properties__IConstructorWithCount_1_TList_() noexcept {
  return static_cast<::Unity::Properties::IConstructorWithCount_1<TList>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IConstructor"
template <typename TList, typename TElement> constexpr Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::operator ::Unity::Properties::IConstructor*() noexcept {
  return static_cast<::Unity::Properties::IConstructor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IConstructor"
template <typename TList, typename TElement>
constexpr ::Unity::Properties::IConstructor* Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::i___Unity__Properties__IConstructor() noexcept {
  return static_cast<::Unity::Properties::IConstructor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TList>"
template <typename TList, typename TElement>
constexpr Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::operator ::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TList>*() noexcept {
  return static_cast<::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TList>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TList>"
template <typename TList, typename TElement>
constexpr ::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TList>*
Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::i___Unity__Properties__IIndexedCollectionPropertyBagEnumerator_1_TList_() noexcept {
  return static_cast<::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TList>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TList, typename TElement> constexpr ::Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>::IndexedCollectionPropertyBag_2() {}
