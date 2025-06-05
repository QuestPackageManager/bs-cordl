#pragma once
// IWYU pragma private; include "BeatSaber/TrackDefinitions/EventTrackDefinitionSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "BeatSaber/TrackDefinitions/zzzz__EventTrackDefinitionSO_def.hpp"
#include "BeatSaber/TrackDefinitions/zzzz__EventTrackDefinitionSO_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType::EventTrackDefinitionSO_DataTransformationType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType::EventTrackDefinitionSO_DataTransformationType() {}
constexpr ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType::NoTransformation{
  static_cast<int32_t>(0x0)
};
constexpr ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType::Light{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType::DeltaRotation{ static_cast<int32_t>(
    0x2) };
constexpr ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType::Switch{ static_cast<int32_t>(0x3) };
constexpr ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType::TurnOffValueDuration{
  static_cast<int32_t>(0x4)
};
constexpr ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType::ValueDuration{ static_cast<int32_t>(
    0x5) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType::EventTrackDefinitionSO_MarkerType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType::EventTrackDefinitionSO_MarkerType() {}
constexpr ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType::BasicMarker{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType::DurationMarker{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType::LightMarker{ static_cast<int32_t>(0x2) };
constexpr ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType::TextMarker{ static_cast<int32_t>(0x3) };
constexpr ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType::TooltipMarker{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO.get_visible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::TrackDefinitions::EventTrackDefinitionSO::*)()>(
    &::BeatSaber::TrackDefinitions::EventTrackDefinitionSO::get_visible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2282eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                                                                               "get_visible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO.get_dataTransformation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType (
    ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO::*)()>(&::BeatSaber::TrackDefinitions::EventTrackDefinitionSO::get_dataTransformation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2282ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                                                                               "get_dataTransformation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO.get_markerType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType (
    ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO::*)()>(&::BeatSaber::TrackDefinitions::EventTrackDefinitionSO::get_markerType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2282efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                                                                               "get_markerType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO.get_needsFiltering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::TrackDefinitions::EventTrackDefinitionSO::*)()>(
    &::BeatSaber::TrackDefinitions::EventTrackDefinitionSO::get_needsFiltering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2282f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                                                                               "get_needsFiltering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::TrackDefinitions::EventTrackDefinitionSO::*)()>(
    &::BeatSaber::TrackDefinitions::EventTrackDefinitionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2282f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType& BeatSaber::TrackDefinitions::EventTrackDefinitionSO::__cordl_internal_get__dataTransformationType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataTransformationType;
}
constexpr ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType const&
BeatSaber::TrackDefinitions::EventTrackDefinitionSO::__cordl_internal_get__dataTransformationType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataTransformationType;
}
constexpr void BeatSaber::TrackDefinitions::EventTrackDefinitionSO::__cordl_internal_set__dataTransformationType(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataTransformationType = value;
}
constexpr ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType& BeatSaber::TrackDefinitions::EventTrackDefinitionSO::__cordl_internal_get__markerType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____markerType;
}
constexpr ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType const& BeatSaber::TrackDefinitions::EventTrackDefinitionSO::__cordl_internal_get__markerType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____markerType;
}
constexpr void BeatSaber::TrackDefinitions::EventTrackDefinitionSO::__cordl_internal_set__markerType(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____markerType = value;
}
constexpr bool& BeatSaber::TrackDefinitions::EventTrackDefinitionSO::__cordl_internal_get__visible() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visible;
}
constexpr bool const& BeatSaber::TrackDefinitions::EventTrackDefinitionSO::__cordl_internal_get__visible() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visible;
}
constexpr void BeatSaber::TrackDefinitions::EventTrackDefinitionSO::__cordl_internal_set__visible(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____visible = value;
}
constexpr bool& BeatSaber::TrackDefinitions::EventTrackDefinitionSO::__cordl_internal_get__needsFiltering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____needsFiltering;
}
constexpr bool const& BeatSaber::TrackDefinitions::EventTrackDefinitionSO::__cordl_internal_get__needsFiltering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____needsFiltering;
}
constexpr void BeatSaber::TrackDefinitions::EventTrackDefinitionSO::__cordl_internal_set__needsFiltering(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____needsFiltering = value;
}
inline bool BeatSaber::TrackDefinitions::EventTrackDefinitionSO::get_visible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                                                                             "get_visible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType BeatSaber::TrackDefinitions::EventTrackDefinitionSO::get_dataTransformation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                                                                             "get_dataTransformation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType, false>(this, ___internal_method);
}
inline ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType BeatSaber::TrackDefinitions::EventTrackDefinitionSO::get_markerType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                                                                             "get_markerType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType, false>(this, ___internal_method);
}
inline bool BeatSaber::TrackDefinitions::EventTrackDefinitionSO::get_needsFiltering() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                                                                             "get_needsFiltering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void BeatSaber::TrackDefinitions::EventTrackDefinitionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO* BeatSaber::TrackDefinitions::EventTrackDefinitionSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO::EventTrackDefinitionSO() {}
