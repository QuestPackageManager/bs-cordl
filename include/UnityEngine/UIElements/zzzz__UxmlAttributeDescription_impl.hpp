#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlAttributeDescription.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAttributeDescription_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__TemplateAsset_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlTypeRestriction_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UxmlAttributeDescription_Use::UxmlAttributeDescription_Use(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlAttributeDescription_Use::UxmlAttributeDescription_Use() {}
constexpr ::UnityEngine::UIElements::UxmlAttributeDescription_Use UnityEngine::UIElements::UxmlAttributeDescription_Use::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::UxmlAttributeDescription_Use UnityEngine::UIElements::UxmlAttributeDescription_Use::Optional{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::UxmlAttributeDescription_Use UnityEngine::UIElements::UxmlAttributeDescription_Use::Prohibited{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::UxmlAttributeDescription_Use UnityEngine::UIElements::UxmlAttributeDescription_Use::Required{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeDescription::*)()>(&::UnityEngine::UIElements::UxmlAttributeDescription::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6cba020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::UxmlAttributeDescription::*)()>(&::UnityEngine::UIElements::UxmlAttributeDescription::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cba030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.set_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeDescription::*)(::StringW)>(&::UnityEngine::UIElements::UxmlAttributeDescription::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cba038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.set_obsoleteNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeDescription::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::UnityEngine::UIElements::UxmlAttributeDescription::set_obsoleteNames)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6cba040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(),
                                                             { "set_obsoleteNames", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.set_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeDescription::*)(::StringW)>(&::UnityEngine::UIElements::UxmlAttributeDescription::set_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cba0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(), { "set_type", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.set_typeNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeDescription::*)(::StringW)>(
    &::UnityEngine::UIElements::UxmlAttributeDescription::set_typeNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cba0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(), { "set_typeNamespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.set_use
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeDescription::*)(::UnityEngine::UIElements::UxmlAttributeDescription_Use)>(
    &::UnityEngine::UIElements::UxmlAttributeDescription::set_use)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cba0d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(),
                                                                                           { "set_use", {}, { ::i2c::type_of<::UnityEngine::UIElements::UxmlAttributeDescription_Use>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.set_restriction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeDescription::*)(::UnityEngine::UIElements::UxmlTypeRestriction*)>(
    &::UnityEngine::UIElements::UxmlAttributeDescription::set_restriction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cba0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(),
                                                                                           { "set_restriction", {}, { ::i2c::type_of<::UnityEngine::UIElements::UxmlTypeRestriction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.TryFindValueInAttributeOverrides
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UxmlAttributeDescription::*)(
    ::StringW, ::UnityEngine::UIElements::CreationContext, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>*, ::by_ref<::StringW>)>(
    &::UnityEngine::UIElements::UxmlAttributeDescription::TryFindValueInAttributeOverrides)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x6cba0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(),
                            { "TryFindValueInAttributeOverrides",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::UIElements::CreationContext>(),
                                ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>*>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.TryGetValueFromBagAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UxmlAttributeDescription::*)(
    ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext, ::by_ref<::StringW>)>(&::UnityEngine::UIElements::UxmlAttributeDescription::TryGetValueFromBagAsString)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6cba370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(),
                                                             { "TryGetValueFromBagAsString",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::IUxmlAttributes*>(), ::i2c::type_of<::UnityEngine::UIElements::CreationContext>(),
                                                                 ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.TryGetAttributeOverrideValueFromBagAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UxmlAttributeDescription::*)(
    ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext, ::by_ref<::StringW>, ::by_ref<::UnityEngine::UIElements::VisualTreeAsset*>)>(
    &::UnityEngine::UIElements::UxmlAttributeDescription::TryGetAttributeOverrideValueFromBagAsString)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x6cba6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(),
                                                             { "TryGetAttributeOverrideValueFromBagAsString",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::IUxmlAttributes*>(), ::i2c::type_of<::UnityEngine::UIElements::CreationContext>(),
                                                                 ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::VisualTreeAsset*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.ValidateName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UxmlAttributeDescription::*)()>(&::UnityEngine::UIElements::UxmlAttributeDescription::ValidateName)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6cba934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(), { "ValidateName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.TryGetValueFromBagAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UxmlAttributeDescription::*)(
    ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext, ::by_ref<::StringW>, ::by_ref<::UnityEngine::UIElements::VisualTreeAsset*>)>(
    &::UnityEngine::UIElements::UxmlAttributeDescription::TryGetValueFromBagAsString)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x6cba3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(),
                                                             { "TryGetValueFromBagAsString",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::IUxmlAttributes*>(), ::i2c::type_of<::UnityEngine::UIElements::CreationContext>(),
                                                                 ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::VisualTreeAsset*>>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_get__name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_get__name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr void UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_set__name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____name_k__BackingField = value;
}
constexpr ::ArrayW<::StringW>& UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_get_m_ObsoleteNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ObsoleteNames;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_get_m_ObsoleteNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ObsoleteNames;
}
constexpr void UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_set_m_ObsoleteNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ObsoleteNames = value;
}
constexpr ::StringW& UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_get__type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_get__type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type_k__BackingField;
}
constexpr void UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_set__type_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_get__typeNamespace_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeNamespace_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_get__typeNamespace_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeNamespace_k__BackingField;
}
constexpr void UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_set__typeNamespace_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____typeNamespace_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::UxmlAttributeDescription_Use& UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_get__use_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____use_k__BackingField;
}
constexpr ::UnityEngine::UIElements::UxmlAttributeDescription_Use const& UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_get__use_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____use_k__BackingField;
}
constexpr void UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_set__use_k__BackingField(::UnityEngine::UIElements::UxmlAttributeDescription_Use value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____use_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::UxmlTypeRestriction*& UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_get__restriction_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____restriction_k__BackingField;
}
constexpr ::UnityEngine::UIElements::UxmlTypeRestriction* const& UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_get__restriction_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____restriction_k__BackingField;
}
constexpr void UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_set__restriction_k__BackingField(::UnityEngine::UIElements::UxmlTypeRestriction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____restriction_k__BackingField = value;
}
inline void UnityEngine::UIElements::UxmlAttributeDescription::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::UxmlAttributeDescription::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UxmlAttributeDescription::set_name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UxmlAttributeDescription::set_obsoleteNames(::System::Collections::Generic::IEnumerable_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(),
                                                           { "set_obsoleteNames", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UxmlAttributeDescription::set_type(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(), { "set_type", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UxmlAttributeDescription::set_typeNamespace(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(), { "set_typeNamespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UxmlAttributeDescription::set_use(::UnityEngine::UIElements::UxmlAttributeDescription_Use value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(),
                                                                                         { "set_use", {}, { ::i2c::type_of<::UnityEngine::UIElements::UxmlAttributeDescription_Use>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UxmlAttributeDescription::set_restriction(::UnityEngine::UIElements::UxmlTypeRestriction* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(),
                                                                                         { "set_restriction", {}, { ::i2c::type_of<::UnityEngine::UIElements::UxmlTypeRestriction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::UxmlAttributeDescription::TryFindValueInAttributeOverrides(
    ::StringW elementName, ::UnityEngine::UIElements::CreationContext cc, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* attributeOverrides,
    ::by_ref<::StringW> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(),
                          { "TryFindValueInAttributeOverrides",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::UIElements::CreationContext>(),
                              ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>*>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, elementName, cc, attributeOverrides, value);
}
inline bool UnityEngine::UIElements::UxmlAttributeDescription::TryGetValueFromBagAsString(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc,
                                                                                          ::by_ref<::StringW> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(),
                          { "TryGetValueFromBagAsString",
                            {},
                            { ::i2c::type_of<::UnityEngine::UIElements::IUxmlAttributes*>(), ::i2c::type_of<::UnityEngine::UIElements::CreationContext>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bag, cc, value);
}
inline bool UnityEngine::UIElements::UxmlAttributeDescription::TryGetAttributeOverrideValueFromBagAsString(::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                                                           ::UnityEngine::UIElements::CreationContext cc, ::by_ref<::StringW> value,
                                                                                                           ::by_ref<::UnityEngine::UIElements::VisualTreeAsset*> sourceAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(),
                                                           { "TryGetAttributeOverrideValueFromBagAsString",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::IUxmlAttributes*>(), ::i2c::type_of<::UnityEngine::UIElements::CreationContext>(),
                                                               ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::VisualTreeAsset*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bag, cc, value, sourceAsset);
}
inline bool UnityEngine::UIElements::UxmlAttributeDescription::ValidateName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(), { "ValidateName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UxmlAttributeDescription::TryGetValueFromBagAsString(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc,
                                                                                          ::by_ref<::StringW> value, ::by_ref<::UnityEngine::UIElements::VisualTreeAsset*> sourceAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(),
                                                           { "TryGetValueFromBagAsString",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::IUxmlAttributes*>(), ::i2c::type_of<::UnityEngine::UIElements::CreationContext>(),
                                                               ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::VisualTreeAsset*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bag, cc, value, sourceAsset);
}
template <typename T>
inline bool UnityEngine::UIElements::UxmlAttributeDescription::TryGetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc,
                                                                                  ::System::Func_3<::StringW, T, T>* converterFunc, T defaultValue, ::by_ref<T> value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(),
                                                           { "TryGetValueFromBag",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::UnityEngine::UIElements::IUxmlAttributes*>(), ::i2c::type_of<::UnityEngine::UIElements::CreationContext>(),
                                                               ::i2c::type_of<::System::Func_3<::StringW, T, T>*>(), ::i2c::type_of<T>(), ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bag, cc, converterFunc, defaultValue, value);
}
template <typename T>
inline T UnityEngine::UIElements::UxmlAttributeDescription::GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc,
                                                                            ::System::Func_3<::StringW, T, T>* converterFunc, T defaultValue) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeDescription*>(),
                                                           { "GetValueFromBag",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::UnityEngine::UIElements::IUxmlAttributes*>(), ::i2c::type_of<::UnityEngine::UIElements::CreationContext>(),
                                                               ::i2c::type_of<::System::Func_3<::StringW, T, T>*>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, bag, cc, converterFunc, defaultValue);
}
inline ::UnityEngine::UIElements::UxmlAttributeDescription* UnityEngine::UIElements::UxmlAttributeDescription::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UxmlAttributeDescription*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlAttributeDescription::UxmlAttributeDescription() {}
