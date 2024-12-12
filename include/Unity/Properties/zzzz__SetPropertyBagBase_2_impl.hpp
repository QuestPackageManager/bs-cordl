#pragma once
// IWYU pragma private; include "Unity/Properties/SetPropertyBagBase_2.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_impl.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_impl.hpp"
#include "Unity/Properties/zzzz__PropertyBag_1_impl.hpp"
#include "Unity/Properties/zzzz__Property_2_impl.hpp"
#include "Unity/Properties/zzzz__SetPropertyBagBase_2_def.hpp"
#include "Unity/Properties/zzzz__SetPropertyBagBase_2_def.hpp"
template <typename TSet, typename TElement> constexpr TElement& Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>::__cordl_internal_get_m_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
template <typename TSet, typename TElement> constexpr TElement const& Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>::__cordl_internal_get_m_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
template <typename TSet, typename TElement> constexpr void Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>::__cordl_internal_set_m_Value(TElement value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_Value, value);
}
template <typename TSet, typename TElement> inline ::StringW Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>::get_Name() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TSet, typename TElement> inline void Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSet, typename TElement>
inline ::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>* Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>*>());
}
// Ctor Parameters []
template <typename TSet, typename TElement> constexpr ::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>::SetPropertyBagBase_2_SetElementProperty() {}
template <typename TSet, typename TElement>
constexpr ::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>*& Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::__cordl_internal_get_m_Property() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Property;
}
template <typename TSet, typename TElement>
constexpr ::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>* const& Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::__cordl_internal_get_m_Property() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Property;
}
template <typename TSet, typename TElement>
constexpr void Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::__cordl_internal_set_m_Property(::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_Property, value);
}
template <typename TSet, typename TElement> inline void Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::SetPropertyBagBase_2<TSet, TElement>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSet, typename TElement> inline ::Unity::Properties::SetPropertyBagBase_2<TSet, TElement>* Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::SetPropertyBagBase_2<TSet, TElement>*>());
}
/// @brief Convert operator to "::Unity::Properties::IPropertyBag_1<TSet>"
template <typename TSet, typename TElement> constexpr Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::operator ::Unity::Properties::IPropertyBag_1<TSet>*() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag_1<TSet>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyBag_1<TSet>"
template <typename TSet, typename TElement>
constexpr ::Unity::Properties::IPropertyBag_1<TSet>* Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::i___Unity__Properties__IPropertyBag_1_TSet_() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag_1<TSet>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IPropertyBag"
template <typename TSet, typename TElement> constexpr Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::operator ::Unity::Properties::IPropertyBag*() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyBag"
template <typename TSet, typename TElement> constexpr ::Unity::Properties::IPropertyBag* Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::i___Unity__Properties__IPropertyBag() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TSet, typename TElement> constexpr ::Unity::Properties::SetPropertyBagBase_2<TSet, TElement>::SetPropertyBagBase_2() {}
