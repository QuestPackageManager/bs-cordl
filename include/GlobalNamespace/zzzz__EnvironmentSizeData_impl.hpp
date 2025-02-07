#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentSizeData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentSizeData_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentSizeData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EnvironmentSizeData_FloorType::EnvironmentSizeData_FloorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentSizeData_FloorType::EnvironmentSizeData_FloorType() {}
constexpr ::GlobalNamespace::EnvironmentSizeData_FloorType GlobalNamespace::EnvironmentSizeData_FloorType::NoFloor{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::EnvironmentSizeData_FloorType GlobalNamespace::EnvironmentSizeData_FloorType::CloseTo0{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EnvironmentSizeData_CeilingType::EnvironmentSizeData_CeilingType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentSizeData_CeilingType::EnvironmentSizeData_CeilingType() {}
constexpr ::GlobalNamespace::EnvironmentSizeData_CeilingType GlobalNamespace::EnvironmentSizeData_CeilingType::NoCeiling{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::EnvironmentSizeData_CeilingType GlobalNamespace::EnvironmentSizeData_CeilingType::LowCeiling{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EnvironmentSizeData_TrackLaneType::EnvironmentSizeData_TrackLaneType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentSizeData_TrackLaneType::EnvironmentSizeData_TrackLaneType() {}
constexpr ::GlobalNamespace::EnvironmentSizeData_TrackLaneType GlobalNamespace::EnvironmentSizeData_TrackLaneType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::EnvironmentSizeData_TrackLaneType GlobalNamespace::EnvironmentSizeData_TrackLaneType::Normal{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::EnvironmentSizeData.get_floorType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentSizeData_FloorType (::GlobalNamespace::EnvironmentSizeData::*)()>(
    &::GlobalNamespace::EnvironmentSizeData::get_floorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b0554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentSizeData*>::get(), "get_floorType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentSizeData.get_ceilingType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentSizeData_CeilingType (::GlobalNamespace::EnvironmentSizeData::*)()>(
    &::GlobalNamespace::EnvironmentSizeData::get_ceilingType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b055c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentSizeData*>::get(),
                                                                               "get_ceilingType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentSizeData.get_trackLaneType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentSizeData_TrackLaneType (::GlobalNamespace::EnvironmentSizeData::*)()>(
    &::GlobalNamespace::EnvironmentSizeData::get_trackLaneType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b0564;

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
  constexpr static std::size_t addrs = 0x26b056c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentSizeData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::EnvironmentSizeData_FloorType& GlobalNamespace::EnvironmentSizeData::__cordl_internal_get__floorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorType;
}
constexpr ::GlobalNamespace::EnvironmentSizeData_FloorType const& GlobalNamespace::EnvironmentSizeData::__cordl_internal_get__floorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorType;
}
constexpr void GlobalNamespace::EnvironmentSizeData::__cordl_internal_set__floorType(::GlobalNamespace::EnvironmentSizeData_FloorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floorType = value;
}
constexpr ::GlobalNamespace::EnvironmentSizeData_CeilingType& GlobalNamespace::EnvironmentSizeData::__cordl_internal_get__ceilingType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ceilingType;
}
constexpr ::GlobalNamespace::EnvironmentSizeData_CeilingType const& GlobalNamespace::EnvironmentSizeData::__cordl_internal_get__ceilingType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ceilingType;
}
constexpr void GlobalNamespace::EnvironmentSizeData::__cordl_internal_set__ceilingType(::GlobalNamespace::EnvironmentSizeData_CeilingType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ceilingType = value;
}
constexpr ::GlobalNamespace::EnvironmentSizeData_TrackLaneType& GlobalNamespace::EnvironmentSizeData::__cordl_internal_get__trackLaneType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackLaneType;
}
constexpr ::GlobalNamespace::EnvironmentSizeData_TrackLaneType const& GlobalNamespace::EnvironmentSizeData::__cordl_internal_get__trackLaneType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackLaneType;
}
constexpr void GlobalNamespace::EnvironmentSizeData::__cordl_internal_set__trackLaneType(::GlobalNamespace::EnvironmentSizeData_TrackLaneType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trackLaneType = value;
}
inline ::GlobalNamespace::EnvironmentSizeData_FloorType GlobalNamespace::EnvironmentSizeData::get_floorType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentSizeData*>::get(), "get_floorType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentSizeData_FloorType, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentSizeData_CeilingType GlobalNamespace::EnvironmentSizeData::get_ceilingType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentSizeData*>::get(), "get_ceilingType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentSizeData_CeilingType, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentSizeData_TrackLaneType GlobalNamespace::EnvironmentSizeData::get_trackLaneType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentSizeData*>::get(),
                                                                             "get_trackLaneType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentSizeData_TrackLaneType, false>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentSizeData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentSizeData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentSizeData* GlobalNamespace::EnvironmentSizeData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EnvironmentSizeData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentSizeData::EnvironmentSizeData() {}
