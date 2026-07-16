#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/MetalPatchShaderComputeBufferAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEditor/Analytics/zzzz__MetalPatchShaderComputeBufferAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::MetalPatchShaderComputeBufferAnalytic._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEditor::Analytics::MetalPatchShaderComputeBufferAnalytic::*)()>(
    &::UnityEditor::Analytics::MetalPatchShaderComputeBufferAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6e21ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::MetalPatchShaderComputeBufferAnalytic*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::MetalPatchShaderComputeBufferAnalytic.CreateMetalPatchShaderComputeBufferAnalytic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEditor::Analytics::MetalPatchShaderComputeBufferAnalytic* (*)()>(
    &::UnityEditor::Analytics::MetalPatchShaderComputeBufferAnalytic::CreateMetalPatchShaderComputeBufferAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e21b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::MetalPatchShaderComputeBufferAnalytic*>(), { "CreateMetalPatchShaderComputeBufferAnalytic", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEditor::Analytics::MetalPatchShaderComputeBufferAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::MetalPatchShaderComputeBufferAnalytic*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::MetalPatchShaderComputeBufferAnalytic* UnityEditor::Analytics::MetalPatchShaderComputeBufferAnalytic::CreateMetalPatchShaderComputeBufferAnalytic() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::MetalPatchShaderComputeBufferAnalytic*>(), { "CreateMetalPatchShaderComputeBufferAnalytic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::MetalPatchShaderComputeBufferAnalytic*>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::MetalPatchShaderComputeBufferAnalytic* UnityEditor::Analytics::MetalPatchShaderComputeBufferAnalytic::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEditor::Analytics::MetalPatchShaderComputeBufferAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::MetalPatchShaderComputeBufferAnalytic::MetalPatchShaderComputeBufferAnalytic() {}
