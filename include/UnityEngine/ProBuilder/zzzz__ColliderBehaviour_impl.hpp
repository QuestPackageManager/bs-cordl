#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\ColliderBehaviour.hpp"
#include "UnityEngine/ProBuilder/zzzz__EntityBehaviour_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__ColliderBehaviour_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::ColliderBehaviour.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ColliderBehaviour::*)()>(&::UnityEngine::ProBuilder::ColliderBehaviour::Initialize)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x66b87d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColliderBehaviour*>(), { ::i2c::class_of<::UnityEngine::ProBuilder::ColliderBehaviour*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ColliderBehaviour.OnEnterPlayMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ColliderBehaviour::*)()>(&::UnityEngine::ProBuilder::ColliderBehaviour::OnEnterPlayMode)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x66b89e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColliderBehaviour*>(), { ::i2c::class_of<::UnityEngine::ProBuilder::ColliderBehaviour*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ColliderBehaviour.OnSceneLoaded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ColliderBehaviour::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(
    &::UnityEngine::ProBuilder::ColliderBehaviour::OnSceneLoaded)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x66b8a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColliderBehaviour*>(), { ::i2c::class_of<::UnityEngine::ProBuilder::ColliderBehaviour*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ColliderBehaviour._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ColliderBehaviour::*)()>(&::UnityEngine::ProBuilder::ColliderBehaviour::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66b8b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColliderBehaviour*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::ColliderBehaviour::Initialize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::ColliderBehaviour*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ColliderBehaviour::OnEnterPlayMode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::ColliderBehaviour*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ColliderBehaviour::OnSceneLoaded(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::LoadSceneMode mode) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::ColliderBehaviour*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scene, mode);
}
inline void UnityEngine::ProBuilder::ColliderBehaviour::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColliderBehaviour*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::ColliderBehaviour* UnityEngine::ProBuilder::ColliderBehaviour::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::ColliderBehaviour*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ColliderBehaviour::ColliderBehaviour() {}
