#pragma once
// IWYU pragma private; include "UnityEngine/Networking/DownloadHandlerAudioClip.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandler_impl.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandlerAudioClip_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandlerAudioClip_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAudioClip_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Networking::DownloadHandlerAudioClip*)>(
    &::UnityEngine::Networking::DownloadHandlerAudioClip_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e23a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip_BindingsMarshaller*>(),
                                                                                           { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::Networking::DownloadHandlerAudioClip_BindingsMarshaller::ConvertToNative(::UnityEngine::Networking::DownloadHandlerAudioClip* handler) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip_BindingsMarshaller*>(),
                                                                                         { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handler);
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::DownloadHandlerAudioClip_BindingsMarshaller::DownloadHandlerAudioClip_BindingsMarshaller() {}
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAudioClip.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Networking::DownloadHandlerAudioClip*, ::StringW, ::UnityEngine::AudioType)>(
    &::UnityEngine::Networking::DownloadHandlerAudioClip::Create)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6e23544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(),
                            { "Create", {}, { ::i2c::type_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::AudioType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAudioClip.InternalCreateAudioClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadHandlerAudioClip::*)(::StringW, ::UnityEngine::AudioType)>(
    &::UnityEngine::Networking::DownloadHandlerAudioClip::InternalCreateAudioClip)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e236dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(),
                                                             { "InternalCreateAudioClip", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::AudioType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAudioClip._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadHandlerAudioClip::*)(::StringW, ::UnityEngine::AudioType)>(
    &::UnityEngine::Networking::DownloadHandlerAudioClip::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e236f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::AudioType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAudioClip.GetNativeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (::UnityEngine::Networking::DownloadHandlerAudioClip::*)()>(
    &::UnityEngine::Networking::DownloadHandlerAudioClip::GetNativeData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e2370c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAudioClip.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadHandlerAudioClip::*)()>(&::UnityEngine::Networking::DownloadHandlerAudioClip::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6e23718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAudioClip.GetText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::DownloadHandlerAudioClip::*)()>(&::UnityEngine::Networking::DownloadHandlerAudioClip::GetText)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e23778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAudioClip.get_audioClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::Networking::DownloadHandlerAudioClip::*)()>(
    &::UnityEngine::Networking::DownloadHandlerAudioClip::get_audioClip)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6e237c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(), { "get_audioClip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAudioClip.set_streamAudio
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadHandlerAudioClip::*)(bool)>(&::UnityEngine::Networking::DownloadHandlerAudioClip::set_streamAudio)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6e2393c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(), { "set_streamAudio", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAudioClip.GetContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (*)(::UnityEngine::Networking::UnityWebRequest*)>(
    &::UnityEngine::Networking::DownloadHandlerAudioClip::GetContent)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6e239d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(),
                                                                                           { "GetContent", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAudioClip.Create_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Networking::DownloadHandlerAudioClip*, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>,
                                                                            ::UnityEngine::AudioType)>(&::UnityEngine::Networking::DownloadHandlerAudioClip::Create_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e23688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(),
                                                             { "Create_Injected",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::UnityEngine::AudioType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAudioClip.get_audioClip_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Networking::DownloadHandlerAudioClip::get_audioClip_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e23900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(), { "get_audioClip_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAudioClip.set_streamAudio_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Networking::DownloadHandlerAudioClip::set_streamAudio_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e23994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(),
                                                                                           { "set_streamAudio_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::Unity::Collections::NativeArray_1<uint8_t>& UnityEngine::Networking::DownloadHandlerAudioClip::__cordl_internal_get_m_NativeData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NativeData;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& UnityEngine::Networking::DownloadHandlerAudioClip::__cordl_internal_get_m_NativeData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NativeData;
}
constexpr void UnityEngine::Networking::DownloadHandlerAudioClip::__cordl_internal_set_m_NativeData(::Unity::Collections::NativeArray_1<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NativeData = value;
}
inline ::System::IntPtr UnityEngine::Networking::DownloadHandlerAudioClip::Create(::UnityEngine::Networking::DownloadHandlerAudioClip* obj, ::StringW url, ::UnityEngine::AudioType audioType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(),
                          { "Create", {}, { ::i2c::type_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::AudioType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj, url, audioType);
}
inline void UnityEngine::Networking::DownloadHandlerAudioClip::InternalCreateAudioClip(::StringW url, ::UnityEngine::AudioType audioType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(),
                                                           { "InternalCreateAudioClip", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::AudioType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, url, audioType);
}
inline void UnityEngine::Networking::DownloadHandlerAudioClip::_ctor(::StringW url, ::UnityEngine::AudioType audioType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::AudioType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, url, audioType);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::Networking::DownloadHandlerAudioClip::GetNativeData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>>(this, ___internal_method);
}
inline void UnityEngine::Networking::DownloadHandlerAudioClip::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::Networking::DownloadHandlerAudioClip::GetText() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::Networking::DownloadHandlerAudioClip::get_audioClip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(), { "get_audioClip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void UnityEngine::Networking::DownloadHandlerAudioClip::set_streamAudio(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(), { "set_streamAudio", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::Networking::DownloadHandlerAudioClip::GetContent(::UnityEngine::Networking::UnityWebRequest* www) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(),
                                                                                         { "GetContent", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(nullptr, ___internal_method, www);
}
inline ::System::IntPtr UnityEngine::Networking::DownloadHandlerAudioClip::Create_Injected(::UnityEngine::Networking::DownloadHandlerAudioClip* obj,
                                                                                           ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> url, ::UnityEngine::AudioType audioType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(),
                                                           { "Create_Injected",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::UnityEngine::AudioType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj, url, audioType);
}
inline ::System::IntPtr UnityEngine::Networking::DownloadHandlerAudioClip::get_audioClip_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(), { "get_audioClip_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Networking::DownloadHandlerAudioClip::set_streamAudio_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAudioClip*>(),
                                                                                         { "set_streamAudio_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Networking::DownloadHandlerAudioClip* UnityEngine::Networking::DownloadHandlerAudioClip::New_ctor(::StringW url, ::UnityEngine::AudioType audioType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::DownloadHandlerAudioClip*>(url, audioType));
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::DownloadHandlerAudioClip::DownloadHandlerAudioClip() {}
