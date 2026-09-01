#pragma once
// IWYU pragma private; include "GlobalNamespace\CompositeLightControllerSet.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CompositeLightControllerSet_def.hpp"
#include "GlobalNamespace/zzzz__CompositeLightControllerData_def.hpp"
#include "GlobalNamespace/zzzz__CompositeModification_def.hpp"
#include "GlobalNamespace/zzzz__LightGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CompositeLightControllerSet.get_modification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CompositeModification* (::GlobalNamespace::CompositeLightControllerSet::*)()>(
    &::GlobalNamespace::CompositeLightControllerSet::get_modification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59932c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightControllerSet*>(), { "get_modification", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightControllerSet.get_lightControllerData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CompositeLightControllerData* (::GlobalNamespace::CompositeLightControllerSet::*)()>(
    &::GlobalNamespace::CompositeLightControllerSet::get_lightControllerData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59932cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightControllerSet*>(), { "get_lightControllerData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightControllerSet.get_lightGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::LightGroup> (::GlobalNamespace::CompositeLightControllerSet::*)()>(
    &::GlobalNamespace::CompositeLightControllerSet::get_lightGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59932d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightControllerSet*>(), { "get_lightGroup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightControllerSet.get_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CompositeLightControllerSet::*)()>(&::GlobalNamespace::CompositeLightControllerSet::get_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59932dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightControllerSet*>(), { "get_displayName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightControllerSet.get_description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CompositeLightControllerSet::*)()>(&::GlobalNamespace::CompositeLightControllerSet::get_description)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59932e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightControllerSet*>(), { "get_description", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightControllerSet.get_editorName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CompositeLightControllerSet::*)()>(&::GlobalNamespace::CompositeLightControllerSet::get_editorName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59932ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightControllerSet*>(), { "get_editorName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightControllerSet.get_editorCategory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CompositeLightControllerSet::*)()>(&::GlobalNamespace::CompositeLightControllerSet::get_editorCategory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59932f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightControllerSet*>(), { "get_editorCategory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightControllerSet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLightControllerSet::*)()>(&::GlobalNamespace::CompositeLightControllerSet::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x599307c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightControllerSet*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CompositeModification*& GlobalNamespace::CompositeLightControllerSet::__cordl_internal_get__modification() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modification;
}
constexpr ::GlobalNamespace::CompositeModification* const& GlobalNamespace::CompositeLightControllerSet::__cordl_internal_get__modification() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modification;
}
constexpr void GlobalNamespace::CompositeLightControllerSet::__cordl_internal_set__modification(::GlobalNamespace::CompositeModification* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____modification = value;
}
constexpr ::GlobalNamespace::CompositeLightControllerData*& GlobalNamespace::CompositeLightControllerSet::__cordl_internal_get__lightControllerData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightControllerData;
}
constexpr ::GlobalNamespace::CompositeLightControllerData* const& GlobalNamespace::CompositeLightControllerSet::__cordl_internal_get__lightControllerData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightControllerData;
}
constexpr void GlobalNamespace::CompositeLightControllerSet::__cordl_internal_set__lightControllerData(::GlobalNamespace::CompositeLightControllerData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightControllerData = value;
}
constexpr ::UnityW<::GlobalNamespace::LightGroup>& GlobalNamespace::CompositeLightControllerSet::__cordl_internal_get__lightGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroup;
}
constexpr ::UnityW<::GlobalNamespace::LightGroup> const& GlobalNamespace::CompositeLightControllerSet::__cordl_internal_get__lightGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroup;
}
constexpr void GlobalNamespace::CompositeLightControllerSet::__cordl_internal_set__lightGroup(::UnityW<::GlobalNamespace::LightGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightGroup = value;
}
constexpr ::StringW& GlobalNamespace::CompositeLightControllerSet::__cordl_internal_get__displayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName;
}
constexpr ::StringW const& GlobalNamespace::CompositeLightControllerSet::__cordl_internal_get__displayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName;
}
constexpr void GlobalNamespace::CompositeLightControllerSet::__cordl_internal_set__displayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____displayName = value;
}
constexpr ::StringW& GlobalNamespace::CompositeLightControllerSet::__cordl_internal_get__description() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____description;
}
constexpr ::StringW const& GlobalNamespace::CompositeLightControllerSet::__cordl_internal_get__description() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____description;
}
constexpr void GlobalNamespace::CompositeLightControllerSet::__cordl_internal_set__description(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____description = value;
}
constexpr ::StringW& GlobalNamespace::CompositeLightControllerSet::__cordl_internal_get__editorName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editorName;
}
constexpr ::StringW const& GlobalNamespace::CompositeLightControllerSet::__cordl_internal_get__editorName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editorName;
}
constexpr void GlobalNamespace::CompositeLightControllerSet::__cordl_internal_set__editorName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____editorName = value;
}
constexpr ::StringW& GlobalNamespace::CompositeLightControllerSet::__cordl_internal_get__editorCategory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editorCategory;
}
constexpr ::StringW const& GlobalNamespace::CompositeLightControllerSet::__cordl_internal_get__editorCategory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editorCategory;
}
constexpr void GlobalNamespace::CompositeLightControllerSet::__cordl_internal_set__editorCategory(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____editorCategory = value;
}
inline ::GlobalNamespace::CompositeModification* GlobalNamespace::CompositeLightControllerSet::get_modification() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightControllerSet*>(), { "get_modification", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CompositeModification*>(this, ___internal_method);
}
inline ::GlobalNamespace::CompositeLightControllerData* GlobalNamespace::CompositeLightControllerSet::get_lightControllerData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightControllerSet*>(), { "get_lightControllerData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CompositeLightControllerData*>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::LightGroup> GlobalNamespace::CompositeLightControllerSet::get_lightGroup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightControllerSet*>(), { "get_lightGroup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LightGroup>>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::CompositeLightControllerSet::get_displayName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightControllerSet*>(), { "get_displayName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::CompositeLightControllerSet::get_description() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightControllerSet*>(), { "get_description", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::CompositeLightControllerSet::get_editorName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightControllerSet*>(), { "get_editorName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::CompositeLightControllerSet::get_editorCategory() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightControllerSet*>(), { "get_editorCategory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::CompositeLightControllerSet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightControllerSet*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CompositeLightControllerSet* GlobalNamespace::CompositeLightControllerSet::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CompositeLightControllerSet*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CompositeLightControllerSet::CompositeLightControllerSet() {}
