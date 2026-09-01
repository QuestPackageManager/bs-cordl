#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\TimelineClipCapsExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClipCapsExtensions_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClipCapsExtensions.SupportsLooping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Timeline::TimelineClip*)>(&::UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsLooping)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69c077c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClipCapsExtensions*>(),
                                                                                           { "SupportsLooping", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClipCapsExtensions.SupportsExtrapolation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Timeline::TimelineClip*)>(&::UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsExtrapolation)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69c0794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClipCapsExtensions*>(),
                                                                                           { "SupportsExtrapolation", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClipCapsExtensions.SupportsClipIn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Timeline::TimelineClip*)>(&::UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsClipIn)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69c07ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClipCapsExtensions*>(),
                                                                                           { "SupportsClipIn", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClipCapsExtensions.SupportsSpeedMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Timeline::TimelineClip*)>(&::UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsSpeedMultiplier)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69c07c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClipCapsExtensions*>(),
                                                                                           { "SupportsSpeedMultiplier", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClipCapsExtensions.SupportsBlending
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Timeline::TimelineClip*)>(&::UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsBlending)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69c07dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClipCapsExtensions*>(),
                                                                                           { "SupportsBlending", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClipCapsExtensions.HasAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Timeline::ClipCaps, ::UnityEngine::Timeline::ClipCaps)>(&::UnityEngine::Timeline::TimelineClipCapsExtensions::HasAll)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69c07f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClipCapsExtensions*>(),
                                                             { "HasAll", {}, { ::i2c::type_of<::UnityEngine::Timeline::ClipCaps>(), ::i2c::type_of<::UnityEngine::Timeline::ClipCaps>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClipCapsExtensions.HasAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Timeline::ClipCaps, ::UnityEngine::Timeline::ClipCaps)>(&::UnityEngine::Timeline::TimelineClipCapsExtensions::HasAny)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69b3030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClipCapsExtensions*>(),
                                                             { "HasAny", {}, { ::i2c::type_of<::UnityEngine::Timeline::ClipCaps>(), ::i2c::type_of<::UnityEngine::Timeline::ClipCaps>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsLooping(::UnityEngine::Timeline::TimelineClip* clip) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClipCapsExtensions*>(),
                                                                                         { "SupportsLooping", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clip);
}
inline bool UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsExtrapolation(::UnityEngine::Timeline::TimelineClip* clip) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClipCapsExtensions*>(),
                                                                                         { "SupportsExtrapolation", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clip);
}
inline bool UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsClipIn(::UnityEngine::Timeline::TimelineClip* clip) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClipCapsExtensions*>(),
                                                                                         { "SupportsClipIn", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clip);
}
inline bool UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsSpeedMultiplier(::UnityEngine::Timeline::TimelineClip* clip) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClipCapsExtensions*>(),
                                                                                         { "SupportsSpeedMultiplier", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clip);
}
inline bool UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsBlending(::UnityEngine::Timeline::TimelineClip* clip) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClipCapsExtensions*>(),
                                                                                         { "SupportsBlending", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clip);
}
inline bool UnityEngine::Timeline::TimelineClipCapsExtensions::HasAll(::UnityEngine::Timeline::ClipCaps caps, ::UnityEngine::Timeline::ClipCaps flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClipCapsExtensions*>(),
                                                           { "HasAll", {}, { ::i2c::type_of<::UnityEngine::Timeline::ClipCaps>(), ::i2c::type_of<::UnityEngine::Timeline::ClipCaps>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, caps, flags);
}
inline bool UnityEngine::Timeline::TimelineClipCapsExtensions::HasAny(::UnityEngine::Timeline::ClipCaps caps, ::UnityEngine::Timeline::ClipCaps flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClipCapsExtensions*>(),
                                                           { "HasAny", {}, { ::i2c::type_of<::UnityEngine::Timeline::ClipCaps>(), ::i2c::type_of<::UnityEngine::Timeline::ClipCaps>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, caps, flags);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TimelineClipCapsExtensions::TimelineClipCapsExtensions() {}
