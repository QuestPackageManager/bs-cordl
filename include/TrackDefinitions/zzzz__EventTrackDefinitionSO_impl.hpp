#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "TrackDefinitions/zzzz__EventTrackDefinitionSO_impl.hpp"
#include "TrackDefinitions/zzzz__EventTrackDefinitionSO_def.hpp"
#include "TrackDefinitions/zzzz__EventTrackDefinitionSO_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType::__EventTrackDefinitionSO__DataTransformationType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType::__EventTrackDefinitionSO__DataTransformationType() {}
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType::NoTransformation{ static_cast<int32_t>(0x0) };
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType::Light{ static_cast<int32_t>(0x1) };
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType::DeltaRotation{ static_cast<int32_t>(0x2) };
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType::Switch{ static_cast<int32_t>(0x3) };
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType::TurnOffValueDuration{ static_cast<int32_t>(0x4) };
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType::ValueDuration{ static_cast<int32_t>(0x5) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType::__EventTrackDefinitionSO__MarkerType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType::__EventTrackDefinitionSO__MarkerType() {}
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType TrackDefinitions::__EventTrackDefinitionSO__MarkerType::BasicMarker{ static_cast<int32_t>(0x0) };
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType TrackDefinitions::__EventTrackDefinitionSO__MarkerType::DurationMarker{ static_cast<int32_t>(0x1) };
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType TrackDefinitions::__EventTrackDefinitionSO__MarkerType::LightMarker{ static_cast<int32_t>(0x2) };
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType TrackDefinitions::__EventTrackDefinitionSO__MarkerType::TextMarker{ static_cast<int32_t>(0x3) };
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType TrackDefinitions::__EventTrackDefinitionSO__MarkerType::TooltipMarker{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::TrackDefinitions::EventTrackDefinitionSO.get_visible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::EventTrackDefinitionSO::*)()>(&::TrackDefinitions::EventTrackDefinitionSO::get_visible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0b030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                                                                               "get_visible", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::EventTrackDefinitionSO.get_dataTransformation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType (
    ::TrackDefinitions::EventTrackDefinitionSO::*)()>(&::TrackDefinitions::EventTrackDefinitionSO::get_dataTransformation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0b038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                                                                               "get_dataTransformation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::EventTrackDefinitionSO.get_markerType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TrackDefinitions::__EventTrackDefinitionSO__MarkerType (::TrackDefinitions::EventTrackDefinitionSO::*)()>(
    &::TrackDefinitions::EventTrackDefinitionSO::get_markerType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0b040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                                                                               "get_markerType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::EventTrackDefinitionSO.get_needsFiltering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::EventTrackDefinitionSO::*)()>(
    &::TrackDefinitions::EventTrackDefinitionSO::get_needsFiltering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0b048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                                                                               "get_needsFiltering", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::EventTrackDefinitionSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrackDefinitions::EventTrackDefinitionSO::*)()>(&::TrackDefinitions::EventTrackDefinitionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0b050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EventTrackDefinitionSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType& TrackDefinitions::EventTrackDefinitionSO::__get__dataTransformationType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataTransformationType;
}
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType const& TrackDefinitions::EventTrackDefinitionSO::__get__dataTransformationType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataTransformationType;
}
constexpr void TrackDefinitions::EventTrackDefinitionSO::__set__dataTransformationType(::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataTransformationType = value;
}
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType& TrackDefinitions::EventTrackDefinitionSO::__get__markerType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____markerType;
}
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType const& TrackDefinitions::EventTrackDefinitionSO::__get__markerType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____markerType;
}
constexpr void TrackDefinitions::EventTrackDefinitionSO::__set__markerType(::TrackDefinitions::__EventTrackDefinitionSO__MarkerType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____markerType = value;
}
constexpr bool& TrackDefinitions::EventTrackDefinitionSO::__get__visible() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visible;
}
constexpr bool const& TrackDefinitions::EventTrackDefinitionSO::__get__visible() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visible;
}
constexpr void TrackDefinitions::EventTrackDefinitionSO::__set__visible(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____visible = value;
}
constexpr bool& TrackDefinitions::EventTrackDefinitionSO::__get__needsFiltering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____needsFiltering;
}
constexpr bool const& TrackDefinitions::EventTrackDefinitionSO::__get__needsFiltering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____needsFiltering;
}
constexpr void TrackDefinitions::EventTrackDefinitionSO::__set__needsFiltering(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____needsFiltering = value;
}
inline bool TrackDefinitions::EventTrackDefinitionSO::get_visible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EventTrackDefinitionSO*>::get(), "get_visible",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType TrackDefinitions::EventTrackDefinitionSO::get_dataTransformation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                                                                             "get_dataTransformation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType, false>(this, ___internal_method);
}
inline ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType TrackDefinitions::EventTrackDefinitionSO::get_markerType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                                                                             "get_markerType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::TrackDefinitions::__EventTrackDefinitionSO__MarkerType, false>(this, ___internal_method);
}
inline bool TrackDefinitions::EventTrackDefinitionSO::get_needsFiltering() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                                                                             "get_needsFiltering", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::TrackDefinitions::EventTrackDefinitionSO* TrackDefinitions::EventTrackDefinitionSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::TrackDefinitions::EventTrackDefinitionSO*>());
}
inline void TrackDefinitions::EventTrackDefinitionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EventTrackDefinitionSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TrackDefinitions::EventTrackDefinitionSO::EventTrackDefinitionSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
