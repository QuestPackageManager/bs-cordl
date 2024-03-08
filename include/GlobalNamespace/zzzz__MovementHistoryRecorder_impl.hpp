#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MovementHistoryRecorder_def.hpp"
#include "GlobalNamespace/zzzz__AveragingValueRecorder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MovementHistoryRecorder.get_averagingValueRecorer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AveragingValueRecorder* (::GlobalNamespace::MovementHistoryRecorder::*)()>(
    &::GlobalNamespace::MovementHistoryRecorder::get_averagingValueRecorer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f8920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementHistoryRecorder*>::get(),
                                                                               "get_averagingValueRecorer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementHistoryRecorder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MovementHistoryRecorder::*)(float_t, float_t, float_t, float_t)>(
    &::GlobalNamespace::MovementHistoryRecorder::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x24f8928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementHistoryRecorder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementHistoryRecorder.AddMovement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MovementHistoryRecorder::*)(float_t)>(
    &::GlobalNamespace::MovementHistoryRecorder::AddMovement)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x24f89c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementHistoryRecorder*>::get(), "AddMovement", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementHistoryRecorder.ManualUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MovementHistoryRecorder::*)(float_t)>(
    &::GlobalNamespace::MovementHistoryRecorder::ManualUpdate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x24f89e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementHistoryRecorder*>::get(), "ManualUpdate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AveragingValueRecorder*& GlobalNamespace::MovementHistoryRecorder::__cordl_internal_get__averagingValueRecorer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____averagingValueRecorer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AveragingValueRecorder*> const& GlobalNamespace::MovementHistoryRecorder::__cordl_internal_get__averagingValueRecorer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____averagingValueRecorer;
}
constexpr void GlobalNamespace::MovementHistoryRecorder::__cordl_internal_set__averagingValueRecorer(::GlobalNamespace::AveragingValueRecorder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____averagingValueRecorer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MovementHistoryRecorder::__cordl_internal_get__increaseSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____increaseSpeed;
}
constexpr float_t const& GlobalNamespace::MovementHistoryRecorder::__cordl_internal_get__increaseSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____increaseSpeed;
}
constexpr void GlobalNamespace::MovementHistoryRecorder::__cordl_internal_set__increaseSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____increaseSpeed = value;
}
constexpr float_t& GlobalNamespace::MovementHistoryRecorder::__cordl_internal_get__decreaseSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decreaseSpeed;
}
constexpr float_t const& GlobalNamespace::MovementHistoryRecorder::__cordl_internal_get__decreaseSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decreaseSpeed;
}
constexpr void GlobalNamespace::MovementHistoryRecorder::__cordl_internal_set__decreaseSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____decreaseSpeed = value;
}
constexpr float_t& GlobalNamespace::MovementHistoryRecorder::__cordl_internal_get__accum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accum;
}
constexpr float_t const& GlobalNamespace::MovementHistoryRecorder::__cordl_internal_get__accum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accum;
}
constexpr void GlobalNamespace::MovementHistoryRecorder::__cordl_internal_set__accum(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____accum = value;
}
inline ::GlobalNamespace::AveragingValueRecorder* GlobalNamespace::MovementHistoryRecorder::get_averagingValueRecorer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementHistoryRecorder*>::get(),
                                                                             "get_averagingValueRecorer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AveragingValueRecorder*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MovementHistoryRecorder* GlobalNamespace::MovementHistoryRecorder::New_ctor(float_t averageWindowDuration, float_t historyValuesPerSecond, float_t increaseSpeed,
                                                                                                      float_t decreaseSpeed) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MovementHistoryRecorder*>(averageWindowDuration, historyValuesPerSecond, increaseSpeed, decreaseSpeed));
}
inline void GlobalNamespace::MovementHistoryRecorder::_ctor(float_t averageWindowDuration, float_t historyValuesPerSecond, float_t increaseSpeed, float_t decreaseSpeed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementHistoryRecorder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, averageWindowDuration, historyValuesPerSecond, increaseSpeed, decreaseSpeed);
}
inline void GlobalNamespace::MovementHistoryRecorder::AddMovement(float_t distance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementHistoryRecorder*>::get(), "AddMovement",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, distance);
}
inline void GlobalNamespace::MovementHistoryRecorder::ManualUpdate(float_t deltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementHistoryRecorder*>::get(), "ManualUpdate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deltaTime);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MovementHistoryRecorder::MovementHistoryRecorder() {}
