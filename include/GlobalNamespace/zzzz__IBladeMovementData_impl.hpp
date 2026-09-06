#pragma once
// IWYU pragma private; include "GlobalNamespace/IBladeMovementData.hpp"
#include "GlobalNamespace/zzzz__IBladeMovementData_def.hpp"
#include "GlobalNamespace/zzzz__BladeMovementDataElement_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBladeMovementData.get_bladeSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::IBladeMovementData::*)()>(&::GlobalNamespace::IBladeMovementData::get_bladeSpeed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBladeMovementData*>(), { ::i2c::class_of<::GlobalNamespace::IBladeMovementData*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBladeMovementData.get_lastAddedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BladeMovementDataElement (::GlobalNamespace::IBladeMovementData::*)()>(
    &::GlobalNamespace::IBladeMovementData::get_lastAddedData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBladeMovementData*>(), { ::i2c::class_of<::GlobalNamespace::IBladeMovementData*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBladeMovementData.get_prevAddedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BladeMovementDataElement (::GlobalNamespace::IBladeMovementData::*)()>(
    &::GlobalNamespace::IBladeMovementData::get_prevAddedData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBladeMovementData*>(), { ::i2c::class_of<::GlobalNamespace::IBladeMovementData*>(), 2 }));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::IBladeMovementData::get_bladeSpeed() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBladeMovementData*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::BladeMovementDataElement GlobalNamespace::IBladeMovementData::get_lastAddedData() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBladeMovementData*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BladeMovementDataElement>(this, ___internal_method);
}
inline ::GlobalNamespace::BladeMovementDataElement GlobalNamespace::IBladeMovementData::get_prevAddedData() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBladeMovementData*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BladeMovementDataElement>(this, ___internal_method);
}
