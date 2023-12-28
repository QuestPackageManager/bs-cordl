#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/Video/zzzz__VideoPlayer_def.hpp"
#include "UnityEngine/Video/zzzz__VideoClip_def.hpp"
#include "UnityEngine/Video/zzzz__VideoPlayer_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/Video/zzzz__VideoTimeReference_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Video::__VideoPlayer__EventHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::__VideoPlayer__EventHandler::*)(::System::Object*, void*)>(
    &::UnityEngine::Video::__VideoPlayer__EventHandler::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2eb18b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::__VideoPlayer__EventHandler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::__VideoPlayer__EventHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::__VideoPlayer__EventHandler::*)(::UnityEngine::Video::VideoPlayer*)>(
    &::UnityEngine::Video::__VideoPlayer__EventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2eb1988;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::__VideoPlayer__EventHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::__VideoPlayer__EventHandler*>::get(), 13));
    return ___internal_method;
  }
};
inline ::UnityEngine::Video::__VideoPlayer__EventHandler* UnityEngine::Video::__VideoPlayer__EventHandler::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Video::__VideoPlayer__EventHandler*>(object, method));
}
inline void UnityEngine::Video::__VideoPlayer__EventHandler::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::__VideoPlayer__EventHandler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Video::__VideoPlayer__EventHandler::Invoke(::UnityEngine::Video::VideoPlayer* source) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::__VideoPlayer__EventHandler*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source);
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::__VideoPlayer__EventHandler::__VideoPlayer__EventHandler() {}
//  Writing Method size for method: ::UnityEngine::Video::__VideoPlayer__ErrorEventHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::__VideoPlayer__ErrorEventHandler::*)(::System::Object*, void*)>(
    &::UnityEngine::Video::__VideoPlayer__ErrorEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2eb199c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::__VideoPlayer__ErrorEventHandler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::__VideoPlayer__ErrorEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::__VideoPlayer__ErrorEventHandler::*)(::UnityEngine::Video::VideoPlayer*, ::StringW)>(
    &::UnityEngine::Video::__VideoPlayer__ErrorEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2eb1a74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::__VideoPlayer__ErrorEventHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::__VideoPlayer__ErrorEventHandler*>::get(), 13));
    return ___internal_method;
  }
};
inline ::UnityEngine::Video::__VideoPlayer__ErrorEventHandler* UnityEngine::Video::__VideoPlayer__ErrorEventHandler::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Video::__VideoPlayer__ErrorEventHandler*>(object, method));
}
inline void UnityEngine::Video::__VideoPlayer__ErrorEventHandler::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::__VideoPlayer__ErrorEventHandler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Video::__VideoPlayer__ErrorEventHandler::Invoke(::UnityEngine::Video::VideoPlayer* source, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::__VideoPlayer__ErrorEventHandler*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, message);
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::__VideoPlayer__ErrorEventHandler::__VideoPlayer__ErrorEventHandler() {}
//  Writing Method size for method: ::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler::*)(::System::Object*, void*)>(
    &::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2eb1a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler::*)(::UnityEngine::Video::VideoPlayer*, int64_t)>(
    &::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2eb1b60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler*>::get(), 13));
    return ___internal_method;
  }
};
inline ::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler* UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler*>(object, method));
}
inline void UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler::Invoke(::UnityEngine::Video::VideoPlayer* source, int64_t frameIdx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, frameIdx);
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler::__VideoPlayer__FrameReadyEventHandler() {}
//  Writing Method size for method: ::UnityEngine::Video::__VideoPlayer__TimeEventHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::__VideoPlayer__TimeEventHandler::*)(::System::Object*, void*)>(
    &::UnityEngine::Video::__VideoPlayer__TimeEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2eb1b74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::__VideoPlayer__TimeEventHandler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::__VideoPlayer__TimeEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::__VideoPlayer__TimeEventHandler::*)(::UnityEngine::Video::VideoPlayer*, double_t)>(
    &::UnityEngine::Video::__VideoPlayer__TimeEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2eb1c4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::__VideoPlayer__TimeEventHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::__VideoPlayer__TimeEventHandler*>::get(), 13));
    return ___internal_method;
  }
};
inline ::UnityEngine::Video::__VideoPlayer__TimeEventHandler* UnityEngine::Video::__VideoPlayer__TimeEventHandler::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Video::__VideoPlayer__TimeEventHandler*>(object, method));
}
inline void UnityEngine::Video::__VideoPlayer__TimeEventHandler::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::__VideoPlayer__TimeEventHandler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Video::__VideoPlayer__TimeEventHandler::Invoke(::UnityEngine::Video::VideoPlayer* source, double_t seconds) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::__VideoPlayer__TimeEventHandler*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, seconds);
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::__VideoPlayer__TimeEventHandler::__VideoPlayer__TimeEventHandler() {}
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_clip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Video::VideoClip* (::UnityEngine::Video::VideoPlayer::*)()>(
    &::UnityEngine::Video::VideoPlayer::get_clip)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2eb1450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_clip",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_clip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoClip*)>(
    &::UnityEngine::Video::VideoPlayer::set_clip)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2eb148c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_clip", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoClip*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_texture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture* (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_texture)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2eb14d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_texture",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.Play
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::Play)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2eb150c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "Play",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.Stop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::Stop)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2eb1548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "Stop",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_isPlaying
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_isPlaying)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2eb1584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_isPlaying",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_frame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(int64_t)>(&::UnityEngine::Video::VideoPlayer::set_frame)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2eb15c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_frame", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_playbackSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(float_t)>(&::UnityEngine::Video::VideoPlayer::set_playbackSpeed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2eb1604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_playbackSpeed", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_timeReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(::UnityEngine::Video::VideoTimeReference)>(
    &::UnityEngine::Video::VideoPlayer::set_timeReference)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2eb1650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_timeReference", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoTimeReference>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_frameCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_frameCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2eb1694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_frameCount",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_frameRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_frameRate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2eb16d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_frameRate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokePrepareCompletedCallback_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*)>(
    &::UnityEngine::Video::VideoPlayer::InvokePrepareCompletedCallback_Internal)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2eb170c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokePrepareCompletedCallback_Internal",
                                   std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeFrameReadyCallback_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*, int64_t)>(
    &::UnityEngine::Video::VideoPlayer::InvokeFrameReadyCallback_Internal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2eb1740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeFrameReadyCallback_Internal", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeLoopPointReachedCallback_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*)>(
    &::UnityEngine::Video::VideoPlayer::InvokeLoopPointReachedCallback_Internal)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2eb1778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeLoopPointReachedCallback_Internal",
                                   std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeStartedCallback_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*)>(&::UnityEngine::Video::VideoPlayer::InvokeStartedCallback_Internal)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2eb17ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeStartedCallback_Internal", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeFrameDroppedCallback_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*)>(
    &::UnityEngine::Video::VideoPlayer::InvokeFrameDroppedCallback_Internal)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2eb17e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeFrameDroppedCallback_Internal",
                                   std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeErrorReceivedCallback_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*, ::StringW)>(
    &::UnityEngine::Video::VideoPlayer::InvokeErrorReceivedCallback_Internal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2eb1814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeErrorReceivedCallback_Internal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeSeekCompletedCallback_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*)>(
    &::UnityEngine::Video::VideoPlayer::InvokeSeekCompletedCallback_Internal)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2eb184c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeSeekCompletedCallback_Internal",
                                   std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeClockResyncOccurredCallback_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*, double_t)>(
    &::UnityEngine::Video::VideoPlayer::InvokeClockResyncOccurredCallback_Internal)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2eb1880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeClockResyncOccurredCallback_Internal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Video::__VideoPlayer__EventHandler*& UnityEngine::Video::VideoPlayer::__get_prepareCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prepareCompleted;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__EventHandler*> const& UnityEngine::Video::VideoPlayer::__get_prepareCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prepareCompleted;
}
constexpr void UnityEngine::Video::VideoPlayer::__set_prepareCompleted(::UnityEngine::Video::__VideoPlayer__EventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prepareCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Video::__VideoPlayer__EventHandler*& UnityEngine::Video::VideoPlayer::__get_loopPointReached() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loopPointReached;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__EventHandler*> const& UnityEngine::Video::VideoPlayer::__get_loopPointReached() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loopPointReached;
}
constexpr void UnityEngine::Video::VideoPlayer::__set_loopPointReached(::UnityEngine::Video::__VideoPlayer__EventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___loopPointReached)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Video::__VideoPlayer__EventHandler*& UnityEngine::Video::VideoPlayer::__get_started() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___started;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__EventHandler*> const& UnityEngine::Video::VideoPlayer::__get_started() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___started;
}
constexpr void UnityEngine::Video::VideoPlayer::__set_started(::UnityEngine::Video::__VideoPlayer__EventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___started)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Video::__VideoPlayer__EventHandler*& UnityEngine::Video::VideoPlayer::__get_frameDropped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frameDropped;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__EventHandler*> const& UnityEngine::Video::VideoPlayer::__get_frameDropped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frameDropped;
}
constexpr void UnityEngine::Video::VideoPlayer::__set_frameDropped(::UnityEngine::Video::__VideoPlayer__EventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___frameDropped)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Video::__VideoPlayer__ErrorEventHandler*& UnityEngine::Video::VideoPlayer::__get_errorReceived() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorReceived;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__ErrorEventHandler*> const& UnityEngine::Video::VideoPlayer::__get_errorReceived() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorReceived;
}
constexpr void UnityEngine::Video::VideoPlayer::__set_errorReceived(::UnityEngine::Video::__VideoPlayer__ErrorEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___errorReceived)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Video::__VideoPlayer__EventHandler*& UnityEngine::Video::VideoPlayer::__get_seekCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seekCompleted;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__EventHandler*> const& UnityEngine::Video::VideoPlayer::__get_seekCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seekCompleted;
}
constexpr void UnityEngine::Video::VideoPlayer::__set_seekCompleted(::UnityEngine::Video::__VideoPlayer__EventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___seekCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Video::__VideoPlayer__TimeEventHandler*& UnityEngine::Video::VideoPlayer::__get_clockResyncOccurred() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clockResyncOccurred;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__TimeEventHandler*> const& UnityEngine::Video::VideoPlayer::__get_clockResyncOccurred() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clockResyncOccurred;
}
constexpr void UnityEngine::Video::VideoPlayer::__set_clockResyncOccurred(::UnityEngine::Video::__VideoPlayer__TimeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clockResyncOccurred)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler*& UnityEngine::Video::VideoPlayer::__get_frameReady() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frameReady;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler*> const& UnityEngine::Video::VideoPlayer::__get_frameReady() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frameReady;
}
constexpr void UnityEngine::Video::VideoPlayer::__set_frameReady(::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___frameReady)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Video::VideoClip* UnityEngine::Video::VideoPlayer::get_clip() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_clip",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Video::VideoClip*, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_clip(::UnityEngine::Video::VideoClip* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_clip", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Texture* UnityEngine::Video::VideoPlayer::get_texture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_texture",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Texture*, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::Play() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "Play",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::Stop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "Stop",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Video::VideoPlayer::get_isPlaying() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_isPlaying",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_frame(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_frame", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::set_playbackSpeed(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_playbackSpeed", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Video::VideoPlayer::set_timeReference(::UnityEngine::Video::VideoTimeReference value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "set_timeReference", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoTimeReference>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint64_t UnityEngine::Video::VideoPlayer::get_frameCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_frameCount",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Video::VideoPlayer::get_frameRate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "get_frameRate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::InvokePrepareCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokePrepareCompletedCallback_Internal",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source);
}
inline void UnityEngine::Video::VideoPlayer::InvokeFrameReadyCallback_Internal(::UnityEngine::Video::VideoPlayer* source, int64_t frameIdx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeFrameReadyCallback_Internal", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source, frameIdx);
}
inline void UnityEngine::Video::VideoPlayer::InvokeLoopPointReachedCallback_Internal(::UnityEngine::Video::VideoPlayer* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeLoopPointReachedCallback_Internal",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source);
}
inline void UnityEngine::Video::VideoPlayer::InvokeStartedCallback_Internal(::UnityEngine::Video::VideoPlayer* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeStartedCallback_Internal", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source);
}
inline void UnityEngine::Video::VideoPlayer::InvokeFrameDroppedCallback_Internal(::UnityEngine::Video::VideoPlayer* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeFrameDroppedCallback_Internal", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source);
}
inline void UnityEngine::Video::VideoPlayer::InvokeErrorReceivedCallback_Internal(::UnityEngine::Video::VideoPlayer* source, ::StringW errorStr) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeErrorReceivedCallback_Internal", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source, errorStr);
}
inline void UnityEngine::Video::VideoPlayer::InvokeSeekCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeSeekCompletedCallback_Internal",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source);
}
inline void UnityEngine::Video::VideoPlayer::InvokeClockResyncOccurredCallback_Internal(::UnityEngine::Video::VideoPlayer* source, double_t seconds) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Video::VideoPlayer*>::get(), "InvokeClockResyncOccurredCallback_Internal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source, seconds);
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::VideoPlayer::VideoPlayer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
