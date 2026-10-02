#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenPackedMaterialData.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedMaterialData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GPUDrivenPackedMaterialData.get_isTransparent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::GPUDrivenPackedMaterialData::*)()>(&::UnityEngine::Rendering::GPUDrivenPackedMaterialData::get_isTransparent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f8a31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>(), { "get_isTransparent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUDrivenPackedMaterialData.get_isMotionVectorsPassEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::GPUDrivenPackedMaterialData::*)()>(
    &::UnityEngine::Rendering::GPUDrivenPackedMaterialData::get_isMotionVectorsPassEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f8a328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>(), { "get_isMotionVectorsPassEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUDrivenPackedMaterialData.get_hasTessellation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::GPUDrivenPackedMaterialData::*)()>(
    &::UnityEngine::Rendering::GPUDrivenPackedMaterialData::get_hasTessellation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f8a334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>(), { "get_hasTessellation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUDrivenPackedMaterialData.get_supportsCrossFade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::GPUDrivenPackedMaterialData::*)()>(
    &::UnityEngine::Rendering::GPUDrivenPackedMaterialData::get_supportsCrossFade)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f8a340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>(), { "get_supportsCrossFade", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUDrivenPackedMaterialData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUDrivenPackedMaterialData::*)()>(&::UnityEngine::Rendering::GPUDrivenPackedMaterialData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f8a34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUDrivenPackedMaterialData.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::GPUDrivenPackedMaterialData::*)(::UnityEngine::Rendering::GPUDrivenPackedMaterialData)>(
    &::UnityEngine::Rendering::GPUDrivenPackedMaterialData::Equals)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6f8a354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::GPUDrivenPackedMaterialData::get_isTransparent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>(), { "get_isTransparent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::GPUDrivenPackedMaterialData::get_isMotionVectorsPassEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>(), { "get_isMotionVectorsPassEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::GPUDrivenPackedMaterialData::get_hasTessellation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>(), { "get_hasTessellation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::GPUDrivenPackedMaterialData::get_supportsCrossFade() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>(), { "get_supportsCrossFade", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUDrivenPackedMaterialData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::GPUDrivenPackedMaterialData::Equals(::UnityEngine::Rendering::GPUDrivenPackedMaterialData other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "data", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::GPUDrivenPackedMaterialData::GPUDrivenPackedMaterialData(uint32_t data) noexcept {
  this->data = data;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUDrivenPackedMaterialData::GPUDrivenPackedMaterialData() {}
