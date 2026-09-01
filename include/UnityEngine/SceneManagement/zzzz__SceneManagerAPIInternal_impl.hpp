#pragma once
// IWYU pragma private; include "UnityEngine\SceneManagement\SceneManagerAPIInternal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__SceneManagerAPIInternal_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneParameters_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPIInternal.GetNumScenesInBuildSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::SceneManagement::SceneManagerAPIInternal::GetNumScenesInBuildSettings)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6affaa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>(), { "GetNumScenesInBuildSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPIInternal.LoadSceneAsyncNameIndexInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (*)(::StringW, int32_t, ::UnityEngine::SceneManagement::LoadSceneParameters, bool)>(
    &::UnityEngine::SceneManagement::SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x6affad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>(),
                            { "LoadSceneAsyncNameIndexInternal",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPIInternal.LoadSceneAsyncNameIndexInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t, ::by_ref<::UnityEngine::SceneManagement::LoadSceneParameters>, bool)>(
        &::UnityEngine::SceneManagement::SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6affcc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>(),
                                                             { "LoadSceneAsyncNameIndexInternal_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::LoadSceneParameters>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::SceneManagement::SceneManagerAPIInternal::GetNumScenesInBuildSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>(), { "GetNumScenesInBuildSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal(::StringW sceneName, int32_t sceneBuildIndex,
                                                                                                                             ::UnityEngine::SceneManagement::LoadSceneParameters parameters,
                                                                                                                             bool mustCompleteNextFrame) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>(),
                                       { "LoadSceneAsyncNameIndexInternal",
                                         {},
                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(nullptr, ___internal_method, sceneName, sceneBuildIndex, parameters, mustCompleteNextFrame);
}
inline ::System::IntPtr UnityEngine::SceneManagement::SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> sceneName,
                                                                                                                        int32_t sceneBuildIndex,
                                                                                                                        ::by_ref<::UnityEngine::SceneManagement::LoadSceneParameters> parameters,
                                                                                                                        bool mustCompleteNextFrame) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>(),
                                                           { "LoadSceneAsyncNameIndexInternal_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::LoadSceneParameters>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, sceneName, sceneBuildIndex, parameters, mustCompleteNextFrame);
}
// Ctor Parameters []
constexpr ::UnityEngine::SceneManagement::SceneManagerAPIInternal::SceneManagerAPIInternal() {}
