#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/PropertyBagStore.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/Internal/zzzz__PropertyBagStore_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Properties/Internal/zzzz__PropertyBagStore_def.hpp"
#include "Unity/Properties/Internal/zzzz__ReflectedPropertyBagProvider_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_def.hpp"
template <typename TContainer> inline void Unity::Properties::Internal::PropertyBagStore_TypedStore_1<TContainer>::setStaticF_PropertyBag(::Unity::Properties::IPropertyBag_1<TContainer>* value) {
  ::cordl_internals::setStaticField<::Unity::Properties::IPropertyBag_1<TContainer>*, "PropertyBag",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::PropertyBagStore_TypedStore_1<TContainer>>::get>(
      std::forward<::Unity::Properties::IPropertyBag_1<TContainer>*>(value));
}
template <typename TContainer> inline ::Unity::Properties::IPropertyBag_1<TContainer>* Unity::Properties::Internal::PropertyBagStore_TypedStore_1<TContainer>::getStaticF_PropertyBag() {
  return ::cordl_internals::getStaticField<::Unity::Properties::IPropertyBag_1<TContainer>*, "PropertyBag",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::PropertyBagStore_TypedStore_1<TContainer>>::get>();
}
// Ctor Parameters []
template <typename TContainer> constexpr ::Unity::Properties::Internal::PropertyBagStore_TypedStore_1<TContainer>::PropertyBagStore_TypedStore_1() {}
//  Writing Method size for method: ::Unity::Properties::Internal::PropertyBagStore.GetPropertyBag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Properties::IPropertyBag* (*)(::System::Type*)>(
    &::Unity::Properties::Internal::PropertyBagStore::GetPropertyBag)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x49181a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::PropertyBagStore*>::get(), "GetPropertyBag",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline void
Unity::Properties::Internal::PropertyBagStore::setStaticF_s_PropertyBags(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::IPropertyBag*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::IPropertyBag*>*, "s_PropertyBags",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::PropertyBagStore*>::get>(
      std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::IPropertyBag*>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::IPropertyBag*>* Unity::Properties::Internal::PropertyBagStore::getStaticF_s_PropertyBags() {
  return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::IPropertyBag*>*, "s_PropertyBags",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::PropertyBagStore*>::get>();
}
inline void Unity::Properties::Internal::PropertyBagStore::setStaticF_s_RegisteredTypes(::System::Collections::Generic::List_1<::System::Type*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Type*>*, "s_RegisteredTypes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::PropertyBagStore*>::get>(
      std::forward<::System::Collections::Generic::List_1<::System::Type*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Type*>* Unity::Properties::Internal::PropertyBagStore::getStaticF_s_RegisteredTypes() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Type*>*, "s_RegisteredTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::PropertyBagStore*>::get>();
}
inline void Unity::Properties::Internal::PropertyBagStore::setStaticF_NewTypeRegistered(::System::Action_2<::System::Type*, ::Unity::Properties::IPropertyBag*>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::System::Type*, ::Unity::Properties::IPropertyBag*>*, "NewTypeRegistered",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::PropertyBagStore*>::get>(
      std::forward<::System::Action_2<::System::Type*, ::Unity::Properties::IPropertyBag*>*>(value));
}
inline ::System::Action_2<::System::Type*, ::Unity::Properties::IPropertyBag*>* Unity::Properties::Internal::PropertyBagStore::getStaticF_NewTypeRegistered() {
  return ::cordl_internals::getStaticField<::System::Action_2<::System::Type*, ::Unity::Properties::IPropertyBag*>*, "NewTypeRegistered",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::PropertyBagStore*>::get>();
}
inline void Unity::Properties::Internal::PropertyBagStore::setStaticF_s_PropertyBagProvider(::Unity::Properties::Internal::ReflectedPropertyBagProvider* value) {
  ::cordl_internals::setStaticField<::Unity::Properties::Internal::ReflectedPropertyBagProvider*, "s_PropertyBagProvider",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::PropertyBagStore*>::get>(
      std::forward<::Unity::Properties::Internal::ReflectedPropertyBagProvider*>(value));
}
inline ::Unity::Properties::Internal::ReflectedPropertyBagProvider* Unity::Properties::Internal::PropertyBagStore::getStaticF_s_PropertyBagProvider() {
  return ::cordl_internals::getStaticField<::Unity::Properties::Internal::ReflectedPropertyBagProvider*, "s_PropertyBagProvider",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::PropertyBagStore*>::get>();
}
template <typename TContainer> inline void Unity::Properties::Internal::PropertyBagStore::AddPropertyBag(::Unity::Properties::IPropertyBag_1<TContainer>* propertyBag) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::PropertyBagStore*>::get(), "AddPropertyBag",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::IPropertyBag_1<TContainer>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, propertyBag);
}
template <typename TContainer> inline ::Unity::Properties::IPropertyBag_1<TContainer>* Unity::Properties::Internal::PropertyBagStore::GetPropertyBag() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::PropertyBagStore*>::get(), "GetPropertyBag",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::IPropertyBag_1<TContainer>*, false>(nullptr, ___internal_method);
}
inline ::Unity::Properties::IPropertyBag* Unity::Properties::Internal::PropertyBagStore::GetPropertyBag(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::PropertyBagStore*>::get(), "GetPropertyBag",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::IPropertyBag*, false>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::PropertyBagStore::PropertyBagStore() {}
