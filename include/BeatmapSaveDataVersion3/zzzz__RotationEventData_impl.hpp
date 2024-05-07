#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/RotationEventData.hpp"
#include "BeatmapSaveDataCommon/zzzz__ExecutionTime_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveDataItem_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__RotationEventData_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__ExecutionTime_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::RotationEventData.get_executionTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataCommon::ExecutionTime (::BeatmapSaveDataVersion3::RotationEventData::*)()>(
    &::BeatmapSaveDataVersion3::RotationEventData::get_executionTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14f2914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::RotationEventData*>::get(),
                                                                               "get_executionTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::RotationEventData.get_rotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::RotationEventData::*)()>(
    &::BeatmapSaveDataVersion3::RotationEventData::get_rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14f291c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::RotationEventData*>::get(),
                                                                               "get_rotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::RotationEventData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::RotationEventData::*)(float_t, ::BeatmapSaveDataCommon::ExecutionTime, float_t)>(
    &::BeatmapSaveDataVersion3::RotationEventData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x14f2924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::RotationEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::ExecutionTime>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatmapSaveDataCommon::ExecutionTime& BeatmapSaveDataVersion3::RotationEventData::__cordl_internal_get_e() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr ::BeatmapSaveDataCommon::ExecutionTime const& BeatmapSaveDataVersion3::RotationEventData::__cordl_internal_get_e() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr void BeatmapSaveDataVersion3::RotationEventData::__cordl_internal_set_e(::BeatmapSaveDataCommon::ExecutionTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___e = value;
}
constexpr float_t& BeatmapSaveDataVersion3::RotationEventData::__cordl_internal_get_r() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr float_t const& BeatmapSaveDataVersion3::RotationEventData::__cordl_internal_get_r() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr void BeatmapSaveDataVersion3::RotationEventData::__cordl_internal_set_r(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___r = value;
}
inline ::BeatmapSaveDataCommon::ExecutionTime BeatmapSaveDataVersion3::RotationEventData::get_executionTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::RotationEventData*>::get(),
                                                                             "get_executionTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::ExecutionTime, false>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::RotationEventData::get_rotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::RotationEventData*>::get(),
                                                                             "get_rotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::RotationEventData* BeatmapSaveDataVersion3::RotationEventData::New_ctor(float_t beat, ::BeatmapSaveDataCommon::ExecutionTime executionTime, float_t rotation) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::RotationEventData*>(beat, executionTime, rotation));
}
inline void BeatmapSaveDataVersion3::RotationEventData::_ctor(float_t beat, ::BeatmapSaveDataCommon::ExecutionTime executionTime, float_t rotation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::RotationEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::ExecutionTime>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, executionTime, rotation);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::RotationEventData::RotationEventData() {}
