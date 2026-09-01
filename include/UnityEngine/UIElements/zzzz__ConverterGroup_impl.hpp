#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\ConverterGroup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TypeConverterRegistry_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ConverterGroup_def.hpp"
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
#include "Unity/Properties/zzzz__VisitReturnCode_def.hpp"
#include "UnityEngine/UIElements/zzzz__TypeConverterRegistry_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ConverterGroup.get_registry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TypeConverterRegistry (::UnityEngine::UIElements::ConverterGroup::*)()>(
    &::UnityEngine::UIElements::ConverterGroup::get_registry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c32744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ConverterGroup*>(), { "get_registry", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ConverterGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ConverterGroup::*)(::StringW, ::StringW, ::StringW)>(&::UnityEngine::UIElements::ConverterGroup::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c3274c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ConverterGroup*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::ConverterGroup::__cordl_internal_get__id_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::ConverterGroup::__cordl_internal_get__id_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id_k__BackingField;
}
constexpr void UnityEngine::UIElements::ConverterGroup::__cordl_internal_set__id_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____id_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::UIElements::ConverterGroup::__cordl_internal_get__displayName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::ConverterGroup::__cordl_internal_get__displayName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName_k__BackingField;
}
constexpr void UnityEngine::UIElements::ConverterGroup::__cordl_internal_set__displayName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____displayName_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::UIElements::ConverterGroup::__cordl_internal_get__description_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____description_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::ConverterGroup::__cordl_internal_get__description_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____description_k__BackingField;
}
constexpr void UnityEngine::UIElements::ConverterGroup::__cordl_internal_set__description_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____description_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::TypeConverterRegistry& UnityEngine::UIElements::ConverterGroup::__cordl_internal_get__registry_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registry_k__BackingField;
}
constexpr ::UnityEngine::UIElements::TypeConverterRegistry const& UnityEngine::UIElements::ConverterGroup::__cordl_internal_get__registry_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registry_k__BackingField;
}
constexpr void UnityEngine::UIElements::ConverterGroup::__cordl_internal_set__registry_k__BackingField(::UnityEngine::UIElements::TypeConverterRegistry value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____registry_k__BackingField = value;
}
inline ::UnityEngine::UIElements::TypeConverterRegistry UnityEngine::UIElements::ConverterGroup::get_registry() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ConverterGroup*>(), { "get_registry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TypeConverterRegistry>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ConverterGroup::_ctor(::StringW id, ::StringW displayName, ::StringW description) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ConverterGroup*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, displayName, description);
}
template <typename TSource, typename TDestination> inline bool UnityEngine::UIElements::ConverterGroup::TryConvert(::by_ref<TSource> source, ::by_ref<TDestination> destination) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ConverterGroup*>(),
                          { "TryConvert", { ::i2c::class_of<TSource>(), ::i2c::class_of<TDestination>() }, { ::i2c::type_of<::by_ref<TSource>>(), ::i2c::type_of<::by_ref<TDestination>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSource>(), ::i2c::class_of<TDestination>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, destination);
}
template <typename TContainer, typename TValue>
inline bool UnityEngine::UIElements::ConverterGroup::TrySetValue(::by_ref<TContainer> container, ::by_ref<::Unity::Properties::PropertyPath> path, TValue value,
                                                                 ::by_ref<::Unity::Properties::VisitReturnCode> returnCode) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ConverterGroup*>(),
                                                                                              { "TrySetValue",
                                                                                                { ::i2c::class_of<TContainer>(), ::i2c::class_of<TValue>() },
                                                                                                { ::i2c::type_of<::by_ref<TContainer>>(), ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>(),
                                                                                                  ::i2c::type_of<TValue>(), ::i2c::type_of<::by_ref<::Unity::Properties::VisitReturnCode>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, container, path, value, returnCode);
}
inline ::UnityEngine::UIElements::ConverterGroup* UnityEngine::UIElements::ConverterGroup::New_ctor(::StringW id, ::StringW displayName, ::StringW description) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ConverterGroup*>(id, displayName, description));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ConverterGroup::ConverterGroup() {}
