#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\BasicPlayableBehaviour.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Timeline/zzzz__BasicPlayableBehaviour_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayableAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayableBehaviour_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::BasicPlayableBehaviour.get_duration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::BasicPlayableBehaviour::*)()>(&::UnityEngine::Timeline::BasicPlayableBehaviour::get_duration)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x69c81a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), { ::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::BasicPlayableBehaviour.get_outputs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* (
    ::UnityEngine::Timeline::BasicPlayableBehaviour::*)()>(&::UnityEngine::Timeline::BasicPlayableBehaviour::get_outputs)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x69c8204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), { ::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::BasicPlayableBehaviour.OnGraphStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::BasicPlayableBehaviour::*)(::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Timeline::BasicPlayableBehaviour::OnGraphStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69c8260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), { ::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::BasicPlayableBehaviour.OnGraphStop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::BasicPlayableBehaviour::*)(::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Timeline::BasicPlayableBehaviour::OnGraphStop)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69c8264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), { ::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::BasicPlayableBehaviour.OnPlayableCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::BasicPlayableBehaviour::*)(::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Timeline::BasicPlayableBehaviour::OnPlayableCreate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69c8268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), { ::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::BasicPlayableBehaviour.OnPlayableDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::BasicPlayableBehaviour::*)(::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Timeline::BasicPlayableBehaviour::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69c826c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), { ::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::BasicPlayableBehaviour.OnBehaviourPlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::BasicPlayableBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Timeline::BasicPlayableBehaviour::OnBehaviourPlay)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69c8270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), { ::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::BasicPlayableBehaviour.OnBehaviourPause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::BasicPlayableBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Timeline::BasicPlayableBehaviour::OnBehaviourPause)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69c8274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), { ::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::BasicPlayableBehaviour.PrepareFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::BasicPlayableBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Timeline::BasicPlayableBehaviour::PrepareFrame)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69c8278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), { ::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::BasicPlayableBehaviour.ProcessFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::BasicPlayableBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData,
                                                                                                                 ::System::Object*)>(&::UnityEngine::Timeline::BasicPlayableBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69c827c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), { ::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::BasicPlayableBehaviour.CreatePlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::BasicPlayableBehaviour::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::UnityEngine::Timeline::BasicPlayableBehaviour::CreatePlayable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x69c8280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), { ::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::BasicPlayableBehaviour._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::BasicPlayableBehaviour::*)()>(&::UnityEngine::Timeline::BasicPlayableBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c8330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline double_t UnityEngine::Timeline::BasicPlayableBehaviour::get_duration() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* UnityEngine::Timeline::BasicPlayableBehaviour::get_outputs() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*>(this, ___internal_method);
}
inline void UnityEngine::Timeline::BasicPlayableBehaviour::OnGraphStart(::UnityEngine::Playables::Playable playable) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void UnityEngine::Timeline::BasicPlayableBehaviour::OnGraphStop(::UnityEngine::Playables::Playable playable) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void UnityEngine::Timeline::BasicPlayableBehaviour::OnPlayableCreate(::UnityEngine::Playables::Playable playable) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void UnityEngine::Timeline::BasicPlayableBehaviour::OnPlayableDestroy(::UnityEngine::Playables::Playable playable) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void UnityEngine::Timeline::BasicPlayableBehaviour::OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info);
}
inline void UnityEngine::Timeline::BasicPlayableBehaviour::OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info);
}
inline void UnityEngine::Timeline::BasicPlayableBehaviour::PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info);
}
inline void UnityEngine::Timeline::BasicPlayableBehaviour::ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info, playerData);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::BasicPlayableBehaviour::CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, owner);
}
inline void UnityEngine::Timeline::BasicPlayableBehaviour::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::BasicPlayableBehaviour*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::BasicPlayableBehaviour* UnityEngine::Timeline::BasicPlayableBehaviour::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::BasicPlayableBehaviour*>());
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayableAsset"
constexpr UnityEngine::Timeline::BasicPlayableBehaviour::operator ::UnityEngine::Playables::IPlayableAsset*() noexcept {
  return static_cast<::UnityEngine::Playables::IPlayableAsset*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayableAsset"
constexpr ::UnityEngine::Playables::IPlayableAsset* UnityEngine::Timeline::BasicPlayableBehaviour::i___UnityEngine__Playables__IPlayableAsset() noexcept {
  return static_cast<::UnityEngine::Playables::IPlayableAsset*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayableBehaviour"
constexpr UnityEngine::Timeline::BasicPlayableBehaviour::operator ::UnityEngine::Playables::IPlayableBehaviour*() noexcept {
  return static_cast<::UnityEngine::Playables::IPlayableBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayableBehaviour"
constexpr ::UnityEngine::Playables::IPlayableBehaviour* UnityEngine::Timeline::BasicPlayableBehaviour::i___UnityEngine__Playables__IPlayableBehaviour() noexcept {
  return static_cast<::UnityEngine::Playables::IPlayableBehaviour*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::BasicPlayableBehaviour::BasicPlayableBehaviour() {}
