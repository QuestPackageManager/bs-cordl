#pragma once
// IWYU pragma private; include "GlobalNamespace\EnvironmentInfoSO.hpp"
#include "GlobalNamespace/zzzz__EnvironmentType_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentIntensityReductionOptions_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentLightGroups_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentSizeData_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentType_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentInfo_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentLightGroups_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EnvironmentInfoSO_Tags::EnvironmentInfoSO_Tags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentInfoSO_Tags::EnvironmentInfoSO_Tags() {}
constexpr ::GlobalNamespace::EnvironmentInfoSO_Tags GlobalNamespace::EnvironmentInfoSO_Tags::Branded{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::EnvironmentInfoSO_Tags GlobalNamespace::EnvironmentInfoSO_Tags::InDevelopment{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO.get_environmentName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::EnvironmentInfoSO::*)()>(&::GlobalNamespace::EnvironmentInfoSO::get_environmentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370876c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { "get_environmentName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO.get_colorScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::ColorSchemeSO> (::GlobalNamespace::EnvironmentInfoSO::*)()>(
    &::GlobalNamespace::EnvironmentInfoSO::get_colorScheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3708774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { "get_colorScheme", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO.get_serializedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::EnvironmentInfoSO::*)()>(&::GlobalNamespace::EnvironmentInfoSO::get_serializedName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370877c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { "get_serializedName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO.get_environmentSceneName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::EnvironmentInfoSO::*)()>(&::GlobalNamespace::EnvironmentInfoSO::get_environmentSceneName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3708784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { "get_environmentSceneName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO.get_environmentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EnvironmentType (::GlobalNamespace::EnvironmentInfoSO::*)()>(&::GlobalNamespace::EnvironmentInfoSO::get_environmentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370878c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { "get_environmentType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO.get_environmentSizeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EnvironmentSizeData* (::GlobalNamespace::EnvironmentInfoSO::*)()>(
    &::GlobalNamespace::EnvironmentInfoSO::get_environmentSizeData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3708794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { "get_environmentSizeData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO.get_environmentIntensityReductionOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EnvironmentIntensityReductionOptions* (::GlobalNamespace::EnvironmentInfoSO::*)()>(
    &::GlobalNamespace::EnvironmentInfoSO::get_environmentIntensityReductionOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370879c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { "get_environmentIntensityReductionOptions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO.get_environmentKeywords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW>* (::GlobalNamespace::EnvironmentInfoSO::*)()>(
    &::GlobalNamespace::EnvironmentInfoSO::get_environmentKeywords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37087a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { "get_environmentKeywords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO.get_environmentLightGroups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IEnvironmentLightGroups* (::GlobalNamespace::EnvironmentInfoSO::*)()>(
    &::GlobalNamespace::EnvironmentInfoSO::get_environmentLightGroups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37087ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { "get_environmentLightGroups", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO.get_defaultLightshowAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextAsset> (::GlobalNamespace::EnvironmentInfoSO::*)()>(
    &::GlobalNamespace::EnvironmentInfoSO::get_defaultLightshowAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37087b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { "get_defaultLightshowAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO.get_order
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::EnvironmentInfoSO::*)()>(&::GlobalNamespace::EnvironmentInfoSO::get_order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37087bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { "get_order", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO.get_isBranded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EnvironmentInfoSO::*)()>(&::GlobalNamespace::EnvironmentInfoSO::get_isBranded)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x37087c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { "get_isBranded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO.get_isInDevelopment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EnvironmentInfoSO::*)()>(&::GlobalNamespace::EnvironmentInfoSO::get_isInDevelopment)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x37087d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { "get_isInDevelopment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentInfoSO::*)()>(&::GlobalNamespace::EnvironmentInfoSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37087dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__environmentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentName;
}
constexpr ::StringW const& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__environmentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentName;
}
constexpr void GlobalNamespace::EnvironmentInfoSO::__cordl_internal_set__environmentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentName = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO>& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__colorScheme() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorScheme;
}
constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO> const& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__colorScheme() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorScheme;
}
constexpr void GlobalNamespace::EnvironmentInfoSO::__cordl_internal_set__colorScheme(::UnityW<::GlobalNamespace::ColorSchemeSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorScheme = value;
}
constexpr ::StringW& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__serializedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializedName;
}
constexpr ::StringW const& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__serializedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializedName;
}
constexpr void GlobalNamespace::EnvironmentInfoSO::__cordl_internal_set__serializedName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____serializedName = value;
}
constexpr ::GlobalNamespace::EnvironmentInfoSO_Tags& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__tags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tags;
}
constexpr ::GlobalNamespace::EnvironmentInfoSO_Tags const& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__tags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tags;
}
constexpr void GlobalNamespace::EnvironmentInfoSO::__cordl_internal_set__tags(::GlobalNamespace::EnvironmentInfoSO_Tags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tags = value;
}
constexpr ::GlobalNamespace::EnvironmentType& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__environmentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentType;
}
constexpr ::GlobalNamespace::EnvironmentType const& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__environmentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentType;
}
constexpr void GlobalNamespace::EnvironmentInfoSO::__cordl_internal_set__environmentType(::GlobalNamespace::EnvironmentType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentType = value;
}
constexpr ::GlobalNamespace::EnvironmentSizeData*& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__environmentSizeData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentSizeData;
}
constexpr ::GlobalNamespace::EnvironmentSizeData* const& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__environmentSizeData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentSizeData;
}
constexpr void GlobalNamespace::EnvironmentInfoSO::__cordl_internal_set__environmentSizeData(::GlobalNamespace::EnvironmentSizeData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentSizeData = value;
}
constexpr ::GlobalNamespace::EnvironmentIntensityReductionOptions*& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__environmentIntensityReductionOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentIntensityReductionOptions;
}
constexpr ::GlobalNamespace::EnvironmentIntensityReductionOptions* const& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__environmentIntensityReductionOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentIntensityReductionOptions;
}
constexpr void GlobalNamespace::EnvironmentInfoSO::__cordl_internal_set__environmentIntensityReductionOptions(::GlobalNamespace::EnvironmentIntensityReductionOptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentIntensityReductionOptions = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__environmentKeywords() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentKeywords;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__environmentKeywords() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentKeywords;
}
constexpr void GlobalNamespace::EnvironmentInfoSO::__cordl_internal_set__environmentKeywords(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentKeywords = value;
}
constexpr ::GlobalNamespace::EnvironmentLightGroups*& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__lightGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroups;
}
constexpr ::GlobalNamespace::EnvironmentLightGroups* const& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__lightGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroups;
}
constexpr void GlobalNamespace::EnvironmentInfoSO::__cordl_internal_set__lightGroups(::GlobalNamespace::EnvironmentLightGroups* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightGroups = value;
}
constexpr ::UnityW<::UnityEngine::TextAsset>& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__defaultLightshowAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultLightshowAsset;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__defaultLightshowAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultLightshowAsset;
}
constexpr void GlobalNamespace::EnvironmentInfoSO::__cordl_internal_set__defaultLightshowAsset(::UnityW<::UnityEngine::TextAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultLightshowAsset = value;
}
constexpr int32_t& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__order() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____order;
}
constexpr int32_t const& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__order() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____order;
}
constexpr void GlobalNamespace::EnvironmentInfoSO::__cordl_internal_set__order(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____order = value;
}
constexpr int32_t& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__nextGroupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextGroupId;
}
constexpr int32_t const& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__nextGroupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextGroupId;
}
constexpr void GlobalNamespace::EnvironmentInfoSO::__cordl_internal_set__nextGroupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextGroupId = value;
}
inline ::StringW GlobalNamespace::EnvironmentInfoSO::get_environmentName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { "get_environmentName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::ColorSchemeSO> GlobalNamespace::EnvironmentInfoSO::get_colorScheme() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { "get_colorScheme", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::ColorSchemeSO>>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::EnvironmentInfoSO::get_serializedName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { "get_serializedName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::EnvironmentInfoSO::get_environmentSceneName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { "get_environmentSceneName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentType GlobalNamespace::EnvironmentInfoSO::get_environmentType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { "get_environmentType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentType>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentSizeData* GlobalNamespace::EnvironmentInfoSO::get_environmentSizeData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { "get_environmentSizeData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentSizeData*>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentIntensityReductionOptions* GlobalNamespace::EnvironmentInfoSO::get_environmentIntensityReductionOptions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { "get_environmentIntensityReductionOptions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentIntensityReductionOptions*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* GlobalNamespace::EnvironmentInfoSO::get_environmentKeywords() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { "get_environmentKeywords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(this, ___internal_method);
}
inline ::GlobalNamespace::IEnvironmentLightGroups* GlobalNamespace::EnvironmentInfoSO::get_environmentLightGroups() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { "get_environmentLightGroups", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IEnvironmentLightGroups*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::TextAsset> GlobalNamespace::EnvironmentInfoSO::get_defaultLightshowAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { "get_defaultLightshowAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextAsset>>(this, ___internal_method);
}
inline int32_t GlobalNamespace::EnvironmentInfoSO::get_order() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { "get_order", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::EnvironmentInfoSO::get_isBranded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { "get_isBranded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::EnvironmentInfoSO::get_isInDevelopment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { "get_isInDevelopment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentInfoSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentInfoSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentInfoSO* GlobalNamespace::EnvironmentInfoSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnvironmentInfoSO*>());
}
/// @brief Convert operator to "::GlobalNamespace::IEnvironmentInfo"
constexpr GlobalNamespace::EnvironmentInfoSO::operator ::GlobalNamespace::IEnvironmentInfo*() noexcept {
  return static_cast<::GlobalNamespace::IEnvironmentInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IEnvironmentInfo"
constexpr ::GlobalNamespace::IEnvironmentInfo* GlobalNamespace::EnvironmentInfoSO::i___GlobalNamespace__IEnvironmentInfo() noexcept {
  return static_cast<::GlobalNamespace::IEnvironmentInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentInfoSO::EnvironmentInfoSO() {}
