#pragma once
// IWYU pragma private; include "UnityEngine\Playables\PlayableAsset.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayableAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::PlayableAsset.CreatePlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Playables::PlayableAsset::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::UnityEngine::Playables::PlayableAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableAsset*>(), { ::i2c::class_of<::UnityEngine::Playables::PlayableAsset*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableAsset.get_duration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Playables::PlayableAsset::*)()>(&::UnityEngine::Playables::PlayableAsset::get_duration)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b044c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableAsset*>(), { ::i2c::class_of<::UnityEngine::Playables::PlayableAsset*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableAsset.get_outputs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* (::UnityEngine::Playables::PlayableAsset::*)()>(
    &::UnityEngine::Playables::PlayableAsset::get_outputs)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b04520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableAsset*>(), { ::i2c::class_of<::UnityEngine::Playables::PlayableAsset*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableAsset.Internal_CreatePlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Playables::PlayableAsset*, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::IntPtr)>(
    &::UnityEngine::Playables::PlayableAsset::Internal_CreatePlayable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6b0457c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableAsset*>(),
                                                             { "Internal_CreatePlayable",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Playables::PlayableAsset*>(), ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(),
                                                                 ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableAsset.Internal_GetPlayableAssetDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Playables::PlayableAsset*, ::System::IntPtr)>(
    &::UnityEngine::Playables::PlayableAsset::Internal_GetPlayableAssetDuration)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b0465c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableAsset*>(),
                                                { "Internal_GetPlayableAssetDuration", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableAsset*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableAsset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableAsset::*)()>(&::UnityEngine::Playables::PlayableAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b04684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableAsset*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Playables::Playable UnityEngine::Playables::PlayableAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Playables::PlayableAsset*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, owner);
}
inline double_t UnityEngine::Playables::PlayableAsset::get_duration() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Playables::PlayableAsset*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* UnityEngine::Playables::PlayableAsset::get_outputs() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Playables::PlayableAsset*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableAsset::Internal_CreatePlayable(::UnityEngine::Playables::PlayableAsset* asset, ::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go,
                                                                           ::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableAsset*>(),
                                                           { "Internal_CreatePlayable",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Playables::PlayableAsset*>(), ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(),
                                                               ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asset, graph, go, ptr);
}
inline void UnityEngine::Playables::PlayableAsset::Internal_GetPlayableAssetDuration(::UnityEngine::Playables::PlayableAsset* asset, ::System::IntPtr ptrToDouble) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableAsset*>(),
                                              { "Internal_GetPlayableAssetDuration", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableAsset*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asset, ptrToDouble);
}
inline void UnityEngine::Playables::PlayableAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableAsset*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableAsset* UnityEngine::Playables::PlayableAsset::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Playables::PlayableAsset*>());
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayableAsset"
constexpr UnityEngine::Playables::PlayableAsset::operator ::UnityEngine::Playables::IPlayableAsset*() noexcept {
  return static_cast<::UnityEngine::Playables::IPlayableAsset*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayableAsset"
constexpr ::UnityEngine::Playables::IPlayableAsset* UnityEngine::Playables::PlayableAsset::i___UnityEngine__Playables__IPlayableAsset() noexcept {
  return static_cast<::UnityEngine::Playables::IPlayableAsset*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::PlayableAsset::PlayableAsset() {}
