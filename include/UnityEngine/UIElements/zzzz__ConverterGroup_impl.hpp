#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ConverterGroup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/zzzz__ConversionRegistry_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ConverterGroup_def.hpp"
#include "Unity/Properties/zzzz__ConversionRegistry_def.hpp"
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
#include "Unity/Properties/zzzz__VisitReturnCode_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ConverterGroup.get_registry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Properties::ConversionRegistry (::UnityEngine::UIElements::ConverterGroup::*)()>(
    &::UnityEngine::UIElements::ConverterGroup::get_registry)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x7087fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ConverterGroup*>(), { "get_registry", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ConverterGroup.get_registerRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Properties::ConversionRegistry> (::UnityEngine::UIElements::ConverterGroup::*)()>(
    &::UnityEngine::UIElements::ConverterGroup::get_registerRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7087fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ConverterGroup*>(), { "get_registerRef", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ConverterGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ConverterGroup::*)(::StringW, ::StringW, ::StringW)>(&::UnityEngine::UIElements::ConverterGroup::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x7087fdc;

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
constexpr ::Unity::Properties::ConversionRegistry& UnityEngine::UIElements::ConverterGroup::__cordl_internal_get_m_Registry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Registry;
}
constexpr ::Unity::Properties::ConversionRegistry const& UnityEngine::UIElements::ConverterGroup::__cordl_internal_get_m_Registry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Registry;
}
constexpr void UnityEngine::UIElements::ConverterGroup::__cordl_internal_set_m_Registry(::Unity::Properties::ConversionRegistry value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Registry = value;
}
inline ::Unity::Properties::ConversionRegistry UnityEngine::UIElements::ConverterGroup::get_registry() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ConverterGroup*>(), { "get_registry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::ConversionRegistry>(this, ___internal_method);
}
inline ::by_ref<::Unity::Properties::ConversionRegistry> UnityEngine::UIElements::ConverterGroup::get_registerRef() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ConverterGroup*>(), { "get_registerRef", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Properties::ConversionRegistry>>(this, ___internal_method);
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
inline bool UnityEngine::UIElements::ConverterGroup::TrySetValue(::by_ref<TContainer> container, /* [IsReadOnly] */ ::by_ref<::Unity::Properties::PropertyPath const> path, TValue value,
                                                                 ::by_ref<::Unity::Properties::VisitReturnCode> returnCode) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ConverterGroup*>(),
                                                           { "TrySetValue",
                                                             { ::i2c::class_of<TContainer>(), ::i2c::class_of<TValue>() },
                                                             { ::i2c::type_of<::by_ref<TContainer>>(), ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath const>>(), ::i2c::type_of<TValue>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Properties::VisitReturnCode>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, container, path, value, returnCode);
}
inline ::UnityEngine::UIElements::ConverterGroup* UnityEngine::UIElements::ConverterGroup::New_ctor(::StringW id, ::StringW displayName, ::StringW description) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ConverterGroup*>(id, displayName, description));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ConverterGroup::ConverterGroup() {}
