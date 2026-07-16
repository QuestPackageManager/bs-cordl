#pragma once
// IWYU pragma private; include "GlobalNamespace/ToneMappingExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GlobalKeyword_impl.hpp"
#include "GlobalNamespace/zzzz__ToneMappingExtensions_def.hpp"
#include "GlobalNamespace/zzzz__ToneMapping_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ToneMappingExtensions.SetShaderKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ToneMapping)>(&::GlobalNamespace::ToneMappingExtensions::SetShaderKeyword)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5869fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ToneMappingExtensions*>(), { "SetShaderKeyword", {}, { ::i2c::type_of<::GlobalNamespace::ToneMapping>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ToneMappingExtensions.SetShaderKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ToneMapping, ::UnityEngine::Rendering::CommandBuffer*)>(
    &::GlobalNamespace::ToneMappingExtensions::SetShaderKeyword)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5867cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ToneMappingExtensions*>(),
                                                { "SetShaderKeyword", {}, { ::i2c::type_of<::GlobalNamespace::ToneMapping>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ToneMappingExtensions::setStaticF__acesToneMappingKeyword(::UnityEngine::Rendering::GlobalKeyword value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::GlobalKeyword, "_acesToneMappingKeyword", ::GlobalNamespace::ToneMappingExtensions*>(
      std::forward<::UnityEngine::Rendering::GlobalKeyword>(value));
}
inline ::UnityEngine::Rendering::GlobalKeyword GlobalNamespace::ToneMappingExtensions::getStaticF__acesToneMappingKeyword() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::GlobalKeyword, "_acesToneMappingKeyword", ::GlobalNamespace::ToneMappingExtensions*>();
}
inline void GlobalNamespace::ToneMappingExtensions::SetShaderKeyword(::GlobalNamespace::ToneMapping toneMapping) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ToneMappingExtensions*>(), { "SetShaderKeyword", {}, { ::i2c::type_of<::GlobalNamespace::ToneMapping>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, toneMapping);
}
inline void GlobalNamespace::ToneMappingExtensions::SetShaderKeyword(::GlobalNamespace::ToneMapping toneMapping, ::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ToneMappingExtensions*>(),
                                              { "SetShaderKeyword", {}, { ::i2c::type_of<::GlobalNamespace::ToneMapping>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, toneMapping, cmd);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ToneMappingExtensions::ToneMappingExtensions() {}
