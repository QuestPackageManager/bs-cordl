#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PackedMatrix.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__PackedMatrix_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PackedMatrix.FromMatrix4x4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::PackedMatrix (*)(::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Rendering::PackedMatrix::FromMatrix4x4)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6822454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PackedMatrix>(), { "FromMatrix4x4", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PackedMatrix.FromFloat4x4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::PackedMatrix (*)(::by_ref<::Unity::Mathematics::float4x4>)>(&::UnityEngine::Rendering::PackedMatrix::FromFloat4x4)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6822494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PackedMatrix>(), { "FromFloat4x4", {}, { ::i2c::type_of<::by_ref<::Unity::Mathematics::float4x4>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::PackedMatrix UnityEngine::Rendering::PackedMatrix::FromMatrix4x4(::by_ref<::UnityEngine::Matrix4x4> m) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PackedMatrix>(), { "FromMatrix4x4", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PackedMatrix>(nullptr, ___internal_method, m);
}
inline ::UnityEngine::Rendering::PackedMatrix UnityEngine::Rendering::PackedMatrix::FromFloat4x4(::by_ref<::Unity::Mathematics::float4x4> m) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PackedMatrix>(), { "FromFloat4x4", {}, { ::i2c::type_of<::by_ref<::Unity::Mathematics::float4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PackedMatrix>(nullptr, ___internal_method, m);
}
// Ctor Parameters [CppParam { name: "packed0", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "packed1", ty: "::Unity::Mathematics::float4", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "packed2", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PackedMatrix::PackedMatrix(::Unity::Mathematics::float4 packed0, ::Unity::Mathematics::float4 packed1, ::Unity::Mathematics::float4 packed2) noexcept {
  this->packed0 = packed0;
  this->packed1 = packed1;
  this->packed2 = packed2;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PackedMatrix::PackedMatrix() {}
