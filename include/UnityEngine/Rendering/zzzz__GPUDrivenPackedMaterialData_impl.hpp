#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenPackedMaterialData.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedMaterialData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GPUDrivenPackedMaterialData.get_isTransparent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::GPUDrivenPackedMaterialData::*)()>(&::UnityEngine::Rendering::GPUDrivenPackedMaterialData::get_isTransparent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b29798;

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
  constexpr static std::size_t addrs = 0x6b297a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>(), { "get_isMotionVectorsPassEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUDrivenPackedMaterialData.get_isIndirectSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::GPUDrivenPackedMaterialData::*)()>(
    &::UnityEngine::Rendering::GPUDrivenPackedMaterialData::get_isIndirectSupported)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b297b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>(), { "get_isIndirectSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUDrivenPackedMaterialData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUDrivenPackedMaterialData::*)()>(&::UnityEngine::Rendering::GPUDrivenPackedMaterialData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b297bc;

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
  constexpr static std::size_t addrs = 0x6b297c4;

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
inline bool UnityEngine::Rendering::GPUDrivenPackedMaterialData::get_isIndirectSupported() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>(), { "get_isIndirectSupported", {}, {} })));
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
// Ctor Parameters [CppParam { name: "data", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUDrivenPackedMaterialData::GPUDrivenPackedMaterialData(uint32_t data) noexcept {
  this->data = data;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUDrivenPackedMaterialData::GPUDrivenPackedMaterialData() {}
