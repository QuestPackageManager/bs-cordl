#pragma once
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveData_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveData_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_impl.hpp"
#include "GlobalNamespace/zzzz__OffsetDirection_impl.hpp"
#include "GlobalNamespace/zzzz__SliderMidAnchorMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveData_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveDataItem_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveData_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__OffsetDirection_def.hpp"
#include "GlobalNamespace/zzzz__SliderMidAnchorMode_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem.get_beat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::get_beat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>::get(), "get_beat",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::*)(float_t)>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe07790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::*)(
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::CompareTo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xe077b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IComparable_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>"
constexpr BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::operator ::System::IComparable_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>*() noexcept {
  return static_cast<::System::IComparable_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>"
constexpr ::System::IComparable_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>*
BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::i___System__IComparable_1___BeatmapSaveDataVersion3____BeatmapSaveData__BeatmapSaveDataItem__() noexcept {
  return static_cast<::System::IComparable_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>*>(static_cast<void*>(this));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::__cordl_internal_set_b(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::get_beat() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>::get(), "get_beat",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem* BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::New_ctor(float_t beat) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>(beat));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::_ctor(float_t beat) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::CompareTo(::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem* other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::__BeatmapSaveData__BeatmapSaveDataItem() {}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData.get_eventType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::get_eventType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe077e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>::get(), "get_eventType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData.get_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe077ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>::get(), "get_value",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData.get_floatValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::get_floatValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe077f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>::get(), "get_floatValue",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::*)(
    float_t, ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType, int32_t, float_t)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xe0753c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType& BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::__cordl_internal_get_et() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___et;
}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const& BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::__cordl_internal_get_et() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___et;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::__cordl_internal_set_et(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___et = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::__cordl_internal_get_i() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::__cordl_internal_get_i() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::__cordl_internal_set_i(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___i = value;
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::__cordl_internal_get_f() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___f;
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::__cordl_internal_get_f() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___f;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::__cordl_internal_set_f(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___f = value;
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::get_eventType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>::get(), "get_eventType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType, false>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::get_value() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>::get(), "get_value",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::get_floatValue() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>::get(), "get_floatValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*
BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::New_ctor(float_t beat, ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType eventType, int32_t value,
                                                                     float_t floatValue) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>(beat, eventType, value, floatValue));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::_ctor(float_t beat, ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType eventType, int32_t value,
                                                                              float_t floatValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, eventType, value, floatValue);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::__BeatmapSaveData__BasicEventData() {}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData.get_boost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData::get_boost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe077fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>::get(), "get_boost",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData::*)(float_t, bool)>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xe07504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData::__cordl_internal_get_o() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___o;
}
constexpr bool const& BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData::__cordl_internal_get_o() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___o;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData::__cordl_internal_set_o(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___o = value;
}
inline bool BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData::get_boost() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>::get(), "get_boost",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData* BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData::New_ctor(float_t beat, bool boost) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>(beat, boost));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData::_ctor(float_t beat, bool boost) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, boost);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData::__BeatmapSaveData__ColorBoostEventData() {}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData.get_bpm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData::get_bpm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>::get(), "get_bpm",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData::*)(float_t, float_t)>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xe073e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData::__cordl_internal_get_m() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m;
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData::__cordl_internal_get_m() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData::__cordl_internal_set_m(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m = value;
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData::get_bpm() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>::get(), "get_bpm",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData* BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData::New_ctor(float_t beat, float_t bpm) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>(beat, bpm));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData::_ctor(float_t beat, float_t bpm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, bpm);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData::__BeatmapSaveData__BpmChangeEventData() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime::__BeatmapSaveData__ExecutionTime(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime::__BeatmapSaveData__ExecutionTime() {}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime::Early{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime::Late{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData.get_executionTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::get_executionTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0780c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>::get(), "get_executionTime",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData.get_rotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::get_rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>::get(), "get_rotation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::*)(
    float_t, ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime, float_t)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe074c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime& BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::__cordl_internal_get_e() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime const& BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::__cordl_internal_get_e() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::__cordl_internal_set_e(::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___e = value;
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::__cordl_internal_get_r() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::__cordl_internal_get_r() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::__cordl_internal_set_r(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___r = value;
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::get_executionTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>::get(), "get_executionTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime, false>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::get_rotation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>::get(), "get_rotation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*
BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::New_ctor(float_t beat, ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime executionTime, float_t rotation) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>(beat, executionTime, rotation));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::_ctor(float_t beat, ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime executionTime, float_t rotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, executionTime, rotation);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::__BeatmapSaveData__RotationEventData() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword.get_keyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::*)()>(
    &::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::get_keyword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>::get(),
                                    "get_keyword", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword.get_eventTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<
    ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* (::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::*)()>(
    &::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::get_eventTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0782c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>::get(),
                                    "get_eventTypes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::*)(
    ::StringW, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*)>(
    &::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xe07640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::__cordl_internal_get_k() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k;
}
constexpr ::StringW const& GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::__cordl_internal_get_k() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k;
}
constexpr void GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::__cordl_internal_set_k(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*&
GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::__cordl_internal_get_e() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*> const&
GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::__cordl_internal_get_e() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr void GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::__cordl_internal_set_e(
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___e)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::get_keyword() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>::get(),
                                  "get_keyword", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*
GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::get_eventTypes() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>::get(),
                                  "get_eventTypes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*
GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::New_ctor(
    ::StringW keyword, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* eventTypes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>(keyword, eventTypes));
}
inline void GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::_ctor(
    ::StringW keyword, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* eventTypes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyword, eventTypes);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword() {}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords.get_data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>* (
        ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords::get_data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0781c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*>::get(), "get_data",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*)>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe0766c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*&
BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords::__cordl_internal_get_d() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*> const&
BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords::__cordl_internal_get_d() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords::__cordl_internal_set_d(
    ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___d)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*
BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords::get_data() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*>::get(), "get_data",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*, false>(
      this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords* BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords::New_ctor(
    ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>* data) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*>(data));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords::_ctor(
    ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords::__BeatmapSaveData__BasicEventTypesWithKeywords() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType::__BeatmapSaveData__EnvironmentColorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType::__BeatmapSaveData__EnvironmentColorType() {}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType::None{ static_cast<int32_t>(0xffffffff) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType::Color0{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType::Color1{ static_cast<int32_t>(0x1) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType::ColorWhite{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType::__BeatmapSaveData__TransitionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType::__BeatmapSaveData__TransitionType() {}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType::Instant{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType::Interpolate{ static_cast<int32_t>(0x1) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType::Extend{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis::__BeatmapSaveData__Axis(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis::__BeatmapSaveData__Axis() {}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis BeatmapSaveDataVersion3::__BeatmapSaveData__Axis::X{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis BeatmapSaveDataVersion3::__BeatmapSaveData__Axis::Y{ static_cast<int32_t>(0x1) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis BeatmapSaveDataVersion3::__BeatmapSaveData__Axis::Z{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::__BeatmapSaveData__EaseType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::__BeatmapSaveData__EaseType() {}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::None{ static_cast<int32_t>(0xffffffff) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::Linear{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InQuad{ static_cast<int32_t>(0x1) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::OutQuad{ static_cast<int32_t>(0x2) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InOutQuad{ static_cast<int32_t>(0x3) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InSine{ static_cast<int32_t>(0x4) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::OutSine{ static_cast<int32_t>(0x5) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InOutSine{ static_cast<int32_t>(0x6) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InCubic{ static_cast<int32_t>(0x7) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::OutCubic{ static_cast<int32_t>(0x8) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InOutCubic{ static_cast<int32_t>(0x9) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InQuart{ static_cast<int32_t>(0xa) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::OutQuart{ static_cast<int32_t>(0xb) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InOutQuart{ static_cast<int32_t>(0xc) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InQuint{ static_cast<int32_t>(0xd) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::OutQuint{ static_cast<int32_t>(0xe) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InOutQuint{ static_cast<int32_t>(0xf) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InExpo{ static_cast<int32_t>(0x10) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::OutExpo{ static_cast<int32_t>(0x11) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InOutExpo{ static_cast<int32_t>(0x12) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InCirc{ static_cast<int32_t>(0x13) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::OutCirc{ static_cast<int32_t>(0x14) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InOutCirc{ static_cast<int32_t>(0x15) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InBack{ static_cast<int32_t>(0x16) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::OutBack{ static_cast<int32_t>(0x17) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InOutBack{ static_cast<int32_t>(0x18) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InElastic{ static_cast<int32_t>(0x19) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::OutElastic{ static_cast<int32_t>(0x1a) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InOutElastic{ static_cast<int32_t>(0x1b) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InBounce{ static_cast<int32_t>(0x1c) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::OutBounce{ static_cast<int32_t>(0x1d) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InOutBounce{ static_cast<int32_t>(0x1e) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::BeatSaberInOutBack{ static_cast<int32_t>(0x64) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::BeatSaberInOutElastic{ static_cast<int32_t>(0x65) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::BeatSaberInOutBounce{ static_cast<int32_t>(0x66) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType::__BeatmapSaveData__FxEventType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType::__BeatmapSaveData__FxEventType() {}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType::Int{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType::Float{ static_cast<int32_t>(0x1) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType::Bool{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType::__BeatmapSaveData__EventBox__DistributionParamType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType::__BeatmapSaveData__EventBox__DistributionParamType() {}
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType::Wave{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType::Step{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox.get_indexFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::get_indexFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>::get(),
                                                                               "get_indexFilter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox.get_beatDistributionParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::get_beatDistributionParam)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0783c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>::get(),
                                                                               "get_beatDistributionParam", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox.get_beatDistributionParamType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::get_beatDistributionParamType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>::get(),
                                                                               "get_beatDistributionParamType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::*)(
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*, float_t, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType)>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe0784c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*& BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::__cordl_internal_get_f() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___f;
}
constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*> const& BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::__cordl_internal_get_f() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___f;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::__cordl_internal_set_f(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___f)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::__cordl_internal_get_w() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w;
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::__cordl_internal_get_w() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::__cordl_internal_set_w(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___w = value;
}
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType& BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::__cordl_internal_get_d() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType const& BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::__cordl_internal_get_d() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::__cordl_internal_set_d(::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___d = value;
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::get_indexFilter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>::get(),
                                                                             "get_indexFilter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*, false>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::get_beatDistributionParam() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>::get(),
                                                                             "get_beatDistributionParam", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::get_beatDistributionParamType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>::get(),
                                                                             "get_beatDistributionParamType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*
BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* indexFilter, float_t beatDistributionParam,
                                                               ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>(indexFilter, beatDistributionParam, beatDistributionParamType));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* indexFilter, float_t beatDistributionParam,
                                                                        ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexFilter, beatDistributionParam, beatDistributionParamType);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::__BeatmapSaveData__EventBox() {}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox.get_vfxDistributionParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::get_vfxDistributionParam)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0788c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>::get(),
                                                                               "get_vfxDistributionParam", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox.get_vfxDistributionParamType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::get_vfxDistributionParamType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>::get(),
                                                                               "get_vfxDistributionParamType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox.get_vfxDistributionEaseType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::get_vfxDistributionEaseType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0789c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>::get(),
                                                                               "get_vfxDistributionEaseType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox.get_vfxDistributionShouldAffectFirstBaseEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::get_vfxDistributionShouldAffectFirstBaseEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe078a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>::get(),
                                                 "get_vfxDistributionShouldAffectFirstBaseEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox.get_vfxBaseDataList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<int32_t>* (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::get_vfxBaseDataList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe078b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>::get(),
                                                                               "get_vfxBaseDataList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::*)(
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*, float_t, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, float_t,
    ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, bool, ::System::Collections::Generic::List_1<int32_t>*)>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xe078bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<int32_t>*& BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__cordl_internal_get_l() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__cordl_internal_get_l() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__cordl_internal_set_l(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___l)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__cordl_internal_get_s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__cordl_internal_get_s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__cordl_internal_set_s(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s = value;
}
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType& BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__cordl_internal_get_t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType const& BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__cordl_internal_get_t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__cordl_internal_set_t(::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___t = value;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType& BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__cordl_internal_get_i() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType const& BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__cordl_internal_get_i() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__cordl_internal_set_i(::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___i = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__cordl_internal_set_b(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::get_vfxDistributionParam() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>::get(),
                                                                             "get_vfxDistributionParam", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::get_vfxDistributionParamType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>::get(),
                                                                             "get_vfxDistributionParamType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::get_vfxDistributionEaseType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>::get(),
                                                                             "get_vfxDistributionEaseType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, false>(this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::get_vfxDistributionShouldAffectFirstBaseEvent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>::get(),
                                               "get_vfxDistributionShouldAffectFirstBaseEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<int32_t>* BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::get_vfxBaseDataList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>::get(),
                                                                             "get_vfxBaseDataList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<int32_t>*, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*
BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* indexFilter, float_t beatDistributionParam,
                                                                 ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType, float_t vfxDistributionParam,
                                                                 ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType vfxDistributionParamType,
                                                                 ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType vfxDistributionEaseType, bool vfxDistributionShouldAffectFirstBaseEvent,
                                                                 ::System::Collections::Generic::List_1<int32_t>* effectsBaseDataList) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>(indexFilter, beatDistributionParam, beatDistributionParamType, vfxDistributionParam,
                                                                                                             vfxDistributionParamType, vfxDistributionEaseType,
                                                                                                             vfxDistributionShouldAffectFirstBaseEvent, effectsBaseDataList));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* indexFilter, float_t beatDistributionParam,
                                                                          ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType, float_t vfxDistributionParam,
                                                                          ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType vfxDistributionParamType,
                                                                          ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType vfxDistributionEaseType,
                                                                          bool vfxDistributionShouldAffectFirstBaseEvent, ::System::Collections::Generic::List_1<int32_t>* effectsBaseDataList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexFilter, beatDistributionParam, beatDistributionParamType, vfxDistributionParam, vfxDistributionParamType,
                                                          vfxDistributionEaseType, vfxDistributionShouldAffectFirstBaseEvent, effectsBaseDataList);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__BeatmapSaveData__FxEventBox() {}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData.get_beat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::get_beat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0793c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>::get(), "get_beat",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData.get_usePreviousEventValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::get_usePreviousEventValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe07944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>::get(),
                                                 "get_usePreviousEventValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData.get_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>::get(), "get_value",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::*)(float_t, int32_t)>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xe0795c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::__cordl_internal_set_b(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::__cordl_internal_get_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::__cordl_internal_get_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::__cordl_internal_set_p(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___p = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::__cordl_internal_get_v() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___v;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::__cordl_internal_get_v() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___v;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::__cordl_internal_set_v(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___v = value;
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::get_beat() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>::get(), "get_beat",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::get_usePreviousEventValue() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>::get(),
                                               "get_usePreviousEventValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::get_value() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>::get(), "get_value",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData* BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::New_ctor(float_t beat, int32_t value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>(beat, value));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::_ctor(float_t beat, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, value);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::__BeatmapSaveData__IntFxEventBaseData() {}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData.get_beat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::get_beat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>::get(), "get_beat",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData.get_usePreviousEventValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::get_usePreviousEventValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe0799c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>::get(),
                                                 "get_usePreviousEventValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData.get_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe079ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>::get(), "get_value",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData.get_easeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::get_easeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe079b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>::get(), "get_easeType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::*)(
    float_t, bool, float_t, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xe079bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::__cordl_internal_set_b(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::__cordl_internal_get_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::__cordl_internal_get_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::__cordl_internal_set_p(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___p = value;
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::__cordl_internal_get_v() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___v;
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::__cordl_internal_get_v() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___v;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::__cordl_internal_set_v(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___v = value;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType& BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::__cordl_internal_get_i() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType const& BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::__cordl_internal_get_i() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::__cordl_internal_set_i(::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___i = value;
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::get_beat() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>::get(), "get_beat",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::get_usePreviousEventValue() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>::get(),
                                               "get_usePreviousEventValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::get_value() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>::get(), "get_value",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::get_easeType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>::get(), "get_easeType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*
BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::New_ctor(float_t beat, bool usePreviousEventValue, float_t value, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType easeType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>(beat, usePreviousEventValue, value, easeType));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::_ctor(float_t beat, bool usePreviousEventValue, float_t value,
                                                                                    ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType easeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, usePreviousEventValue, value, easeType);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::__BeatmapSaveData__FloatFxEventBaseData() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType::__BeatmapSaveData__IndexFilterRandomType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType::__BeatmapSaveData__IndexFilterRandomType() {}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType::NoRandom{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType::KeepOrder{ static_cast<int32_t>(0x1) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType::RandomElements{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType() {}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType::None{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType::Duration{ static_cast<int32_t>(
    0x1) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType::Distribution{ static_cast<int32_t>(
    0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType::__BeatmapSaveData__IndexFilter__IndexFilterType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType::__BeatmapSaveData__IndexFilter__IndexFilterType() {}
constexpr ::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType::Division{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType::StepAndOffset{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter.get_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), "get_type",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter.get_param0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_param0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), "get_param0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter.get_param1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_param1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), "get_param1",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter.get_reversed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_reversed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe07a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), "get_reversed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter.get_chunks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_chunks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), "get_chunks",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter.get_limit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_limit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), "get_limit",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter.get_limitAlsoAffectsType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_limitAlsoAffectsType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), "get_limitAlsoAffectsType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter.get_random
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_random)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), "get_random",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter.get_seed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_seed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), "get_seed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::*)(
    ::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType, int32_t, int32_t, bool, ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType, int32_t, int32_t, float_t,
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xe07a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::*)(
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xe07ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter.CreateDivisionIndexFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* (*)(int32_t, int32_t, bool)>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::CreateDivisionIndexFilter)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xe07b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), "CreateDivisionIndexFilter",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter.CreateStepFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* (*)(int32_t, int32_t, bool)>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::CreateStepFilter)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xe07bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), "CreateStepFilter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter.CreateForExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* (*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::CreateForExtension)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xe07c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), "CreateForExtension",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_get_f() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___f;
}
constexpr ::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType const& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_get_f() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___f;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_set_f(::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___f = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_get_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_get_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_set_p(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___p = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_get_t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_get_t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_set_t(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___t = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_get_r() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_get_r() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_set_r(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___r = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_get_c() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_get_c() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_set_c(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___c = value;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_get_n() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___n;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType const& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_get_n() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___n;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_set_n(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___n = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_get_s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_get_s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_set_s(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s = value;
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_get_l() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l;
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_get_l() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_set_l(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___l = value;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_get_d() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType const& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_get_d() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__cordl_internal_set_d(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___d = value;
}
inline ::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                                                                             "get_type", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType, false>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_param0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                                                                             "get_param0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_param1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                                                                             "get_param1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_reversed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                                                                             "get_reversed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_chunks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                                                                             "get_chunks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_limit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                                                                             "get_limit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_limitAlsoAffectsType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                                                                             "get_limitAlsoAffectsType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_random() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                                                                             "get_random", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType, false>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_seed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                                                                             "get_seed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*
BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::New_ctor(::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType type, int32_t param0, int32_t param1, bool reversed,
                                                                  ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType random, int32_t seed, int32_t chunks, float_t limit,
                                                                  ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType limitAlsoAffectsType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>(type, param0, param1, reversed, random, seed, chunks, limit, limitAlsoAffectsType));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::_ctor(::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType type, int32_t param0, int32_t param1, bool reversed,
                                                                           ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType random, int32_t seed, int32_t chunks, float_t limit,
                                                                           ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType limitAlsoAffectsType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, param0, param1, reversed, random, seed, chunks, limit, limitAlsoAffectsType);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* other) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>(other));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::CreateDivisionIndexFilter(int32_t numberOfSections, int32_t divisionIdx,
                                                                                                                                                     bool reversed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), "CreateDivisionIndexFilter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*, false>(nullptr, ___internal_method, numberOfSections, divisionIdx, reversed);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::CreateStepFilter(int32_t offset, int32_t step, bool reversed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), "CreateStepFilter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*, false>(nullptr, ___internal_method, offset, step, reversed);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::CreateForExtension() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                                                                             "CreateForExtension", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__BeatmapSaveData__IndexFilter() {}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox.get_brightnessDistributionParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::get_brightnessDistributionParam)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>::get(),
                                                 "get_brightnessDistributionParam", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox.get_brightnessDistributionParamType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::get_brightnessDistributionParamType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>::get(),
                                                 "get_brightnessDistributionParamType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox.get_brightnessDistributionShouldAffectFirstBaseEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::get_brightnessDistributionShouldAffectFirstBaseEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe07cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>::get(),
                                                 "get_brightnessDistributionShouldAffectFirstBaseEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox.get_brightnessDistributionEaseType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::get_brightnessDistributionEaseType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>::get(),
                                                 "get_brightnessDistributionEaseType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox.get_lightColorBaseDataList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>* (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::get_lightColorBaseDataList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>::get(),
                                                 "get_lightColorBaseDataList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::*)(
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*, float_t, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, float_t, bool,
    ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>*)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xe07ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>*>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__cordl_internal_get_r() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__cordl_internal_get_r() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__cordl_internal_set_r(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___r = value;
}
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__cordl_internal_get_t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__cordl_internal_get_t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__cordl_internal_set_t(::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___t = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__cordl_internal_set_b(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__cordl_internal_get_i() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__cordl_internal_get_i() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__cordl_internal_set_i(::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___i = value;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>*&
BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__cordl_internal_get_e() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>*> const&
BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__cordl_internal_get_e() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__cordl_internal_set_e(
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___e)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::get_brightnessDistributionParam() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>::get(),
                                               "get_brightnessDistributionParam", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::get_brightnessDistributionParamType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>::get(),
                                               "get_brightnessDistributionParamType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, false>(this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::get_brightnessDistributionShouldAffectFirstBaseEvent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>::get(),
                                               "get_brightnessDistributionShouldAffectFirstBaseEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::get_brightnessDistributionEaseType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>::get(),
                                               "get_brightnessDistributionEaseType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>*
BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::get_lightColorBaseDataList() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>::get(),
                                               "get_lightColorBaseDataList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>*, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox* BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::New_ctor(
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* indexFilter, float_t beatDistributionParam,
    ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType, float_t brightnessDistributionParam, bool brightnessDistributionShouldAffectFirstBaseEvent,
    ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType brightnessDistributionParamType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType brightnessDistributionEaseType,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>* lightColorBaseDataList) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>(
      indexFilter, beatDistributionParam, beatDistributionParamType, brightnessDistributionParam, brightnessDistributionShouldAffectFirstBaseEvent, brightnessDistributionParamType,
      brightnessDistributionEaseType, lightColorBaseDataList));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::_ctor(
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* indexFilter, float_t beatDistributionParam,
    ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType, float_t brightnessDistributionParam, bool brightnessDistributionShouldAffectFirstBaseEvent,
    ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType brightnessDistributionParamType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType brightnessDistributionEaseType,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>* lightColorBaseDataList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexFilter, beatDistributionParam, beatDistributionParamType, brightnessDistributionParam,
                                                          brightnessDistributionShouldAffectFirstBaseEvent, brightnessDistributionParamType, brightnessDistributionEaseType, lightColorBaseDataList);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__BeatmapSaveData__LightColorEventBox() {}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData.get_beat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_beat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(), "get_beat",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData.get_transitionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_transitionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(), "get_transitionType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData.get_colorType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_colorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(), "get_colorType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData.get_brightness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_brightness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(), "get_brightness",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData.get_strobeBeatFrequency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_strobeBeatFrequency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(),
                                                 "get_strobeBeatFrequency", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData.get_strobeBrightness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_strobeBrightness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(),
                                                 "get_strobeBrightness", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData.get_strobeFade
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_strobeFade)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe07d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(), "get_strobeFade",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::*)(
    float_t, ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType, float_t, int32_t, float_t, bool)>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xe07da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__cordl_internal_set_b(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__cordl_internal_get_i() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__cordl_internal_get_i() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__cordl_internal_set_i(::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___i = value;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__cordl_internal_get_c() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__cordl_internal_get_c() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__cordl_internal_set_c(::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___c = value;
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__cordl_internal_get_s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__cordl_internal_get_s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__cordl_internal_set_s(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__cordl_internal_get_f() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___f;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__cordl_internal_get_f() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___f;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__cordl_internal_set_f(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___f = value;
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__cordl_internal_get_sb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sb;
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__cordl_internal_get_sb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sb;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__cordl_internal_set_sb(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sb = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__cordl_internal_get_sf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sf;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__cordl_internal_get_sf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sf;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__cordl_internal_set_sf(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sf = value;
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_beat() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(), "get_beat",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_transitionType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(), "get_transitionType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_colorType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(), "get_colorType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType, false>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_brightness() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(), "get_brightness",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_strobeBeatFrequency() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(),
                                               "get_strobeBeatFrequency", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_strobeBrightness() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(), "get_strobeBrightness",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_strobeFade() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(), "get_strobeFade",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*
BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::New_ctor(float_t beat, ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType transitionType,
                                                                         ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType colorType, float_t brightness, int32_t strobeFrequency,
                                                                         float_t strobeBrightness, bool strobeFade) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>(beat, transitionType, colorType, brightness, strobeFrequency, strobeBrightness, strobeFade));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::_ctor(float_t beat, ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType transitionType,
                                                                                  ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType colorType, float_t brightness,
                                                                                  int32_t strobeFrequency, float_t strobeBrightness, bool strobeFade) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, transitionType, colorType, brightness, strobeFrequency, strobeBrightness, strobeFade);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__BeatmapSaveData__LightColorBaseData() {}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox.get_rotationDistributionParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_rotationDistributionParam)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                                                 "get_rotationDistributionParam", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox.get_rotationDistributionParamType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_rotationDistributionParamType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                                                 "get_rotationDistributionParamType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox.get_axis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_axis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07e28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(), "get_axis",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox.get_flipRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_flipRotation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe07e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                                                 "get_flipRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox.get_rotationDistributionShouldAffectFirstBaseEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_rotationDistributionShouldAffectFirstBaseEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe07e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                                                 "get_rotationDistributionShouldAffectFirstBaseEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox.get_rotationDistributionEaseType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_rotationDistributionEaseType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                                                 "get_rotationDistributionEaseType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox.get_lightRotationBaseDataList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>* (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_lightRotationBaseDataList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                                                 "get_lightRotationBaseDataList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::*)(
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*, float_t, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, float_t,
    ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, bool, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis, bool,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>*)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xe07e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>*>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__cordl_internal_get_s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__cordl_internal_get_s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__cordl_internal_set_s(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s = value;
}
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__cordl_internal_get_t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__cordl_internal_get_t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__cordl_internal_set_t(::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___t = value;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__cordl_internal_get_a() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__cordl_internal_get_a() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__cordl_internal_set_a(::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___a = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__cordl_internal_get_r() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__cordl_internal_get_r() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__cordl_internal_set_r(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___r = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__cordl_internal_set_b(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__cordl_internal_get_i() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__cordl_internal_get_i() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__cordl_internal_set_i(::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___i = value;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>*&
BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__cordl_internal_get_l() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>*> const&
BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__cordl_internal_get_l() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__cordl_internal_set_l(
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___l)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_rotationDistributionParam() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                                               "get_rotationDistributionParam", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_rotationDistributionParamType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                                               "get_rotationDistributionParamType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_axis() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(), "get_axis",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis, false>(this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_flipRotation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(), "get_flipRotation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_rotationDistributionShouldAffectFirstBaseEvent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                                               "get_rotationDistributionShouldAffectFirstBaseEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_rotationDistributionEaseType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                                               "get_rotationDistributionEaseType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>*
BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_lightRotationBaseDataList() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                                               "get_lightRotationBaseDataList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>*, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox* BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::New_ctor(
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* indexFilter, float_t beatDistributionParam,
    ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType, float_t rotationDistributionParam,
    ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType rotationDistributionParamType, bool rotationDistributionShouldAffectFirstBaseEvent,
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType rotationDistributionEaseType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis axis, bool flipRotation,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>* lightRotationBaseDataList) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>(
      indexFilter, beatDistributionParam, beatDistributionParamType, rotationDistributionParam, rotationDistributionParamType, rotationDistributionShouldAffectFirstBaseEvent,
      rotationDistributionEaseType, axis, flipRotation, lightRotationBaseDataList));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::_ctor(
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* indexFilter, float_t beatDistributionParam,
    ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType, float_t rotationDistributionParam,
    ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType rotationDistributionParamType, bool rotationDistributionShouldAffectFirstBaseEvent,
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType rotationDistributionEaseType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis axis, bool flipRotation,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>* lightRotationBaseDataList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexFilter, beatDistributionParam, beatDistributionParamType, rotationDistributionParam,
                                                          rotationDistributionParamType, rotationDistributionShouldAffectFirstBaseEvent, rotationDistributionEaseType, axis, flipRotation,
                                                          lightRotationBaseDataList);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__BeatmapSaveData__LightRotationEventBox() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection::__BeatmapSaveData__LightRotationBaseData__RotationDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection::__BeatmapSaveData__LightRotationBaseData__RotationDirection() {}
constexpr ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection::Automatic{ static_cast<int32_t>(
    0x0) };
constexpr ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection::Clockwise{ static_cast<int32_t>(
    0x1) };
constexpr ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection::Counterclockwise{
  static_cast<int32_t>(0x2)
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData.get_beat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::get_beat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07ef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(), "get_beat",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData.get_usePreviousEventRotationValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::get_usePreviousEventRotationValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe07f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(),
                                                 "get_usePreviousEventRotationValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData.get_easeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::get_easeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(), "get_easeType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData.get_loopsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::get_loopsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(), "get_loopsCount",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData.get_rotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::get_rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(), "get_rotation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData.get_rotationDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::get_rotationDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(),
                                                 "get_rotationDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::*)(
    float_t, bool, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, int32_t, float_t, ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection)>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe07f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__cordl_internal_set_b(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__cordl_internal_get_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__cordl_internal_get_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__cordl_internal_set_p(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___p = value;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__cordl_internal_get_e() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__cordl_internal_get_e() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__cordl_internal_set_e(::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___e = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__cordl_internal_get_l() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__cordl_internal_get_l() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__cordl_internal_set_l(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___l = value;
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__cordl_internal_get_r() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__cordl_internal_get_r() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__cordl_internal_set_r(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___r = value;
}
constexpr ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__cordl_internal_get_o() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___o;
}
constexpr ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__cordl_internal_get_o() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___o;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__cordl_internal_set_o(::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___o = value;
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::get_beat() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(), "get_beat",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::get_usePreviousEventRotationValue() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(),
                                               "get_usePreviousEventRotationValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::get_easeType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(), "get_easeType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, false>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::get_loopsCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(), "get_loopsCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::get_rotation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(), "get_rotation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::get_rotationDirection() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(),
                                               "get_rotationDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*
BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::New_ctor(float_t beat, bool usePreviousEventRotationValue, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType easeType,
                                                                            int32_t loopsCount, float_t rotation,
                                                                            ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection rotationDirection) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>(beat, usePreviousEventRotationValue, easeType, loopsCount, rotation, rotationDirection));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::_ctor(float_t beat, bool usePreviousEventRotationValue, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType easeType,
                                                                                     int32_t loopsCount, float_t rotation,
                                                                                     ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection rotationDirection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, usePreviousEventRotationValue, easeType, loopsCount, rotation, rotationDirection);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__BeatmapSaveData__LightRotationBaseData() {}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox.get_gapDistributionParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_gapDistributionParam)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                                                 "get_gapDistributionParam", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox.get_gapDistributionParamType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_gapDistributionParamType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                                                 "get_gapDistributionParamType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox.get_axis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_axis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(), "get_axis",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox.get_flipTranslation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_flipTranslation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe07fb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                                                 "get_flipTranslation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox.get_gapDistributionShouldAffectFirstBaseEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_gapDistributionShouldAffectFirstBaseEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe07fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                                                 "get_gapDistributionShouldAffectFirstBaseEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox.get_gapDistributionEaseType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_gapDistributionEaseType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                                                 "get_gapDistributionEaseType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox.get_lightTranslationBaseDataList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>* (
        ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_lightTranslationBaseDataList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                                                 "get_lightTranslationBaseDataList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::*)(
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*, float_t, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, float_t,
    ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, bool, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis, bool,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>*)>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xe07fe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>*>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__cordl_internal_get_s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__cordl_internal_get_s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__cordl_internal_set_s(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s = value;
}
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__cordl_internal_get_t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__cordl_internal_get_t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__cordl_internal_set_t(::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___t = value;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__cordl_internal_get_a() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__cordl_internal_get_a() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__cordl_internal_set_a(::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___a = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__cordl_internal_get_r() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__cordl_internal_get_r() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__cordl_internal_set_r(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___r = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__cordl_internal_set_b(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__cordl_internal_get_i() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__cordl_internal_get_i() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__cordl_internal_set_i(::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___i = value;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>*&
BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__cordl_internal_get_l() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>*> const&
BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__cordl_internal_get_l() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__cordl_internal_set_l(
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___l)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_gapDistributionParam() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                                               "get_gapDistributionParam", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_gapDistributionParamType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                                               "get_gapDistributionParamType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_axis() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(), "get_axis",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis, false>(this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_flipTranslation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                                               "get_flipTranslation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_gapDistributionShouldAffectFirstBaseEvent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                                               "get_gapDistributionShouldAffectFirstBaseEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_gapDistributionEaseType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                                               "get_gapDistributionEaseType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>*
BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_lightTranslationBaseDataList() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                                               "get_lightTranslationBaseDataList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>*, false>(this,
                                                                                                                                                                               ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox* BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::New_ctor(
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* indexFilter, float_t beatDistributionParam,
    ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType, float_t gapDistributionParam,
    ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType gapDistributionParamType, bool gapDistributionShouldAffectFirstBaseEvent,
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType gapDistributionEaseType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis axis, bool flipTranslation,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>* lightTranslationBaseDataList) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>(
      indexFilter, beatDistributionParam, beatDistributionParamType, gapDistributionParam, gapDistributionParamType, gapDistributionShouldAffectFirstBaseEvent, gapDistributionEaseType, axis,
      flipTranslation, lightTranslationBaseDataList));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::_ctor(
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* indexFilter, float_t beatDistributionParam,
    ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType, float_t gapDistributionParam,
    ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType gapDistributionParamType, bool gapDistributionShouldAffectFirstBaseEvent,
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType gapDistributionEaseType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis axis, bool flipTranslation,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>* lightTranslationBaseDataList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexFilter, beatDistributionParam, beatDistributionParamType, gapDistributionParam, gapDistributionParamType,
                                                          gapDistributionShouldAffectFirstBaseEvent, gapDistributionEaseType, axis, flipTranslation, lightTranslationBaseDataList);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__BeatmapSaveData__LightTranslationEventBox() {}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData.get_beat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::get_beat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>::get(), "get_beat",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData.get_usePreviousEventTranslationValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::get_usePreviousEventTranslationValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe08080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>::get(),
                                                 "get_usePreviousEventTranslationValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData.get_easeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::get_easeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>::get(), "get_easeType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData.get_translation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::get_translation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>::get(),
                                                 "get_translation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::*)(
    float_t, bool, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, float_t)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe080a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::__cordl_internal_set_b(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::__cordl_internal_get_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::__cordl_internal_get_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::__cordl_internal_set_p(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___p = value;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::__cordl_internal_get_e() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::__cordl_internal_get_e() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::__cordl_internal_set_e(::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___e = value;
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::__cordl_internal_get_t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::__cordl_internal_get_t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::__cordl_internal_set_t(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___t = value;
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::get_beat() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>::get(), "get_beat",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::get_usePreviousEventTranslationValue() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>::get(),
                                               "get_usePreviousEventTranslationValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::get_easeType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>::get(), "get_easeType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, false>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::get_translation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>::get(),
                                               "get_translation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*
BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::New_ctor(float_t beat, bool usePreviousEventTranslationValue, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType easeType,
                                                                               float_t translation) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>(beat, usePreviousEventTranslationValue, easeType, translation));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::_ctor(float_t beat, bool usePreviousEventTranslationValue,
                                                                                        ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType easeType, float_t translation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, usePreviousEventTranslationValue, easeType, translation);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::__BeatmapSaveData__LightTranslationBaseData() {}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup.get_groupId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::get_groupId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe080f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup*>::get(), "get_groupId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup.get_baseEventBoxes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>* (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::get_baseEventBoxes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::*)(float_t, int32_t)>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xe080f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::__cordl_internal_get_g() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::__cordl_internal_get_g() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::__cordl_internal_set_g(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___g = value;
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::get_groupId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup*>::get(), "get_groupId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>* BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::get_baseEventBoxes() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>*, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup* BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::New_ctor(float_t beat, int32_t groupId) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup*>(beat, groupId));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::_ctor(float_t beat, int32_t groupId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, groupId);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::__BeatmapSaveData__EventBoxGroup() {}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>::__cordl_internal_get_e() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>::__cordl_internal_get_e() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
template <typename T> constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>::__cordl_internal_set_e(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___e)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>* BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>::get_baseEventBoxes() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IReadOnlyList_1<T>* BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>::get_eventBoxes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>*>::get(), "get_eventBoxes",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<T>*, false>(this, ___internal_method);
}
template <typename T>
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>*
BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>::New_ctor(float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<T>* eventBoxes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>*>(beat, groupId, eventBoxes));
}
template <typename T> inline void BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>::_ctor(float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<T>* eventBoxes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, groupId, eventBoxes);
}
// Ctor Parameters []
template <typename T> constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>::__BeatmapSaveData__EventBoxGroup_1() {}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup.get_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>::get(), "get_type",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup::*)(
    float_t, int32_t, ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>*)>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xe08138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType& BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup::__cordl_internal_get_t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType const& BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup::__cordl_internal_get_t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup::__cordl_internal_set_t(::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___t = value;
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup::get_type() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>::get(), "get_type",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*
BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup::New_ctor(float_t beat, int32_t groupId, ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType type,
                                                                      ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>* eventBoxes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>(beat, groupId, type, eventBoxes));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup::_ctor(float_t beat, int32_t groupId, ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType type,
                                                                               ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>* eventBoxes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, groupId, type, eventBoxes);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup::__BeatmapSaveData__FxEventBoxGroup() {}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection.get_intEventsList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>* (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::get_intEventsList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe081bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>::get(), "get_intEventsList",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection.get_floatEventsList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>* (::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::get_floatEventsList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe081c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>::get(),
                                                 "get_floatEventsList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection.AddEventAndGetIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::*)(
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::AddEventAndGetIndex)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xe081cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>::get(), "AddEventAndGetIndex",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection.AddEventAndGetIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::*)(
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::AddEventAndGetIndex)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xe0828c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>::get(), "AddEventAndGetIndex",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xe07580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>*&
BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::__cordl_internal_get__il() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____il;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>*> const&
BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::__cordl_internal_get__il() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____il;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::__cordl_internal_set__il(
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____il)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>*&
BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::__cordl_internal_get__fl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fl;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>*> const&
BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::__cordl_internal_get__fl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fl;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::__cordl_internal_set__fl(
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>*
BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::get_intEventsList() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>::get(), "get_intEventsList",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>*
BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::get_floatEventsList() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>::get(), "get_floatEventsList",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>*, false>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::AddEventAndGetIndex(::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>::get(), "AddEventAndGetIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, e);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::AddEventAndGetIndex(::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>::get(), "AddEventAndGetIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, e);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection* BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>());
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::__BeatmapSaveData__FxEventsCollection() {}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup::*)(
    float_t, int32_t, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>*)>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xe0834c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup.CopyWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup* (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup::*)(::System::Nullable_1<float_t>, ::System::Nullable_1<int32_t>)>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup::CopyWith)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xe083bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>::get(), "CopyWith", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*
BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup::New_ctor(float_t beat, int32_t groupId,
                                                                              ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>* eventBoxes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>(beat, groupId, eventBoxes));
}
inline void
BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup::_ctor(float_t beat, int32_t groupId,
                                                                           ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>* eventBoxes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, groupId, eventBoxes);
}
/// @param newBeat: ::System::Nullable_1<float_t> (default: {})
/// @param newGroupId: ::System::Nullable_1<int32_t> (default: {})
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup* BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup::CopyWith(::System::Nullable_1<float_t> newBeat,
                                                                                                                                                            ::System::Nullable_1<int32_t> newGroupId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>::get(), "CopyWith", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*, false>(this, ___internal_method, newBeat, newGroupId);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup::__BeatmapSaveData__LightColorEventBoxGroup() {}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup::*)(
    float_t, int32_t, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>*)>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xe0849c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup.CopyWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup* (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup::*)(::System::Nullable_1<float_t>, ::System::Nullable_1<int32_t>)>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup::CopyWith)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xe0850c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>::get(), "CopyWith", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup* BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup::New_ctor(
    float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>* eventBoxes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>(beat, groupId, eventBoxes));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup::_ctor(
    float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>* eventBoxes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, groupId, eventBoxes);
}
/// @param newBeat: ::System::Nullable_1<float_t> (default: {})
/// @param newGroupId: ::System::Nullable_1<int32_t> (default: {})
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*
BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup::CopyWith(::System::Nullable_1<float_t> newBeat, ::System::Nullable_1<int32_t> newGroupId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>::get(), "CopyWith", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*, false>(this, ___internal_method, newBeat, newGroupId);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup::__BeatmapSaveData__LightRotationEventBoxGroup() {}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup::*)(
    float_t, int32_t, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>*)>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xe085ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup.CopyWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup* (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup::*)(::System::Nullable_1<float_t>, ::System::Nullable_1<int32_t>)>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup::CopyWith)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xe0865c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>::get(),
                                                 "CopyWith", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup* BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup::New_ctor(
    float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>* eventBoxes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>(beat, groupId, eventBoxes));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup::_ctor(
    float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>* eventBoxes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, groupId, eventBoxes);
}
/// @param newBeat: ::System::Nullable_1<float_t> (default: {})
/// @param newGroupId: ::System::Nullable_1<int32_t> (default: {})
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*
BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup::CopyWith(::System::Nullable_1<float_t> newBeat, ::System::Nullable_1<int32_t> newGroupId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>::get(), "CopyWith", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*, false>(this, ___internal_method, newBeat, newGroupId);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup::__BeatmapSaveData__LightTranslationEventBoxGroup() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType::__BeatmapSaveData__NoteColorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType::__BeatmapSaveData__NoteColorType() {}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType::ColorA{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType::ColorB{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData.get_line
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::get_line)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0873c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>::get(), "get_line",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData.get_layer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::get_layer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>::get(), "get_layer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData.get_angleOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::get_angleOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0874c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>::get(), "get_angleOffset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData.get_color
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::get_color)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>::get(), "get_color",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData.get_cutDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteCutDirection (::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::get_cutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0875c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>::get(), "get_cutDirection",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::*)(
    float_t, int32_t, int32_t, ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType, ::GlobalNamespace::NoteCutDirection, int32_t)>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xe071dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__cordl_internal_set_x(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__cordl_internal_set_y(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__cordl_internal_get_a() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__cordl_internal_get_a() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__cordl_internal_set_a(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___a = value;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType& BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__cordl_internal_get_c() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType const& BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__cordl_internal_get_c() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__cordl_internal_set_c(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___c = value;
}
constexpr ::GlobalNamespace::NoteCutDirection& BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__cordl_internal_get_d() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr ::GlobalNamespace::NoteCutDirection const& BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__cordl_internal_get_d() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__cordl_internal_set_d(::GlobalNamespace::NoteCutDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___d = value;
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::get_line() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>::get(), "get_line",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::get_layer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>::get(), "get_layer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::get_angleOffset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>::get(), "get_angleOffset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::get_color() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>::get(), "get_color",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteCutDirection BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::get_cutDirection() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>::get(), "get_cutDirection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteCutDirection, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*
BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::New_ctor(float_t beat, int32_t line, int32_t layer, ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType color,
                                                                    ::GlobalNamespace::NoteCutDirection cutDirection, int32_t angleOffset) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>(beat, line, layer, color, cutDirection, angleOffset));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::_ctor(float_t beat, int32_t line, int32_t layer, ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType color,
                                                                             ::GlobalNamespace::NoteCutDirection cutDirection, int32_t angleOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, line, layer, color, cutDirection, angleOffset);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__BeatmapSaveData__ColorNoteData() {}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData.get_line
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::get_line)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>::get(), "get_line",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData.get_layer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::get_layer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0876c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>::get(), "get_layer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::*)(float_t, int32_t, int32_t)>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xe0723c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::__cordl_internal_set_x(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::__cordl_internal_set_y(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::get_line() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>::get(),
                                                                             "get_line", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::get_layer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>::get(),
                                                                             "get_layer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData* BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::New_ctor(float_t beat, int32_t line, int32_t layer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>(beat, line, layer));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::_ctor(float_t beat, int32_t line, int32_t layer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, line, layer);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::__BeatmapSaveData__BombNoteData() {}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData.get_line
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::get_line)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>::get(), "get_line",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData.get_layer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::get_layer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0877c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>::get(), "get_layer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData.get_offsetDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OffsetDirection (::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::get_offsetDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>::get(), "get_offsetDirection",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::*)(
    float_t, int32_t, int32_t, ::GlobalNamespace::OffsetDirection)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xe07394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OffsetDirection>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::__cordl_internal_set_x(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::__cordl_internal_set_y(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
constexpr ::GlobalNamespace::OffsetDirection& BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::__cordl_internal_get_d() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr ::GlobalNamespace::OffsetDirection const& BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::__cordl_internal_get_d() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::__cordl_internal_set_d(::GlobalNamespace::OffsetDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___d = value;
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::get_line() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>::get(),
                                                                             "get_line", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::get_layer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>::get(),
                                                                             "get_layer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OffsetDirection BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::get_offsetDirection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>::get(),
                                                                             "get_offsetDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OffsetDirection, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData* BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::New_ctor(float_t beat, int32_t line, int32_t layer,
                                                                                                                                      ::GlobalNamespace::OffsetDirection offsetDirection) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>(beat, line, layer, offsetDirection));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::_ctor(float_t beat, int32_t line, int32_t layer, ::GlobalNamespace::OffsetDirection offsetDirection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OffsetDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, line, layer, offsetDirection);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::__BeatmapSaveData__WaypointData() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType::__BeatmapSaveData__SliderType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType::__BeatmapSaveData__SliderType() {}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType::Normal{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType::Burst{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData.get_colorType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType (
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_colorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0878c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(), "get_colorType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData.get_headLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_headLine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(), "get_headLine",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData.get_headLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_headLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0879c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(), "get_headLayer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData.get_headCutDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteCutDirection (::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_headCutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe087a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(), "get_headCutDirection",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData.get_tailBeat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_tailBeat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe087ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(), "get_tailBeat",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData.get_tailLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_tailLine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe087b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(), "get_tailLine",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData.get_tailLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_tailLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe087bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(), "get_tailLayer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::*)(
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType, float_t, int32_t, int32_t, ::GlobalNamespace::NoteCutDirection, float_t, int32_t, int32_t)>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xe087c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__cordl_internal_get_c() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType const& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__cordl_internal_get_c() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__cordl_internal_set_c(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___c = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__cordl_internal_set_x(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__cordl_internal_set_y(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
constexpr ::GlobalNamespace::NoteCutDirection& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__cordl_internal_get_d() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr ::GlobalNamespace::NoteCutDirection const& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__cordl_internal_get_d() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__cordl_internal_set_d(::GlobalNamespace::NoteCutDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___d = value;
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__cordl_internal_get_tb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tb;
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__cordl_internal_get_tb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tb;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__cordl_internal_set_tb(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tb = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__cordl_internal_get_tx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tx;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__cordl_internal_get_tx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tx;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__cordl_internal_set_tx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tx = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__cordl_internal_get_ty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ty;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__cordl_internal_get_ty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ty;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__cordl_internal_set_ty(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ty = value;
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_colorType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(), "get_colorType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType, false>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_headLine() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(), "get_headLine",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_headLayer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(), "get_headLayer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteCutDirection BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_headCutDirection() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(), "get_headCutDirection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteCutDirection, false>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_tailBeat() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(), "get_tailBeat",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_tailLine() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(), "get_tailLine",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_tailLayer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(), "get_tailLayer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*
BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType colorType, float_t headBeat, int32_t headLine, int32_t headLayer,
                                                                     ::GlobalNamespace::NoteCutDirection headCutDirection, float_t tailBeat, int32_t tailLine, int32_t tailLayer) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>(colorType, headBeat, headLine, headLayer, headCutDirection, tailBeat, tailLine, tailLayer));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType colorType, float_t headBeat, int32_t headLine,
                                                                              int32_t headLayer, ::GlobalNamespace::NoteCutDirection headCutDirection, float_t tailBeat, int32_t tailLine,
                                                                              int32_t tailLayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorType, headBeat, headLine, headLayer, headCutDirection, tailBeat, tailLine, tailLayer);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__BeatmapSaveData__BaseSliderData() {}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData.get_headControlPointLengthMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::get_headControlPointLengthMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>::get(),
                                                 "get_headControlPointLengthMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData.get_tailControlPointLengthMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::get_tailControlPointLengthMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>::get(),
                                                 "get_tailControlPointLengthMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData.get_tailCutDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteCutDirection (::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::get_tailCutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>::get(),
                                                                               "get_tailCutDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData.get_sliderMidAnchorMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SliderMidAnchorMode (::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::get_sliderMidAnchorMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>::get(),
                                                                               "get_sliderMidAnchorMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::*)(
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType, float_t, int32_t, int32_t, float_t, ::GlobalNamespace::NoteCutDirection, float_t, int32_t, int32_t, float_t,
    ::GlobalNamespace::NoteCutDirection, ::GlobalNamespace::SliderMidAnchorMode)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xe07300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 12>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderMidAnchorMode>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::__cordl_internal_get_mu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mu;
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::__cordl_internal_get_mu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mu;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::__cordl_internal_set_mu(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mu = value;
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::__cordl_internal_get_tmu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tmu;
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::__cordl_internal_get_tmu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tmu;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::__cordl_internal_set_tmu(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tmu = value;
}
constexpr ::GlobalNamespace::NoteCutDirection& BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::__cordl_internal_get_tc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tc;
}
constexpr ::GlobalNamespace::NoteCutDirection const& BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::__cordl_internal_get_tc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tc;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::__cordl_internal_set_tc(::GlobalNamespace::NoteCutDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tc = value;
}
constexpr ::GlobalNamespace::SliderMidAnchorMode& BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::__cordl_internal_get_m() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m;
}
constexpr ::GlobalNamespace::SliderMidAnchorMode const& BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::__cordl_internal_get_m() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::__cordl_internal_set_m(::GlobalNamespace::SliderMidAnchorMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m = value;
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::get_headControlPointLengthMultiplier() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>::get(),
                                               "get_headControlPointLengthMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::get_tailControlPointLengthMultiplier() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>::get(),
                                               "get_tailControlPointLengthMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteCutDirection BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::get_tailCutDirection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>::get(),
                                                                             "get_tailCutDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteCutDirection, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderMidAnchorMode BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::get_sliderMidAnchorMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>::get(),
                                                                             "get_sliderMidAnchorMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderMidAnchorMode, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*
BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType colorType, float_t headBeat, int32_t headLine, int32_t headLayer,
                                                                 float_t headControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection headCutDirection, float_t tailBeat, int32_t tailLine,
                                                                 int32_t tailLayer, float_t tailControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection tailCutDirection,
                                                                 ::GlobalNamespace::SliderMidAnchorMode sliderMidAnchorMode) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>(colorType, headBeat, headLine, headLayer, headControlPointLengthMultiplier,
                                                                                                             headCutDirection, tailBeat, tailLine, tailLayer, tailControlPointLengthMultiplier,
                                                                                                             tailCutDirection, sliderMidAnchorMode));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType colorType, float_t headBeat, int32_t headLine, int32_t headLayer,
                                                                          float_t headControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection headCutDirection, float_t tailBeat,
                                                                          int32_t tailLine, int32_t tailLayer, float_t tailControlPointLengthMultiplier,
                                                                          ::GlobalNamespace::NoteCutDirection tailCutDirection, ::GlobalNamespace::SliderMidAnchorMode sliderMidAnchorMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 12>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderMidAnchorMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorType, headBeat, headLine, headLayer, headControlPointLengthMultiplier, headCutDirection, tailBeat, tailLine,
                                                          tailLayer, tailControlPointLengthMultiplier, tailCutDirection, sliderMidAnchorMode);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::__BeatmapSaveData__SliderData() {}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData.get_sliceCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::get_sliceCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>::get(), "get_sliceCount",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData.get_squishAmount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::get_squishAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>::get(), "get_squishAmount",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::*)(
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType, float_t, int32_t, int32_t, ::GlobalNamespace::NoteCutDirection, float_t, int32_t, int32_t, int32_t, float_t)>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xe08860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::__cordl_internal_get_sc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sc;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::__cordl_internal_get_sc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sc;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::__cordl_internal_set_sc(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sc = value;
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::__cordl_internal_get_s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::__cordl_internal_get_s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::__cordl_internal_set_s(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s = value;
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::get_sliceCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>::get(), "get_sliceCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::get_squishAmount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>::get(), "get_squishAmount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*
BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType colorType, float_t headBeat, int32_t headLine, int32_t headLayer,
                                                                      ::GlobalNamespace::NoteCutDirection headCutDirection, float_t tailBeat, int32_t tailLine, int32_t tailLayer, int32_t sliceCount,
                                                                      float_t squishAmount) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>(colorType, headBeat, headLine, headLayer, headCutDirection, tailBeat, tailLine,
                                                                                                                  tailLayer, sliceCount, squishAmount));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType colorType, float_t headBeat, int32_t headLine,
                                                                               int32_t headLayer, ::GlobalNamespace::NoteCutDirection headCutDirection, float_t tailBeat, int32_t tailLine,
                                                                               int32_t tailLayer, int32_t sliceCount, float_t squishAmount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorType, headBeat, headLine, headLayer, headCutDirection, tailBeat, tailLine, tailLayer, sliceCount,
                                                          squishAmount);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::__BeatmapSaveData__BurstSliderData() {}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData.get_line
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::get_line)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe088ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>::get(), "get_line",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData.get_layer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::get_layer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe088f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>::get(), "get_layer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData.get_duration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::get_duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe088fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>::get(), "get_duration",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData.get_width
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::get_width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>::get(), "get_width",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData.get_height
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::*)()>(
    &::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::get_height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0890c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>::get(), "get_height",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::*)(
    float_t, int32_t, int32_t, float_t, int32_t, int32_t)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe0729c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__cordl_internal_set_x(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__cordl_internal_set_y(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__cordl_internal_get_d() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__cordl_internal_get_d() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__cordl_internal_set_d(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___d = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__cordl_internal_get_w() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__cordl_internal_get_w() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__cordl_internal_set_w(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___w = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__cordl_internal_get_h() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___h;
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__cordl_internal_get_h() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___h;
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__cordl_internal_set_h(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___h = value;
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::get_line() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>::get(),
                                                                             "get_line", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::get_layer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>::get(),
                                                                             "get_layer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::get_duration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>::get(),
                                                                             "get_duration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::get_width() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>::get(),
                                                                             "get_width", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::get_height() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>::get(),
                                                                             "get_height", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData* BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::New_ctor(float_t beat, int32_t line, int32_t layer, float_t duration,
                                                                                                                                      int32_t width, int32_t height) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>(beat, line, layer, duration, width, height));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::_ctor(float_t beat, int32_t line, int32_t layer, float_t duration, int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, line, layer, duration, width, height);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__BeatmapSaveData__ObstacleData() {}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapSaveData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::BeatmapSaveData::*)(
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>*,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>*,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>*,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>*,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>*,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>*,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>*,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>*,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*, ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*,
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*, bool)>(&::BeatmapSaveDataVersion3::BeatmapSaveData::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xe05388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 17>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapSaveData.SerializeToJSONString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatmapSaveDataVersion3::BeatmapSaveData::*)()>(
    &::BeatmapSaveDataVersion3::BeatmapSaveData::SerializeToJSONString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe05494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                                                                               "SerializeToJSONString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapSaveData.DeserializeFromJSONString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData* (*)(::StringW)>(
    &::BeatmapSaveDataVersion3::BeatmapSaveData::DeserializeFromJSONString)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xe0549c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(), "DeserializeFromJSONString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapSaveData.ConvertBeatmapSaveData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData* (*)(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*)>(
    &::BeatmapSaveDataVersion3::BeatmapSaveData::ConvertBeatmapSaveData)> {
  constexpr static std::size_t size = 0x180c;
  constexpr static std::size_t addrs = 0xe057fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(), "ConvertBeatmapSaveData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapSaveData.GetNoteColorType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType (*)(
    ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType)>(&::BeatmapSaveDataVersion3::BeatmapSaveData::GetNoteColorType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe071d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(), "GetNoteColorType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapSaveData.GetNoteColorType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType (*)(
    ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType)>(&::BeatmapSaveDataVersion3::BeatmapSaveData::GetNoteColorType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe072f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(), "GetNoteColorType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapSaveData.GetHeightForObstacleType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType)>(
    &::BeatmapSaveDataVersion3::BeatmapSaveData::GetHeightForObstacleType)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xe07288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(), "GetHeightForObstacleType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapSaveData.GetLayerForObstacleType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType)>(
    &::BeatmapSaveDataVersion3::BeatmapSaveData::GetLayerForObstacleType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe07278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(), "GetLayerForObstacleType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapSaveData.GetSliderType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType (*)(
    ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderType)>(&::BeatmapSaveDataVersion3::BeatmapSaveData::GetSliderType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe07694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(), "GetSliderType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapSaveData.SpawnRotationForEventValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(int32_t)>(&::BeatmapSaveDataVersion3::BeatmapSaveData::SpawnRotationForEventValue)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xe0740c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(), "SpawnRotationForEventValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapSaveData.BeatmapSaveDataAreSorted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>*)>(&::BeatmapSaveDataVersion3::BeatmapSaveData::BeatmapSaveDataAreSorted)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xe07008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(), "BeatmapSaveDataAreSorted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::StringW const& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>*& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_bpmEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bpmEvents;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>*> const&
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_bpmEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bpmEvents;
}
constexpr void
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_bpmEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bpmEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>*& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_rotationEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationEvents;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>*> const&
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_rotationEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationEvents;
}
constexpr void
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_rotationEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rotationEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>*& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_colorNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorNotes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>*> const&
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_colorNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorNotes;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_colorNotes(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorNotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>*& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_bombNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bombNotes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>*> const&
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_bombNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bombNotes;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_bombNotes(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bombNotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>*& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_obstacles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstacles;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>*> const&
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_obstacles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstacles;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_obstacles(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___obstacles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>*& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_sliders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliders;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>*> const&
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_sliders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliders;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_sliders(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sliders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>*& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_burstSliders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___burstSliders;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>*> const&
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_burstSliders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___burstSliders;
}
constexpr void
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_burstSliders(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___burstSliders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>*& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_waypoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___waypoints;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>*> const&
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_waypoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___waypoints;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_waypoints(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___waypoints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_basicBeatmapEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicBeatmapEvents;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*> const&
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_basicBeatmapEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicBeatmapEvents;
}
constexpr void
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_basicBeatmapEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___basicBeatmapEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*&
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_colorBoostBeatmapEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorBoostBeatmapEvents;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*> const&
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_colorBoostBeatmapEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorBoostBeatmapEvents;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_colorBoostBeatmapEvents(
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorBoostBeatmapEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*&
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_lightColorEventBoxGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightColorEventBoxGroups;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*> const&
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_lightColorEventBoxGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightColorEventBoxGroups;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_lightColorEventBoxGroups(
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightColorEventBoxGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*&
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_lightRotationEventBoxGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightRotationEventBoxGroups;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*> const&
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_lightRotationEventBoxGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightRotationEventBoxGroups;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_lightRotationEventBoxGroups(
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightRotationEventBoxGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*&
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_lightTranslationEventBoxGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightTranslationEventBoxGroups;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*> const&
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_lightTranslationEventBoxGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightTranslationEventBoxGroups;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_lightTranslationEventBoxGroups(
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightTranslationEventBoxGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_vfxEventBoxGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vfxEventBoxGroups;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*> const&
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_vfxEventBoxGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vfxEventBoxGroups;
}
constexpr void
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_vfxEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___vfxEventBoxGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get__fxEventsCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fxEventsCollection;
}
constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*> const&
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get__fxEventsCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fxEventsCollection;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set__fxEventsCollection(::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fxEventsCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_basicEventTypesWithKeywords() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicEventTypesWithKeywords;
}
constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*> const&
BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_basicEventTypesWithKeywords() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicEventTypesWithKeywords;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_basicEventTypesWithKeywords(::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___basicEventTypesWithKeywords)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_useNormalEventsAsCompatibleEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useNormalEventsAsCompatibleEvents;
}
constexpr bool const& BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_get_useNormalEventsAsCompatibleEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useNormalEventsAsCompatibleEvents;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__cordl_internal_set_useNormalEventsAsCompatibleEvents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useNormalEventsAsCompatibleEvents = value;
}
inline void BeatmapSaveDataVersion3::BeatmapSaveData::setStaticF_version2_6_0(::System::Version* value) {
  ::cordl_internals::setStaticField<::System::Version*, "version2_6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get>(
      std::forward<::System::Version*>(value));
}
inline ::System::Version* BeatmapSaveDataVersion3::BeatmapSaveData::getStaticF_version2_6_0() {
  return ::cordl_internals::getStaticField<::System::Version*, "version2_6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get>();
}
inline void BeatmapSaveDataVersion3::BeatmapSaveData::setStaticF__spawnRotations(::ArrayW<float_t, ::Array<float_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<float_t, ::Array<float_t>*>, "_spawnRotations", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get>(
      std::forward<::ArrayW<float_t, ::Array<float_t>*>>(value));
}
inline ::ArrayW<float_t, ::Array<float_t>*> BeatmapSaveDataVersion3::BeatmapSaveData::getStaticF__spawnRotations() {
  return ::cordl_internals::getStaticField<::ArrayW<float_t, ::Array<float_t>*>, "_spawnRotations",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get>();
}
inline ::BeatmapSaveDataVersion3::BeatmapSaveData*
BeatmapSaveDataVersion3::BeatmapSaveData::New_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>* bpmEvents,
                                                   ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>* rotationEvents,
                                                   ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>* colorNotes,
                                                   ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>* bombNotes,
                                                   ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>* obstacles,
                                                   ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>* sliders,
                                                   ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>* burstSliders,
                                                   ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>* waypoints,
                                                   ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>* basicBeatmapEvents,
                                                   ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>* colorBoostBeatmapEvents,
                                                   ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>* lightColorEventBoxGroups,
                                                   ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>* lightRotationEventBoxGroups,
                                                   ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>* lightTranslationEventBoxGroups,
                                                   ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>* vfxEventBoxGroups,
                                                   ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection* fxEventsCollection,
                                                   ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords* basicEventTypesWithKeywords, bool useNormalEventsAsCompatibleEvents) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::BeatmapSaveData*>(
      bpmEvents, rotationEvents, colorNotes, bombNotes, obstacles, sliders, burstSliders, waypoints, basicBeatmapEvents, colorBoostBeatmapEvents, lightColorEventBoxGroups, lightRotationEventBoxGroups,
      lightTranslationEventBoxGroups, vfxEventBoxGroups, fxEventsCollection, basicEventTypesWithKeywords, useNormalEventsAsCompatibleEvents));
}
inline void
BeatmapSaveDataVersion3::BeatmapSaveData::_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>* bpmEvents,
                                                ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>* rotationEvents,
                                                ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>* colorNotes,
                                                ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>* bombNotes,
                                                ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>* obstacles,
                                                ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>* sliders,
                                                ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>* burstSliders,
                                                ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>* waypoints,
                                                ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>* basicBeatmapEvents,
                                                ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>* colorBoostBeatmapEvents,
                                                ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>* lightColorEventBoxGroups,
                                                ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>* lightRotationEventBoxGroups,
                                                ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>* lightTranslationEventBoxGroups,
                                                ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>* vfxEventBoxGroups,
                                                ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection* fxEventsCollection,
                                                ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords* basicEventTypesWithKeywords, bool useNormalEventsAsCompatibleEvents) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 17>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmEvents, rotationEvents, colorNotes, bombNotes, obstacles, sliders, burstSliders, waypoints, basicBeatmapEvents,
                                                          colorBoostBeatmapEvents, lightColorEventBoxGroups, lightRotationEventBoxGroups, lightTranslationEventBoxGroups, vfxEventBoxGroups,
                                                          fxEventsCollection, basicEventTypesWithKeywords, useNormalEventsAsCompatibleEvents);
}
inline ::StringW BeatmapSaveDataVersion3::BeatmapSaveData::SerializeToJSONString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                                                                             "SerializeToJSONString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::BeatmapSaveData* BeatmapSaveDataVersion3::BeatmapSaveData::DeserializeFromJSONString(::StringW stringData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(), "DeserializeFromJSONString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::BeatmapSaveData*, false>(nullptr, ___internal_method, stringData);
}
inline ::BeatmapSaveDataVersion3::BeatmapSaveData* BeatmapSaveDataVersion3::BeatmapSaveData::ConvertBeatmapSaveData(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData* beatmapSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(), "ConvertBeatmapSaveData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::BeatmapSaveData*, false>(nullptr, ___internal_method, beatmapSaveData);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType
BeatmapSaveDataVersion3::BeatmapSaveData::GetNoteColorType(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType noteType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(), "GetNoteColorType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType, false>(nullptr, ___internal_method, noteType);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType
BeatmapSaveDataVersion3::BeatmapSaveData::GetNoteColorType(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType colorType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(), "GetNoteColorType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType, false>(nullptr, ___internal_method, colorType);
}
inline int32_t BeatmapSaveDataVersion3::BeatmapSaveData::GetHeightForObstacleType(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType obstacleType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(), "GetHeightForObstacleType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, obstacleType);
}
inline int32_t BeatmapSaveDataVersion3::BeatmapSaveData::GetLayerForObstacleType(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType obstacleType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(), "GetLayerForObstacleType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, obstacleType);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType
BeatmapSaveDataVersion3::BeatmapSaveData::GetSliderType(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderType sliderType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(), "GetSliderType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType, false>(nullptr, ___internal_method, sliderType);
}
inline float_t BeatmapSaveDataVersion3::BeatmapSaveData::SpawnRotationForEventValue(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(), "SpawnRotationForEventValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, index);
}
inline bool
BeatmapSaveDataVersion3::BeatmapSaveData::BeatmapSaveDataAreSorted(::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>* beatmapSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(), "BeatmapSaveDataAreSorted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, beatmapSaveData);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::BeatmapSaveData::BeatmapSaveData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
