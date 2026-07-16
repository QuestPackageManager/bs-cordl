#pragma once
// IWYU pragma private; include "GlobalNamespace/MainEffectCore.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MainEffectCore_def.hpp"
#include "UnityEngine/Rendering/zzzz__IBaseCommandBuffer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainEffectCore.UpdateKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::IBaseCommandBuffer*, bool)>(&::GlobalNamespace::MainEffectCore::UpdateKeyword)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5f4116c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectCore*>(),
                                                             { "UpdateKeyword", {}, { ::i2c::type_of<::UnityEngine::Rendering::IBaseCommandBuffer*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectCore.SetGlobalShaderValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::IBaseCommandBuffer*, float_t, float_t)>(&::GlobalNamespace::MainEffectCore::SetGlobalShaderValues)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5f407d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectCore*>(),
                                         { "SetGlobalShaderValues", {}, { ::i2c::type_of<::UnityEngine::Rendering::IBaseCommandBuffer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectCore._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectCore::*)()>(&::GlobalNamespace::MainEffectCore::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f41298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectCore*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MainEffectCore::setStaticF__baseColorBoostID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_baseColorBoostID", ::GlobalNamespace::MainEffectCore*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::MainEffectCore::getStaticF__baseColorBoostID() {
  return ::cordl_internals::getStaticField<int32_t, "_baseColorBoostID", ::GlobalNamespace::MainEffectCore*>();
}
inline void GlobalNamespace::MainEffectCore::setStaticF__baseColorBoostThresholdID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_baseColorBoostThresholdID", ::GlobalNamespace::MainEffectCore*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::MainEffectCore::getStaticF__baseColorBoostThresholdID() {
  return ::cordl_internals::getStaticField<int32_t, "_baseColorBoostThresholdID", ::GlobalNamespace::MainEffectCore*>();
}
inline void GlobalNamespace::MainEffectCore::UpdateKeyword(::UnityEngine::Rendering::IBaseCommandBuffer* cmd, bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectCore*>(),
                                                           { "UpdateKeyword", {}, { ::i2c::type_of<::UnityEngine::Rendering::IBaseCommandBuffer*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, enabled);
}
inline void GlobalNamespace::MainEffectCore::SetGlobalShaderValues(::UnityEngine::Rendering::IBaseCommandBuffer* cmd, float_t baseColorBoost, float_t baseColorBoostThreshold) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectCore*>(),
                                       { "SetGlobalShaderValues", {}, { ::i2c::type_of<::UnityEngine::Rendering::IBaseCommandBuffer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, baseColorBoost, baseColorBoostThreshold);
}
inline void GlobalNamespace::MainEffectCore::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectCore*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MainEffectCore* GlobalNamespace::MainEffectCore::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainEffectCore*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainEffectCore::MainEffectCore() {}
