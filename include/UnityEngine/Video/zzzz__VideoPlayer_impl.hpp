#pragma once
// IWYU pragma private; include "UnityEngine\Video\VideoPlayer.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/Video/zzzz__VideoPlayer_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Video/zzzz__Video3DLayout_def.hpp"
#include "UnityEngine/Video/zzzz__VideoAspectRatio_def.hpp"
#include "UnityEngine/Video/zzzz__VideoAudioOutputMode_def.hpp"
#include "UnityEngine/Video/zzzz__VideoClip_def.hpp"
#include "UnityEngine/Video/zzzz__VideoPlayer_def.hpp"
#include "UnityEngine/Video/zzzz__VideoRenderMode_def.hpp"
#include "UnityEngine/Video/zzzz__VideoSource_def.hpp"
#include "UnityEngine/Video/zzzz__VideoTimeReference_def.hpp"
#include "UnityEngine/Video/zzzz__VideoTimeSource_def.hpp"
#include "UnityEngine/Video/zzzz__VideoTimeUpdateMode_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer_EventHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer_EventHandler::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Video::VideoPlayer_EventHandler::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e3604c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer_EventHandler*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer_EventHandler.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer_EventHandler::*)(::UnityEngine::Video::VideoPlayer*)>(
    &::UnityEngine::Video::VideoPlayer_EventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e360c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer_EventHandler*>(), { ::i2c::class_of<::UnityEngine::Video::VideoPlayer_EventHandler*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Video::VideoPlayer_EventHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer_EventHandler*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Video::VideoPlayer_EventHandler::Invoke(::UnityEngine::Video::VideoPlayer* source) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Video::VideoPlayer_EventHandler*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline ::UnityEngine::Video::VideoPlayer_EventHandler* UnityEngine::Video::VideoPlayer_EventHandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Video::VideoPlayer_EventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::VideoPlayer_EventHandler::VideoPlayer_EventHandler() {}
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer_ErrorEventHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer_ErrorEventHandler::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Video::VideoPlayer_ErrorEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e360dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer_ErrorEventHandler*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer_ErrorEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer_ErrorEventHandler::*)(::UnityEngine::Video::VideoPlayer*, ::StringW)>(
    &::UnityEngine::Video::VideoPlayer_ErrorEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e3615c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer_ErrorEventHandler*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Video::VideoPlayer_ErrorEventHandler*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Video::VideoPlayer_ErrorEventHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer_ErrorEventHandler*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Video::VideoPlayer_ErrorEventHandler::Invoke(::UnityEngine::Video::VideoPlayer* source, ::StringW message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Video::VideoPlayer_ErrorEventHandler*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, message);
}
inline ::UnityEngine::Video::VideoPlayer_ErrorEventHandler* UnityEngine::Video::VideoPlayer_ErrorEventHandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Video::VideoPlayer_ErrorEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::VideoPlayer_ErrorEventHandler::VideoPlayer_ErrorEventHandler() {}
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e36170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler::*)(::UnityEngine::Video::VideoPlayer*, int64_t)>(
    &::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e361f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Video::VideoPlayer_FrameReadyEventHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Video::VideoPlayer_FrameReadyEventHandler::Invoke(::UnityEngine::Video::VideoPlayer* source, int64_t frameIdx) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, frameIdx);
}
inline ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* UnityEngine::Video::VideoPlayer_FrameReadyEventHandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler::VideoPlayer_FrameReadyEventHandler() {}
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer_TimeEventHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer_TimeEventHandler::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Video::VideoPlayer_TimeEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e36204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer_TimeEventHandler*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer_TimeEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer_TimeEventHandler::*)(::UnityEngine::Video::VideoPlayer*, double_t)>(
    &::UnityEngine::Video::VideoPlayer_TimeEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e36284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer_TimeEventHandler*>(), { ::i2c::class_of<::UnityEngine::Video::VideoPlayer_TimeEventHandler*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Video::VideoPlayer_TimeEventHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer_TimeEventHandler*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Video::VideoPlayer_TimeEventHandler::Invoke(::UnityEngine::Video::VideoPlayer* source, double_t seconds) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Video::VideoPlayer_TimeEventHandler*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, seconds);
}
inline ::UnityEngine::Video::VideoPlayer_TimeEventHandler* UnityEngine::Video::VideoPlayer_TimeEventHandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Video::VideoPlayer_TimeEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::VideoPlayer_TimeEventHandler::VideoPlayer_TimeEventHandler() {}
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_source
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Video::VideoSource (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_source)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e30650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_source", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_source
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoSource)>(&::UnityEngine::Video::VideoPlayer::set_source)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e3070c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_source", {}, { ::i2c::type_of<::UnityEngine::Video::VideoSource>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_timeUpdateMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Video::VideoTimeUpdateMode (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_timeUpdateMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e307e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_timeUpdateMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_timeUpdateMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoTimeUpdateMode)>(
    &::UnityEngine::Video::VideoPlayer::set_timeUpdateMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e3089c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_timeUpdateMode", {}, { ::i2c::type_of<::UnityEngine::Video::VideoTimeUpdateMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_url
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_url)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6e30970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_url", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_url
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::StringW)>(&::UnityEngine::Video::VideoPlayer::set_url)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6e30ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_url", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_clip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Video::VideoClip> (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_clip)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6e30c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_clip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_clip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoClip*)>(&::UnityEngine::Video::VideoPlayer::set_clip)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e30e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_clip", {}, { ::i2c::type_of<::UnityEngine::Video::VideoClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_renderMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Video::VideoRenderMode (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_renderMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e30f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_renderMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_renderMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoRenderMode)>(&::UnityEngine::Video::VideoPlayer::set_renderMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e30fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_renderMode", {}, { ::i2c::type_of<::UnityEngine::Video::VideoRenderMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canSetTimeUpdateMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_canSetTimeUpdateMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e310b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canSetTimeUpdateMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_targetCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_targetCamera)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6e31170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_targetCamera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_targetCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Camera*)>(&::UnityEngine::Video::VideoPlayer::set_targetCamera)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e312fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_targetCamera", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_targetTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_targetTexture)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6e31400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_targetTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_targetTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::RenderTexture*)>(&::UnityEngine::Video::VideoPlayer::set_targetTexture)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e3158c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_targetTexture", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_targetMaterialRenderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Renderer> (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_targetMaterialRenderer)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6e31690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_targetMaterialRenderer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_targetMaterialRenderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Renderer*)>(&::UnityEngine::Video::VideoPlayer::set_targetMaterialRenderer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e3181c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_targetMaterialRenderer", {}, { ::i2c::type_of<::UnityEngine::Renderer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_targetMaterialProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_targetMaterialProperty)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6e31920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_targetMaterialProperty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_targetMaterialProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::StringW)>(&::UnityEngine::Video::VideoPlayer::set_targetMaterialProperty)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6e31a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_targetMaterialProperty", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_aspectRatio
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Video::VideoAspectRatio (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_aspectRatio)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e31c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_aspectRatio", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_aspectRatio
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoAspectRatio)>(&::UnityEngine::Video::VideoPlayer::set_aspectRatio)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e31d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_aspectRatio", {}, { ::i2c::type_of<::UnityEngine::Video::VideoAspectRatio>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_targetCameraAlpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_targetCameraAlpha)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e31dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_targetCameraAlpha", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_targetCameraAlpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(float_t)>(&::UnityEngine::Video::VideoPlayer::set_targetCameraAlpha)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e31e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_targetCameraAlpha", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_targetCamera3DLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Video::Video3DLayout (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_targetCamera3DLayout)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e31f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_targetCamera3DLayout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_targetCamera3DLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::Video3DLayout)>(
    &::UnityEngine::Video::VideoPlayer::set_targetCamera3DLayout)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e32028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_targetCamera3DLayout", {}, { ::i2c::type_of<::UnityEngine::Video::Video3DLayout>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_texture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_texture)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6e320fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_texture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.Prepare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::Prepare)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e32288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "Prepare", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_isPrepared
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_isPrepared)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e32344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_isPrepared", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_waitForFirstFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_waitForFirstFrame)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e32400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_waitForFirstFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_waitForFirstFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(bool)>(&::UnityEngine::Video::VideoPlayer::set_waitForFirstFrame)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e324bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_waitForFirstFrame", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_playOnAwake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_playOnAwake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e32590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_playOnAwake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_playOnAwake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(bool)>(&::UnityEngine::Video::VideoPlayer::set_playOnAwake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e3264c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_playOnAwake", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.Play
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::Play)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e32720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "Play", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.Pause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::Pause)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e327dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "Pause", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.Stop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::Stop)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e32898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "Stop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_isPlaying
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_isPlaying)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e32954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_isPlaying", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_isPaused
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_isPaused)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e32a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_isPaused", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canSetTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_canSetTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e32acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canSetTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_time)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e32b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_time", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(double_t)>(&::UnityEngine::Video::VideoPlayer::set_time)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e32c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_time", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_frame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_frame)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e32d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_frame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_frame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(int64_t)>(&::UnityEngine::Video::VideoPlayer::set_frame)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e32ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_frame", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_clockTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_clockTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e32eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_clockTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canStep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_canStep)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e32f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canStep", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.StepForward
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::StepForward)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e33028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "StepForward", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canSetPlaybackSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_canSetPlaybackSpeed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e330e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canSetPlaybackSpeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_playbackSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_playbackSpeed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e331a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_playbackSpeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_playbackSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(float_t)>(&::UnityEngine::Video::VideoPlayer::set_playbackSpeed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e3325c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_playbackSpeed", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_isLooping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_isLooping)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e33338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_isLooping", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_isLooping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(bool)>(&::UnityEngine::Video::VideoPlayer::set_isLooping)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e333f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_isLooping", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canSetTimeSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_canSetTimeSource)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e334c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canSetTimeSource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_timeSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Video::VideoTimeSource (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_timeSource)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e33584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_timeSource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_timeSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoTimeSource)>(&::UnityEngine::Video::VideoPlayer::set_timeSource)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e33640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_timeSource", {}, { ::i2c::type_of<::UnityEngine::Video::VideoTimeSource>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_timeReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Video::VideoTimeReference (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_timeReference)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e33714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_timeReference", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_timeReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoTimeReference)>(&::UnityEngine::Video::VideoPlayer::set_timeReference)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e337d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_timeReference", {}, { ::i2c::type_of<::UnityEngine::Video::VideoTimeReference>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_externalReferenceTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_externalReferenceTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e338a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_externalReferenceTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_externalReferenceTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(double_t)>(&::UnityEngine::Video::VideoPlayer::set_externalReferenceTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e33960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_externalReferenceTime", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canSetSkipOnDrop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_canSetSkipOnDrop)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e33a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canSetSkipOnDrop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_skipOnDrop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_skipOnDrop)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e33af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_skipOnDrop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_skipOnDrop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(bool)>(&::UnityEngine::Video::VideoPlayer::set_skipOnDrop)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e33bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_skipOnDrop", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_frameCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_frameCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e33c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_frameCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_frameRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_frameRate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e33d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_frameRate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_length)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e33e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_width
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_width)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e33ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_width", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_height
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_height)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e33f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_height", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_pixelAspectRatioNumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_pixelAspectRatioNumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e34034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_pixelAspectRatioNumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_pixelAspectRatioDenominator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_pixelAspectRatioDenominator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e340f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_pixelAspectRatioDenominator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_audioTrackCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_audioTrackCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e341ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_audioTrackCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetAudioLanguageCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Video::VideoPlayer::*)(uint16_t)>(&::UnityEngine::Video::VideoPlayer::GetAudioLanguageCode)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6e34268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "GetAudioLanguageCode", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetAudioChannelCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::UnityEngine::Video::VideoPlayer::*)(uint16_t)>(&::UnityEngine::Video::VideoPlayer::GetAudioChannelCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e343fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "GetAudioChannelCount", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetAudioSampleRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Video::VideoPlayer::*)(uint16_t)>(&::UnityEngine::Video::VideoPlayer::GetAudioSampleRate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e344d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "GetAudioSampleRate", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_controlledAudioTrackMaxCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)()>(&::UnityEngine::Video::VideoPlayer::get_controlledAudioTrackMaxCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e345a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_controlledAudioTrackMaxCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_controlledAudioTrackCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_controlledAudioTrackCount)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e345cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_controlledAudioTrackCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_controlledAudioTrackCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(uint16_t)>(&::UnityEngine::Video::VideoPlayer::set_controlledAudioTrackCount)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6e34650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_controlledAudioTrackCount", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetControlledAudioTrackCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::GetControlledAudioTrackCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e345d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "GetControlledAudioTrackCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.SetControlledAudioTrackCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(uint16_t)>(&::UnityEngine::Video::VideoPlayer::SetControlledAudioTrackCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e3472c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "SetControlledAudioTrackCount", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.EnableAudioTrack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(uint16_t, bool)>(&::UnityEngine::Video::VideoPlayer::EnableAudioTrack)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e3483c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "EnableAudioTrack", {}, { ::i2c::type_of<uint16_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.IsAudioTrackEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)(uint16_t)>(&::UnityEngine::Video::VideoPlayer::IsAudioTrackEnabled)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e34928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "IsAudioTrackEnabled", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_audioOutputMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Video::VideoAudioOutputMode (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_audioOutputMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e349fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_audioOutputMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_audioOutputMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoAudioOutputMode)>(
    &::UnityEngine::Video::VideoPlayer::set_audioOutputMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e34ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_audioOutputMode", {}, { ::i2c::type_of<::UnityEngine::Video::VideoAudioOutputMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canSetDirectAudioVolume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_canSetDirectAudioVolume)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e34b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canSetDirectAudioVolume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetDirectAudioVolume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Video::VideoPlayer::*)(uint16_t)>(&::UnityEngine::Video::VideoPlayer::GetDirectAudioVolume)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e34c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "GetDirectAudioVolume", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.SetDirectAudioVolume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(uint16_t, float_t)>(&::UnityEngine::Video::VideoPlayer::SetDirectAudioVolume)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e34d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "SetDirectAudioVolume", {}, { ::i2c::type_of<uint16_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetDirectAudioMute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)(uint16_t)>(&::UnityEngine::Video::VideoPlayer::GetDirectAudioMute)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e34e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "GetDirectAudioMute", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.SetDirectAudioMute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(uint16_t, bool)>(&::UnityEngine::Video::VideoPlayer::SetDirectAudioMute)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e34ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "SetDirectAudioMute", {}, { ::i2c::type_of<uint16_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetTargetAudioSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioSource> (::UnityEngine::Video::VideoPlayer::*)(uint16_t)>(
    &::UnityEngine::Video::VideoPlayer::GetTargetAudioSource)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6e34fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "GetTargetAudioSource", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.SetTargetAudioSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(uint16_t, ::UnityEngine::AudioSource*)>(&::UnityEngine::Video::VideoPlayer::SetTargetAudioSource)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6e3516c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "SetTargetAudioSource", {}, { ::i2c::type_of<uint16_t>(), ::i2c::type_of<::UnityEngine::AudioSource*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.add_prepareCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_EventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::add_prepareCompleted)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e35288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                           { "add_prepareCompleted", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_EventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.remove_prepareCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_EventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::remove_prepareCompleted)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e35334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                           { "remove_prepareCompleted", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_EventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.add_loopPointReached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_EventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::add_loopPointReached)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e353e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                           { "add_loopPointReached", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_EventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.remove_loopPointReached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_EventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::remove_loopPointReached)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e3548c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                           { "remove_loopPointReached", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_EventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.add_started
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_EventHandler*)>(&::UnityEngine::Video::VideoPlayer::add_started)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e35538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "add_started", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_EventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.remove_started
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_EventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::remove_started)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e355e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "remove_started", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_EventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.add_frameDropped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_EventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::add_frameDropped)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e35690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "add_frameDropped", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_EventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.remove_frameDropped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_EventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::remove_frameDropped)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e3573c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "remove_frameDropped", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_EventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.add_errorReceived
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_ErrorEventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::add_errorReceived)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e357e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                           { "add_errorReceived", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_ErrorEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.remove_errorReceived
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_ErrorEventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::remove_errorReceived)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e35894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "remove_errorReceived", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_ErrorEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.add_seekCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_EventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::add_seekCompleted)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e35940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "add_seekCompleted", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_EventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.remove_seekCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_EventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::remove_seekCompleted)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e359ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                           { "remove_seekCompleted", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_EventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.add_clockResyncOccurred
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_TimeEventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::add_clockResyncOccurred)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e35a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "add_clockResyncOccurred", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_TimeEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.remove_clockResyncOccurred
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_TimeEventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::remove_clockResyncOccurred)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e35b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "remove_clockResyncOccurred", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_TimeEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_sendFrameReadyEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_sendFrameReadyEvents)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e35bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_sendFrameReadyEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_sendFrameReadyEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(bool)>(&::UnityEngine::Video::VideoPlayer::set_sendFrameReadyEvents)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e35cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_sendFrameReadyEvents", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.add_frameReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::add_frameReady)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e35d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                           { "add_frameReady", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.remove_frameReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::remove_frameReady)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e35e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "remove_frameReady", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokePrepareCompletedCallback_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*)>(&::UnityEngine::Video::VideoPlayer::InvokePrepareCompletedCallback_Internal)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6e35ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "InvokePrepareCompletedCallback_Internal", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeFrameReadyCallback_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*, int64_t)>(&::UnityEngine::Video::VideoPlayer::InvokeFrameReadyCallback_Internal)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6e35f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                             { "InvokeFrameReadyCallback_Internal", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeLoopPointReachedCallback_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*)>(&::UnityEngine::Video::VideoPlayer::InvokeLoopPointReachedCallback_Internal)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6e35f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "InvokeLoopPointReachedCallback_Internal", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeStartedCallback_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*)>(&::UnityEngine::Video::VideoPlayer::InvokeStartedCallback_Internal)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6e35f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "InvokeStartedCallback_Internal", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeFrameDroppedCallback_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*)>(&::UnityEngine::Video::VideoPlayer::InvokeFrameDroppedCallback_Internal)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6e35f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                           { "InvokeFrameDroppedCallback_Internal", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeErrorReceivedCallback_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*, ::StringW)>(&::UnityEngine::Video::VideoPlayer::InvokeErrorReceivedCallback_Internal)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6e35fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                             { "InvokeErrorReceivedCallback_Internal", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeSeekCompletedCallback_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*)>(&::UnityEngine::Video::VideoPlayer::InvokeSeekCompletedCallback_Internal)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6e35ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                           { "InvokeSeekCompletedCallback_Internal", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeClockResyncOccurredCallback_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*, double_t)>(&::UnityEngine::Video::VideoPlayer::InvokeClockResyncOccurredCallback_Internal)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6e3601c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                { "InvokeClockResyncOccurredCallback_Internal", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer*>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e36048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_source_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Video::VideoSource (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_source_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e306d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_source_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_source_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Video::VideoSource)>(&::UnityEngine::Video::VideoPlayer::set_source_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e3079c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                             { "set_source_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Video::VideoSource>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_timeUpdateMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Video::VideoTimeUpdateMode (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_timeUpdateMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e30860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_timeUpdateMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_timeUpdateMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Video::VideoTimeUpdateMode)>(&::UnityEngine::Video::VideoPlayer::set_timeUpdateMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e3092c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                { "set_timeUpdateMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Video::VideoTimeUpdateMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_url_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Video::VideoPlayer::get_url_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e30aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                { "get_url_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_url_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Video::VideoPlayer::set_url_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e30c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                { "set_url_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_clip_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_clip_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e30de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_clip_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_clip_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::set_clip_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e30ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                           { "set_clip_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_renderMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Video::VideoRenderMode (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_renderMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e30fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_renderMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_renderMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Video::VideoRenderMode)>(&::UnityEngine::Video::VideoPlayer::set_renderMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e31070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                             { "set_renderMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Video::VideoRenderMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canSetTimeUpdateMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_canSetTimeUpdateMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e31134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canSetTimeUpdateMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_targetCamera_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_targetCamera_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e312c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_targetCamera_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_targetCamera_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::set_targetCamera_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e313bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_targetCamera_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_targetTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_targetTexture_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e31550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_targetTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_targetTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::set_targetTexture_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e3164c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_targetTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_targetMaterialRenderer_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_targetMaterialRenderer_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e317e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_targetMaterialRenderer_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_targetMaterialRenderer_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::set_targetMaterialRenderer_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e318dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                             { "set_targetMaterialRenderer_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_targetMaterialProperty_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Video::VideoPlayer::get_targetMaterialProperty_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e31a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                            { "get_targetMaterialProperty_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_targetMaterialProperty_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Video::VideoPlayer::set_targetMaterialProperty_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e31c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                            { "set_targetMaterialProperty_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_aspectRatio_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Video::VideoAspectRatio (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_aspectRatio_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e31cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_aspectRatio_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_aspectRatio_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Video::VideoAspectRatio)>(&::UnityEngine::Video::VideoPlayer::set_aspectRatio_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e31d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                             { "set_aspectRatio_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Video::VideoAspectRatio>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_targetCameraAlpha_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_targetCameraAlpha_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e31e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_targetCameraAlpha_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_targetCameraAlpha_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Video::VideoPlayer::set_targetCameraAlpha_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e31f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_targetCameraAlpha_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_targetCamera3DLayout_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Video::Video3DLayout (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_targetCamera3DLayout_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e31fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_targetCamera3DLayout_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_targetCamera3DLayout_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Video::Video3DLayout)>(&::UnityEngine::Video::VideoPlayer::set_targetCamera3DLayout_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e320b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                { "set_targetCamera3DLayout_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Video::Video3DLayout>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_texture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_texture_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e3224c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_texture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.Prepare_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::Prepare_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e32308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "Prepare_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_isPrepared_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_isPrepared_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e323c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_isPrepared_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_waitForFirstFrame_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_waitForFirstFrame_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e32480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_waitForFirstFrame_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_waitForFirstFrame_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Video::VideoPlayer::set_waitForFirstFrame_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e3254c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                           { "set_waitForFirstFrame_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_playOnAwake_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_playOnAwake_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e32610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_playOnAwake_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_playOnAwake_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Video::VideoPlayer::set_playOnAwake_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e326dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_playOnAwake_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.Play_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::Play_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e327a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "Play_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.Pause_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::Pause_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e3285c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "Pause_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.Stop_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::Stop_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e32918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "Stop_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_isPlaying_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_isPlaying_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e329d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_isPlaying_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_isPaused_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_isPaused_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e32a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_isPaused_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canSetTime_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_canSetTime_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e32b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canSetTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_time_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_time_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e32c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_time_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_time_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, double_t)>(&::UnityEngine::Video::VideoPlayer::set_time_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e32cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_time_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_frame_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_frame_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e32da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_frame_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_frame_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int64_t)>(&::UnityEngine::Video::VideoPlayer::set_frame_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e32e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_frame_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_clockTime_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_clockTime_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e32f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_clockTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canStep_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_canStep_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e32fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canStep_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.StepForward_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::StepForward_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e330a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "StepForward_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canSetPlaybackSpeed_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_canSetPlaybackSpeed_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e33164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canSetPlaybackSpeed_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_playbackSpeed_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_playbackSpeed_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e33220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_playbackSpeed_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_playbackSpeed_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Video::VideoPlayer::set_playbackSpeed_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e332ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                           { "set_playbackSpeed_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_isLooping_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_isLooping_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e333b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_isLooping_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_isLooping_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Video::VideoPlayer::set_isLooping_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e33484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_isLooping_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canSetTimeSource_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_canSetTimeSource_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e33548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canSetTimeSource_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_timeSource_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Video::VideoTimeSource (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_timeSource_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e33604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_timeSource_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_timeSource_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Video::VideoTimeSource)>(&::UnityEngine::Video::VideoPlayer::set_timeSource_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e336d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                             { "set_timeSource_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Video::VideoTimeSource>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_timeReference_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Video::VideoTimeReference (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_timeReference_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e33794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_timeReference_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_timeReference_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Video::VideoTimeReference)>(&::UnityEngine::Video::VideoPlayer::set_timeReference_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e33860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                { "set_timeReference_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Video::VideoTimeReference>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_externalReferenceTime_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_externalReferenceTime_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e33924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_externalReferenceTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_externalReferenceTime_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, double_t)>(&::UnityEngine::Video::VideoPlayer::set_externalReferenceTime_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e339f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_externalReferenceTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canSetSkipOnDrop_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_canSetSkipOnDrop_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e33abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canSetSkipOnDrop_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_skipOnDrop_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_skipOnDrop_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e33b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_skipOnDrop_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_skipOnDrop_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Video::VideoPlayer::set_skipOnDrop_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e33c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_skipOnDrop_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_frameCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_frameCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e33d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_frameCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_frameRate_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_frameRate_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e33dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_frameRate_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_length_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_length_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e33e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_length_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_width_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_width_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e33f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_width_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_height_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_height_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e33ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_height_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_pixelAspectRatioNumerator_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_pixelAspectRatioNumerator_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e340b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_pixelAspectRatioNumerator_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_pixelAspectRatioDenominator_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_pixelAspectRatioDenominator_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e34170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_pixelAspectRatioDenominator_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_audioTrackCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_audioTrackCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e3422c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_audioTrackCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetAudioLanguageCode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint16_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Video::VideoPlayer::GetAudioLanguageCode_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e343a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
            { "GetAudioLanguageCode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetAudioChannelCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::System::IntPtr, uint16_t)>(&::UnityEngine::Video::VideoPlayer::GetAudioChannelCount_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e3448c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "GetAudioChannelCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetAudioSampleRate_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr, uint16_t)>(&::UnityEngine::Video::VideoPlayer::GetAudioSampleRate_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e34560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                           { "GetAudioSampleRate_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetControlledAudioTrackCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::GetControlledAudioTrackCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e347bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "GetControlledAudioTrackCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.SetControlledAudioTrackCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint16_t)>(&::UnityEngine::Video::VideoPlayer::SetControlledAudioTrackCount_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e347f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                             { "SetControlledAudioTrackCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.EnableAudioTrack_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint16_t, bool)>(&::UnityEngine::Video::VideoPlayer::EnableAudioTrack_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e348d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                             { "EnableAudioTrack_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.IsAudioTrackEnabled_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, uint16_t)>(&::UnityEngine::Video::VideoPlayer::IsAudioTrackEnabled_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e349b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "IsAudioTrackEnabled_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_audioOutputMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Video::VideoAudioOutputMode (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_audioOutputMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e34a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_audioOutputMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_audioOutputMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Video::VideoAudioOutputMode)>(&::UnityEngine::Video::VideoPlayer::set_audioOutputMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e34b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                { "set_audioOutputMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Video::VideoAudioOutputMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canSetDirectAudioVolume_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_canSetDirectAudioVolume_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e34c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canSetDirectAudioVolume_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetDirectAudioVolume_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, uint16_t)>(&::UnityEngine::Video::VideoPlayer::GetDirectAudioVolume_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e34cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "GetDirectAudioVolume_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.SetDirectAudioVolume_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint16_t, float_t)>(&::UnityEngine::Video::VideoPlayer::SetDirectAudioVolume_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e34dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                             { "SetDirectAudioVolume_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetDirectAudioMute_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, uint16_t)>(&::UnityEngine::Video::VideoPlayer::GetDirectAudioMute_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e34ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                           { "GetDirectAudioMute_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.SetDirectAudioMute_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint16_t, bool)>(&::UnityEngine::Video::VideoPlayer::SetDirectAudioMute_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e34f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                             { "SetDirectAudioMute_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetTargetAudioSource_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, uint16_t)>(&::UnityEngine::Video::VideoPlayer::GetTargetAudioSource_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e35128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "GetTargetAudioSource_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.SetTargetAudioSource_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint16_t, ::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::SetTargetAudioSource_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e35234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                { "SetTargetAudioSource_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_sendFrameReadyEvents_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_sendFrameReadyEvents_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e35c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_sendFrameReadyEvents_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_sendFrameReadyEvents_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Video::VideoPlayer::set_sendFrameReadyEvents_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e35d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_sendFrameReadyEvents_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& UnityEngine::Video::VideoPlayer::__cordl_internal_get_prepareCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prepareCompleted;
}
constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& UnityEngine::Video::VideoPlayer::__cordl_internal_get_prepareCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prepareCompleted;
}
constexpr void UnityEngine::Video::VideoPlayer::__cordl_internal_set_prepareCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prepareCompleted = value;
}
constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& UnityEngine::Video::VideoPlayer::__cordl_internal_get_loopPointReached() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loopPointReached;
}
constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& UnityEngine::Video::VideoPlayer::__cordl_internal_get_loopPointReached() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loopPointReached;
}
constexpr void UnityEngine::Video::VideoPlayer::__cordl_internal_set_loopPointReached(::UnityEngine::Video::VideoPlayer_EventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loopPointReached = value;
}
constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& UnityEngine::Video::VideoPlayer::__cordl_internal_get_started() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___started;
}
constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& UnityEngine::Video::VideoPlayer::__cordl_internal_get_started() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___started;
}
constexpr void UnityEngine::Video::VideoPlayer::__cordl_internal_set_started(::UnityEngine::Video::VideoPlayer_EventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___started = value;
}
constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& UnityEngine::Video::VideoPlayer::__cordl_internal_get_frameDropped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frameDropped;
}
constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& UnityEngine::Video::VideoPlayer::__cordl_internal_get_frameDropped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frameDropped;
}
constexpr void UnityEngine::Video::VideoPlayer::__cordl_internal_set_frameDropped(::UnityEngine::Video::VideoPlayer_EventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___frameDropped = value;
}
constexpr ::UnityEngine::Video::VideoPlayer_ErrorEventHandler*& UnityEngine::Video::VideoPlayer::__cordl_internal_get_errorReceived() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorReceived;
}
constexpr ::UnityEngine::Video::VideoPlayer_ErrorEventHandler* const& UnityEngine::Video::VideoPlayer::__cordl_internal_get_errorReceived() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorReceived;
}
constexpr void UnityEngine::Video::VideoPlayer::__cordl_internal_set_errorReceived(::UnityEngine::Video::VideoPlayer_ErrorEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___errorReceived = value;
}
constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& UnityEngine::Video::VideoPlayer::__cordl_internal_get_seekCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seekCompleted;
}
constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& UnityEngine::Video::VideoPlayer::__cordl_internal_get_seekCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seekCompleted;
}
constexpr void UnityEngine::Video::VideoPlayer::__cordl_internal_set_seekCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___seekCompleted = value;
}
constexpr ::UnityEngine::Video::VideoPlayer_TimeEventHandler*& UnityEngine::Video::VideoPlayer::__cordl_internal_get_clockResyncOccurred() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clockResyncOccurred;
}
constexpr ::UnityEngine::Video::VideoPlayer_TimeEventHandler* const& UnityEngine::Video::VideoPlayer::__cordl_internal_get_clockResyncOccurred() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clockResyncOccurred;
}
constexpr void UnityEngine::Video::VideoPlayer::__cordl_internal_set_clockResyncOccurred(::UnityEngine::Video::VideoPlayer_TimeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clockResyncOccurred = value;
}
constexpr ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*& UnityEngine::Video::VideoPlayer::__cordl_internal_get_frameReady() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frameReady;
}
constexpr ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* const& UnityEngine::Video::VideoPlayer::__cordl_internal_get_frameReady() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frameReady;
}
constexpr void UnityEngine::Video::VideoPlayer::__cordl_internal_set_frameReady(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___frameReady = value;
}
inline ::UnityEngine::Video::VideoSource UnityEngine::Video::VideoPlayer::get_source() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_source", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoSource>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_source(::UnityEngine::Video::VideoSource value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_source", {}, { ::i2c::type_of<::UnityEngine::Video::VideoSource>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Video::VideoTimeUpdateMode UnityEngine::Video::VideoPlayer::get_timeUpdateMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_timeUpdateMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoTimeUpdateMode>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_timeUpdateMode(::UnityEngine::Video::VideoTimeUpdateMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_timeUpdateMode", {}, { ::i2c::type_of<::UnityEngine::Video::VideoTimeUpdateMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Video::VideoPlayer::get_url() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_url", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_url(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_url", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Video::VideoClip> UnityEngine::Video::VideoPlayer::get_clip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_clip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Video::VideoClip>>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_clip(::UnityEngine::Video::VideoClip* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_clip", {}, { ::i2c::type_of<::UnityEngine::Video::VideoClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Video::VideoRenderMode UnityEngine::Video::VideoPlayer::get_renderMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_renderMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoRenderMode>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_renderMode(::UnityEngine::Video::VideoRenderMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_renderMode", {}, { ::i2c::type_of<::UnityEngine::Video::VideoRenderMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Video::VideoPlayer::get_canSetTimeUpdateMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canSetTimeUpdateMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::Video::VideoPlayer::get_targetCamera() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_targetCamera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_targetCamera(::UnityEngine::Camera* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_targetCamera", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::Video::VideoPlayer::get_targetTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_targetTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_targetTexture(::UnityEngine::RenderTexture* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_targetTexture", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Renderer> UnityEngine::Video::VideoPlayer::get_targetMaterialRenderer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_targetMaterialRenderer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Renderer>>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_targetMaterialRenderer(::UnityEngine::Renderer* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_targetMaterialRenderer", {}, { ::i2c::type_of<::UnityEngine::Renderer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Video::VideoPlayer::get_targetMaterialProperty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_targetMaterialProperty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_targetMaterialProperty(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_targetMaterialProperty", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Video::VideoAspectRatio UnityEngine::Video::VideoPlayer::get_aspectRatio() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_aspectRatio", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoAspectRatio>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_aspectRatio(::UnityEngine::Video::VideoAspectRatio value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_aspectRatio", {}, { ::i2c::type_of<::UnityEngine::Video::VideoAspectRatio>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Video::VideoPlayer::get_targetCameraAlpha() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_targetCameraAlpha", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_targetCameraAlpha(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_targetCameraAlpha", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Video::Video3DLayout UnityEngine::Video::VideoPlayer::get_targetCamera3DLayout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_targetCamera3DLayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::Video3DLayout>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_targetCamera3DLayout(::UnityEngine::Video::Video3DLayout value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_targetCamera3DLayout", {}, { ::i2c::type_of<::UnityEngine::Video::Video3DLayout>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Video::VideoPlayer::get_texture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_texture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::Prepare() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "Prepare", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Video::VideoPlayer::get_isPrepared() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_isPrepared", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Video::VideoPlayer::get_waitForFirstFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_waitForFirstFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_waitForFirstFrame(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_waitForFirstFrame", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Video::VideoPlayer::get_playOnAwake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_playOnAwake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_playOnAwake(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_playOnAwake", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::Play() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "Play", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::Pause() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "Pause", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::Stop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "Stop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Video::VideoPlayer::get_isPlaying() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_isPlaying", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Video::VideoPlayer::get_isPaused() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_isPaused", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Video::VideoPlayer::get_canSetTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canSetTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline double_t UnityEngine::Video::VideoPlayer::get_time() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_time", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_time(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_time", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t UnityEngine::Video::VideoPlayer::get_frame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_frame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_frame(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_frame", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t UnityEngine::Video::VideoPlayer::get_clockTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_clockTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline bool UnityEngine::Video::VideoPlayer::get_canStep() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canStep", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::StepForward() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "StepForward", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Video::VideoPlayer::get_canSetPlaybackSpeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canSetPlaybackSpeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::Video::VideoPlayer::get_playbackSpeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_playbackSpeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_playbackSpeed(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_playbackSpeed", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Video::VideoPlayer::get_isLooping() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_isLooping", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_isLooping(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_isLooping", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Video::VideoPlayer::get_canSetTimeSource() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canSetTimeSource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Video::VideoTimeSource UnityEngine::Video::VideoPlayer::get_timeSource() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_timeSource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoTimeSource>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_timeSource(::UnityEngine::Video::VideoTimeSource value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_timeSource", {}, { ::i2c::type_of<::UnityEngine::Video::VideoTimeSource>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Video::VideoTimeReference UnityEngine::Video::VideoPlayer::get_timeReference() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_timeReference", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoTimeReference>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_timeReference(::UnityEngine::Video::VideoTimeReference value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_timeReference", {}, { ::i2c::type_of<::UnityEngine::Video::VideoTimeReference>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t UnityEngine::Video::VideoPlayer::get_externalReferenceTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_externalReferenceTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_externalReferenceTime(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_externalReferenceTime", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Video::VideoPlayer::get_canSetSkipOnDrop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canSetSkipOnDrop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Video::VideoPlayer::get_skipOnDrop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_skipOnDrop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_skipOnDrop(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_skipOnDrop", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint64_t UnityEngine::Video::VideoPlayer::get_frameCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_frameCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline float_t UnityEngine::Video::VideoPlayer::get_frameRate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_frameRate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline double_t UnityEngine::Video::VideoPlayer::get_length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline uint32_t UnityEngine::Video::VideoPlayer::get_width() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_width", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline uint32_t UnityEngine::Video::VideoPlayer::get_height() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_height", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline uint32_t UnityEngine::Video::VideoPlayer::get_pixelAspectRatioNumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_pixelAspectRatioNumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline uint32_t UnityEngine::Video::VideoPlayer::get_pixelAspectRatioDenominator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_pixelAspectRatioDenominator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline uint16_t UnityEngine::Video::VideoPlayer::get_audioTrackCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_audioTrackCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline ::StringW UnityEngine::Video::VideoPlayer::GetAudioLanguageCode(uint16_t trackIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "GetAudioLanguageCode", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, trackIndex);
}
inline uint16_t UnityEngine::Video::VideoPlayer::GetAudioChannelCount(uint16_t trackIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "GetAudioChannelCount", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method, trackIndex);
}
inline uint32_t UnityEngine::Video::VideoPlayer::GetAudioSampleRate(uint16_t trackIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "GetAudioSampleRate", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, trackIndex);
}
inline uint16_t UnityEngine::Video::VideoPlayer::get_controlledAudioTrackMaxCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_controlledAudioTrackMaxCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method);
}
inline uint16_t UnityEngine::Video::VideoPlayer::get_controlledAudioTrackCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_controlledAudioTrackCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_controlledAudioTrackCount(uint16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_controlledAudioTrackCount", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint16_t UnityEngine::Video::VideoPlayer::GetControlledAudioTrackCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "GetControlledAudioTrackCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::SetControlledAudioTrackCount(uint16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "SetControlledAudioTrackCount", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::EnableAudioTrack(uint16_t trackIndex, bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "EnableAudioTrack", {}, { ::i2c::type_of<uint16_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackIndex, enabled);
}
inline bool UnityEngine::Video::VideoPlayer::IsAudioTrackEnabled(uint16_t trackIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "IsAudioTrackEnabled", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, trackIndex);
}
inline ::UnityEngine::Video::VideoAudioOutputMode UnityEngine::Video::VideoPlayer::get_audioOutputMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_audioOutputMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoAudioOutputMode>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_audioOutputMode(::UnityEngine::Video::VideoAudioOutputMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_audioOutputMode", {}, { ::i2c::type_of<::UnityEngine::Video::VideoAudioOutputMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Video::VideoPlayer::get_canSetDirectAudioVolume() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canSetDirectAudioVolume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::Video::VideoPlayer::GetDirectAudioVolume(uint16_t trackIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "GetDirectAudioVolume", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, trackIndex);
}
inline void UnityEngine::Video::VideoPlayer::SetDirectAudioVolume(uint16_t trackIndex, float_t volume) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "SetDirectAudioVolume", {}, { ::i2c::type_of<uint16_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackIndex, volume);
}
inline bool UnityEngine::Video::VideoPlayer::GetDirectAudioMute(uint16_t trackIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "GetDirectAudioMute", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, trackIndex);
}
inline void UnityEngine::Video::VideoPlayer::SetDirectAudioMute(uint16_t trackIndex, bool mute) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "SetDirectAudioMute", {}, { ::i2c::type_of<uint16_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackIndex, mute);
}
inline ::UnityW<::UnityEngine::AudioSource> UnityEngine::Video::VideoPlayer::GetTargetAudioSource(uint16_t trackIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "GetTargetAudioSource", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>>(this, ___internal_method, trackIndex);
}
inline void UnityEngine::Video::VideoPlayer::SetTargetAudioSource(uint16_t trackIndex, ::UnityEngine::AudioSource* source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "SetTargetAudioSource", {}, { ::i2c::type_of<uint16_t>(), ::i2c::type_of<::UnityEngine::AudioSource*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackIndex, source);
}
inline void UnityEngine::Video::VideoPlayer::add_prepareCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "add_prepareCompleted", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_EventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::remove_prepareCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                         { "remove_prepareCompleted", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_EventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::add_loopPointReached(::UnityEngine::Video::VideoPlayer_EventHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "add_loopPointReached", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_EventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::remove_loopPointReached(::UnityEngine::Video::VideoPlayer_EventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                         { "remove_loopPointReached", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_EventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::add_started(::UnityEngine::Video::VideoPlayer_EventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "add_started", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_EventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::remove_started(::UnityEngine::Video::VideoPlayer_EventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "remove_started", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_EventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::add_frameDropped(::UnityEngine::Video::VideoPlayer_EventHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "add_frameDropped", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_EventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::remove_frameDropped(::UnityEngine::Video::VideoPlayer_EventHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "remove_frameDropped", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_EventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::add_errorReceived(::UnityEngine::Video::VideoPlayer_ErrorEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                         { "add_errorReceived", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_ErrorEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::remove_errorReceived(::UnityEngine::Video::VideoPlayer_ErrorEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                         { "remove_errorReceived", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_ErrorEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::add_seekCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "add_seekCompleted", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_EventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::remove_seekCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "remove_seekCompleted", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_EventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::add_clockResyncOccurred(::UnityEngine::Video::VideoPlayer_TimeEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "add_clockResyncOccurred", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_TimeEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::remove_clockResyncOccurred(::UnityEngine::Video::VideoPlayer_TimeEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "remove_clockResyncOccurred", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_TimeEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Video::VideoPlayer::get_sendFrameReadyEvents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_sendFrameReadyEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_sendFrameReadyEvents(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_sendFrameReadyEvents", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::add_frameReady(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                         { "add_frameReady", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::remove_frameReady(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "remove_frameReady", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::InvokePrepareCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer* source) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                         { "InvokePrepareCompletedCallback_Internal", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source);
}
inline void UnityEngine::Video::VideoPlayer::InvokeFrameReadyCallback_Internal(::UnityEngine::Video::VideoPlayer* source, int64_t frameIdx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                           { "InvokeFrameReadyCallback_Internal", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, frameIdx);
}
inline void UnityEngine::Video::VideoPlayer::InvokeLoopPointReachedCallback_Internal(::UnityEngine::Video::VideoPlayer* source) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                         { "InvokeLoopPointReachedCallback_Internal", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source);
}
inline void UnityEngine::Video::VideoPlayer::InvokeStartedCallback_Internal(::UnityEngine::Video::VideoPlayer* source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "InvokeStartedCallback_Internal", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source);
}
inline void UnityEngine::Video::VideoPlayer::InvokeFrameDroppedCallback_Internal(::UnityEngine::Video::VideoPlayer* source) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                         { "InvokeFrameDroppedCallback_Internal", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source);
}
inline void UnityEngine::Video::VideoPlayer::InvokeErrorReceivedCallback_Internal(::UnityEngine::Video::VideoPlayer* source, ::StringW errorStr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                           { "InvokeErrorReceivedCallback_Internal", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, errorStr);
}
inline void UnityEngine::Video::VideoPlayer::InvokeSeekCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer* source) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                         { "InvokeSeekCompletedCallback_Internal", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source);
}
inline void UnityEngine::Video::VideoPlayer::InvokeClockResyncOccurredCallback_Internal(::UnityEngine::Video::VideoPlayer* source, double_t seconds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                              { "InvokeClockResyncOccurredCallback_Internal", {}, { ::i2c::type_of<::UnityEngine::Video::VideoPlayer*>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, seconds);
}
inline void UnityEngine::Video::VideoPlayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Video::VideoSource UnityEngine::Video::VideoPlayer::get_source_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_source_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoSource>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_source_Injected(::System::IntPtr _unity_self, ::UnityEngine::Video::VideoSource value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                           { "set_source_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Video::VideoSource>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Video::VideoTimeUpdateMode UnityEngine::Video::VideoPlayer::get_timeUpdateMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_timeUpdateMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoTimeUpdateMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_timeUpdateMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Video::VideoTimeUpdateMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                              { "set_timeUpdateMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Video::VideoTimeUpdateMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Video::VideoPlayer::get_url_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                              { "get_url_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Video::VideoPlayer::set_url_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                              { "set_url_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::Video::VideoPlayer::get_clip_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_clip_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_clip_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                         { "set_clip_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Video::VideoRenderMode UnityEngine::Video::VideoPlayer::get_renderMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_renderMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoRenderMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_renderMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Video::VideoRenderMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                           { "set_renderMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Video::VideoRenderMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Video::VideoPlayer::get_canSetTimeUpdateMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canSetTimeUpdateMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::Video::VideoPlayer::get_targetCamera_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_targetCamera_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_targetCamera_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_targetCamera_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::Video::VideoPlayer::get_targetTexture_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_targetTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_targetTexture_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_targetTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::Video::VideoPlayer::get_targetMaterialRenderer_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_targetMaterialRenderer_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_targetMaterialRenderer_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                           { "set_targetMaterialRenderer_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Video::VideoPlayer::get_targetMaterialProperty_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                          { "get_targetMaterialProperty_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Video::VideoPlayer::set_targetMaterialProperty_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                          { "set_targetMaterialProperty_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Video::VideoAspectRatio UnityEngine::Video::VideoPlayer::get_aspectRatio_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_aspectRatio_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoAspectRatio>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_aspectRatio_Injected(::System::IntPtr _unity_self, ::UnityEngine::Video::VideoAspectRatio value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                           { "set_aspectRatio_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Video::VideoAspectRatio>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Video::VideoPlayer::get_targetCameraAlpha_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_targetCameraAlpha_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_targetCameraAlpha_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                         { "set_targetCameraAlpha_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Video::Video3DLayout UnityEngine::Video::VideoPlayer::get_targetCamera3DLayout_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_targetCamera3DLayout_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::Video3DLayout>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_targetCamera3DLayout_Injected(::System::IntPtr _unity_self, ::UnityEngine::Video::Video3DLayout value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                              { "set_targetCamera3DLayout_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Video::Video3DLayout>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::Video::VideoPlayer::get_texture_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_texture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::Prepare_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "Prepare_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Video::VideoPlayer::get_isPrepared_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_isPrepared_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Video::VideoPlayer::get_waitForFirstFrame_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_waitForFirstFrame_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_waitForFirstFrame_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                         { "set_waitForFirstFrame_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Video::VideoPlayer::get_playOnAwake_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_playOnAwake_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_playOnAwake_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_playOnAwake_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Video::VideoPlayer::Play_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "Play_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::Pause_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "Pause_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::Stop_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "Stop_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Video::VideoPlayer::get_isPlaying_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_isPlaying_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Video::VideoPlayer::get_isPaused_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_isPaused_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Video::VideoPlayer::get_canSetTime_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canSetTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline double_t UnityEngine::Video::VideoPlayer::get_time_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_time_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_time_Injected(::System::IntPtr _unity_self, double_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_time_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int64_t UnityEngine::Video::VideoPlayer::get_frame_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_frame_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_frame_Injected(::System::IntPtr _unity_self, int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_frame_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline double_t UnityEngine::Video::VideoPlayer::get_clockTime_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_clockTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Video::VideoPlayer::get_canStep_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canStep_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::StepForward_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "StepForward_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Video::VideoPlayer::get_canSetPlaybackSpeed_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canSetPlaybackSpeed_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline float_t UnityEngine::Video::VideoPlayer::get_playbackSpeed_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_playbackSpeed_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_playbackSpeed_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                         { "set_playbackSpeed_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Video::VideoPlayer::get_isLooping_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_isLooping_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_isLooping_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_isLooping_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Video::VideoPlayer::get_canSetTimeSource_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canSetTimeSource_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::Video::VideoTimeSource UnityEngine::Video::VideoPlayer::get_timeSource_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_timeSource_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoTimeSource>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_timeSource_Injected(::System::IntPtr _unity_self, ::UnityEngine::Video::VideoTimeSource value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                           { "set_timeSource_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Video::VideoTimeSource>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Video::VideoTimeReference UnityEngine::Video::VideoPlayer::get_timeReference_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_timeReference_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoTimeReference>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_timeReference_Injected(::System::IntPtr _unity_self, ::UnityEngine::Video::VideoTimeReference value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                           { "set_timeReference_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Video::VideoTimeReference>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline double_t UnityEngine::Video::VideoPlayer::get_externalReferenceTime_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_externalReferenceTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_externalReferenceTime_Injected(::System::IntPtr _unity_self, double_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_externalReferenceTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Video::VideoPlayer::get_canSetSkipOnDrop_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canSetSkipOnDrop_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Video::VideoPlayer::get_skipOnDrop_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_skipOnDrop_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_skipOnDrop_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "set_skipOnDrop_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline uint64_t UnityEngine::Video::VideoPlayer::get_frameCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_frameCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, _unity_self);
}
inline float_t UnityEngine::Video::VideoPlayer::get_frameRate_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_frameRate_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline double_t UnityEngine::Video::VideoPlayer::get_length_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_length_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, _unity_self);
}
inline uint32_t UnityEngine::Video::VideoPlayer::get_width_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_width_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, _unity_self);
}
inline uint32_t UnityEngine::Video::VideoPlayer::get_height_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_height_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, _unity_self);
}
inline uint32_t UnityEngine::Video::VideoPlayer::get_pixelAspectRatioNumerator_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_pixelAspectRatioNumerator_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, _unity_self);
}
inline uint32_t UnityEngine::Video::VideoPlayer::get_pixelAspectRatioDenominator_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_pixelAspectRatioDenominator_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, _unity_self);
}
inline uint16_t UnityEngine::Video::VideoPlayer::get_audioTrackCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_audioTrackCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::GetAudioLanguageCode_Injected(::System::IntPtr _unity_self, uint16_t trackIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
          { "GetAudioLanguageCode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, trackIndex, ret);
}
inline uint16_t UnityEngine::Video::VideoPlayer::GetAudioChannelCount_Injected(::System::IntPtr _unity_self, uint16_t trackIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                         { "GetAudioChannelCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, _unity_self, trackIndex);
}
inline uint32_t UnityEngine::Video::VideoPlayer::GetAudioSampleRate_Injected(::System::IntPtr _unity_self, uint16_t trackIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                         { "GetAudioSampleRate_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, _unity_self, trackIndex);
}
inline uint16_t UnityEngine::Video::VideoPlayer::GetControlledAudioTrackCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "GetControlledAudioTrackCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::SetControlledAudioTrackCount_Injected(::System::IntPtr _unity_self, uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "SetControlledAudioTrackCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Video::VideoPlayer::EnableAudioTrack_Injected(::System::IntPtr _unity_self, uint16_t trackIndex, bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                           { "EnableAudioTrack_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, trackIndex, enabled);
}
inline bool UnityEngine::Video::VideoPlayer::IsAudioTrackEnabled_Injected(::System::IntPtr _unity_self, uint16_t trackIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                         { "IsAudioTrackEnabled_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, trackIndex);
}
inline ::UnityEngine::Video::VideoAudioOutputMode UnityEngine::Video::VideoPlayer::get_audioOutputMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_audioOutputMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoAudioOutputMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_audioOutputMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Video::VideoAudioOutputMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                              { "set_audioOutputMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Video::VideoAudioOutputMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Video::VideoPlayer::get_canSetDirectAudioVolume_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_canSetDirectAudioVolume_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline float_t UnityEngine::Video::VideoPlayer::GetDirectAudioVolume_Injected(::System::IntPtr _unity_self, uint16_t trackIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                         { "GetDirectAudioVolume_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self, trackIndex);
}
inline void UnityEngine::Video::VideoPlayer::SetDirectAudioVolume_Injected(::System::IntPtr _unity_self, uint16_t trackIndex, float_t volume) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                           { "SetDirectAudioVolume_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, trackIndex, volume);
}
inline bool UnityEngine::Video::VideoPlayer::GetDirectAudioMute_Injected(::System::IntPtr _unity_self, uint16_t trackIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                         { "GetDirectAudioMute_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, trackIndex);
}
inline void UnityEngine::Video::VideoPlayer::SetDirectAudioMute_Injected(::System::IntPtr _unity_self, uint16_t trackIndex, bool mute) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                           { "SetDirectAudioMute_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, trackIndex, mute);
}
inline ::System::IntPtr UnityEngine::Video::VideoPlayer::GetTargetAudioSource_Injected(::System::IntPtr _unity_self, uint16_t trackIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                         { "GetTargetAudioSource_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, trackIndex);
}
inline void UnityEngine::Video::VideoPlayer::SetTargetAudioSource_Injected(::System::IntPtr _unity_self, uint16_t trackIndex, ::System::IntPtr source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                              { "SetTargetAudioSource_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, trackIndex, source);
}
inline bool UnityEngine::Video::VideoPlayer::get_sendFrameReadyEvents_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(), { "get_sendFrameReadyEvents_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_sendFrameReadyEvents_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                                                                                         { "set_sendFrameReadyEvents_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Video::VideoPlayer* UnityEngine::Video::VideoPlayer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Video::VideoPlayer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::VideoPlayer::VideoPlayer() {}
