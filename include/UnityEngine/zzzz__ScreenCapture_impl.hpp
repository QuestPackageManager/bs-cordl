#pragma once
// IWYU pragma private; include "UnityEngine/ScreenCapture.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScreenCapture_def.hpp"
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
//  Writing Method size for method: ::UnityEngine::ScreenCapture.CaptureScreenshot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::UnityEngine::ScreenCapture::CaptureScreenshot)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4912bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ScreenCapture*>::get(), "CaptureScreenshot", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ScreenCapture.CaptureScreenshot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, int32_t, ::UnityEngine::ScreenCapture_StereoScreenCaptureMode)>(
    &::UnityEngine::ScreenCapture::CaptureScreenshot)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4912c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ScreenCapture*>::get(), "CaptureScreenshot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScreenCapture_StereoScreenCaptureMode>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ScreenCapture::CaptureScreenshot(::StringW filename) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ScreenCapture*>::get(), "CaptureScreenshot", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, filename);
}
inline void UnityEngine::ScreenCapture::CaptureScreenshot(::StringW filename, int32_t superSize, ::UnityEngine::ScreenCapture_StereoScreenCaptureMode CaptureMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ScreenCapture*>::get(), "CaptureScreenshot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScreenCapture_StereoScreenCaptureMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, filename, superSize, CaptureMode);
}
// Ctor Parameters []
constexpr ::UnityEngine::ScreenCapture::ScreenCapture() {}
