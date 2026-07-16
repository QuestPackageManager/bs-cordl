#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/LoadSceneParameters.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__LocalPhysicsMode_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneParameters_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::SceneManagement::LoadSceneParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SceneManagement::LoadSceneParameters::*)(::UnityEngine::SceneManagement::LoadSceneMode)>(
    &::UnityEngine::SceneManagement::LoadSceneParameters::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6afd8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::SceneManagement::LoadSceneParameters::_ctor(::UnityEngine::SceneManagement::LoadSceneMode mode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::SceneManagement::LoadSceneParameters>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mode);
}
// Ctor Parameters [CppParam { name: "m_LoadSceneMode", ty: "::UnityEngine::SceneManagement::LoadSceneMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalPhysicsMode", ty:
// "::UnityEngine::SceneManagement::LocalPhysicsMode", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SceneManagement::LoadSceneParameters::LoadSceneParameters(::UnityEngine::SceneManagement::LoadSceneMode m_LoadSceneMode,
                                                                                   ::UnityEngine::SceneManagement::LocalPhysicsMode m_LocalPhysicsMode) noexcept {
  this->m_LoadSceneMode = m_LoadSceneMode;
  this->m_LocalPhysicsMode = m_LocalPhysicsMode;
}
// Ctor Parameters []
constexpr ::UnityEngine::SceneManagement::LoadSceneParameters::LoadSceneParameters() {}
