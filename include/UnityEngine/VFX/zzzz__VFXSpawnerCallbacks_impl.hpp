#pragma once
// IWYU pragma private; include "UnityEngine\VFX\VFXSpawnerCallbacks.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/VFX/zzzz__VFXSpawnerCallbacks_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXExpressionValues_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXSpawnerState_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffect_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::VFXSpawnerCallbacks.OnPlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VFXSpawnerCallbacks::*)(::UnityEngine::VFX::VFXSpawnerState*, ::UnityEngine::VFX::VFXExpressionValues*,
                                                                                                         ::UnityEngine::VFX::VisualEffect*)>(&::UnityEngine::VFX::VFXSpawnerCallbacks::OnPlay)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXSpawnerCallbacks*>(), { ::i2c::class_of<::UnityEngine::VFX::VFXSpawnerCallbacks*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXSpawnerCallbacks.OnUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VFXSpawnerCallbacks::*)(::UnityEngine::VFX::VFXSpawnerState*, ::UnityEngine::VFX::VFXExpressionValues*,
                                                                                                         ::UnityEngine::VFX::VisualEffect*)>(&::UnityEngine::VFX::VFXSpawnerCallbacks::OnUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXSpawnerCallbacks*>(), { ::i2c::class_of<::UnityEngine::VFX::VFXSpawnerCallbacks*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXSpawnerCallbacks.OnStop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VFXSpawnerCallbacks::*)(::UnityEngine::VFX::VFXSpawnerState*, ::UnityEngine::VFX::VFXExpressionValues*,
                                                                                                         ::UnityEngine::VFX::VisualEffect*)>(&::UnityEngine::VFX::VFXSpawnerCallbacks::OnStop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXSpawnerCallbacks*>(), { ::i2c::class_of<::UnityEngine::VFX::VFXSpawnerCallbacks*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXSpawnerCallbacks._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VFXSpawnerCallbacks::*)()>(&::UnityEngine::VFX::VFXSpawnerCallbacks::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e2d3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXSpawnerCallbacks*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::VFX::VFXSpawnerCallbacks::OnPlay(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues,
                                                          ::UnityEngine::VFX::VisualEffect* vfxComponent) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::VFXSpawnerCallbacks*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, vfxValues, vfxComponent);
}
inline void UnityEngine::VFX::VFXSpawnerCallbacks::OnUpdate(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues,
                                                            ::UnityEngine::VFX::VisualEffect* vfxComponent) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::VFXSpawnerCallbacks*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, vfxValues, vfxComponent);
}
inline void UnityEngine::VFX::VFXSpawnerCallbacks::OnStop(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues,
                                                          ::UnityEngine::VFX::VisualEffect* vfxComponent) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::VFXSpawnerCallbacks*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, vfxValues, vfxComponent);
}
inline void UnityEngine::VFX::VFXSpawnerCallbacks::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXSpawnerCallbacks*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::VFXSpawnerCallbacks* UnityEngine::VFX::VFXSpawnerCallbacks::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::VFXSpawnerCallbacks*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VFXSpawnerCallbacks::VFXSpawnerCallbacks() {}
