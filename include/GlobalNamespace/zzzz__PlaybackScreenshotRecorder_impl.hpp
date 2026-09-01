#pragma once
// IWYU pragma private; include "GlobalNamespace\PlaybackScreenshotRecorder.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlaybackScreenshotRecorder_def.hpp"
#include "GlobalNamespace/zzzz__PlaybackRenderer_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlaybackScreenshotRecorder.get_directory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlaybackScreenshotRecorder::*)()>(&::GlobalNamespace::PlaybackScreenshotRecorder::get_directory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e9804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackScreenshotRecorder*>(), { "get_directory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackScreenshotRecorder.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaybackScreenshotRecorder::*)()>(&::GlobalNamespace::PlaybackScreenshotRecorder::OnEnable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58e980c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackScreenshotRecorder*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackScreenshotRecorder.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaybackScreenshotRecorder::*)()>(&::GlobalNamespace::PlaybackScreenshotRecorder::OnDisable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58e9898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackScreenshotRecorder*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackScreenshotRecorder.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaybackScreenshotRecorder::*)(::StringW, int32_t, ::GlobalNamespace::PlaybackRenderer*)>(
    &::GlobalNamespace::PlaybackScreenshotRecorder::Init)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x58e7fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackScreenshotRecorder*>(),
                                                             { "Init", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlaybackRenderer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackScreenshotRecorder.HandleTexturesReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaybackScreenshotRecorder::*)()>(&::GlobalNamespace::PlaybackScreenshotRecorder::HandleTexturesReady)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58e9924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackScreenshotRecorder*>(), { "HandleTexturesReady", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackScreenshotRecorder.SaveScreenshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaybackScreenshotRecorder::*)(::UnityEngine::RenderTexture*, ::StringW)>(
    &::GlobalNamespace::PlaybackScreenshotRecorder::SaveScreenshot)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x58e999c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackScreenshotRecorder*>(),
                                                             { "SaveScreenshot", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackScreenshotRecorder.ConvertRenderTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)(::UnityEngine::RenderTexture*)>(&::GlobalNamespace::PlaybackScreenshotRecorder::ConvertRenderTexture)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x58e9ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackScreenshotRecorder*>(), { "ConvertRenderTexture", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackScreenshotRecorder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaybackScreenshotRecorder::*)()>(&::GlobalNamespace::PlaybackScreenshotRecorder::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58e9be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackScreenshotRecorder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlaybackScreenshotRecorder::__cordl_internal_get__directory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directory;
}
constexpr ::StringW const& GlobalNamespace::PlaybackScreenshotRecorder::__cordl_internal_get__directory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directory;
}
constexpr void GlobalNamespace::PlaybackScreenshotRecorder::__cordl_internal_set__directory(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____directory = value;
}
constexpr ::UnityW<::GlobalNamespace::PlaybackRenderer>& GlobalNamespace::PlaybackScreenshotRecorder::__cordl_internal_get__playbackRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playbackRenderer;
}
constexpr ::UnityW<::GlobalNamespace::PlaybackRenderer> const& GlobalNamespace::PlaybackScreenshotRecorder::__cordl_internal_get__playbackRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playbackRenderer;
}
constexpr void GlobalNamespace::PlaybackScreenshotRecorder::__cordl_internal_set__playbackRenderer(::UnityW<::GlobalNamespace::PlaybackRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playbackRenderer = value;
}
constexpr int32_t& GlobalNamespace::PlaybackScreenshotRecorder::__cordl_internal_get__frameNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frameNumber;
}
constexpr int32_t const& GlobalNamespace::PlaybackScreenshotRecorder::__cordl_internal_get__frameNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frameNumber;
}
constexpr void GlobalNamespace::PlaybackScreenshotRecorder::__cordl_internal_set__frameNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____frameNumber = value;
}
inline ::StringW GlobalNamespace::PlaybackScreenshotRecorder::get_directory() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackScreenshotRecorder*>(), { "get_directory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PlaybackScreenshotRecorder::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackScreenshotRecorder*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlaybackScreenshotRecorder::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackScreenshotRecorder*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlaybackScreenshotRecorder::Init(::StringW directory, int32_t framerate, ::GlobalNamespace::PlaybackRenderer* playbackRenderer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackScreenshotRecorder*>(),
                                                           { "Init", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlaybackRenderer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, directory, framerate, playbackRenderer);
}
inline void GlobalNamespace::PlaybackScreenshotRecorder::HandleTexturesReady() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackScreenshotRecorder*>(), { "HandleTexturesReady", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlaybackScreenshotRecorder::SaveScreenshot(::UnityEngine::RenderTexture* renderTexture, ::StringW directory) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackScreenshotRecorder*>(),
                                                                                         { "SaveScreenshot", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderTexture, directory);
}
inline ::UnityW<::UnityEngine::Texture2D> GlobalNamespace::PlaybackScreenshotRecorder::ConvertRenderTexture(::UnityEngine::RenderTexture* renderTexture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackScreenshotRecorder*>(), { "ConvertRenderTexture", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method, renderTexture);
}
inline void GlobalNamespace::PlaybackScreenshotRecorder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackScreenshotRecorder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlaybackScreenshotRecorder* GlobalNamespace::PlaybackScreenshotRecorder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlaybackScreenshotRecorder*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlaybackScreenshotRecorder::PlaybackScreenshotRecorder() {}
