#pragma once
// IWYU pragma private; include "UnityEngine/ScreenCapture.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScreenCapture_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__ScreenCapture_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ScreenCapture_StereoScreenCaptureMode::ScreenCapture_StereoScreenCaptureMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ScreenCapture_StereoScreenCaptureMode::ScreenCapture_StereoScreenCaptureMode() {}
constexpr ::UnityEngine::ScreenCapture_StereoScreenCaptureMode UnityEngine::ScreenCapture_StereoScreenCaptureMode::LeftEye{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ScreenCapture_StereoScreenCaptureMode UnityEngine::ScreenCapture_StereoScreenCaptureMode::RightEye{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ScreenCapture_StereoScreenCaptureMode UnityEngine::ScreenCapture_StereoScreenCaptureMode::BothEyes{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::ScreenCapture_StereoScreenCaptureMode UnityEngine::ScreenCapture_StereoScreenCaptureMode::MotionVectors{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::UnityEngine::ScreenCapture.CaptureScreenshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::ScreenCapture::CaptureScreenshot)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6bb2728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ScreenCapture*>(), { "CaptureScreenshot", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ScreenCapture.CaptureScreenshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, int32_t, ::UnityEngine::ScreenCapture_StereoScreenCaptureMode)>(&::UnityEngine::ScreenCapture::CaptureScreenshot)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6bb2734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ScreenCapture*>(),
                            { "CaptureScreenshot", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ScreenCapture_StereoScreenCaptureMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ScreenCapture.CaptureScreenshot_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t, ::UnityEngine::ScreenCapture_StereoScreenCaptureMode)>(
    &::UnityEngine::ScreenCapture::CaptureScreenshot_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6bb2870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ScreenCapture*>(), { "CaptureScreenshot_Injected",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::UnityEngine::ScreenCapture_StereoScreenCaptureMode>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ScreenCapture::CaptureScreenshot(::StringW filename) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ScreenCapture*>(), { "CaptureScreenshot", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, filename);
}
inline void UnityEngine::ScreenCapture::CaptureScreenshot(::StringW filename, int32_t superSize, ::UnityEngine::ScreenCapture_StereoScreenCaptureMode CaptureMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ScreenCapture*>(),
                          { "CaptureScreenshot", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ScreenCapture_StereoScreenCaptureMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, filename, superSize, CaptureMode);
}
inline void UnityEngine::ScreenCapture::CaptureScreenshot_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> filename, int32_t superSize,
                                                                   ::UnityEngine::ScreenCapture_StereoScreenCaptureMode CaptureMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ScreenCapture*>(), { "CaptureScreenshot_Injected",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(),
                                                                                                    ::i2c::type_of<::UnityEngine::ScreenCapture_StereoScreenCaptureMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, filename, superSize, CaptureMode);
}
// Ctor Parameters []
constexpr ::UnityEngine::ScreenCapture::ScreenCapture() {}
