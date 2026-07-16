#pragma once
// IWYU pragma private; include "UnityEngine/VFX/SetSpawnTime.hpp"
#include "UnityEngine/VFX/zzzz__VFXSpawnerCallbacks_impl.hpp"
#include "UnityEngine/VFX/zzzz__SetSpawnTime_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXExpressionValues_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXSpawnerState_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffect_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::SetSpawnTime.OnPlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SetSpawnTime::*)(::UnityEngine::VFX::VFXSpawnerState*, ::UnityEngine::VFX::VFXExpressionValues*,
                                                                                                  ::UnityEngine::VFX::VisualEffect*)>(&::UnityEngine::VFX::SetSpawnTime::OnPlay)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69cc3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SetSpawnTime*>(),
                                                             { "OnPlay",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::VFX::VFXSpawnerState*>(), ::i2c::type_of<::UnityEngine::VFX::VFXExpressionValues*>(),
                                                                 ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SetSpawnTime.OnUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SetSpawnTime::*)(::UnityEngine::VFX::VFXSpawnerState*, ::UnityEngine::VFX::VFXExpressionValues*,
                                                                                                  ::UnityEngine::VFX::VisualEffect*)>(&::UnityEngine::VFX::SetSpawnTime::OnUpdate)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x69cc400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SetSpawnTime*>(),
                                                             { "OnUpdate",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::VFX::VFXSpawnerState*>(), ::i2c::type_of<::UnityEngine::VFX::VFXExpressionValues*>(),
                                                                 ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SetSpawnTime.OnStop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SetSpawnTime::*)(::UnityEngine::VFX::VFXSpawnerState*, ::UnityEngine::VFX::VFXExpressionValues*,
                                                                                                  ::UnityEngine::VFX::VisualEffect*)>(&::UnityEngine::VFX::SetSpawnTime::OnStop)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69cc4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SetSpawnTime*>(),
                                                             { "OnStop",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::VFX::VFXSpawnerState*>(), ::i2c::type_of<::UnityEngine::VFX::VFXExpressionValues*>(),
                                                                 ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SetSpawnTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SetSpawnTime::*)()>(&::UnityEngine::VFX::SetSpawnTime::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69cc4a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SetSpawnTime*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::VFX::SetSpawnTime::setStaticF_spawnTimeID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "spawnTimeID", ::UnityEngine::VFX::SetSpawnTime*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SetSpawnTime::getStaticF_spawnTimeID() {
  return ::cordl_internals::getStaticField<int32_t, "spawnTimeID", ::UnityEngine::VFX::SetSpawnTime*>();
}
inline void UnityEngine::VFX::SetSpawnTime::OnPlay(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues, ::UnityEngine::VFX::VisualEffect* vfxComponent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SetSpawnTime*>(), { "OnPlay",
                                                                                  {},
                                                                                  { ::i2c::type_of<::UnityEngine::VFX::VFXSpawnerState*>(), ::i2c::type_of<::UnityEngine::VFX::VFXExpressionValues*>(),
                                                                                    ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, vfxValues, vfxComponent);
}
inline void UnityEngine::VFX::SetSpawnTime::OnUpdate(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues, ::UnityEngine::VFX::VisualEffect* vfxComponent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SetSpawnTime*>(), { "OnUpdate",
                                                                                  {},
                                                                                  { ::i2c::type_of<::UnityEngine::VFX::VFXSpawnerState*>(), ::i2c::type_of<::UnityEngine::VFX::VFXExpressionValues*>(),
                                                                                    ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, vfxValues, vfxComponent);
}
inline void UnityEngine::VFX::SetSpawnTime::OnStop(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues, ::UnityEngine::VFX::VisualEffect* vfxComponent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SetSpawnTime*>(), { "OnStop",
                                                                                  {},
                                                                                  { ::i2c::type_of<::UnityEngine::VFX::VFXSpawnerState*>(), ::i2c::type_of<::UnityEngine::VFX::VFXExpressionValues*>(),
                                                                                    ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, vfxValues, vfxComponent);
}
inline void UnityEngine::VFX::SetSpawnTime::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SetSpawnTime*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::SetSpawnTime* UnityEngine::VFX::SetSpawnTime::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::SetSpawnTime*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::SetSpawnTime::SetSpawnTime() {}
