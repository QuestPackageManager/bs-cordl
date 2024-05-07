#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentSizeData.hpp"
#include "GlobalNamespace/zzzz__EnvironmentSizeData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentSizeData_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentSizeData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__EnvironmentSizeData__FloorType::__EnvironmentSizeData__FloorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__EnvironmentSizeData__FloorType::__EnvironmentSizeData__FloorType() {}
constexpr ::GlobalNamespace::__EnvironmentSizeData__FloorType GlobalNamespace::__EnvironmentSizeData__FloorType::NoFloor{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__EnvironmentSizeData__FloorType GlobalNamespace::__EnvironmentSizeData__FloorType::CloseTo0{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__EnvironmentSizeData__CeilingType::__EnvironmentSizeData__CeilingType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__EnvironmentSizeData__CeilingType::__EnvironmentSizeData__CeilingType() {}
constexpr ::GlobalNamespace::__EnvironmentSizeData__CeilingType GlobalNamespace::__EnvironmentSizeData__CeilingType::NoCeiling{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__EnvironmentSizeData__CeilingType GlobalNamespace::__EnvironmentSizeData__CeilingType::LowCeiling{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__EnvironmentSizeData__TrackLaneType::__EnvironmentSizeData__TrackLaneType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__EnvironmentSizeData__TrackLaneType::__EnvironmentSizeData__TrackLaneType() {}
constexpr ::GlobalNamespace::__EnvironmentSizeData__TrackLaneType GlobalNamespace::__EnvironmentSizeData__TrackLaneType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__EnvironmentSizeData__TrackLaneType GlobalNamespace::__EnvironmentSizeData__TrackLaneType::Normal{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::EnvironmentSizeData.get_floorType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__EnvironmentSizeData__FloorType (::GlobalNamespace::EnvironmentSizeData::*)()>(
    &::GlobalNamespace::EnvironmentSizeData::get_floorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x149df2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentSizeData*>::get(), "get_floorType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentSizeData.get_ceilingType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__EnvironmentSizeData__CeilingType (::GlobalNamespace::EnvironmentSizeData::*)()>(
    &::GlobalNamespace::EnvironmentSizeData::get_ceilingType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x149df34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentSizeData*>::get(),
                                                                               "get_ceilingType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentSizeData.get_trackLaneType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__EnvironmentSizeData__TrackLaneType (::GlobalNamespace::EnvironmentSizeData::*)()>(
    &::GlobalNamespace::EnvironmentSizeData::get_trackLaneType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x149df3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentSizeData*>::get(),
                                                                               "get_trackLaneType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentSizeData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentSizeData::*)()>(&::GlobalNamespace::EnvironmentSizeData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x149df44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentSizeData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__EnvironmentSizeData__FloorType& GlobalNamespace::EnvironmentSizeData::__cordl_internal_get__floorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorType;
}
constexpr ::GlobalNamespace::__EnvironmentSizeData__FloorType const& GlobalNamespace::EnvironmentSizeData::__cordl_internal_get__floorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorType;
}
constexpr void GlobalNamespace::EnvironmentSizeData::__cordl_internal_set__floorType(::GlobalNamespace::__EnvironmentSizeData__FloorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floorType = value;
}
constexpr ::GlobalNamespace::__EnvironmentSizeData__CeilingType& GlobalNamespace::EnvironmentSizeData::__cordl_internal_get__ceilingType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ceilingType;
}
constexpr ::GlobalNamespace::__EnvironmentSizeData__CeilingType const& GlobalNamespace::EnvironmentSizeData::__cordl_internal_get__ceilingType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ceilingType;
}
constexpr void GlobalNamespace::EnvironmentSizeData::__cordl_internal_set__ceilingType(::GlobalNamespace::__EnvironmentSizeData__CeilingType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ceilingType = value;
}
constexpr ::GlobalNamespace::__EnvironmentSizeData__TrackLaneType& GlobalNamespace::EnvironmentSizeData::__cordl_internal_get__trackLaneType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackLaneType;
}
constexpr ::GlobalNamespace::__EnvironmentSizeData__TrackLaneType const& GlobalNamespace::EnvironmentSizeData::__cordl_internal_get__trackLaneType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackLaneType;
}
constexpr void GlobalNamespace::EnvironmentSizeData::__cordl_internal_set__trackLaneType(::GlobalNamespace::__EnvironmentSizeData__TrackLaneType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trackLaneType = value;
}
inline ::GlobalNamespace::__EnvironmentSizeData__FloorType GlobalNamespace::EnvironmentSizeData::get_floorType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentSizeData*>::get(), "get_floorType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__EnvironmentSizeData__FloorType, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__EnvironmentSizeData__CeilingType GlobalNamespace::EnvironmentSizeData::get_ceilingType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentSizeData*>::get(), "get_ceilingType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__EnvironmentSizeData__CeilingType, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__EnvironmentSizeData__TrackLaneType GlobalNamespace::EnvironmentSizeData::get_trackLaneType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentSizeData*>::get(),
                                                                             "get_trackLaneType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__EnvironmentSizeData__TrackLaneType, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentSizeData* GlobalNamespace::EnvironmentSizeData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EnvironmentSizeData*>());
}
inline void GlobalNamespace::EnvironmentSizeData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentSizeData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentSizeData::EnvironmentSizeData() {}
