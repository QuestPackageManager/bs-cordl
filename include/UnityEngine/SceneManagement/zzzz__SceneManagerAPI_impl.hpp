#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/SceneManagerAPI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__SceneManagerAPI_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneParameters_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPI.get_ActiveAPI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SceneManagement::SceneManagerAPI* (*)()>(&::UnityEngine::SceneManagement::SceneManagerAPI::get_ActiveAPI)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6afc900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPI*>(), { "get_ActiveAPI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPI.get_overrideAPI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SceneManagement::SceneManagerAPI* (*)()>(&::UnityEngine::SceneManagement::SceneManagerAPI::get_overrideAPI)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6afc9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPI*>(), { "get_overrideAPI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPI._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SceneManagement::SceneManagerAPI::*)()>(&::UnityEngine::SceneManagement::SceneManagerAPI::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6afca10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPI*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPI.GetNumScenesInBuildSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::SceneManagement::SceneManagerAPI::*)()>(&::UnityEngine::SceneManagement::SceneManagerAPI::GetNumScenesInBuildSettings)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6afca14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPI*>(), { ::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPI*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPI.LoadSceneAsyncByNameOrIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::AsyncOperation* (::UnityEngine::SceneManagement::SceneManagerAPI::*)(::StringW, int32_t, ::UnityEngine::SceneManagement::LoadSceneParameters, bool)>(
        &::UnityEngine::SceneManagement::SceneManagerAPI::LoadSceneAsyncByNameOrIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6afca3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPI*>(), { ::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPI*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPI.LoadFirstScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (::UnityEngine::SceneManagement::SceneManagerAPI::*)(bool)>(
    &::UnityEngine::SceneManagement::SceneManagerAPI::LoadFirstScene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6afca50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPI*>(), { ::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPI*>(), 6 }));
    return ___internal_method;
  }
};
inline void UnityEngine::SceneManagement::SceneManagerAPI::setStaticF_s_DefaultAPI(::UnityEngine::SceneManagement::SceneManagerAPI* value) {
  ::cordl_internals::setStaticField<::UnityEngine::SceneManagement::SceneManagerAPI*, "s_DefaultAPI", ::UnityEngine::SceneManagement::SceneManagerAPI*>(
      std::forward<::UnityEngine::SceneManagement::SceneManagerAPI*>(value));
}
inline ::UnityEngine::SceneManagement::SceneManagerAPI* UnityEngine::SceneManagement::SceneManagerAPI::getStaticF_s_DefaultAPI() {
  return ::cordl_internals::getStaticField<::UnityEngine::SceneManagement::SceneManagerAPI*, "s_DefaultAPI", ::UnityEngine::SceneManagement::SceneManagerAPI*>();
}
inline void UnityEngine::SceneManagement::SceneManagerAPI::setStaticF__overrideAPI_k__BackingField(::UnityEngine::SceneManagement::SceneManagerAPI* value) {
  ::cordl_internals::setStaticField<::UnityEngine::SceneManagement::SceneManagerAPI*, "<overrideAPI>k__BackingField", ::UnityEngine::SceneManagement::SceneManagerAPI*>(
      std::forward<::UnityEngine::SceneManagement::SceneManagerAPI*>(value));
}
inline ::UnityEngine::SceneManagement::SceneManagerAPI* UnityEngine::SceneManagement::SceneManagerAPI::getStaticF__overrideAPI_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::SceneManagement::SceneManagerAPI*, "<overrideAPI>k__BackingField", ::UnityEngine::SceneManagement::SceneManagerAPI*>();
}
inline ::UnityEngine::SceneManagement::SceneManagerAPI* UnityEngine::SceneManagement::SceneManagerAPI::get_ActiveAPI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPI*>(), { "get_ActiveAPI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::SceneManagerAPI*>(nullptr, ___internal_method);
}
inline ::UnityEngine::SceneManagement::SceneManagerAPI* UnityEngine::SceneManagement::SceneManagerAPI::get_overrideAPI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPI*>(), { "get_overrideAPI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::SceneManagerAPI*>(nullptr, ___internal_method);
}
inline void UnityEngine::SceneManagement::SceneManagerAPI::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPI*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::SceneManagement::SceneManagerAPI::GetNumScenesInBuildSettings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPI*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManagerAPI::LoadSceneAsyncByNameOrIndex(::StringW sceneName, int32_t sceneBuildIndex,
                                                                                                                 ::UnityEngine::SceneManagement::LoadSceneParameters parameters,
                                                                                                                 bool mustCompleteNextFrame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPI*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(this, ___internal_method, sceneName, sceneBuildIndex, parameters, mustCompleteNextFrame);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManagerAPI::LoadFirstScene(bool mustLoadAsync) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPI*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(this, ___internal_method, mustLoadAsync);
}
inline ::UnityEngine::SceneManagement::SceneManagerAPI* UnityEngine::SceneManagement::SceneManagerAPI::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::SceneManagement::SceneManagerAPI*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::SceneManagement::SceneManagerAPI::SceneManagerAPI() {}
