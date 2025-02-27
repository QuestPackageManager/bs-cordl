#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/WaypointData.hpp"
#include "BeatmapSaveDataCommon/zzzz__OffsetDirection_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveDataItem_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__WaypointData_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__OffsetDirection_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::WaypointData.get_line
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::WaypointData::*)()>(&::BeatmapSaveDataVersion3::WaypointData::get_line)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x270e798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::WaypointData*>::get(), "get_line",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::WaypointData.get_layer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::WaypointData::*)()>(&::BeatmapSaveDataVersion3::WaypointData::get_layer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x270e7a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::WaypointData*>::get(), "get_layer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::WaypointData.get_offsetDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataCommon::OffsetDirection (::BeatmapSaveDataVersion3::WaypointData::*)()>(
    &::BeatmapSaveDataVersion3::WaypointData::get_offsetDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x270e7a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::WaypointData*>::get(),
                                                                               "get_offsetDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::WaypointData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::BeatmapSaveDataVersion3::WaypointData::*)(float_t, int32_t, int32_t, ::BeatmapSaveDataCommon::OffsetDirection)>(&::BeatmapSaveDataVersion3::WaypointData::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x270e7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::WaypointData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::OffsetDirection>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& BeatmapSaveDataVersion3::WaypointData::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr int32_t const& BeatmapSaveDataVersion3::WaypointData::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void BeatmapSaveDataVersion3::WaypointData::__cordl_internal_set_x(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::WaypointData::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr int32_t const& BeatmapSaveDataVersion3::WaypointData::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void BeatmapSaveDataVersion3::WaypointData::__cordl_internal_set_y(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
constexpr ::BeatmapSaveDataCommon::OffsetDirection& BeatmapSaveDataVersion3::WaypointData::__cordl_internal_get_d() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr ::BeatmapSaveDataCommon::OffsetDirection const& BeatmapSaveDataVersion3::WaypointData::__cordl_internal_get_d() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr void BeatmapSaveDataVersion3::WaypointData::__cordl_internal_set_d(::BeatmapSaveDataCommon::OffsetDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___d = value;
}
inline int32_t BeatmapSaveDataVersion3::WaypointData::get_line() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::WaypointData*>::get(), "get_line",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::WaypointData::get_layer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::WaypointData*>::get(), "get_layer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::OffsetDirection BeatmapSaveDataVersion3::WaypointData::get_offsetDirection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::WaypointData*>::get(),
                                                                             "get_offsetDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::OffsetDirection, false>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::WaypointData::_ctor(float_t beat, int32_t line, int32_t layer, ::BeatmapSaveDataCommon::OffsetDirection offsetDirection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::WaypointData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::OffsetDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, line, layer, offsetDirection);
}
inline ::BeatmapSaveDataVersion3::WaypointData* BeatmapSaveDataVersion3::WaypointData::New_ctor(float_t beat, int32_t line, int32_t layer, ::BeatmapSaveDataCommon::OffsetDirection offsetDirection) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::WaypointData*>(beat, line, layer, offsetDirection));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::WaypointData::WaypointData() {}
