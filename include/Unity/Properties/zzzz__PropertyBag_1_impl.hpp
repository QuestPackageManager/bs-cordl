#pragma once
// IWYU pragma private; include "Unity/Properties/PropertyBag_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/zzzz__InstantiationKind_impl.hpp"
#include "Unity/Properties/zzzz__PropertyBag_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/Internal/zzzz__IPropertyBagRegister_def.hpp"
#include "Unity/Properties/zzzz__IConstructor_1_def.hpp"
#include "Unity/Properties/zzzz__IConstructor_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBagVisitor_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_def.hpp"
#include "Unity/Properties/zzzz__ITypeVisitor_def.hpp"
#include "Unity/Properties/zzzz__InstantiationKind_def.hpp"
#include "Unity/Properties/zzzz__PropertyCollection_1_def.hpp"
template <typename TContainer> constexpr ::Unity::Properties::InstantiationKind& Unity::Properties::PropertyBag_1<TContainer>::__cordl_internal_get__InstantiationKind_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InstantiationKind_k__BackingField;
}
template <typename TContainer> constexpr ::Unity::Properties::InstantiationKind const& Unity::Properties::PropertyBag_1<TContainer>::__cordl_internal_get__InstantiationKind_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InstantiationKind_k__BackingField;
}
template <typename TContainer> constexpr void Unity::Properties::PropertyBag_1<TContainer>::__cordl_internal_set__InstantiationKind_k__BackingField(::Unity::Properties::InstantiationKind value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____InstantiationKind_k__BackingField = value;
}
template <typename TContainer> inline void Unity::Properties::PropertyBag_1<TContainer>::Unity_Properties_Internal_IPropertyBagRegister_Register() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyBag_1<TContainer>*>::get(),
                                               "Unity.Properties.Internal.IPropertyBagRegister.Register", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContainer> inline void Unity::Properties::PropertyBag_1<TContainer>::Accept(::Unity::Properties::ITypeVisitor* visitor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyBag_1<TContainer>*>::get(), "Accept", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::ITypeVisitor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visitor);
}
template <typename TContainer>
inline void Unity::Properties::PropertyBag_1<TContainer>::Unity_Properties_IPropertyBag_Accept(::Unity::Properties::IPropertyBagVisitor* visitor, ::ByRef<::System::Object*> container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyBag_1<TContainer>*>::get(), "Unity.Properties.IPropertyBag.Accept", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::IPropertyBagVisitor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Object*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visitor, container);
}
template <typename TContainer>
inline void Unity::Properties::PropertyBag_1<TContainer>::Unity_Properties_IPropertyBag_TContainer__Accept(::Unity::Properties::IPropertyBagVisitor* visitor, ::ByRef<TContainer> container) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyBag_1<TContainer>*>::get(),
                                               "Unity.Properties.IPropertyBag<TContainer>.Accept", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::IPropertyBagVisitor*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TContainer>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visitor, container);
}
template <typename TContainer> inline ::Unity::Properties::PropertyCollection_1<TContainer> Unity::Properties::PropertyBag_1<TContainer>::Unity_Properties_IPropertyBag_TContainer__GetProperties() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyBag_1<TContainer>*>::get(),
                                               "Unity.Properties.IPropertyBag<TContainer>.GetProperties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyCollection_1<TContainer>, false>(this, ___internal_method);
}
template <typename TContainer>
inline ::Unity::Properties::PropertyCollection_1<TContainer> Unity::Properties::PropertyBag_1<TContainer>::Unity_Properties_IPropertyBag_TContainer__GetProperties(::ByRef<TContainer> container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyBag_1<TContainer>*>::get(),
                                                                             "Unity.Properties.IPropertyBag<TContainer>.GetProperties", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TContainer>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyCollection_1<TContainer>, false>(this, ___internal_method, container);
}
template <typename TContainer> inline ::Unity::Properties::InstantiationKind Unity::Properties::PropertyBag_1<TContainer>::Unity_Properties_IConstructor_get_InstantiationKind() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyBag_1<TContainer>*>::get(),
                                               "Unity.Properties.IConstructor.get_InstantiationKind", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::InstantiationKind, false>(this, ___internal_method);
}
template <typename TContainer> inline TContainer Unity::Properties::PropertyBag_1<TContainer>::Unity_Properties_IConstructor_TContainer__Instantiate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyBag_1<TContainer>*>::get(),
                                               "Unity.Properties.IConstructor<TContainer>.Instantiate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TContainer, false>(this, ___internal_method);
}
template <typename TContainer> inline ::Unity::Properties::PropertyCollection_1<TContainer> Unity::Properties::PropertyBag_1<TContainer>::GetProperties() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyBag_1<TContainer>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyCollection_1<TContainer>, false>(this, ___internal_method);
}
template <typename TContainer> inline ::Unity::Properties::PropertyCollection_1<TContainer> Unity::Properties::PropertyBag_1<TContainer>::GetProperties(::ByRef<TContainer> container) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyBag_1<TContainer>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyCollection_1<TContainer>, false>(this, ___internal_method, container);
}
template <typename TContainer> inline ::Unity::Properties::InstantiationKind Unity::Properties::PropertyBag_1<TContainer>::get_InstantiationKind() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyBag_1<TContainer>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::InstantiationKind, false>(this, ___internal_method);
}
template <typename TContainer> inline TContainer Unity::Properties::PropertyBag_1<TContainer>::Instantiate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyBag_1<TContainer>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<TContainer, false>(this, ___internal_method);
}
template <typename TContainer> inline void Unity::Properties::PropertyBag_1<TContainer>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyBag_1<TContainer>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContainer> inline ::Unity::Properties::PropertyBag_1<TContainer>* Unity::Properties::PropertyBag_1<TContainer>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::PropertyBag_1<TContainer>*>());
}
/// @brief Convert operator to "::Unity::Properties::IPropertyBag_1<TContainer>"
template <typename TContainer> constexpr Unity::Properties::PropertyBag_1<TContainer>::operator ::Unity::Properties::IPropertyBag_1<TContainer>*() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag_1<TContainer>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyBag_1<TContainer>"
template <typename TContainer> constexpr ::Unity::Properties::IPropertyBag_1<TContainer>* Unity::Properties::PropertyBag_1<TContainer>::i___Unity__Properties__IPropertyBag_1_TContainer_() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag_1<TContainer>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IPropertyBag"
template <typename TContainer> constexpr Unity::Properties::PropertyBag_1<TContainer>::operator ::Unity::Properties::IPropertyBag*() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyBag"
template <typename TContainer> constexpr ::Unity::Properties::IPropertyBag* Unity::Properties::PropertyBag_1<TContainer>::i___Unity__Properties__IPropertyBag() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::Internal::IPropertyBagRegister"
template <typename TContainer> constexpr Unity::Properties::PropertyBag_1<TContainer>::operator ::Unity::Properties::Internal::IPropertyBagRegister*() noexcept {
  return static_cast<::Unity::Properties::Internal::IPropertyBagRegister*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::Internal::IPropertyBagRegister"
template <typename TContainer>
constexpr ::Unity::Properties::Internal::IPropertyBagRegister* Unity::Properties::PropertyBag_1<TContainer>::i___Unity__Properties__Internal__IPropertyBagRegister() noexcept {
  return static_cast<::Unity::Properties::Internal::IPropertyBagRegister*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IConstructor_1<TContainer>"
template <typename TContainer> constexpr Unity::Properties::PropertyBag_1<TContainer>::operator ::Unity::Properties::IConstructor_1<TContainer>*() noexcept {
  return static_cast<::Unity::Properties::IConstructor_1<TContainer>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IConstructor_1<TContainer>"
template <typename TContainer> constexpr ::Unity::Properties::IConstructor_1<TContainer>* Unity::Properties::PropertyBag_1<TContainer>::i___Unity__Properties__IConstructor_1_TContainer_() noexcept {
  return static_cast<::Unity::Properties::IConstructor_1<TContainer>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IConstructor"
template <typename TContainer> constexpr Unity::Properties::PropertyBag_1<TContainer>::operator ::Unity::Properties::IConstructor*() noexcept {
  return static_cast<::Unity::Properties::IConstructor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IConstructor"
template <typename TContainer> constexpr ::Unity::Properties::IConstructor* Unity::Properties::PropertyBag_1<TContainer>::i___Unity__Properties__IConstructor() noexcept {
  return static_cast<::Unity::Properties::IConstructor*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TContainer> constexpr ::Unity::Properties::PropertyBag_1<TContainer>::PropertyBag_1() {}
