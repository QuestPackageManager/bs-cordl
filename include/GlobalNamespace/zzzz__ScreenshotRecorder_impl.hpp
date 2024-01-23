#pragma once
#include "GlobalNamespace/zzzz__ScreenshotRecorder_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ScreenshotRecorder_def.hpp"
#include "GlobalNamespace/zzzz__ScreenshotRecorder_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ScreenshotRecorder__RecordingType::__ScreenshotRecorder__RecordingType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ScreenshotRecorder__RecordingType::__ScreenshotRecorder__RecordingType() {}
constexpr ::GlobalNamespace::__ScreenshotRecorder__RecordingType GlobalNamespace::__ScreenshotRecorder__RecordingType::Sequence{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__ScreenshotRecorder__RecordingType GlobalNamespace::__ScreenshotRecorder__RecordingType::Stereo360Sequence{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__ScreenshotRecorder__RecordingType GlobalNamespace::__ScreenshotRecorder__RecordingType::Mono360Sequence{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__ScreenshotRecorder__RecordingType GlobalNamespace::__ScreenshotRecorder__RecordingType::F10ForScreenshot{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__ScreenshotRecorder__RecordingType GlobalNamespace::__ScreenshotRecorder__RecordingType::Interval{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__ScreenshotRecorder__RecordingType GlobalNamespace::__ScreenshotRecorder__RecordingType::ScreenshotOnPause{ static_cast<int32_t>(0x5) };
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.get_directory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::ScreenshotRecorder::*)()>(&::GlobalNamespace::ScreenshotRecorder::get_directory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f3f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(), "get_directory",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.set_directory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotRecorder::*)(::StringW)>(&::GlobalNamespace::ScreenshotRecorder::set_directory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f3f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(), "set_directory", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotRecorder::*)()>(&::GlobalNamespace::ScreenshotRecorder::OnEnable)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x20f3f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotRecorder::*)()>(&::GlobalNamespace::ScreenshotRecorder::OnDisable)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x20f40b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotRecorder::*)()>(&::GlobalNamespace::ScreenshotRecorder::LateUpdate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x20f4174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.OnApplicationFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotRecorder::*)(bool)>(&::GlobalNamespace::ScreenshotRecorder::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x20f42b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(), "OnApplicationFocus",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.SaveCameraScreenshot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotRecorder::*)()>(&::GlobalNamespace::ScreenshotRecorder::SaveCameraScreenshot)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x20f4234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(),
                                                                               "SaveCameraScreenshot", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.SaveTextureScreenshot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotRecorder::*)(::UnityEngine::Texture2D*)>(
    &::GlobalNamespace::ScreenshotRecorder::SaveTextureScreenshot)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x20f43ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(), "SaveTextureScreenshot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.ConvertRenderTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (::GlobalNamespace::ScreenshotRecorder::*)(::UnityEngine::RenderTexture*)>(
    &::GlobalNamespace::ScreenshotRecorder::ConvertRenderTexture)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x20f42d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(), "ConvertRenderTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotRecorder::*)()>(&::GlobalNamespace::ScreenshotRecorder::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x20f452c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__directory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directory;
}
constexpr ::StringW const& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__directory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directory;
}
constexpr void GlobalNamespace::ScreenshotRecorder::__cordl_internal_set__directory(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____directory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr void GlobalNamespace::ScreenshotRecorder::__cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____camera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__frameRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frameRate;
}
constexpr int32_t const& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__frameRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frameRate;
}
constexpr void GlobalNamespace::ScreenshotRecorder::__cordl_internal_set__frameRate(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____frameRate = value;
}
constexpr bool& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__forceFixedFramerate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forceFixedFramerate;
}
constexpr bool const& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__forceFixedFramerate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forceFixedFramerate;
}
constexpr void GlobalNamespace::ScreenshotRecorder::__cordl_internal_set__forceFixedFramerate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____forceFixedFramerate = value;
}
constexpr int32_t& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__interval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interval;
}
constexpr int32_t const& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__interval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interval;
}
constexpr void GlobalNamespace::ScreenshotRecorder::__cordl_internal_set__interval(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____interval = value;
}
constexpr ::GlobalNamespace::__ScreenshotRecorder__RecordingType& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__recordingType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingType;
}
constexpr ::GlobalNamespace::__ScreenshotRecorder__RecordingType const& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__recordingType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingType;
}
constexpr void GlobalNamespace::ScreenshotRecorder::__cordl_internal_set__recordingType(::GlobalNamespace::__ScreenshotRecorder__RecordingType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____recordingType = value;
}
constexpr bool& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__pauseWithPButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseWithPButton;
}
constexpr bool const& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__pauseWithPButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseWithPButton;
}
constexpr void GlobalNamespace::ScreenshotRecorder::__cordl_internal_set__pauseWithPButton(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pauseWithPButton = value;
}
constexpr int32_t& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__antiAlias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____antiAlias;
}
constexpr int32_t const& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__antiAlias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____antiAlias;
}
constexpr void GlobalNamespace::ScreenshotRecorder::__cordl_internal_set__antiAlias(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____antiAlias = value;
}
constexpr int32_t& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__screenshotWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenshotWidth;
}
constexpr int32_t const& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__screenshotWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenshotWidth;
}
constexpr void GlobalNamespace::ScreenshotRecorder::__cordl_internal_set__screenshotWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____screenshotWidth = value;
}
constexpr int32_t& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__screenshotHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenshotHeight;
}
constexpr int32_t const& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__screenshotHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenshotHeight;
}
constexpr void GlobalNamespace::ScreenshotRecorder::__cordl_internal_set__screenshotHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____screenshotHeight = value;
}
constexpr int32_t& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__counter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____counter;
}
constexpr int32_t const& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__counter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____counter;
}
constexpr void GlobalNamespace::ScreenshotRecorder::__cordl_internal_set__counter(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____counter = value;
}
constexpr float_t& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__originalTimeScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalTimeScale;
}
constexpr float_t const& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__originalTimeScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalTimeScale;
}
constexpr void GlobalNamespace::ScreenshotRecorder::__cordl_internal_set__originalTimeScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____originalTimeScale = value;
}
constexpr bool& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__paused() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paused;
}
constexpr bool const& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__paused() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paused;
}
constexpr void GlobalNamespace::ScreenshotRecorder::__cordl_internal_set__paused(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____paused = value;
}
constexpr int32_t& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__frameNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frameNum;
}
constexpr int32_t const& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__frameNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frameNum;
}
constexpr void GlobalNamespace::ScreenshotRecorder::__cordl_internal_set__frameNum(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____frameNum = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__cubemapLeftEye() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cubemapLeftEye;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__cubemapLeftEye() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cubemapLeftEye;
}
constexpr void GlobalNamespace::ScreenshotRecorder::__cordl_internal_set__cubemapLeftEye(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cubemapLeftEye)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__cubemapRighEye() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cubemapRighEye;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__cubemapRighEye() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cubemapRighEye;
}
constexpr void GlobalNamespace::ScreenshotRecorder::__cordl_internal_set__cubemapRighEye(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cubemapRighEye)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__equirectTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____equirectTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__equirectTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____equirectTexture;
}
constexpr void GlobalNamespace::ScreenshotRecorder::__cordl_internal_set__equirectTexture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____equirectTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__cameraRenderTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraRenderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::ScreenshotRecorder::__cordl_internal_get__cameraRenderTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraRenderTexture;
}
constexpr void GlobalNamespace::ScreenshotRecorder::__cordl_internal_set__cameraRenderTexture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cameraRenderTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::ScreenshotRecorder::get_directory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(), "get_directory",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::ScreenshotRecorder::set_directory(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(), "set_directory", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ScreenshotRecorder::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ScreenshotRecorder::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ScreenshotRecorder::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ScreenshotRecorder::OnApplicationFocus(bool hasFocus) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(), "OnApplicationFocus",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hasFocus);
}
inline void GlobalNamespace::ScreenshotRecorder::SaveCameraScreenshot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(),
                                                                             "SaveCameraScreenshot", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ScreenshotRecorder::SaveTextureScreenshot(::UnityEngine::Texture2D* tex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(), "SaveTextureScreenshot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tex);
}
inline ::UnityW<::UnityEngine::Texture2D> GlobalNamespace::ScreenshotRecorder::ConvertRenderTexture(::UnityEngine::RenderTexture* renderTexture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(), "ConvertRenderTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(this, ___internal_method, renderTexture);
}
inline ::GlobalNamespace::ScreenshotRecorder* GlobalNamespace::ScreenshotRecorder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ScreenshotRecorder*>());
}
inline void GlobalNamespace::ScreenshotRecorder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScreenshotRecorder::ScreenshotRecorder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
