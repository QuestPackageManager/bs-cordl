#pragma once
#include "BeatSaber/TrackDefinitions/zzzz__EventTrackDefinitionSO_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "BeatSaber/TrackDefinitions/zzzz__EventTrackDefinitionSO_def.hpp"
#include "BeatSaber/TrackDefinitions/zzzz__EventTrackDefinitionSO_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType::__EventTrackDefinitionSO__DataTransformationType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType::__EventTrackDefinitionSO__DataTransformationType() {}
constexpr ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType::NoTransformation{
  static_cast<int32_t>(0x0)
};
constexpr ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType::Light{ static_cast<int32_t>(
    0x1) };
constexpr ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType::DeltaRotation{
  static_cast<int32_t>(0x2)
};
constexpr ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType::Switch{ static_cast<int32_t>(
    0x3) };
constexpr ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType::TurnOffValueDuration{
  static_cast<int32_t>(0x4)
};
constexpr ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType::ValueDuration{
  static_cast<int32_t>(0x5)
};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType::__EventTrackDefinitionSO__MarkerType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType::__EventTrackDefinitionSO__MarkerType() {}
constexpr ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType::BasicMarker{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType::DurationMarker{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType::LightMarker{ static_cast<int32_t>(0x2) };
constexpr ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType::TextMarker{ static_cast<int32_t>(0x3) };
constexpr ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType::TooltipMarker{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO.get_visible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::TrackDefinitions::EventTrackDefinitionSO::*)()>(
    &::BeatSaber::TrackDefinitions::EventTrackDefinitionSO::get_visible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe9f28c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                                                                               "get_visible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO.get_dataTransformation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType (
    ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO::*)()>(&::BeatSaber::TrackDefinitions::EventTrackDefinitionSO::get_dataTransformation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe9f294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                                                                               "get_dataTransformation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO.get_markerType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType (
    ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO::*)()>(&::BeatSaber::TrackDefinitions::EventTrackDefinitionSO::get_markerType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe9f29c;

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
  constexpr static std::size_t addrs = 0xe9f2a4;

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
  constexpr static std::size_t addrs = 0xe9f2ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType& BeatSaber::TrackDefinitions::EventTrackDefinitionSO::__cordl_internal_get__dataTransformationType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataTransformationType;
}
constexpr ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType const&
BeatSaber::TrackDefinitions::EventTrackDefinitionSO::__cordl_internal_get__dataTransformationType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataTransformationType;
}
constexpr void
BeatSaber::TrackDefinitions::EventTrackDefinitionSO::__cordl_internal_set__dataTransformationType(::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataTransformationType = value;
}
constexpr ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType& BeatSaber::TrackDefinitions::EventTrackDefinitionSO::__cordl_internal_get__markerType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____markerType;
}
constexpr ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType const& BeatSaber::TrackDefinitions::EventTrackDefinitionSO::__cordl_internal_get__markerType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____markerType;
}
constexpr void BeatSaber::TrackDefinitions::EventTrackDefinitionSO::__cordl_internal_set__markerType(::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType value) {
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
inline ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType BeatSaber::TrackDefinitions::EventTrackDefinitionSO::get_dataTransformation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                                                                             "get_dataTransformation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType, false>(this, ___internal_method);
}
inline ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType BeatSaber::TrackDefinitions::EventTrackDefinitionSO::get_markerType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                                                                             "get_markerType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType, false>(this, ___internal_method);
}
inline bool BeatSaber::TrackDefinitions::EventTrackDefinitionSO::get_needsFiltering() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                                                                             "get_needsFiltering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO* BeatSaber::TrackDefinitions::EventTrackDefinitionSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*>());
}
inline void BeatSaber::TrackDefinitions::EventTrackDefinitionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO::EventTrackDefinitionSO() {}
