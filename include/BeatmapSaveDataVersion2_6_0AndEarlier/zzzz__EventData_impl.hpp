#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion2_6_0AndEarlier/EventData.hpp"
#include "BeatmapSaveDataCommon/zzzz__BeatmapEventType_impl.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveDataItem_impl.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__EventData_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__BeatmapEventType_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::EventData.get_time
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion2_6_0AndEarlier::EventData::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::EventData::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3662050;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::EventData.get_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataCommon::BeatmapEventType (::BeatmapSaveDataVersion2_6_0AndEarlier::EventData::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::EventData::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3662058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>::get(),
                                                                               "get_type", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::EventData.get_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion2_6_0AndEarlier::EventData::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::EventData::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3662060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>::get(),
                                                                               "get_value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::EventData.get_floatValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion2_6_0AndEarlier::EventData::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::EventData::get_floatValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3662068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>::get(),
                                                                               "get_floatValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::EventData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion2_6_0AndEarlier::EventData::*)(
    float_t, ::BeatmapSaveDataCommon::BeatmapEventType, int32_t, float_t)>(&::BeatmapSaveDataVersion2_6_0AndEarlier::EventData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3662040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::BeatmapEventType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion2_6_0AndEarlier::EventData::__cordl_internal_get__time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time;
}
constexpr float_t const& BeatmapSaveDataVersion2_6_0AndEarlier::EventData::__cordl_internal_get__time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::EventData::__cordl_internal_set__time(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____time = value;
}
constexpr ::BeatmapSaveDataCommon::BeatmapEventType& BeatmapSaveDataVersion2_6_0AndEarlier::EventData::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::BeatmapSaveDataCommon::BeatmapEventType const& BeatmapSaveDataVersion2_6_0AndEarlier::EventData::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::EventData::__cordl_internal_set__type(::BeatmapSaveDataCommon::BeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type = value;
}
constexpr int32_t& BeatmapSaveDataVersion2_6_0AndEarlier::EventData::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr int32_t const& BeatmapSaveDataVersion2_6_0AndEarlier::EventData::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::EventData::__cordl_internal_set__value(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
constexpr float_t& BeatmapSaveDataVersion2_6_0AndEarlier::EventData::__cordl_internal_get__floatValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatValue;
}
constexpr float_t const& BeatmapSaveDataVersion2_6_0AndEarlier::EventData::__cordl_internal_get__floatValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatValue;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::EventData::__cordl_internal_set__floatValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floatValue = value;
}
inline float_t BeatmapSaveDataVersion2_6_0AndEarlier::EventData::get_time() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::BeatmapEventType BeatmapSaveDataVersion2_6_0AndEarlier::EventData::get_type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>::get(),
                                                                             "get_type", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::BeatmapEventType, false>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion2_6_0AndEarlier::EventData::get_value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>::get(),
                                                                             "get_value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion2_6_0AndEarlier::EventData::get_floatValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>::get(),
                                                                             "get_floatValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion2_6_0AndEarlier::EventData::_ctor(float_t time, ::BeatmapSaveDataCommon::BeatmapEventType type, int32_t value, float_t floatValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::BeatmapEventType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, type, value, floatValue);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::EventData* BeatmapSaveDataVersion2_6_0AndEarlier::EventData::New_ctor(float_t time, ::BeatmapSaveDataCommon::BeatmapEventType type, int32_t value,
                                                                                                                      float_t floatValue) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>(time, type, value, floatValue));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::EventData::EventData() {}
