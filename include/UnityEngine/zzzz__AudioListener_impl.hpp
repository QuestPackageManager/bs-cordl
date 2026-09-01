#pragma once
// IWYU pragma private; include "UnityEngine\AudioListener.hpp"
#include "UnityEngine/zzzz__AudioBehaviour_impl.hpp"
#include "UnityEngine/zzzz__AudioListener_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/zzzz__AudioVelocityUpdateMode_def.hpp"
#include "UnityEngine/zzzz__FFTWindow_def.hpp"
//  Writing Method size for method: ::UnityEngine::AudioListener.GetOutputDataHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::ArrayW<float_t>>, int32_t)>(&::UnityEngine::AudioListener::GetOutputDataHelper)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6a4e968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(), { "GetOutputDataHelper", {}, { ::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioListener.GetSpectrumDataHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::ArrayW<float_t>>, int32_t, ::UnityEngine::FFTWindow)>(&::UnityEngine::AudioListener::GetSpectrumDataHelper)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6a4ead4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(),
                                         { "GetSpectrumDataHelper", {}, { ::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FFTWindow>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioListener.get_volume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::AudioListener::get_volume)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a4ec54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(), { "get_volume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioListener.set_volume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::AudioListener::set_volume)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6a4ec7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(), { "set_volume", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioListener.get_pause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::AudioListener::get_pause)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a4ecb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(), { "get_pause", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioListener.set_pause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::AudioListener::set_pause)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a4ecdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(), { "set_pause", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioListener.get_velocityUpdateMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AudioVelocityUpdateMode (::UnityEngine::AudioListener::*)()>(&::UnityEngine::AudioListener::get_velocityUpdateMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a4ed18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(), { "get_velocityUpdateMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioListener.set_velocityUpdateMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioListener::*)(::UnityEngine::AudioVelocityUpdateMode)>(&::UnityEngine::AudioListener::set_velocityUpdateMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a4edd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(), { "set_velocityUpdateMode", {}, { ::i2c::type_of<::UnityEngine::AudioVelocityUpdateMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioListener.GetOutputData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (*)(int32_t, int32_t)>(&::UnityEngine::AudioListener::GetOutputData)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6a4eea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(), { "GetOutputData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioListener.GetOutputData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<float_t>, int32_t)>(&::UnityEngine::AudioListener::GetOutputData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a4ef14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(), { "GetOutputData", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioListener.GetSpectrumData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (*)(int32_t, int32_t, ::UnityEngine::FFTWindow)>(&::UnityEngine::AudioListener::GetSpectrumData)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6a4ef18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(),
                                                             { "GetSpectrumData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FFTWindow>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioListener.GetSpectrumData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<float_t>, int32_t, ::UnityEngine::FFTWindow)>(&::UnityEngine::AudioListener::GetSpectrumData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a4ef8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(),
                                                { "GetSpectrumData", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FFTWindow>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioListener._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioListener::*)()>(&::UnityEngine::AudioListener::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a4ef90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioListener.GetOutputDataHelper_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>, int32_t)>(&::UnityEngine::AudioListener::GetOutputDataHelper_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a4ea90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(),
                                                { "GetOutputDataHelper_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioListener.GetSpectrumDataHelper_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>, int32_t, ::UnityEngine::FFTWindow)>(
    &::UnityEngine::AudioListener::GetSpectrumDataHelper_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a4ec00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(), { "GetSpectrumDataHelper_Injected",
                                                                                                                 {},
                                                                                                                 { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(),
                                                                                                                   ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FFTWindow>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioListener.get_velocityUpdateMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AudioVelocityUpdateMode (*)(::System::IntPtr)>(&::UnityEngine::AudioListener::get_velocityUpdateMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a4ed98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(), { "get_velocityUpdateMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioListener.set_velocityUpdateMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::AudioVelocityUpdateMode)>(&::UnityEngine::AudioListener::set_velocityUpdateMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a4ee64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(),
                                                { "set_velocityUpdateMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AudioVelocityUpdateMode>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::AudioListener::GetOutputDataHelper(::by_ref<::ArrayW<float_t>> samples, int32_t channel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(), { "GetOutputDataHelper", {}, { ::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, samples, channel);
}
inline void UnityEngine::AudioListener::GetSpectrumDataHelper(::by_ref<::ArrayW<float_t>> samples, int32_t channel, ::UnityEngine::FFTWindow window) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(),
                                       { "GetSpectrumDataHelper", {}, { ::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FFTWindow>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, samples, channel, window);
}
inline float_t UnityEngine::AudioListener::get_volume() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(), { "get_volume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::AudioListener::set_volume(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(), { "set_volume", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::AudioListener::get_pause() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(), { "get_pause", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::AudioListener::set_pause(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(), { "set_pause", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::AudioVelocityUpdateMode UnityEngine::AudioListener::get_velocityUpdateMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(), { "get_velocityUpdateMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioVelocityUpdateMode>(this, ___internal_method);
}
inline void UnityEngine::AudioListener::set_velocityUpdateMode(::UnityEngine::AudioVelocityUpdateMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(), { "set_velocityUpdateMode", {}, { ::i2c::type_of<::UnityEngine::AudioVelocityUpdateMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<float_t> UnityEngine::AudioListener::GetOutputData(int32_t numSamples, int32_t channel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(), { "GetOutputData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(nullptr, ___internal_method, numSamples, channel);
}
inline void UnityEngine::AudioListener::GetOutputData(::ArrayW<float_t> samples, int32_t channel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(), { "GetOutputData", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, samples, channel);
}
inline ::ArrayW<float_t> UnityEngine::AudioListener::GetSpectrumData(int32_t numSamples, int32_t channel, ::UnityEngine::FFTWindow window) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(),
                                                           { "GetSpectrumData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FFTWindow>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(nullptr, ___internal_method, numSamples, channel, window);
}
inline void UnityEngine::AudioListener::GetSpectrumData(::ArrayW<float_t> samples, int32_t channel, ::UnityEngine::FFTWindow window) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(),
                                                           { "GetSpectrumData", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FFTWindow>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, samples, channel, window);
}
inline void UnityEngine::AudioListener::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AudioListener::GetOutputDataHelper_Injected(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> samples, int32_t channel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(),
                                              { "GetOutputDataHelper_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, samples, channel);
}
inline void UnityEngine::AudioListener::GetSpectrumDataHelper_Injected(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> samples, int32_t channel, ::UnityEngine::FFTWindow window) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(), { "GetSpectrumDataHelper_Injected",
                                                                                                               {},
                                                                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(),
                                                                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FFTWindow>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, samples, channel, window);
}
inline ::UnityEngine::AudioVelocityUpdateMode UnityEngine::AudioListener::get_velocityUpdateMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(), { "get_velocityUpdateMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioVelocityUpdateMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioListener::set_velocityUpdateMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::AudioVelocityUpdateMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioListener*>(),
                                              { "set_velocityUpdateMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AudioVelocityUpdateMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::AudioListener* UnityEngine::AudioListener::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AudioListener*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioListener::AudioListener() {}
