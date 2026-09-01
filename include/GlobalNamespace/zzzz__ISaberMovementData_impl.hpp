#pragma once
// IWYU pragma private; include "GlobalNamespace\ISaberMovementData.hpp"
#include "GlobalNamespace/zzzz__ISaberMovementData_def.hpp"
#include "GlobalNamespace/zzzz__BladeMovementDataElement_def.hpp"
#include "GlobalNamespace/zzzz__ISaberMovementDataProcessor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ISaberMovementData.get_lastAddedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BladeMovementDataElement (::GlobalNamespace::ISaberMovementData::*)()>(
    &::GlobalNamespace::ISaberMovementData::get_lastAddedData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ISaberMovementData*>(), { ::i2c::class_of<::GlobalNamespace::ISaberMovementData*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ISaberMovementData.AddDataProcessor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ISaberMovementData::*)(::GlobalNamespace::ISaberMovementDataProcessor*)>(
    &::GlobalNamespace::ISaberMovementData::AddDataProcessor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ISaberMovementData*>(), { ::i2c::class_of<::GlobalNamespace::ISaberMovementData*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ISaberMovementData.RemoveDataProcessor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ISaberMovementData::*)(::GlobalNamespace::ISaberMovementDataProcessor*)>(
    &::GlobalNamespace::ISaberMovementData::RemoveDataProcessor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ISaberMovementData*>(), { ::i2c::class_of<::GlobalNamespace::ISaberMovementData*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ISaberMovementData.RequestLastDataProcessing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ISaberMovementData::*)(::GlobalNamespace::ISaberMovementDataProcessor*)>(
    &::GlobalNamespace::ISaberMovementData::RequestLastDataProcessing)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ISaberMovementData*>(), { ::i2c::class_of<::GlobalNamespace::ISaberMovementData*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ISaberMovementData.ComputeSwingRating
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ISaberMovementData::*)(float_t)>(&::GlobalNamespace::ISaberMovementData::ComputeSwingRating)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ISaberMovementData*>(), { ::i2c::class_of<::GlobalNamespace::ISaberMovementData*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ISaberMovementData.ComputeSwingRating
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ISaberMovementData::*)()>(&::GlobalNamespace::ISaberMovementData::ComputeSwingRating)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ISaberMovementData*>(), { ::i2c::class_of<::GlobalNamespace::ISaberMovementData*>(), 5 }));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::BladeMovementDataElement GlobalNamespace::ISaberMovementData::get_lastAddedData() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISaberMovementData*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BladeMovementDataElement>(this, ___internal_method);
}
inline void GlobalNamespace::ISaberMovementData::AddDataProcessor(::GlobalNamespace::ISaberMovementDataProcessor* dataProcessor) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISaberMovementData*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataProcessor);
}
inline void GlobalNamespace::ISaberMovementData::RemoveDataProcessor(::GlobalNamespace::ISaberMovementDataProcessor* dataProcessor) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISaberMovementData*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataProcessor);
}
inline void GlobalNamespace::ISaberMovementData::RequestLastDataProcessing(::GlobalNamespace::ISaberMovementDataProcessor* dataProcessor) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISaberMovementData*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataProcessor);
}
inline float_t GlobalNamespace::ISaberMovementData::ComputeSwingRating(float_t overrideSegmentAngle) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISaberMovementData*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, overrideSegmentAngle);
}
inline float_t GlobalNamespace::ISaberMovementData::ComputeSwingRating() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISaberMovementData*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
