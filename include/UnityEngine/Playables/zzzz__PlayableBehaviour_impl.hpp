#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableBehaviour.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayableBehaviour_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::PlayableBehaviour._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableBehaviour::*)()>(&::UnityEngine::Playables::PlayableBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b01270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableBehaviour.OnGraphStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableBehaviour::*)(::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Playables::PlayableBehaviour::OnGraphStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b01274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), { ::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableBehaviour.OnGraphStop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableBehaviour::*)(::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Playables::PlayableBehaviour::OnGraphStop)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b01278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), { ::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableBehaviour.OnPlayableCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableBehaviour::*)(::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Playables::PlayableBehaviour::OnPlayableCreate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b0127c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), { ::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableBehaviour.OnPlayableDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableBehaviour::*)(::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Playables::PlayableBehaviour::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b01280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), { ::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableBehaviour.OnBehaviourPlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Playables::PlayableBehaviour::OnBehaviourPlay)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b01284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), { ::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableBehaviour.OnBehaviourPause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Playables::PlayableBehaviour::OnBehaviourPause)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b01288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), { ::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableBehaviour.PrepareFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Playables::PlayableBehaviour::PrepareFrame)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b0128c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), { ::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableBehaviour.ProcessFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData,
                                                                                                             ::System::Object*)>(&::UnityEngine::Playables::PlayableBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b01290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), { ::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableBehaviour.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Playables::PlayableBehaviour::*)()>(&::UnityEngine::Playables::PlayableBehaviour::Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b01294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), { ::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), 21 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Playables::PlayableBehaviour::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableBehaviour::OnGraphStart(::UnityEngine::Playables::Playable playable) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void UnityEngine::Playables::PlayableBehaviour::OnGraphStop(::UnityEngine::Playables::Playable playable) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void UnityEngine::Playables::PlayableBehaviour::OnPlayableCreate(::UnityEngine::Playables::Playable playable) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void UnityEngine::Playables::PlayableBehaviour::OnPlayableDestroy(::UnityEngine::Playables::Playable playable) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void UnityEngine::Playables::PlayableBehaviour::OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info);
}
inline void UnityEngine::Playables::PlayableBehaviour::OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info);
}
inline void UnityEngine::Playables::PlayableBehaviour::PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info);
}
inline void UnityEngine::Playables::PlayableBehaviour::ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info, playerData);
}
inline ::System::Object* UnityEngine::Playables::PlayableBehaviour::Clone() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Playables::PlayableBehaviour*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableBehaviour* UnityEngine::Playables::PlayableBehaviour::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Playables::PlayableBehaviour*>());
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayableBehaviour"
constexpr UnityEngine::Playables::PlayableBehaviour::operator ::UnityEngine::Playables::IPlayableBehaviour*() noexcept {
  return static_cast<::UnityEngine::Playables::IPlayableBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayableBehaviour"
constexpr ::UnityEngine::Playables::IPlayableBehaviour* UnityEngine::Playables::PlayableBehaviour::i___UnityEngine__Playables__IPlayableBehaviour() noexcept {
  return static_cast<::UnityEngine::Playables::IPlayableBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr UnityEngine::Playables::PlayableBehaviour::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* UnityEngine::Playables::PlayableBehaviour::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::PlayableBehaviour::PlayableBehaviour() {}
