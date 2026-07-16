#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/PropertyBagStore.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/Internal/zzzz__PropertyBagStore_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Properties/Internal/zzzz__PropertyBagStore_def.hpp"
#include "Unity/Properties/Internal/zzzz__ReflectedPropertyBagProvider_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_def.hpp"
template <typename TContainer> inline void Unity::Properties::Internal::PropertyBagStore_TypedStore_1<TContainer>::setStaticF_PropertyBag(::Unity::Properties::IPropertyBag_1<TContainer>* value) {
  ::cordl_internals::setStaticField<::Unity::Properties::IPropertyBag_1<TContainer>*, "PropertyBag", ::Unity::Properties::Internal::PropertyBagStore_TypedStore_1<TContainer>>(
      std::forward<::Unity::Properties::IPropertyBag_1<TContainer>*>(value));
}
template <typename TContainer> inline ::Unity::Properties::IPropertyBag_1<TContainer>* Unity::Properties::Internal::PropertyBagStore_TypedStore_1<TContainer>::getStaticF_PropertyBag() {
  return ::cordl_internals::getStaticField<::Unity::Properties::IPropertyBag_1<TContainer>*, "PropertyBag", ::Unity::Properties::Internal::PropertyBagStore_TypedStore_1<TContainer>>();
}
// Ctor Parameters []
template <typename TContainer> constexpr ::Unity::Properties::Internal::PropertyBagStore_TypedStore_1<TContainer>::PropertyBagStore_TypedStore_1() {}
//  Writing Method size for method: ::Unity::Properties::Internal::PropertyBagStore.get_ReflectedPropertyBagProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Properties::Internal::ReflectedPropertyBagProvider* (*)()>(
    &::Unity::Properties::Internal::PropertyBagStore::get_ReflectedPropertyBagProvider)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6bb13d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::PropertyBagStore*>(), { "get_ReflectedPropertyBagProvider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::PropertyBagStore.CreatePropertyBagProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Properties::Internal::PropertyBagStore::CreatePropertyBagProvider)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6baeb98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::PropertyBagStore*>(), { "CreatePropertyBagProvider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::PropertyBagStore.GetPropertyBag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Properties::IPropertyBag* (*)(::System::Type*)>(&::Unity::Properties::Internal::PropertyBagStore::GetPropertyBag)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x6b9e884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::PropertyBagStore*>(), { "GetPropertyBag", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void
Unity::Properties::Internal::PropertyBagStore::setStaticF_s_PropertyBags(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::IPropertyBag*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::IPropertyBag*>*, "s_PropertyBags",
                                    ::Unity::Properties::Internal::PropertyBagStore*>(
      std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::IPropertyBag*>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::IPropertyBag*>* Unity::Properties::Internal::PropertyBagStore::getStaticF_s_PropertyBags() {
  return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::IPropertyBag*>*, "s_PropertyBags",
                                           ::Unity::Properties::Internal::PropertyBagStore*>();
}
inline void Unity::Properties::Internal::PropertyBagStore::setStaticF_s_RegisteredTypes(::System::Collections::Generic::List_1<::System::Type*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Type*>*, "s_RegisteredTypes", ::Unity::Properties::Internal::PropertyBagStore*>(
      std::forward<::System::Collections::Generic::List_1<::System::Type*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Type*>* Unity::Properties::Internal::PropertyBagStore::getStaticF_s_RegisteredTypes() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Type*>*, "s_RegisteredTypes", ::Unity::Properties::Internal::PropertyBagStore*>();
}
inline void Unity::Properties::Internal::PropertyBagStore::setStaticF_s_PropertyBagProvider(::Unity::Properties::Internal::ReflectedPropertyBagProvider* value) {
  ::cordl_internals::setStaticField<::Unity::Properties::Internal::ReflectedPropertyBagProvider*, "s_PropertyBagProvider", ::Unity::Properties::Internal::PropertyBagStore*>(
      std::forward<::Unity::Properties::Internal::ReflectedPropertyBagProvider*>(value));
}
inline ::Unity::Properties::Internal::ReflectedPropertyBagProvider* Unity::Properties::Internal::PropertyBagStore::getStaticF_s_PropertyBagProvider() {
  return ::cordl_internals::getStaticField<::Unity::Properties::Internal::ReflectedPropertyBagProvider*, "s_PropertyBagProvider", ::Unity::Properties::Internal::PropertyBagStore*>();
}
inline ::Unity::Properties::Internal::ReflectedPropertyBagProvider* Unity::Properties::Internal::PropertyBagStore::get_ReflectedPropertyBagProvider() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::PropertyBagStore*>(), { "get_ReflectedPropertyBagProvider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::Internal::ReflectedPropertyBagProvider*>(nullptr, ___internal_method);
}
inline void Unity::Properties::Internal::PropertyBagStore::CreatePropertyBagProvider() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::PropertyBagStore*>(), { "CreatePropertyBagProvider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename TContainer> inline void Unity::Properties::Internal::PropertyBagStore::AddPropertyBag(::Unity::Properties::IPropertyBag_1<TContainer>* propertyBag) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::PropertyBagStore*>(),
                                                           { "AddPropertyBag", { ::i2c::class_of<TContainer>() }, { ::i2c::type_of<::Unity::Properties::IPropertyBag_1<TContainer>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, propertyBag);
}
template <typename TContainer> inline ::Unity::Properties::IPropertyBag_1<TContainer>* Unity::Properties::Internal::PropertyBagStore::GetPropertyBag() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::PropertyBagStore*>(), { "GetPropertyBag", { ::i2c::class_of<TContainer>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::IPropertyBag_1<TContainer>*>(nullptr, ___internal_method);
}
inline ::Unity::Properties::IPropertyBag* Unity::Properties::Internal::PropertyBagStore::GetPropertyBag(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::PropertyBagStore*>(), { "GetPropertyBag", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::IPropertyBag*>(nullptr, ___internal_method, type);
}
template <typename TValue> inline bool Unity::Properties::Internal::PropertyBagStore::TryGetPropertyBagForValue(::by_ref<TValue> value, ::by_ref<::Unity::Properties::IPropertyBag*> propertyBag) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::PropertyBagStore*>(),
                          { "TryGetPropertyBagForValue", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<::by_ref<TValue>>(), ::i2c::type_of<::by_ref<::Unity::Properties::IPropertyBag*>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, propertyBag);
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::PropertyBagStore::PropertyBagStore() {}
