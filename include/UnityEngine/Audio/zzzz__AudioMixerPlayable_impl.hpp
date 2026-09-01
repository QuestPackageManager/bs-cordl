#pragma once
// IWYU pragma private; include "UnityEngine\Audio\AudioMixerPlayable.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_impl.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerPlayable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixerPlayable.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::AudioMixerPlayable (*)(::UnityEngine::Playables::PlayableGraph, int32_t, bool)>(
    &::UnityEngine::Audio::AudioMixerPlayable::Create)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6a58464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixerPlayable>(),
                                                             { "Create", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixerPlayable.CreateHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (*)(::UnityEngine::Playables::PlayableGraph, int32_t, bool)>(
    &::UnityEngine::Audio::AudioMixerPlayable::CreateHandle)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6a5849c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixerPlayable>(),
                                                { "CreateHandle", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixerPlayable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioMixerPlayable::*)(::UnityEngine::Playables::PlayableHandle)>(
    &::UnityEngine::Audio::AudioMixerPlayable::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6a585a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixerPlayable>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixerPlayable.GetHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Audio::AudioMixerPlayable::*)()>(
    &::UnityEngine::Audio::AudioMixerPlayable::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a58708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixerPlayable>(), { "GetHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixerPlayable.op_Implicit___UnityEngine__Playables__Playable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (*)(::UnityEngine::Audio::AudioMixerPlayable)>(
    &::UnityEngine::Audio::AudioMixerPlayable::op_Implicit___UnityEngine__Playables__Playable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a58714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixerPlayable>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioMixerPlayable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixerPlayable.op_Explicit___UnityEngine__Audio__AudioMixerPlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::AudioMixerPlayable (*)(::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Audio::AudioMixerPlayable::op_Explicit___UnityEngine__Audio__AudioMixerPlayable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a58718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixerPlayable>(), { "op_Explicit", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixerPlayable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::AudioMixerPlayable::*)(::UnityEngine::Audio::AudioMixerPlayable)>(
    &::UnityEngine::Audio::AudioMixerPlayable::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a58798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixerPlayable>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioMixerPlayable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixerPlayable.CreateAudioMixerPlayableInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, bool, ::by_ref<::UnityEngine::Playables::PlayableHandle>)>(
    &::UnityEngine::Audio::AudioMixerPlayable::CreateAudioMixerPlayableInternal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a586b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixerPlayable>(), { "CreateAudioMixerPlayableInternal",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<bool>(),
                                                                                                          ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Audio::AudioMixerPlayable UnityEngine::Audio::AudioMixerPlayable::Create(::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount, bool normalizeInputVolumes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixerPlayable>(),
                                                           { "Create", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioMixerPlayable>(nullptr, ___internal_method, graph, inputCount, normalizeInputVolumes);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Audio::AudioMixerPlayable::CreateHandle(::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount, bool normalizeInputVolumes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixerPlayable>(),
                                                           { "CreateHandle", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(nullptr, ___internal_method, graph, inputCount, normalizeInputVolumes);
}
inline void UnityEngine::Audio::AudioMixerPlayable::_ctor(::UnityEngine::Playables::PlayableHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixerPlayable>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Audio::AudioMixerPlayable::GetHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixerPlayable>(), { "GetHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(*this, ___internal_method);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Audio::AudioMixerPlayable::op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Audio::AudioMixerPlayable playable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixerPlayable>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioMixerPlayable>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(nullptr, ___internal_method, playable);
}
inline ::UnityEngine::Audio::AudioMixerPlayable UnityEngine::Audio::AudioMixerPlayable::op_Explicit___UnityEngine__Audio__AudioMixerPlayable(::UnityEngine::Playables::Playable playable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixerPlayable>(), { "op_Explicit", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioMixerPlayable>(nullptr, ___internal_method, playable);
}
inline bool UnityEngine::Audio::AudioMixerPlayable::Equals(::UnityEngine::Audio::AudioMixerPlayable other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixerPlayable>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioMixerPlayable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Audio::AudioMixerPlayable::CreateAudioMixerPlayableInternal(::by_ref<::UnityEngine::Playables::PlayableGraph> graph, bool normalizeInputVolumes,
                                                                                     ::by_ref<::UnityEngine::Playables::PlayableHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixerPlayable>(),
                          { "CreateAudioMixerPlayableInternal",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, graph, normalizeInputVolumes, handle);
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr UnityEngine::Audio::AudioMixerPlayable::operator ::UnityEngine::Playables::IPlayable*() {
  return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* UnityEngine::Audio::AudioMixerPlayable::i___UnityEngine__Playables__IPlayable() {
  return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Audio::AudioMixerPlayable>"
constexpr UnityEngine::Audio::AudioMixerPlayable::operator ::System::IEquatable_1<::UnityEngine::Audio::AudioMixerPlayable>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Audio::AudioMixerPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Audio::AudioMixerPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Audio::AudioMixerPlayable>* UnityEngine::Audio::AudioMixerPlayable::i___System__IEquatable_1___UnityEngine__Audio__AudioMixerPlayable_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Audio::AudioMixerPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Audio::AudioMixerPlayable::AudioMixerPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept {
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::AudioMixerPlayable::AudioMixerPlayable() {}
