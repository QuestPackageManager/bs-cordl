#pragma once
// IWYU pragma private; include "UnityEngine/Video/VideoPlayer.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer_EventHandler::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Video::VideoPlayer_EventHandler::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6c67688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer_EventHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer_EventHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer_EventHandler::*)(::UnityEngine::Video::VideoPlayer*)>(
    &::UnityEngine::Video::VideoPlayer_EventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c67704;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer_EventHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer_EventHandler*>::get(), 13));
    return ___internal_method;
  }
};
inline void UnityEngine::Video::VideoPlayer_EventHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer_EventHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Video::VideoPlayer_EventHandler::Invoke(::UnityEngine::Video::VideoPlayer* source) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer_EventHandler*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source);
}
inline ::UnityEngine::Video::VideoPlayer_EventHandler* UnityEngine::Video::VideoPlayer_EventHandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Video::VideoPlayer_EventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::VideoPlayer_EventHandler::VideoPlayer_EventHandler() {}
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer_ErrorEventHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer_ErrorEventHandler::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Video::VideoPlayer_ErrorEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c67718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer_ErrorEventHandler*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer_ErrorEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer_ErrorEventHandler::*)(::UnityEngine::Video::VideoPlayer*, ::StringW)>(
    &::UnityEngine::Video::VideoPlayer_ErrorEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c67798;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer_ErrorEventHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer_ErrorEventHandler*>::get(), 13));
    return ___internal_method;
  }
};
inline void UnityEngine::Video::VideoPlayer_ErrorEventHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer_ErrorEventHandler*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Video::VideoPlayer_ErrorEventHandler::Invoke(::UnityEngine::Video::VideoPlayer* source, ::StringW message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer_ErrorEventHandler*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, message);
}
inline ::UnityEngine::Video::VideoPlayer_ErrorEventHandler* UnityEngine::Video::VideoPlayer_ErrorEventHandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Video::VideoPlayer_ErrorEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::VideoPlayer_ErrorEventHandler::VideoPlayer_ErrorEventHandler() {}
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c677ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler::*)(::UnityEngine::Video::VideoPlayer*, int64_t)>(
    &::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c6782c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*>::get(), 13));
    return ___internal_method;
  }
};
inline void UnityEngine::Video::VideoPlayer_FrameReadyEventHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Video::VideoPlayer_FrameReadyEventHandler::Invoke(::UnityEngine::Video::VideoPlayer* source, int64_t frameIdx) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, frameIdx);
}
inline ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* UnityEngine::Video::VideoPlayer_FrameReadyEventHandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler::VideoPlayer_FrameReadyEventHandler() {}
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer_TimeEventHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer_TimeEventHandler::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Video::VideoPlayer_TimeEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c67840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer_TimeEventHandler*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer_TimeEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer_TimeEventHandler::*)(::UnityEngine::Video::VideoPlayer*, double_t)>(
    &::UnityEngine::Video::VideoPlayer_TimeEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c678c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer_TimeEventHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer_TimeEventHandler*>::get(), 13));
    return ___internal_method;
  }
};
inline void UnityEngine::Video::VideoPlayer_TimeEventHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer_TimeEventHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Video::VideoPlayer_TimeEventHandler::Invoke(::UnityEngine::Video::VideoPlayer* source, double_t seconds) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer_TimeEventHandler*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, seconds);
}
inline ::UnityEngine::Video::VideoPlayer_TimeEventHandler* UnityEngine::Video::VideoPlayer_TimeEventHandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Video::VideoPlayer_TimeEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::VideoPlayer_TimeEventHandler::VideoPlayer_TimeEventHandler() {}
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_source
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Video::VideoSource (::UnityEngine::Video::VideoPlayer::*)()>(
    &::UnityEngine::Video::VideoPlayer::get_source)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c61c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_source",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_source
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoSource)>(
    &::UnityEngine::Video::VideoPlayer::set_source)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c61d48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_source", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoSource>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_timeUpdateMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Video::VideoTimeUpdateMode (::UnityEngine::Video::VideoPlayer::*)()>(
    &::UnityEngine::Video::VideoPlayer::get_timeUpdateMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c61e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_timeUpdateMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_timeUpdateMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoTimeUpdateMode)>(
    &::UnityEngine::Video::VideoPlayer::set_timeUpdateMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c61ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_timeUpdateMode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoTimeUpdateMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_url
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_url)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6c61fac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_url",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_url
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::StringW)>(&::UnityEngine::Video::VideoPlayer::set_url)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6c62124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_url", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_clip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Video::VideoClip> (::UnityEngine::Video::VideoPlayer::*)()>(
    &::UnityEngine::Video::VideoPlayer::get_clip)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6c622d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_clip",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_clip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoClip*)>(
    &::UnityEngine::Video::VideoPlayer::set_clip)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6c6245c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_clip", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoClip*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_renderMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Video::VideoRenderMode (::UnityEngine::Video::VideoPlayer::*)()>(
    &::UnityEngine::Video::VideoPlayer::get_renderMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c62560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_renderMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_renderMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoRenderMode)>(
    &::UnityEngine::Video::VideoPlayer::set_renderMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c6261c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_renderMode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoRenderMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canSetTimeUpdateMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_canSetTimeUpdateMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c626f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                               "get_canSetTimeUpdateMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_targetCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::Video::VideoPlayer::*)()>(
    &::UnityEngine::Video::VideoPlayer::get_targetCamera)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6c627ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_targetCamera",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_targetCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Video::VideoPlayer::set_targetCamera)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6c62938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_targetCamera", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_targetTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::Video::VideoPlayer::*)()>(
    &::UnityEngine::Video::VideoPlayer::get_targetTexture)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6c62a3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_targetTexture",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_targetTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::RenderTexture*)>(
    &::UnityEngine::Video::VideoPlayer::set_targetTexture)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6c62bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_targetTexture", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_targetMaterialRenderer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Renderer> (::UnityEngine::Video::VideoPlayer::*)()>(
    &::UnityEngine::Video::VideoPlayer::get_targetMaterialRenderer)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6c62ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                               "get_targetMaterialRenderer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_targetMaterialRenderer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Renderer*)>(
    &::UnityEngine::Video::VideoPlayer::set_targetMaterialRenderer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6c62e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_targetMaterialRenderer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_targetMaterialProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_targetMaterialProperty)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6c62f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                               "get_targetMaterialProperty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_targetMaterialProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::StringW)>(
    &::UnityEngine::Video::VideoPlayer::set_targetMaterialProperty)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6c630d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_targetMaterialProperty",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_aspectRatio
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Video::VideoAspectRatio (::UnityEngine::Video::VideoPlayer::*)()>(
    &::UnityEngine::Video::VideoPlayer::get_aspectRatio)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c63280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_aspectRatio",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_aspectRatio
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoAspectRatio)>(
    &::UnityEngine::Video::VideoPlayer::set_aspectRatio)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c6333c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_aspectRatio", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoAspectRatio>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_targetCameraAlpha
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_targetCameraAlpha)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c63410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                               "get_targetCameraAlpha", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_targetCameraAlpha
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(float_t)>(&::UnityEngine::Video::VideoPlayer::set_targetCameraAlpha)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c634cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_targetCameraAlpha",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_targetCamera3DLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Video::Video3DLayout (::UnityEngine::Video::VideoPlayer::*)()>(
    &::UnityEngine::Video::VideoPlayer::get_targetCamera3DLayout)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c635a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                               "get_targetCamera3DLayout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_targetCamera3DLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::Video3DLayout)>(
    &::UnityEngine::Video::VideoPlayer::set_targetCamera3DLayout)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c63664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_targetCamera3DLayout", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::Video3DLayout>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_texture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::Video::VideoPlayer::*)()>(
    &::UnityEngine::Video::VideoPlayer::get_texture)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6c63738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_texture",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.Prepare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::Prepare)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c638c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "Prepare",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_isPrepared
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_isPrepared)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c63980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_isPrepared",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_waitForFirstFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_waitForFirstFrame)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c63a3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                               "get_waitForFirstFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_waitForFirstFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(bool)>(&::UnityEngine::Video::VideoPlayer::set_waitForFirstFrame)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c63af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_waitForFirstFrame",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_playOnAwake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_playOnAwake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c63bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_playOnAwake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_playOnAwake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(bool)>(&::UnityEngine::Video::VideoPlayer::set_playOnAwake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c63c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_playOnAwake",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.Play
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::Play)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c63d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "Play",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.Pause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::Pause)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c63e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "Pause",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.Stop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::Stop)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c63ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "Stop",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_isPlaying
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_isPlaying)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c63f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_isPlaying",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_isPaused
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_isPaused)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c6404c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_isPaused",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canSetTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_canSetTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c64108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_canSetTime",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_time
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_time)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c641c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_time",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_time
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(double_t)>(&::UnityEngine::Video::VideoPlayer::set_time)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c64280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_time", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_frame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_frame)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c6435c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_frame",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_frame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(int64_t)>(&::UnityEngine::Video::VideoPlayer::set_frame)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c64418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_frame", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_clockTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_clockTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c644ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_clockTime",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canStep
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_canStep)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c645a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_canStep",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.StepForward
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::StepForward)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c64664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "StepForward",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canSetPlaybackSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_canSetPlaybackSpeed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c64720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                               "get_canSetPlaybackSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_playbackSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_playbackSpeed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c647dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_playbackSpeed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_playbackSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(float_t)>(&::UnityEngine::Video::VideoPlayer::set_playbackSpeed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c64898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_playbackSpeed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_isLooping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_isLooping)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c64974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_isLooping",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_isLooping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(bool)>(&::UnityEngine::Video::VideoPlayer::set_isLooping)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c64a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_isLooping",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canSetTimeSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_canSetTimeSource)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c64b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                               "get_canSetTimeSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_timeSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Video::VideoTimeSource (::UnityEngine::Video::VideoPlayer::*)()>(
    &::UnityEngine::Video::VideoPlayer::get_timeSource)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c64bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_timeSource",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_timeSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoTimeSource)>(
    &::UnityEngine::Video::VideoPlayer::set_timeSource)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c64c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_timeSource", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoTimeSource>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_timeReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Video::VideoTimeReference (::UnityEngine::Video::VideoPlayer::*)()>(
    &::UnityEngine::Video::VideoPlayer::get_timeReference)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c64d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_timeReference",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_timeReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoTimeReference)>(
    &::UnityEngine::Video::VideoPlayer::set_timeReference)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c64e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_timeReference", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoTimeReference>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_externalReferenceTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_externalReferenceTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c64ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                               "get_externalReferenceTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_externalReferenceTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(double_t)>(
    &::UnityEngine::Video::VideoPlayer::set_externalReferenceTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c64f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_externalReferenceTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canSetSkipOnDrop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_canSetSkipOnDrop)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c65078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                               "get_canSetSkipOnDrop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_skipOnDrop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_skipOnDrop)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c65134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_skipOnDrop",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_skipOnDrop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(bool)>(&::UnityEngine::Video::VideoPlayer::set_skipOnDrop)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c651f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_skipOnDrop",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_frameCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_frameCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c652c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_frameCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_frameRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_frameRate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c65380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_frameRate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_length)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c6543c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_length",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_width
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_width)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c654f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_width",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_height
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_height)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c655b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_height",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_pixelAspectRatioNumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::Video::VideoPlayer::*)()>(
    &::UnityEngine::Video::VideoPlayer::get_pixelAspectRatioNumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c65670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                               "get_pixelAspectRatioNumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_pixelAspectRatioDenominator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::Video::VideoPlayer::*)()>(
    &::UnityEngine::Video::VideoPlayer::get_pixelAspectRatioDenominator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c6572c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_pixelAspectRatioDenominator",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_audioTrackCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_audioTrackCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c657e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_audioTrackCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetAudioLanguageCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Video::VideoPlayer::*)(uint16_t)>(
    &::UnityEngine::Video::VideoPlayer::GetAudioLanguageCode)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6c658a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "GetAudioLanguageCode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetAudioChannelCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::UnityEngine::Video::VideoPlayer::*)(uint16_t)>(
    &::UnityEngine::Video::VideoPlayer::GetAudioChannelCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c65a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "GetAudioChannelCount", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetAudioSampleRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::Video::VideoPlayer::*)(uint16_t)>(&::UnityEngine::Video::VideoPlayer::GetAudioSampleRate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c65b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "GetAudioSampleRate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_controlledAudioTrackMaxCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)()>(&::UnityEngine::Video::VideoPlayer::get_controlledAudioTrackMaxCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6c65be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_controlledAudioTrackMaxCount",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_controlledAudioTrackCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::UnityEngine::Video::VideoPlayer::*)()>(
    &::UnityEngine::Video::VideoPlayer::get_controlledAudioTrackCount)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c65c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                               "get_controlledAudioTrackCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_controlledAudioTrackCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(uint16_t)>(
    &::UnityEngine::Video::VideoPlayer::set_controlledAudioTrackCount)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6c65c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_controlledAudioTrackCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetControlledAudioTrackCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::UnityEngine::Video::VideoPlayer::*)()>(
    &::UnityEngine::Video::VideoPlayer::GetControlledAudioTrackCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c65c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                               "GetControlledAudioTrackCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.SetControlledAudioTrackCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(uint16_t)>(
    &::UnityEngine::Video::VideoPlayer::SetControlledAudioTrackCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c65d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "SetControlledAudioTrackCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.EnableAudioTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(uint16_t, bool)>(&::UnityEngine::Video::VideoPlayer::EnableAudioTrack)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6c65e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "EnableAudioTrack", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.IsAudioTrackEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)(uint16_t)>(&::UnityEngine::Video::VideoPlayer::IsAudioTrackEnabled)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c65f64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "IsAudioTrackEnabled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_audioOutputMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Video::VideoAudioOutputMode (::UnityEngine::Video::VideoPlayer::*)()>(
    &::UnityEngine::Video::VideoPlayer::get_audioOutputMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c66038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_audioOutputMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_audioOutputMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoAudioOutputMode)>(
    &::UnityEngine::Video::VideoPlayer::set_audioOutputMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c660f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_audioOutputMode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoAudioOutputMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canSetDirectAudioVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_canSetDirectAudioVolume)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c661c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                               "get_canSetDirectAudioVolume", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetDirectAudioVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Video::VideoPlayer::*)(uint16_t)>(&::UnityEngine::Video::VideoPlayer::GetDirectAudioVolume)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c66284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "GetDirectAudioVolume", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.SetDirectAudioVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(uint16_t, float_t)>(
    &::UnityEngine::Video::VideoPlayer::SetDirectAudioVolume)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6c66358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "SetDirectAudioVolume", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetDirectAudioMute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)(uint16_t)>(&::UnityEngine::Video::VideoPlayer::GetDirectAudioMute)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c6644c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "GetDirectAudioMute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.SetDirectAudioMute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(uint16_t, bool)>(
    &::UnityEngine::Video::VideoPlayer::SetDirectAudioMute)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6c66520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "SetDirectAudioMute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetTargetAudioSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioSource> (::UnityEngine::Video::VideoPlayer::*)(uint16_t)>(
    &::UnityEngine::Video::VideoPlayer::GetTargetAudioSource)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6c6660c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "GetTargetAudioSource", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.SetTargetAudioSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(uint16_t, ::UnityEngine::AudioSource*)>(
    &::UnityEngine::Video::VideoPlayer::SetTargetAudioSource)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6c667a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "SetTargetAudioSource", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.add_prepareCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_EventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::add_prepareCompleted)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c668c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "add_prepareCompleted", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_EventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.remove_prepareCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_EventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::remove_prepareCompleted)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c66970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "remove_prepareCompleted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_EventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.add_loopPointReached
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_EventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::add_loopPointReached)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c66a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "add_loopPointReached", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_EventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.remove_loopPointReached
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_EventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::remove_loopPointReached)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c66ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "remove_loopPointReached", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_EventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.add_started
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_EventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::add_started)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c66b74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "add_started", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_EventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.remove_started
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_EventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::remove_started)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c66c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "remove_started", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_EventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.add_frameDropped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_EventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::add_frameDropped)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c66ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "add_frameDropped", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_EventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.remove_frameDropped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_EventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::remove_frameDropped)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c66d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "remove_frameDropped", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_EventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.add_errorReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_ErrorEventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::add_errorReceived)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c66e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "add_errorReceived", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_ErrorEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.remove_errorReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_ErrorEventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::remove_errorReceived)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c66ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "remove_errorReceived", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_ErrorEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.add_seekCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_EventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::add_seekCompleted)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c66f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "add_seekCompleted", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_EventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.remove_seekCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_EventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::remove_seekCompleted)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c67028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "remove_seekCompleted", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_EventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.add_clockResyncOccurred
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_TimeEventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::add_clockResyncOccurred)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c670d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "add_clockResyncOccurred", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_TimeEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.remove_clockResyncOccurred
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_TimeEventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::remove_clockResyncOccurred)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c67180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "remove_clockResyncOccurred", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_TimeEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_sendFrameReadyEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_sendFrameReadyEvents)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c6722c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                               "get_sendFrameReadyEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_sendFrameReadyEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(bool)>(&::UnityEngine::Video::VideoPlayer::set_sendFrameReadyEvents)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c672e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_sendFrameReadyEvents",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.add_frameReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::add_frameReady)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c673bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "add_frameReady", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.remove_frameReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*)>(
    &::UnityEngine::Video::VideoPlayer::remove_frameReady)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c67468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "remove_frameReady", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokePrepareCompletedCallback_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*)>(
    &::UnityEngine::Video::VideoPlayer::InvokePrepareCompletedCallback_Internal)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6c67514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokePrepareCompletedCallback_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeFrameReadyCallback_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*, int64_t)>(
    &::UnityEngine::Video::VideoPlayer::InvokeFrameReadyCallback_Internal)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6c67540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeFrameReadyCallback_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeLoopPointReachedCallback_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*)>(
    &::UnityEngine::Video::VideoPlayer::InvokeLoopPointReachedCallback_Internal)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6c67574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeLoopPointReachedCallback_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeStartedCallback_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*)>(&::UnityEngine::Video::VideoPlayer::InvokeStartedCallback_Internal)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6c675a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeStartedCallback_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeFrameDroppedCallback_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*)>(
    &::UnityEngine::Video::VideoPlayer::InvokeFrameDroppedCallback_Internal)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6c675cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeFrameDroppedCallback_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeErrorReceivedCallback_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*, ::StringW)>(
    &::UnityEngine::Video::VideoPlayer::InvokeErrorReceivedCallback_Internal)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6c675f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeErrorReceivedCallback_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeSeekCompletedCallback_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*)>(
    &::UnityEngine::Video::VideoPlayer::InvokeSeekCompletedCallback_Internal)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6c6762c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeSeekCompletedCallback_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeClockResyncOccurredCallback_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*, double_t)>(
    &::UnityEngine::Video::VideoPlayer::InvokeClockResyncOccurredCallback_Internal)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6c67658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeClockResyncOccurredCallback_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c67684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_source_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Video::VideoSource (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_source_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c61d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_source_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_source_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Video::VideoSource)>(
    &::UnityEngine::Video::VideoPlayer::set_source_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c61dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_source_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoSource>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_timeUpdateMode_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Video::VideoTimeUpdateMode (*)(::System::IntPtr)>(
    &::UnityEngine::Video::VideoPlayer::get_timeUpdateMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c61e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_timeUpdateMode_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_timeUpdateMode_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Video::VideoTimeUpdateMode)>(
    &::UnityEngine::Video::VideoPlayer::set_timeUpdateMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c61f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_timeUpdateMode_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoTimeUpdateMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_url_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Video::VideoPlayer::get_url_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c620e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_url_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_url_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Video::VideoPlayer::set_url_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c6228c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_url_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_clip_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_clip_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c62420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_clip_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_clip_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::set_clip_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c6251c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_clip_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_renderMode_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Video::VideoRenderMode (*)(::System::IntPtr)>(
    &::UnityEngine::Video::VideoPlayer::get_renderMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c625e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_renderMode_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_renderMode_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Video::VideoRenderMode)>(
    &::UnityEngine::Video::VideoPlayer::set_renderMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c626ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_renderMode_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoRenderMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canSetTimeUpdateMode_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_canSetTimeUpdateMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c62770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_canSetTimeUpdateMode_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_targetCamera_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_targetCamera_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c628fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_targetCamera_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_targetCamera_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::set_targetCamera_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c629f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                               "set_targetCamera_Injected", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_targetTexture_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_targetTexture_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c62b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_targetTexture_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_targetTexture_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::set_targetTexture_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c62c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                               "set_targetTexture_Injected", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_targetMaterialRenderer_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_targetMaterialRenderer_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c62e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_targetMaterialRenderer_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_targetMaterialRenderer_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(
    &::UnityEngine::Video::VideoPlayer::set_targetMaterialRenderer_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c62f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                               "set_targetMaterialRenderer_Injected", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_targetMaterialProperty_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Video::VideoPlayer::get_targetMaterialProperty_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c63090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_targetMaterialProperty_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_targetMaterialProperty_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Video::VideoPlayer::set_targetMaterialProperty_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c6323c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_targetMaterialProperty_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_aspectRatio_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Video::VideoAspectRatio (*)(::System::IntPtr)>(
    &::UnityEngine::Video::VideoPlayer::get_aspectRatio_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c63300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_aspectRatio_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_aspectRatio_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Video::VideoAspectRatio)>(
    &::UnityEngine::Video::VideoPlayer::set_aspectRatio_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c633cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_aspectRatio_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoAspectRatio>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_targetCameraAlpha_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_targetCameraAlpha_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c63490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_targetCameraAlpha_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_targetCameraAlpha_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Video::VideoPlayer::set_targetCameraAlpha_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6c6355c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_targetCameraAlpha_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_targetCamera3DLayout_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Video::Video3DLayout (*)(::System::IntPtr)>(
    &::UnityEngine::Video::VideoPlayer::get_targetCamera3DLayout_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c63628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_targetCamera3DLayout_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_targetCamera3DLayout_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Video::Video3DLayout)>(
    &::UnityEngine::Video::VideoPlayer::set_targetCamera3DLayout_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c636f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_targetCamera3DLayout_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::Video3DLayout>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_texture_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_texture_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c63888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_texture_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.Prepare_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::Prepare_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c63944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "Prepare_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_isPrepared_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_isPrepared_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c63a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_isPrepared_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_waitForFirstFrame_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_waitForFirstFrame_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c63abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_waitForFirstFrame_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_waitForFirstFrame_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Video::VideoPlayer::set_waitForFirstFrame_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c63b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_waitForFirstFrame_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_playOnAwake_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_playOnAwake_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c63c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_playOnAwake_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_playOnAwake_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Video::VideoPlayer::set_playOnAwake_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c63d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_playOnAwake_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.Play_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::Play_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c63ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "Play_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.Pause_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::Pause_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c63e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "Pause_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.Stop_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::Stop_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c63f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "Stop_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_isPlaying_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_isPlaying_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c64010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_isPlaying_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_isPaused_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_isPaused_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c640cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_isPaused_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canSetTime_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_canSetTime_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c64188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_canSetTime_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_time_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_time_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c64244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_time_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_time_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, double_t)>(&::UnityEngine::Video::VideoPlayer::set_time_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6c64310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_time_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_frame_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_frame_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c643dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_frame_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_frame_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int64_t)>(&::UnityEngine::Video::VideoPlayer::set_frame_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c644a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_frame_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_clockTime_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_clockTime_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c6456c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_clockTime_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canStep_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_canStep_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c64628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_canStep_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.StepForward_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::StepForward_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c646e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "StepForward_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canSetPlaybackSpeed_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_canSetPlaybackSpeed_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c647a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_canSetPlaybackSpeed_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_playbackSpeed_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_playbackSpeed_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c6485c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_playbackSpeed_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_playbackSpeed_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Video::VideoPlayer::set_playbackSpeed_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6c64928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_playbackSpeed_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_isLooping_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_isLooping_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c649f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_isLooping_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_isLooping_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Video::VideoPlayer::set_isLooping_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c64ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_isLooping_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canSetTimeSource_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_canSetTimeSource_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c64b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_canSetTimeSource_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_timeSource_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Video::VideoTimeSource (*)(::System::IntPtr)>(
    &::UnityEngine::Video::VideoPlayer::get_timeSource_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c64c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_timeSource_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_timeSource_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Video::VideoTimeSource)>(
    &::UnityEngine::Video::VideoPlayer::set_timeSource_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c64d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_timeSource_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoTimeSource>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_timeReference_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Video::VideoTimeReference (*)(::System::IntPtr)>(
    &::UnityEngine::Video::VideoPlayer::get_timeReference_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c64dd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_timeReference_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_timeReference_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Video::VideoTimeReference)>(
    &::UnityEngine::Video::VideoPlayer::set_timeReference_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c64e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_timeReference_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoTimeReference>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_externalReferenceTime_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_externalReferenceTime_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c64f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_externalReferenceTime_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_externalReferenceTime_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, double_t)>(&::UnityEngine::Video::VideoPlayer::set_externalReferenceTime_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6c6502c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_externalReferenceTime_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canSetSkipOnDrop_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_canSetSkipOnDrop_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c650f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_canSetSkipOnDrop_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_skipOnDrop_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_skipOnDrop_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c651b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_skipOnDrop_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_skipOnDrop_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Video::VideoPlayer::set_skipOnDrop_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c65280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_skipOnDrop_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_frameCount_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_frameCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c65344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_frameCount_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_frameRate_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_frameRate_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c65400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_frameRate_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_length_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_length_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c654bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_length_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_width_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_width_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c65578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_width_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_height_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_height_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c65634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_height_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_pixelAspectRatioNumerator_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_pixelAspectRatioNumerator_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c656f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_pixelAspectRatioNumerator_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_pixelAspectRatioDenominator_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_pixelAspectRatioDenominator_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c657ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_pixelAspectRatioDenominator_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_audioTrackCount_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_audioTrackCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c65868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_audioTrackCount_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetAudioLanguageCode_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, uint16_t, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Video::VideoPlayer::GetAudioLanguageCode_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c659e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "GetAudioLanguageCode_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetAudioChannelCount_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(::System::IntPtr, uint16_t)>(&::UnityEngine::Video::VideoPlayer::GetAudioChannelCount_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c65ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "GetAudioChannelCount_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetAudioSampleRate_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::System::IntPtr, uint16_t)>(&::UnityEngine::Video::VideoPlayer::GetAudioSampleRate_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c65b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "GetAudioSampleRate_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetControlledAudioTrackCount_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::GetControlledAudioTrackCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c65df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "GetControlledAudioTrackCount_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.SetControlledAudioTrackCount_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, uint16_t)>(&::UnityEngine::Video::VideoPlayer::SetControlledAudioTrackCount_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c65e34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "SetControlledAudioTrackCount_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.EnableAudioTrack_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, uint16_t, bool)>(&::UnityEngine::Video::VideoPlayer::EnableAudioTrack_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c65f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "EnableAudioTrack_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.IsAudioTrackEnabled_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, uint16_t)>(&::UnityEngine::Video::VideoPlayer::IsAudioTrackEnabled_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c65ff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "IsAudioTrackEnabled_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_audioOutputMode_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Video::VideoAudioOutputMode (*)(::System::IntPtr)>(
    &::UnityEngine::Video::VideoPlayer::get_audioOutputMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c660b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_audioOutputMode_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_audioOutputMode_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Video::VideoAudioOutputMode)>(
    &::UnityEngine::Video::VideoPlayer::set_audioOutputMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c66184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_audioOutputMode_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoAudioOutputMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_canSetDirectAudioVolume_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_canSetDirectAudioVolume_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c66248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_canSetDirectAudioVolume_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetDirectAudioVolume_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::System::IntPtr, uint16_t)>(&::UnityEngine::Video::VideoPlayer::GetDirectAudioVolume_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c66314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "GetDirectAudioVolume_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.SetDirectAudioVolume_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, uint16_t, float_t)>(&::UnityEngine::Video::VideoPlayer::SetDirectAudioVolume_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c663f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "SetDirectAudioVolume_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetDirectAudioMute_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, uint16_t)>(&::UnityEngine::Video::VideoPlayer::GetDirectAudioMute_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c664dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "GetDirectAudioMute_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.SetDirectAudioMute_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, uint16_t, bool)>(&::UnityEngine::Video::VideoPlayer::SetDirectAudioMute_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c665b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "SetDirectAudioMute_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetTargetAudioSource_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, uint16_t)>(
    &::UnityEngine::Video::VideoPlayer::GetTargetAudioSource_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c66764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "GetTargetAudioSource_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.SetTargetAudioSource_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, uint16_t, ::System::IntPtr)>(
    &::UnityEngine::Video::VideoPlayer::SetTargetAudioSource_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c66870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "SetTargetAudioSource_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_sendFrameReadyEvents_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_sendFrameReadyEvents_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c672ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_sendFrameReadyEvents_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_sendFrameReadyEvents_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Video::VideoPlayer::set_sendFrameReadyEvents_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c67378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_sendFrameReadyEvents_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prepareCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___loopPointReached)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___started)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___frameDropped)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___errorReceived)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___seekCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clockResyncOccurred)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___frameReady)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Video::VideoSource UnityEngine::Video::VideoPlayer::get_source() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_source",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoSource, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_source(::UnityEngine::Video::VideoSource value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_source", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoSource>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Video::VideoTimeUpdateMode UnityEngine::Video::VideoPlayer::get_timeUpdateMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_timeUpdateMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoTimeUpdateMode, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_timeUpdateMode(::UnityEngine::Video::VideoTimeUpdateMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_timeUpdateMode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoTimeUpdateMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Video::VideoPlayer::get_url() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_url",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_url(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_url", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Video::VideoClip> UnityEngine::Video::VideoPlayer::get_clip() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_clip",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Video::VideoClip>, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_clip(::UnityEngine::Video::VideoClip* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_clip", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Video::VideoRenderMode UnityEngine::Video::VideoPlayer::get_renderMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_renderMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoRenderMode, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_renderMode(::UnityEngine::Video::VideoRenderMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_renderMode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoRenderMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Video::VideoPlayer::get_canSetTimeUpdateMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                             "get_canSetTimeUpdateMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::Video::VideoPlayer::get_targetCamera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_targetCamera",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_targetCamera(::UnityEngine::Camera* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_targetCamera", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::Video::VideoPlayer::get_targetTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_targetTexture",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_targetTexture(::UnityEngine::RenderTexture* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_targetTexture", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Renderer> UnityEngine::Video::VideoPlayer::get_targetMaterialRenderer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                             "get_targetMaterialRenderer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Renderer>, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_targetMaterialRenderer(::UnityEngine::Renderer* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_targetMaterialRenderer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Video::VideoPlayer::get_targetMaterialProperty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                             "get_targetMaterialProperty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_targetMaterialProperty(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_targetMaterialProperty",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Video::VideoAspectRatio UnityEngine::Video::VideoPlayer::get_aspectRatio() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_aspectRatio",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoAspectRatio, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_aspectRatio(::UnityEngine::Video::VideoAspectRatio value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_aspectRatio", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoAspectRatio>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Video::VideoPlayer::get_targetCameraAlpha() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_targetCameraAlpha",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_targetCameraAlpha(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_targetCameraAlpha",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Video::Video3DLayout UnityEngine::Video::VideoPlayer::get_targetCamera3DLayout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                             "get_targetCamera3DLayout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::Video3DLayout, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_targetCamera3DLayout(::UnityEngine::Video::Video3DLayout value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_targetCamera3DLayout", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::Video3DLayout>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Video::VideoPlayer::get_texture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_texture",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::Prepare() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "Prepare",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Video::VideoPlayer::get_isPrepared() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_isPrepared",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Video::VideoPlayer::get_waitForFirstFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_waitForFirstFrame",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_waitForFirstFrame(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_waitForFirstFrame",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Video::VideoPlayer::get_playOnAwake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_playOnAwake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_playOnAwake(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_playOnAwake",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::Play() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "Play",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::Pause() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "Pause",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::Stop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "Stop",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Video::VideoPlayer::get_isPlaying() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_isPlaying",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Video::VideoPlayer::get_isPaused() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_isPaused",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Video::VideoPlayer::get_canSetTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_canSetTime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline double_t UnityEngine::Video::VideoPlayer::get_time() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_time",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_time(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_time", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t UnityEngine::Video::VideoPlayer::get_frame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_frame",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_frame(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_frame", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t UnityEngine::Video::VideoPlayer::get_clockTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_clockTime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Video::VideoPlayer::get_canStep() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_canStep",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::StepForward() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "StepForward",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Video::VideoPlayer::get_canSetPlaybackSpeed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                             "get_canSetPlaybackSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t UnityEngine::Video::VideoPlayer::get_playbackSpeed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_playbackSpeed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_playbackSpeed(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_playbackSpeed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Video::VideoPlayer::get_isLooping() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_isLooping",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_isLooping(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_isLooping",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Video::VideoPlayer::get_canSetTimeSource() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_canSetTimeSource",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Video::VideoTimeSource UnityEngine::Video::VideoPlayer::get_timeSource() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_timeSource",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoTimeSource, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_timeSource(::UnityEngine::Video::VideoTimeSource value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_timeSource", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoTimeSource>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Video::VideoTimeReference UnityEngine::Video::VideoPlayer::get_timeReference() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_timeReference",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoTimeReference, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_timeReference(::UnityEngine::Video::VideoTimeReference value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_timeReference", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoTimeReference>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t UnityEngine::Video::VideoPlayer::get_externalReferenceTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                             "get_externalReferenceTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_externalReferenceTime(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_externalReferenceTime",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Video::VideoPlayer::get_canSetSkipOnDrop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_canSetSkipOnDrop",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Video::VideoPlayer::get_skipOnDrop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_skipOnDrop",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_skipOnDrop(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_skipOnDrop",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint64_t UnityEngine::Video::VideoPlayer::get_frameCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_frameCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Video::VideoPlayer::get_frameRate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_frameRate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline double_t UnityEngine::Video::VideoPlayer::get_length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_length",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline uint32_t UnityEngine::Video::VideoPlayer::get_width() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_width",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline uint32_t UnityEngine::Video::VideoPlayer::get_height() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_height",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline uint32_t UnityEngine::Video::VideoPlayer::get_pixelAspectRatioNumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                             "get_pixelAspectRatioNumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline uint32_t UnityEngine::Video::VideoPlayer::get_pixelAspectRatioDenominator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                             "get_pixelAspectRatioDenominator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline uint16_t UnityEngine::Video::VideoPlayer::get_audioTrackCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_audioTrackCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::Video::VideoPlayer::GetAudioLanguageCode(uint16_t trackIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "GetAudioLanguageCode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, trackIndex);
}
inline uint16_t UnityEngine::Video::VideoPlayer::GetAudioChannelCount(uint16_t trackIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "GetAudioChannelCount", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method, trackIndex);
}
inline uint32_t UnityEngine::Video::VideoPlayer::GetAudioSampleRate(uint16_t trackIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "GetAudioSampleRate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, trackIndex);
}
inline uint16_t UnityEngine::Video::VideoPlayer::get_controlledAudioTrackMaxCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                             "get_controlledAudioTrackMaxCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method);
}
inline uint16_t UnityEngine::Video::VideoPlayer::get_controlledAudioTrackCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                             "get_controlledAudioTrackCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_controlledAudioTrackCount(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_controlledAudioTrackCount",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint16_t UnityEngine::Video::VideoPlayer::GetControlledAudioTrackCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                             "GetControlledAudioTrackCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::SetControlledAudioTrackCount(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "SetControlledAudioTrackCount",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::EnableAudioTrack(uint16_t trackIndex, bool enabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "EnableAudioTrack", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trackIndex, enabled);
}
inline bool UnityEngine::Video::VideoPlayer::IsAudioTrackEnabled(uint16_t trackIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "IsAudioTrackEnabled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, trackIndex);
}
inline ::UnityEngine::Video::VideoAudioOutputMode UnityEngine::Video::VideoPlayer::get_audioOutputMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_audioOutputMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoAudioOutputMode, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_audioOutputMode(::UnityEngine::Video::VideoAudioOutputMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_audioOutputMode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoAudioOutputMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Video::VideoPlayer::get_canSetDirectAudioVolume() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                             "get_canSetDirectAudioVolume", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t UnityEngine::Video::VideoPlayer::GetDirectAudioVolume(uint16_t trackIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "GetDirectAudioVolume", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, trackIndex);
}
inline void UnityEngine::Video::VideoPlayer::SetDirectAudioVolume(uint16_t trackIndex, float_t volume) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "SetDirectAudioVolume", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trackIndex, volume);
}
inline bool UnityEngine::Video::VideoPlayer::GetDirectAudioMute(uint16_t trackIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "GetDirectAudioMute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, trackIndex);
}
inline void UnityEngine::Video::VideoPlayer::SetDirectAudioMute(uint16_t trackIndex, bool mute) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "SetDirectAudioMute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trackIndex, mute);
}
inline ::UnityW<::UnityEngine::AudioSource> UnityEngine::Video::VideoPlayer::GetTargetAudioSource(uint16_t trackIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "GetTargetAudioSource", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>, false>(this, ___internal_method, trackIndex);
}
inline void UnityEngine::Video::VideoPlayer::SetTargetAudioSource(uint16_t trackIndex, ::UnityEngine::AudioSource* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "SetTargetAudioSource", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trackIndex, source);
}
inline void UnityEngine::Video::VideoPlayer::add_prepareCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "add_prepareCompleted", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_EventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::remove_prepareCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "remove_prepareCompleted", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_EventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::add_loopPointReached(::UnityEngine::Video::VideoPlayer_EventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "add_loopPointReached", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_EventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::remove_loopPointReached(::UnityEngine::Video::VideoPlayer_EventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "remove_loopPointReached", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_EventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::add_started(::UnityEngine::Video::VideoPlayer_EventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "add_started", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_EventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::remove_started(::UnityEngine::Video::VideoPlayer_EventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "remove_started", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_EventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::add_frameDropped(::UnityEngine::Video::VideoPlayer_EventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "add_frameDropped", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_EventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::remove_frameDropped(::UnityEngine::Video::VideoPlayer_EventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "remove_frameDropped", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_EventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::add_errorReceived(::UnityEngine::Video::VideoPlayer_ErrorEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "add_errorReceived", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_ErrorEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::remove_errorReceived(::UnityEngine::Video::VideoPlayer_ErrorEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "remove_errorReceived", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_ErrorEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::add_seekCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "add_seekCompleted", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_EventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::remove_seekCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "remove_seekCompleted", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_EventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::add_clockResyncOccurred(::UnityEngine::Video::VideoPlayer_TimeEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "add_clockResyncOccurred", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_TimeEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::remove_clockResyncOccurred(::UnityEngine::Video::VideoPlayer_TimeEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "remove_clockResyncOccurred", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_TimeEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Video::VideoPlayer::get_sendFrameReadyEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                             "get_sendFrameReadyEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_sendFrameReadyEvents(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_sendFrameReadyEvents",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::add_frameReady(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "add_frameReady", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::remove_frameReady(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "remove_frameReady", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::InvokePrepareCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer* source) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokePrepareCompletedCallback_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source);
}
inline void UnityEngine::Video::VideoPlayer::InvokeFrameReadyCallback_Internal(::UnityEngine::Video::VideoPlayer* source, int64_t frameIdx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeFrameReadyCallback_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source, frameIdx);
}
inline void UnityEngine::Video::VideoPlayer::InvokeLoopPointReachedCallback_Internal(::UnityEngine::Video::VideoPlayer* source) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeLoopPointReachedCallback_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source);
}
inline void UnityEngine::Video::VideoPlayer::InvokeStartedCallback_Internal(::UnityEngine::Video::VideoPlayer* source) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeStartedCallback_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source);
}
inline void UnityEngine::Video::VideoPlayer::InvokeFrameDroppedCallback_Internal(::UnityEngine::Video::VideoPlayer* source) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeFrameDroppedCallback_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source);
}
inline void UnityEngine::Video::VideoPlayer::InvokeErrorReceivedCallback_Internal(::UnityEngine::Video::VideoPlayer* source, ::StringW errorStr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeErrorReceivedCallback_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source, errorStr);
}
inline void UnityEngine::Video::VideoPlayer::InvokeSeekCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer* source) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeSeekCompletedCallback_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source);
}
inline void UnityEngine::Video::VideoPlayer::InvokeClockResyncOccurredCallback_Internal(::UnityEngine::Video::VideoPlayer* source, double_t seconds) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeClockResyncOccurredCallback_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source, seconds);
}
inline void UnityEngine::Video::VideoPlayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Video::VideoSource UnityEngine::Video::VideoPlayer::get_source_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_source_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoSource, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_source_Injected(::System::IntPtr _unity_self, ::UnityEngine::Video::VideoSource value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_source_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoSource>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Video::VideoTimeUpdateMode UnityEngine::Video::VideoPlayer::get_timeUpdateMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_timeUpdateMode_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoTimeUpdateMode, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_timeUpdateMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Video::VideoTimeUpdateMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_timeUpdateMode_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoTimeUpdateMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Video::VideoPlayer::get_url_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_url_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Video::VideoPlayer::set_url_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_url_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::Video::VideoPlayer::get_clip_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_clip_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_clip_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_clip_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Video::VideoRenderMode UnityEngine::Video::VideoPlayer::get_renderMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_renderMode_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoRenderMode, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_renderMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Video::VideoRenderMode value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_renderMode_Injected", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoRenderMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Video::VideoPlayer::get_canSetTimeUpdateMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_canSetTimeUpdateMode_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::Video::VideoPlayer::get_targetCamera_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_targetCamera_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_targetCamera_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                             "set_targetCamera_Injected", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::Video::VideoPlayer::get_targetTexture_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_targetTexture_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_targetTexture_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                             "set_targetTexture_Injected", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::Video::VideoPlayer::get_targetMaterialRenderer_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_targetMaterialRenderer_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_targetMaterialRenderer_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                             "set_targetMaterialRenderer_Injected", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Video::VideoPlayer::get_targetMaterialProperty_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_targetMaterialProperty_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Video::VideoPlayer::set_targetMaterialProperty_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_targetMaterialProperty_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Video::VideoAspectRatio UnityEngine::Video::VideoPlayer::get_aspectRatio_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_aspectRatio_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoAspectRatio, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_aspectRatio_Injected(::System::IntPtr _unity_self, ::UnityEngine::Video::VideoAspectRatio value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_aspectRatio_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoAspectRatio>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Video::VideoPlayer::get_targetCameraAlpha_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_targetCameraAlpha_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_targetCameraAlpha_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_targetCameraAlpha_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Video::Video3DLayout UnityEngine::Video::VideoPlayer::get_targetCamera3DLayout_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_targetCamera3DLayout_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::Video3DLayout, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_targetCamera3DLayout_Injected(::System::IntPtr _unity_self, ::UnityEngine::Video::Video3DLayout value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_targetCamera3DLayout_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::Video3DLayout>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::Video::VideoPlayer::get_texture_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_texture_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::Prepare_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "Prepare_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Video::VideoPlayer::get_isPrepared_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_isPrepared_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Video::VideoPlayer::get_waitForFirstFrame_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_waitForFirstFrame_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_waitForFirstFrame_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_waitForFirstFrame_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Video::VideoPlayer::get_playOnAwake_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_playOnAwake_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_playOnAwake_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_playOnAwake_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Video::VideoPlayer::Play_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "Play_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::Pause_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "Pause_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::Stop_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "Stop_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Video::VideoPlayer::get_isPlaying_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_isPlaying_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Video::VideoPlayer::get_isPaused_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_isPaused_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Video::VideoPlayer::get_canSetTime_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_canSetTime_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
inline double_t UnityEngine::Video::VideoPlayer::get_time_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_time_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_time_Injected(::System::IntPtr _unity_self, double_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_time_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline int64_t UnityEngine::Video::VideoPlayer::get_frame_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_frame_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_frame_Injected(::System::IntPtr _unity_self, int64_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_frame_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline double_t UnityEngine::Video::VideoPlayer::get_clockTime_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_clockTime_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Video::VideoPlayer::get_canStep_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_canStep_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::StepForward_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "StepForward_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Video::VideoPlayer::get_canSetPlaybackSpeed_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_canSetPlaybackSpeed_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
inline float_t UnityEngine::Video::VideoPlayer::get_playbackSpeed_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_playbackSpeed_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_playbackSpeed_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_playbackSpeed_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Video::VideoPlayer::get_isLooping_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_isLooping_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_isLooping_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_isLooping_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Video::VideoPlayer::get_canSetTimeSource_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_canSetTimeSource_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::Video::VideoTimeSource UnityEngine::Video::VideoPlayer::get_timeSource_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_timeSource_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoTimeSource, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_timeSource_Injected(::System::IntPtr _unity_self, ::UnityEngine::Video::VideoTimeSource value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_timeSource_Injected", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoTimeSource>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Video::VideoTimeReference UnityEngine::Video::VideoPlayer::get_timeReference_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_timeReference_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoTimeReference, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_timeReference_Injected(::System::IntPtr _unity_self, ::UnityEngine::Video::VideoTimeReference value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_timeReference_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoTimeReference>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline double_t UnityEngine::Video::VideoPlayer::get_externalReferenceTime_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_externalReferenceTime_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_externalReferenceTime_Injected(::System::IntPtr _unity_self, double_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_externalReferenceTime_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Video::VideoPlayer::get_canSetSkipOnDrop_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_canSetSkipOnDrop_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Video::VideoPlayer::get_skipOnDrop_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_skipOnDrop_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_skipOnDrop_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_skipOnDrop_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline uint64_t UnityEngine::Video::VideoPlayer::get_frameCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_frameCount_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, _unity_self);
}
inline float_t UnityEngine::Video::VideoPlayer::get_frameRate_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_frameRate_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, _unity_self);
}
inline double_t UnityEngine::Video::VideoPlayer::get_length_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_length_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, _unity_self);
}
inline uint32_t UnityEngine::Video::VideoPlayer::get_width_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_width_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, _unity_self);
}
inline uint32_t UnityEngine::Video::VideoPlayer::get_height_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_height_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, _unity_self);
}
inline uint32_t UnityEngine::Video::VideoPlayer::get_pixelAspectRatioNumerator_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_pixelAspectRatioNumerator_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, _unity_self);
}
inline uint32_t UnityEngine::Video::VideoPlayer::get_pixelAspectRatioDenominator_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_pixelAspectRatioDenominator_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, _unity_self);
}
inline uint16_t UnityEngine::Video::VideoPlayer::get_audioTrackCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_audioTrackCount_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::GetAudioLanguageCode_Injected(::System::IntPtr _unity_self, uint16_t trackIndex, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "GetAudioLanguageCode_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, trackIndex, ret);
}
inline uint16_t UnityEngine::Video::VideoPlayer::GetAudioChannelCount_Injected(::System::IntPtr _unity_self, uint16_t trackIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "GetAudioChannelCount_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, _unity_self, trackIndex);
}
inline uint32_t UnityEngine::Video::VideoPlayer::GetAudioSampleRate_Injected(::System::IntPtr _unity_self, uint16_t trackIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "GetAudioSampleRate_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, _unity_self, trackIndex);
}
inline uint16_t UnityEngine::Video::VideoPlayer::GetControlledAudioTrackCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "GetControlledAudioTrackCount_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::SetControlledAudioTrackCount_Injected(::System::IntPtr _unity_self, uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "SetControlledAudioTrackCount_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Video::VideoPlayer::EnableAudioTrack_Injected(::System::IntPtr _unity_self, uint16_t trackIndex, bool enabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "EnableAudioTrack_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, trackIndex, enabled);
}
inline bool UnityEngine::Video::VideoPlayer::IsAudioTrackEnabled_Injected(::System::IntPtr _unity_self, uint16_t trackIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "IsAudioTrackEnabled_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self, trackIndex);
}
inline ::UnityEngine::Video::VideoAudioOutputMode UnityEngine::Video::VideoPlayer::get_audioOutputMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_audioOutputMode_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoAudioOutputMode, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_audioOutputMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Video::VideoAudioOutputMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_audioOutputMode_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoAudioOutputMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Video::VideoPlayer::get_canSetDirectAudioVolume_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_canSetDirectAudioVolume_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
inline float_t UnityEngine::Video::VideoPlayer::GetDirectAudioVolume_Injected(::System::IntPtr _unity_self, uint16_t trackIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "GetDirectAudioVolume_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, _unity_self, trackIndex);
}
inline void UnityEngine::Video::VideoPlayer::SetDirectAudioVolume_Injected(::System::IntPtr _unity_self, uint16_t trackIndex, float_t volume) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "SetDirectAudioVolume_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, trackIndex, volume);
}
inline bool UnityEngine::Video::VideoPlayer::GetDirectAudioMute_Injected(::System::IntPtr _unity_self, uint16_t trackIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "GetDirectAudioMute_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self, trackIndex);
}
inline void UnityEngine::Video::VideoPlayer::SetDirectAudioMute_Injected(::System::IntPtr _unity_self, uint16_t trackIndex, bool mute) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "SetDirectAudioMute_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, trackIndex, mute);
}
inline ::System::IntPtr UnityEngine::Video::VideoPlayer::GetTargetAudioSource_Injected(::System::IntPtr _unity_self, uint16_t trackIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "GetTargetAudioSource_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, _unity_self, trackIndex);
}
inline void UnityEngine::Video::VideoPlayer::SetTargetAudioSource_Injected(::System::IntPtr _unity_self, uint16_t trackIndex, ::System::IntPtr source) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "SetTargetAudioSource_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, trackIndex, source);
}
inline bool UnityEngine::Video::VideoPlayer::get_sendFrameReadyEvents_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_sendFrameReadyEvents_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_sendFrameReadyEvents_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_sendFrameReadyEvents_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Video::VideoPlayer* UnityEngine::Video::VideoPlayer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Video::VideoPlayer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::VideoPlayer::VideoPlayer() {}
