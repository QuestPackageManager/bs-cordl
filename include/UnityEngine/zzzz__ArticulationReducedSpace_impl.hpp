#pragma once
// IWYU pragma private; include "UnityEngine/ArticulationReducedSpace.hpp"
#include "UnityEngine/zzzz__ArticulationReducedSpace_def.hpp"
#include "UnityEngine/zzzz__ArticulationReducedSpace_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ArticulationReducedSpace__x_e__FixedBuffer::ArticulationReducedSpace__x_e__FixedBuffer(float_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::ArticulationReducedSpace__x_e__FixedBuffer::ArticulationReducedSpace__x_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::ArticulationReducedSpace.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ArticulationReducedSpace::*)(int32_t)>(&::UnityEngine::ArticulationReducedSpace::get_Item)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6b6eefc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationReducedSpace>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationReducedSpace.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationReducedSpace::*)(int32_t, float_t)>(&::UnityEngine::ArticulationReducedSpace::set_Item)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6b6ef4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationReducedSpace>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationReducedSpace._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationReducedSpace::*)(float_t)>(&::UnityEngine::ArticulationReducedSpace::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b6ef9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationReducedSpace>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationReducedSpace._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationReducedSpace::*)(float_t, float_t)>(&::UnityEngine::ArticulationReducedSpace::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b6efac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationReducedSpace>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ArticulationReducedSpace._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ArticulationReducedSpace::*)(float_t, float_t, float_t)>(&::UnityEngine::ArticulationReducedSpace::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b6efbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationReducedSpace>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::ArticulationReducedSpace::get_Item(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationReducedSpace>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, i);
}
inline void UnityEngine::ArticulationReducedSpace::set_Item(int32_t i, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationReducedSpace>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i, value);
}
inline void UnityEngine::ArticulationReducedSpace::_ctor(float_t a) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationReducedSpace>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a);
}
inline void UnityEngine::ArticulationReducedSpace::_ctor(float_t a, float_t b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationReducedSpace>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b);
}
inline void UnityEngine::ArticulationReducedSpace::_ctor(float_t a, float_t b, float_t c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ArticulationReducedSpace>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, c);
}
// Ctor Parameters [CppParam { name: "x", ty: "::UnityEngine::ArticulationReducedSpace__x_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "dofCount", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ArticulationReducedSpace::ArticulationReducedSpace(::UnityEngine::ArticulationReducedSpace__x_e__FixedBuffer x, int32_t dofCount) noexcept {
  this->x = x;
  this->dofCount = dofCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::ArticulationReducedSpace::ArticulationReducedSpace() {}
