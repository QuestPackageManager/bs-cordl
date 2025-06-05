#pragma once
// IWYU pragma private; include "GlobalNamespace/PerformanceConfigurationStats.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__BatteryStatus_impl.hpp"
#include "UnityEngine/zzzz__NetworkReachability_impl.hpp"
#include "GlobalNamespace/zzzz__PerformanceConfigurationStats_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceConfigurationStats_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationStats_BoolStats.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PerformanceConfigurationStats_BoolStats::*)(bool)>(
    &::GlobalNamespace::PerformanceConfigurationStats_BoolStats::Update)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3b20bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationStats_BoolStats>::get(), "Update",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationStats_BoolStats.CreateLogValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PerformanceConfigurationStats_BoolStats::*)()>(
    &::GlobalNamespace::PerformanceConfigurationStats_BoolStats::CreateLogValue)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3b20c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationStats_BoolStats>::get(), "CreateLogValue",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PerformanceConfigurationStats_BoolStats::Update(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationStats_BoolStats>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::PerformanceConfigurationStats_BoolStats::CreateLogValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationStats_BoolStats>::get(),
                                                                             "CreateLogValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "off", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "on", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PerformanceConfigurationStats_BoolStats::PerformanceConfigurationStats_BoolStats(int32_t off, int32_t on) noexcept {
  this->off = off;
  this->on = on;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceConfigurationStats_BoolStats::PerformanceConfigurationStats_BoolStats() {}
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationStats_IntStats.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PerformanceConfigurationStats_IntStats::*)(int32_t)>(
    &::GlobalNamespace::PerformanceConfigurationStats_IntStats::Update)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3b20aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationStats_IntStats>::get(), "Update",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationStats_IntStats.CreateLogValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PerformanceConfigurationStats_IntStats::*)()>(
    &::GlobalNamespace::PerformanceConfigurationStats_IntStats::CreateLogValue)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3b20d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationStats_IntStats>::get(),
                                                                               "CreateLogValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PerformanceConfigurationStats_IntStats::setStaticF_kInitial(::GlobalNamespace::PerformanceConfigurationStats_IntStats value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::PerformanceConfigurationStats_IntStats, "kInitial",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationStats_IntStats>::get>(
      std::forward<::GlobalNamespace::PerformanceConfigurationStats_IntStats>(value));
}
inline ::GlobalNamespace::PerformanceConfigurationStats_IntStats GlobalNamespace::PerformanceConfigurationStats_IntStats::getStaticF_kInitial() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::PerformanceConfigurationStats_IntStats, "kInitial",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationStats_IntStats>::get>();
}
inline void GlobalNamespace::PerformanceConfigurationStats_IntStats::Update(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationStats_IntStats>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::PerformanceConfigurationStats_IntStats::CreateLogValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationStats_IntStats>::get(),
                                                                             "CreateLogValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "min", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "max", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PerformanceConfigurationStats_IntStats::PerformanceConfigurationStats_IntStats(int32_t min, int32_t max) noexcept {
  this->min = min;
  this->max = max;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceConfigurationStats_IntStats::PerformanceConfigurationStats_IntStats() {}
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationStats_FloatStats.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PerformanceConfigurationStats_FloatStats::*)(float_t)>(
    &::GlobalNamespace::PerformanceConfigurationStats_FloatStats::Update)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3b20b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationStats_FloatStats>::get(), "Update",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationStats_FloatStats.CreateLogValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PerformanceConfigurationStats_FloatStats::*)()>(
    &::GlobalNamespace::PerformanceConfigurationStats_FloatStats::CreateLogValue)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3b20e38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationStats_FloatStats>::get(), "CreateLogValue",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PerformanceConfigurationStats_FloatStats::setStaticF_kInitial(::GlobalNamespace::PerformanceConfigurationStats_FloatStats value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::PerformanceConfigurationStats_FloatStats, "kInitial",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationStats_FloatStats>::get>(
      std::forward<::GlobalNamespace::PerformanceConfigurationStats_FloatStats>(value));
}
inline ::GlobalNamespace::PerformanceConfigurationStats_FloatStats GlobalNamespace::PerformanceConfigurationStats_FloatStats::getStaticF_kInitial() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::PerformanceConfigurationStats_FloatStats, "kInitial",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationStats_FloatStats>::get>();
}
inline void GlobalNamespace::PerformanceConfigurationStats_FloatStats::Update(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationStats_FloatStats>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::PerformanceConfigurationStats_FloatStats::CreateLogValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationStats_FloatStats>::get(),
                                                                             "CreateLogValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "min", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "max", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PerformanceConfigurationStats_FloatStats::PerformanceConfigurationStats_FloatStats(float_t min, float_t max) noexcept {
  this->min = min;
  this->max = max;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceConfigurationStats_FloatStats::PerformanceConfigurationStats_FloatStats() {}
template <typename T> inline void GlobalNamespace::PerformanceConfigurationStats_EnumStats_1<T>::Update(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationStats_EnumStats_1<T>>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::StringW GlobalNamespace::PerformanceConfigurationStats_EnumStats_1<T>::CreateLogValue() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationStats_EnumStats_1<T>>::get(), "CreateLogValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "flags", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::GlobalNamespace::PerformanceConfigurationStats_EnumStats_1<T>::PerformanceConfigurationStats_EnumStats_1(int32_t flags) noexcept {
  this->flags = flags;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::PerformanceConfigurationStats_EnumStats_1<T>::PerformanceConfigurationStats_EnumStats_1() {}
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationStats.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PerformanceConfigurationStats::*)()>(
    &::GlobalNamespace::PerformanceConfigurationStats::Update)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x3b208e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationStats*>::get(),
                                                                               "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationStats._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PerformanceConfigurationStats::*)()>(
    &::GlobalNamespace::PerformanceConfigurationStats::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3b20be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationStats*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PerformanceConfigurationStats_IntStats& GlobalNamespace::PerformanceConfigurationStats::__cordl_internal_get_processorFrequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processorFrequency;
}
constexpr ::GlobalNamespace::PerformanceConfigurationStats_IntStats const& GlobalNamespace::PerformanceConfigurationStats::__cordl_internal_get_processorFrequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processorFrequency;
}
constexpr void GlobalNamespace::PerformanceConfigurationStats::__cordl_internal_set_processorFrequency(::GlobalNamespace::PerformanceConfigurationStats_IntStats value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___processorFrequency = value;
}
constexpr ::GlobalNamespace::PerformanceConfigurationStats_EnumStats_1<::UnityEngine::BatteryStatus>& GlobalNamespace::PerformanceConfigurationStats::__cordl_internal_get_batteryStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___batteryStatus;
}
constexpr ::GlobalNamespace::PerformanceConfigurationStats_EnumStats_1<::UnityEngine::BatteryStatus> const& GlobalNamespace::PerformanceConfigurationStats::__cordl_internal_get_batteryStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___batteryStatus;
}
constexpr void GlobalNamespace::PerformanceConfigurationStats::__cordl_internal_set_batteryStatus(::GlobalNamespace::PerformanceConfigurationStats_EnumStats_1<::UnityEngine::BatteryStatus> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___batteryStatus = value;
}
constexpr ::GlobalNamespace::PerformanceConfigurationStats_FloatStats& GlobalNamespace::PerformanceConfigurationStats::__cordl_internal_get_batteryLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___batteryLevel;
}
constexpr ::GlobalNamespace::PerformanceConfigurationStats_FloatStats const& GlobalNamespace::PerformanceConfigurationStats::__cordl_internal_get_batteryLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___batteryLevel;
}
constexpr void GlobalNamespace::PerformanceConfigurationStats::__cordl_internal_set_batteryLevel(::GlobalNamespace::PerformanceConfigurationStats_FloatStats value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___batteryLevel = value;
}
constexpr ::GlobalNamespace::PerformanceConfigurationStats_EnumStats_1<::UnityEngine::NetworkReachability>&
GlobalNamespace::PerformanceConfigurationStats::__cordl_internal_get_internetReachability() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internetReachability;
}
constexpr ::GlobalNamespace::PerformanceConfigurationStats_EnumStats_1<::UnityEngine::NetworkReachability> const&
GlobalNamespace::PerformanceConfigurationStats::__cordl_internal_get_internetReachability() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internetReachability;
}
constexpr void
GlobalNamespace::PerformanceConfigurationStats::__cordl_internal_set_internetReachability(::GlobalNamespace::PerformanceConfigurationStats_EnumStats_1<::UnityEngine::NetworkReachability> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___internetReachability = value;
}
constexpr ::GlobalNamespace::PerformanceConfigurationStats_FloatStats& GlobalNamespace::PerformanceConfigurationStats::__cordl_internal_get_gpuUtilLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuUtilLevel;
}
constexpr ::GlobalNamespace::PerformanceConfigurationStats_FloatStats const& GlobalNamespace::PerformanceConfigurationStats::__cordl_internal_get_gpuUtilLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuUtilLevel;
}
constexpr void GlobalNamespace::PerformanceConfigurationStats::__cordl_internal_set_gpuUtilLevel(::GlobalNamespace::PerformanceConfigurationStats_FloatStats value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gpuUtilLevel = value;
}
constexpr ::GlobalNamespace::PerformanceConfigurationStats_BoolStats& GlobalNamespace::PerformanceConfigurationStats::__cordl_internal_get_powerSaving() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___powerSaving;
}
constexpr ::GlobalNamespace::PerformanceConfigurationStats_BoolStats const& GlobalNamespace::PerformanceConfigurationStats::__cordl_internal_get_powerSaving() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___powerSaving;
}
constexpr void GlobalNamespace::PerformanceConfigurationStats::__cordl_internal_set_powerSaving(::GlobalNamespace::PerformanceConfigurationStats_BoolStats value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___powerSaving = value;
}
constexpr ::GlobalNamespace::PerformanceConfigurationStats_BoolStats& GlobalNamespace::PerformanceConfigurationStats::__cordl_internal_get_boundaryVisible() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundaryVisible;
}
constexpr ::GlobalNamespace::PerformanceConfigurationStats_BoolStats const& GlobalNamespace::PerformanceConfigurationStats::__cordl_internal_get_boundaryVisible() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundaryVisible;
}
constexpr void GlobalNamespace::PerformanceConfigurationStats::__cordl_internal_set_boundaryVisible(::GlobalNamespace::PerformanceConfigurationStats_BoolStats value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___boundaryVisible = value;
}
inline void GlobalNamespace::PerformanceConfigurationStats::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationStats*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline int32_t GlobalNamespace::PerformanceConfigurationStats::ConvertEnumToFlag(T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationStats*>::get(), "ConvertEnumToFlag",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
template <typename T> inline ::StringW GlobalNamespace::PerformanceConfigurationStats::ConvertFlagsToString(int32_t flags) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationStats*>::get(), "ConvertFlagsToString",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, flags);
}
inline void GlobalNamespace::PerformanceConfigurationStats::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationStats*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PerformanceConfigurationStats* GlobalNamespace::PerformanceConfigurationStats::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PerformanceConfigurationStats*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceConfigurationStats::PerformanceConfigurationStats() {}
