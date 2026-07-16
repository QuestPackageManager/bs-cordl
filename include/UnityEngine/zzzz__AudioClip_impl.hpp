#pragma once
// IWYU pragma private; include "UnityEngine/AudioClip.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Audio/zzzz__AudioResource_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__AudioClipLoadType_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioDataLoadState_def.hpp"
//  Writing Method size for method: ::UnityEngine::AudioClip_PCMReaderCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioClip_PCMReaderCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::AudioClip_PCMReaderCallback::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a4903c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip_PCMReaderCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip_PCMReaderCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioClip_PCMReaderCallback::*)(::ArrayW<float_t>)>(&::UnityEngine::AudioClip_PCMReaderCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a490b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip_PCMReaderCallback*>(), { ::i2c::class_of<::UnityEngine::AudioClip_PCMReaderCallback*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::AudioClip_PCMReaderCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip_PCMReaderCallback*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::AudioClip_PCMReaderCallback::Invoke(::ArrayW<float_t> data) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AudioClip_PCMReaderCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::UnityEngine::AudioClip_PCMReaderCallback* UnityEngine::AudioClip_PCMReaderCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AudioClip_PCMReaderCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioClip_PCMReaderCallback::AudioClip_PCMReaderCallback() {}
//  Writing Method size for method: ::UnityEngine::AudioClip_PCMSetPositionCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioClip_PCMSetPositionCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::AudioClip_PCMSetPositionCallback::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6a490cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip_PCMSetPositionCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip_PCMSetPositionCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioClip_PCMSetPositionCallback::*)(int32_t)>(&::UnityEngine::AudioClip_PCMSetPositionCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a49138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip_PCMSetPositionCallback*>(), { ::i2c::class_of<::UnityEngine::AudioClip_PCMSetPositionCallback*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::AudioClip_PCMSetPositionCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip_PCMSetPositionCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::AudioClip_PCMSetPositionCallback::Invoke(int32_t position) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AudioClip_PCMSetPositionCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline ::UnityEngine::AudioClip_PCMSetPositionCallback* UnityEngine::AudioClip_PCMSetPositionCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AudioClip_PCMSetPositionCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioClip_PCMSetPositionCallback::AudioClip_PCMSetPositionCallback() {}
//  Writing Method size for method: ::UnityEngine::AudioClip._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioClip::*)()>(&::UnityEngine::AudioClip::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a47520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.GetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::AudioClip*, ::System::Span_1<float_t>, int32_t)>(&::UnityEngine::AudioClip::GetData)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6a47580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(),
                                                { "GetData", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::System::Span_1<float_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::AudioClip*, ::System::ReadOnlySpan_1<float_t>, int32_t)>(&::UnityEngine::AudioClip::SetData)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6a476e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(),
                                                { "SetData", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::System::ReadOnlySpan_1<float_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.Construct_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (*)()>(&::UnityEngine::AudioClip::Construct_Internal)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6a47850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "Construct_Internal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.GetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AudioClip::*)()>(&::UnityEngine::AudioClip::GetName)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6a4798c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "GetName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.CreateUserSound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioClip::*)(::StringW, int32_t, int32_t, int32_t, bool)>(&::UnityEngine::AudioClip::CreateUserSound)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6a47b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(),
                            { "CreateUserSound", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AudioClip::*)()>(&::UnityEngine::AudioClip::get_length)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a47d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_samples
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AudioClip::*)()>(&::UnityEngine::AudioClip::get_samples)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a47dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_samples", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_channels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AudioClip::*)()>(&::UnityEngine::AudioClip::get_channels)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a47e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_channels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_frequency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AudioClip::*)()>(&::UnityEngine::AudioClip::get_frequency)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a47f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_frequency", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_isReadyToPlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioClip::*)()>(&::UnityEngine::AudioClip::get_isReadyToPlay)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a48004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_isReadyToPlay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_loadType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AudioClipLoadType (::UnityEngine::AudioClip::*)()>(&::UnityEngine::AudioClip::get_loadType)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a480c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_loadType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.LoadAudioData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioClip::*)()>(&::UnityEngine::AudioClip::LoadAudioData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a4817c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "LoadAudioData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.UnloadAudioData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioClip::*)()>(&::UnityEngine::AudioClip::UnloadAudioData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a48238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "UnloadAudioData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_preloadAudioData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioClip::*)()>(&::UnityEngine::AudioClip::get_preloadAudioData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a482f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_preloadAudioData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_ambisonic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioClip::*)()>(&::UnityEngine::AudioClip::get_ambisonic)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a483b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_ambisonic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_loadInBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioClip::*)()>(&::UnityEngine::AudioClip::get_loadInBackground)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a4846c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_loadInBackground", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_loadState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AudioDataLoadState (::UnityEngine::AudioClip::*)()>(&::UnityEngine::AudioClip::get_loadState)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a48528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_loadState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.GetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioClip::*)(::System::Span_1<float_t>, int32_t)>(&::UnityEngine::AudioClip::GetData)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6a485e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "GetData", {}, { ::i2c::type_of<::System::Span_1<float_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.GetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioClip::*)(::ArrayW<float_t>, int32_t)>(&::UnityEngine::AudioClip::GetData)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6a486f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "GetData", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioClip::*)(::ArrayW<float_t>, int32_t)>(&::UnityEngine::AudioClip::SetData)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6a48828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "SetData", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioClip::*)(::System::ReadOnlySpan_1<float_t>, int32_t)>(&::UnityEngine::AudioClip::SetData)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6a48a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "SetData", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<float_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (*)(::StringW, int32_t, int32_t, int32_t, bool, bool)>(&::UnityEngine::AudioClip::Create)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a48ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::AudioClip*>(),
            { "Create", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (*)(::StringW, int32_t, int32_t, int32_t, bool, bool, ::UnityEngine::AudioClip_PCMReaderCallback*)>(
    &::UnityEngine::AudioClip::Create)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a48bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "Create",
                                                                            {},
                                                                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                              ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::AudioClip_PCMReaderCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (*)(::StringW, int32_t, int32_t, int32_t, bool, bool, ::UnityEngine::AudioClip_PCMReaderCallback*,
                                                                                              ::UnityEngine::AudioClip_PCMSetPositionCallback*)>(&::UnityEngine::AudioClip::Create)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a48d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(),
                            { "Create",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                ::i2c::type_of<::UnityEngine::AudioClip_PCMReaderCallback*>(), ::i2c::type_of<::UnityEngine::AudioClip_PCMSetPositionCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (*)(::StringW, int32_t, int32_t, int32_t, bool)>(&::UnityEngine::AudioClip::Create)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a48bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(),
                                         { "Create", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (*)(::StringW, int32_t, int32_t, int32_t, bool, ::UnityEngine::AudioClip_PCMReaderCallback*)>(
    &::UnityEngine::AudioClip::Create)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a48d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "Create",
                                                                                         {},
                                                                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::AudioClip_PCMReaderCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (*)(::StringW, int32_t, int32_t, int32_t, bool, ::UnityEngine::AudioClip_PCMReaderCallback*,
                                                                                              ::UnityEngine::AudioClip_PCMSetPositionCallback*)>(&::UnityEngine::AudioClip::Create)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6a48bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(),
                                                { "Create",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                    ::i2c::type_of<::UnityEngine::AudioClip_PCMReaderCallback*>(), ::i2c::type_of<::UnityEngine::AudioClip_PCMSetPositionCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.add_m_PCMReaderCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioClip::*)(::UnityEngine::AudioClip_PCMReaderCallback*)>(&::UnityEngine::AudioClip::add_m_PCMReaderCallback)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6a48d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "add_m_PCMReaderCallback", {}, { ::i2c::type_of<::UnityEngine::AudioClip_PCMReaderCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.remove_m_PCMReaderCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioClip::*)(::UnityEngine::AudioClip_PCMReaderCallback*)>(&::UnityEngine::AudioClip::remove_m_PCMReaderCallback)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6a48eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "remove_m_PCMReaderCallback", {}, { ::i2c::type_of<::UnityEngine::AudioClip_PCMReaderCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.add_m_PCMSetPositionCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioClip::*)(::UnityEngine::AudioClip_PCMSetPositionCallback*)>(&::UnityEngine::AudioClip::add_m_PCMSetPositionCallback)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6a48e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "add_m_PCMSetPositionCallback", {}, { ::i2c::type_of<::UnityEngine::AudioClip_PCMSetPositionCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.remove_m_PCMSetPositionCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioClip::*)(::UnityEngine::AudioClip_PCMSetPositionCallback*)>(
    &::UnityEngine::AudioClip::remove_m_PCMSetPositionCallback)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6a48f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "remove_m_PCMSetPositionCallback", {}, { ::i2c::type_of<::UnityEngine::AudioClip_PCMSetPositionCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.InvokePCMReaderCallback_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioClip::*)(::ArrayW<float_t>)>(&::UnityEngine::AudioClip::InvokePCMReaderCallback_Internal)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6a49004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "InvokePCMReaderCallback_Internal", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.InvokePCMSetPositionCallback_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioClip::*)(int32_t)>(&::UnityEngine::AudioClip::InvokePCMSetPositionCallback_Internal)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6a49020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "InvokePCMSetPositionCallback_Internal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.GetData_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t)>(&::UnityEngine::AudioClip::GetData_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a47694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(),
                            { "GetData_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.SetData_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t)>(&::UnityEngine::AudioClip::SetData_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a477fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(),
                            { "SetData_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.Construct_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::AudioClip::Construct_Internal_Injected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a47964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "Construct_Internal_Injected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.GetName_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AudioClip::GetName_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a47ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(),
                                                { "GetName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.CreateUserSound_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t, int32_t, int32_t, bool)>(
    &::UnityEngine::AudioClip::CreateUserSound_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6a47ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "CreateUserSound_Injected",
                                                                            {},
                                                                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                              ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_length_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::AudioClip::get_length_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a47d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_length_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_samples_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::AudioClip::get_samples_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a47e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_samples_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_channels_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::AudioClip::get_channels_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a47f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_channels_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_frequency_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::AudioClip::get_frequency_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a47fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_frequency_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_isReadyToPlay_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AudioClip::get_isReadyToPlay_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a48084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_isReadyToPlay_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_loadType_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AudioClipLoadType (*)(::System::IntPtr)>(&::UnityEngine::AudioClip::get_loadType_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a48140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_loadType_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.LoadAudioData_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AudioClip::LoadAudioData_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a481fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "LoadAudioData_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.UnloadAudioData_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AudioClip::UnloadAudioData_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a482b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "UnloadAudioData_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_preloadAudioData_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AudioClip::get_preloadAudioData_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a48374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_preloadAudioData_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_ambisonic_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AudioClip::get_ambisonic_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a48430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_ambisonic_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_loadInBackground_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AudioClip::get_loadInBackground_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a484ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_loadInBackground_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_loadState_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AudioDataLoadState (*)(::System::IntPtr)>(&::UnityEngine::AudioClip::get_loadState_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a485a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_loadState_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AudioClip_PCMReaderCallback*& UnityEngine::AudioClip::__cordl_internal_get_m_PCMReaderCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PCMReaderCallback;
}
constexpr ::UnityEngine::AudioClip_PCMReaderCallback* const& UnityEngine::AudioClip::__cordl_internal_get_m_PCMReaderCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PCMReaderCallback;
}
constexpr void UnityEngine::AudioClip::__cordl_internal_set_m_PCMReaderCallback(::UnityEngine::AudioClip_PCMReaderCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PCMReaderCallback = value;
}
constexpr ::UnityEngine::AudioClip_PCMSetPositionCallback*& UnityEngine::AudioClip::__cordl_internal_get_m_PCMSetPositionCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PCMSetPositionCallback;
}
constexpr ::UnityEngine::AudioClip_PCMSetPositionCallback* const& UnityEngine::AudioClip::__cordl_internal_get_m_PCMSetPositionCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PCMSetPositionCallback;
}
constexpr void UnityEngine::AudioClip::__cordl_internal_set_m_PCMSetPositionCallback(::UnityEngine::AudioClip_PCMSetPositionCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PCMSetPositionCallback = value;
}
inline void UnityEngine::AudioClip::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::AudioClip::GetData(::UnityEngine::AudioClip* clip, ::System::Span_1<float_t> data, int32_t samplesOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(),
                                              { "GetData", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::System::Span_1<float_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clip, data, samplesOffset);
}
inline bool UnityEngine::AudioClip::SetData(::UnityEngine::AudioClip* clip, ::System::ReadOnlySpan_1<float_t> data, int32_t samplesOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(),
                                              { "SetData", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::System::ReadOnlySpan_1<float_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clip, data, samplesOffset);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::AudioClip::Construct_Internal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "Construct_Internal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::AudioClip::GetName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "GetName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::AudioClip::CreateUserSound(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(),
                          { "CreateUserSound", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, lengthSamples, channels, frequency, stream);
}
inline float_t UnityEngine::AudioClip::get_length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t UnityEngine::AudioClip::get_samples() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_samples", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::AudioClip::get_channels() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_channels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::AudioClip::get_frequency() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_frequency", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::AudioClip::get_isReadyToPlay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_isReadyToPlay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::AudioClipLoadType UnityEngine::AudioClip::get_loadType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_loadType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioClipLoadType>(this, ___internal_method);
}
inline bool UnityEngine::AudioClip::LoadAudioData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "LoadAudioData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::AudioClip::UnloadAudioData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "UnloadAudioData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::AudioClip::get_preloadAudioData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_preloadAudioData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::AudioClip::get_ambisonic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_ambisonic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::AudioClip::get_loadInBackground() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_loadInBackground", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::AudioDataLoadState UnityEngine::AudioClip::get_loadState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_loadState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioDataLoadState>(this, ___internal_method);
}
inline bool UnityEngine::AudioClip::GetData(::System::Span_1<float_t> data, int32_t offsetSamples) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "GetData", {}, { ::i2c::type_of<::System::Span_1<float_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, offsetSamples);
}
inline bool UnityEngine::AudioClip::GetData(::ArrayW<float_t> data, int32_t offsetSamples) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "GetData", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, offsetSamples);
}
inline bool UnityEngine::AudioClip::SetData(::ArrayW<float_t> data, int32_t offsetSamples) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "SetData", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, offsetSamples);
}
inline bool UnityEngine::AudioClip::SetData(::System::ReadOnlySpan_1<float_t> data, int32_t offsetSamples) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "SetData", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<float_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, offsetSamples);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::AudioClip::Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool _3D, bool stream) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::AudioClip*>(),
          { "Create", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(nullptr, ___internal_method, name, lengthSamples, channels, frequency, _3D, stream);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::AudioClip::Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool _3D, bool stream,
                                                                         ::UnityEngine::AudioClip_PCMReaderCallback* pcmreadercallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "Create",
                                                                          {},
                                                                          { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                            ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::AudioClip_PCMReaderCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(nullptr, ___internal_method, name, lengthSamples, channels, frequency, _3D, stream, pcmreadercallback);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::AudioClip::Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool _3D, bool stream,
                                                                         ::UnityEngine::AudioClip_PCMReaderCallback* pcmreadercallback,
                                                                         ::UnityEngine::AudioClip_PCMSetPositionCallback* pcmsetpositioncallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(),
                                       { "Create",
                                         {},
                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::UnityEngine::AudioClip_PCMReaderCallback*>(), ::i2c::type_of<::UnityEngine::AudioClip_PCMSetPositionCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(nullptr, ___internal_method, name, lengthSamples, channels, frequency, _3D, stream, pcmreadercallback,
                                                                                 pcmsetpositioncallback);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::AudioClip::Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(),
                                       { "Create", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(nullptr, ___internal_method, name, lengthSamples, channels, frequency, stream);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::AudioClip::Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream,
                                                                         ::UnityEngine::AudioClip_PCMReaderCallback* pcmreadercallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "Create",
                                                                                       {},
                                                                                       { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                         ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::AudioClip_PCMReaderCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(nullptr, ___internal_method, name, lengthSamples, channels, frequency, stream, pcmreadercallback);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::AudioClip::Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream,
                                                                         ::UnityEngine::AudioClip_PCMReaderCallback* pcmreadercallback,
                                                                         ::UnityEngine::AudioClip_PCMSetPositionCallback* pcmsetpositioncallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(),
                                                           { "Create",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::UnityEngine::AudioClip_PCMReaderCallback*>(), ::i2c::type_of<::UnityEngine::AudioClip_PCMSetPositionCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(nullptr, ___internal_method, name, lengthSamples, channels, frequency, stream, pcmreadercallback,
                                                                                 pcmsetpositioncallback);
}
inline void UnityEngine::AudioClip::add_m_PCMReaderCallback(::UnityEngine::AudioClip_PCMReaderCallback* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "add_m_PCMReaderCallback", {}, { ::i2c::type_of<::UnityEngine::AudioClip_PCMReaderCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AudioClip::remove_m_PCMReaderCallback(::UnityEngine::AudioClip_PCMReaderCallback* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "remove_m_PCMReaderCallback", {}, { ::i2c::type_of<::UnityEngine::AudioClip_PCMReaderCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AudioClip::add_m_PCMSetPositionCallback(::UnityEngine::AudioClip_PCMSetPositionCallback* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "add_m_PCMSetPositionCallback", {}, { ::i2c::type_of<::UnityEngine::AudioClip_PCMSetPositionCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AudioClip::remove_m_PCMSetPositionCallback(::UnityEngine::AudioClip_PCMSetPositionCallback* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "remove_m_PCMSetPositionCallback", {}, { ::i2c::type_of<::UnityEngine::AudioClip_PCMSetPositionCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AudioClip::InvokePCMReaderCallback_Internal(::ArrayW<float_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "InvokePCMReaderCallback_Internal", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void UnityEngine::AudioClip::InvokePCMSetPositionCallback_Internal(int32_t position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "InvokePCMSetPositionCallback_Internal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline bool UnityEngine::AudioClip::GetData_Injected(::System::IntPtr clip, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> data, int32_t samplesOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(),
                          { "GetData_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clip, data, samplesOffset);
}
inline bool UnityEngine::AudioClip::SetData_Injected(::System::IntPtr clip, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> data, int32_t samplesOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(),
                          { "SetData_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clip, data, samplesOffset);
}
inline ::System::IntPtr UnityEngine::AudioClip::Construct_Internal_Injected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "Construct_Internal_Injected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::AudioClip::GetName_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(),
                                              { "GetName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::AudioClip::CreateUserSound_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, int32_t lengthSamples, int32_t channels,
                                                             int32_t frequency, bool stream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "CreateUserSound_Injected",
                                                                                       {},
                                                                                       { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name, lengthSamples, channels, frequency, stream);
}
inline float_t UnityEngine::AudioClip::get_length_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_length_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::AudioClip::get_samples_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_samples_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::AudioClip::get_channels_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_channels_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::AudioClip::get_frequency_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_frequency_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::AudioClip::get_isReadyToPlay_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_isReadyToPlay_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::AudioClipLoadType UnityEngine::AudioClip::get_loadType_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_loadType_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioClipLoadType>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::AudioClip::LoadAudioData_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "LoadAudioData_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::AudioClip::UnloadAudioData_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "UnloadAudioData_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::AudioClip::get_preloadAudioData_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_preloadAudioData_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::AudioClip::get_ambisonic_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_ambisonic_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::AudioClip::get_loadInBackground_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_loadInBackground_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::AudioDataLoadState UnityEngine::AudioClip::get_loadState_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioClip*>(), { "get_loadState_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioDataLoadState>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::AudioClip* UnityEngine::AudioClip::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AudioClip*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioClip::AudioClip() {}
