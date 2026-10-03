#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/Transform.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__Transform_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::Transform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::Transform::*)(
    ::Unity::Mathematics::float4, ::Unity::Mathematics::float4, ::Unity::Mathematics::float4)>(&::UnityEngine::Rendering::RadeonRays::Transform::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6dfcef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::Transform>(),
                            { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::Transform.Identity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RadeonRays::Transform (*)()>(&::UnityEngine::Rendering::RadeonRays::Transform::Identity)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6dfcf14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::Transform>(), { "Identity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::Transform.Translation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RadeonRays::Transform (*)(::Unity::Mathematics::float3)>(
    &::UnityEngine::Rendering::RadeonRays::Transform::Translation)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6dfcf3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::Transform>(), { "Translation", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::Transform.Scale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RadeonRays::Transform (*)(::Unity::Mathematics::float3)>(&::UnityEngine::Rendering::RadeonRays::Transform::Scale)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6dfcf78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::Transform>(), { "Scale", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::Transform.TRS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RadeonRays::Transform (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(
    &::UnityEngine::Rendering::RadeonRays::Transform::TRS)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6dfcf98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::Transform>(),
                            { "TRS", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::Transform.Inverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RadeonRays::Transform (::UnityEngine::Rendering::RadeonRays::Transform::*)()>(
    &::UnityEngine::Rendering::RadeonRays::Transform::Inverse)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6dfd0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::Transform>(), { "Inverse", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RadeonRays::Transform::_ctor(::Unity::Mathematics::float4 row0, ::Unity::Mathematics::float4 row1, ::Unity::Mathematics::float4 row2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::Transform>(),
                          { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, row0, row1, row2);
}
inline ::UnityEngine::Rendering::RadeonRays::Transform UnityEngine::Rendering::RadeonRays::Transform::Identity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::Transform>(), { "Identity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RadeonRays::Transform>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::RadeonRays::Transform UnityEngine::Rendering::RadeonRays::Transform::Translation(::Unity::Mathematics::float3 translation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::Transform>(), { "Translation", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RadeonRays::Transform>(nullptr, ___internal_method, translation);
}
inline ::UnityEngine::Rendering::RadeonRays::Transform UnityEngine::Rendering::RadeonRays::Transform::Scale(::Unity::Mathematics::float3 scale) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::Transform>(), { "Scale", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RadeonRays::Transform>(nullptr, ___internal_method, scale);
}
inline ::UnityEngine::Rendering::RadeonRays::Transform UnityEngine::Rendering::RadeonRays::Transform::TRS(::Unity::Mathematics::float3 translation, ::Unity::Mathematics::float3 rotation,
                                                                                                          ::Unity::Mathematics::float3 scale) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::Transform>(),
                          { "TRS", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RadeonRays::Transform>(nullptr, ___internal_method, translation, rotation, scale);
}
inline ::UnityEngine::Rendering::RadeonRays::Transform UnityEngine::Rendering::RadeonRays::Transform::Inverse() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::Transform>(), { "Inverse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RadeonRays::Transform>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "row0", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "row1", ty: "::Unity::Mathematics::float4",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "row2", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RadeonRays::Transform::Transform(::Unity::Mathematics::float4 row0, ::Unity::Mathematics::float4 row1, ::Unity::Mathematics::float4 row2) noexcept {
  this->row0 = row0;
  this->row1 = row1;
  this->row2 = row2;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::Transform::Transform() {}
