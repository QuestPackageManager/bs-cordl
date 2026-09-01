#pragma once
// IWYU pragma private; include "UnityEngine\XR\XRSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__XRSettings_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_def.hpp"
#include "UnityEngine/XR/zzzz__XRSettings_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::XRSettings_StereoRenderingMode::XRSettings_StereoRenderingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRSettings_StereoRenderingMode::XRSettings_StereoRenderingMode() {}
constexpr ::UnityEngine::XR::XRSettings_StereoRenderingMode UnityEngine::XR::XRSettings_StereoRenderingMode::MultiPass{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::XRSettings_StereoRenderingMode UnityEngine::XR::XRSettings_StereoRenderingMode::SinglePass{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::XRSettings_StereoRenderingMode UnityEngine::XR::XRSettings_StereoRenderingMode::SinglePassInstanced{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::XRSettings_StereoRenderingMode UnityEngine::XR::XRSettings_StereoRenderingMode::SinglePassMultiview{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::XR::XRSettings.get_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::XRSettings::get_enabled)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e36298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_enabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRSettings.get_isDeviceActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::XRSettings::get_isDeviceActive)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e362c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_isDeviceActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRSettings.get_showDeviceView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::XRSettings::get_showDeviceView)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e362e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_showDeviceView", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRSettings.set_showDeviceView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::XR::XRSettings::set_showDeviceView)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e36310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "set_showDeviceView", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRSettings.get_eyeTextureResolutionScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::XR::XRSettings::get_eyeTextureResolutionScale)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e3634c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_eyeTextureResolutionScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRSettings.set_eyeTextureResolutionScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::XR::XRSettings::set_eyeTextureResolutionScale)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e36374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "set_eyeTextureResolutionScale", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRSettings.get_eyeTextureWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::XR::XRSettings::get_eyeTextureWidth)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e363ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_eyeTextureWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRSettings.get_eyeTextureHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::XR::XRSettings::get_eyeTextureHeight)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e363d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_eyeTextureHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRSettings.get_eyeTextureDesc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (*)()>(&::UnityEngine::XR::XRSettings::get_eyeTextureDesc)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e363fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_eyeTextureDesc", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRSettings.get_deviceEyeTextureDimension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::TextureDimension (*)()>(&::UnityEngine::XR::XRSettings::get_deviceEyeTextureDimension)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e364a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_deviceEyeTextureDimension", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRSettings.get_renderViewportScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::XR::XRSettings::get_renderViewportScale)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e364d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_renderViewportScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRSettings.set_renderViewportScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::XR::XRSettings::set_renderViewportScale)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6e36520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "set_renderViewportScale", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRSettings.get_renderViewportScaleInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::XR::XRSettings::get_renderViewportScaleInternal)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e364f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_renderViewportScaleInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRSettings.set_renderViewportScaleInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::XR::XRSettings::set_renderViewportScaleInternal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e365d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "set_renderViewportScaleInternal", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRSettings.get_occlusionMaskScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::XR::XRSettings::get_occlusionMaskScale)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e36608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_occlusionMaskScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRSettings.get_useOcclusionMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::XRSettings::get_useOcclusionMesh)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e36630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_useOcclusionMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRSettings.get_loadedDeviceName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::XR::XRSettings::get_loadedDeviceName)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6e36658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_loadedDeviceName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRSettings.get_supportedDevices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::UnityEngine::XR::XRSettings::get_supportedDevices)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e36758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_supportedDevices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRSettings.get_stereoRenderingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::XRSettings_StereoRenderingMode (*)()>(&::UnityEngine::XR::XRSettings::get_stereoRenderingMode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e36780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_stereoRenderingMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRSettings.get_eyeTextureDesc_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::RenderTextureDescriptor>)>(&::UnityEngine::XR::XRSettings::get_eyeTextureDesc_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e3646c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_eyeTextureDesc_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRSettings.get_loadedDeviceName_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::XR::XRSettings::get_loadedDeviceName_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e3671c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_loadedDeviceName_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::XRSettings::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_enabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::XRSettings::get_isDeviceActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_isDeviceActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::XRSettings::get_showDeviceView() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_showDeviceView", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::XRSettings::set_showDeviceView(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "set_showDeviceView", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t UnityEngine::XR::XRSettings::get_eyeTextureResolutionScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_eyeTextureResolutionScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::XRSettings::set_eyeTextureResolutionScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "set_eyeTextureResolutionScale", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::XR::XRSettings::get_eyeTextureWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_eyeTextureWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::XR::XRSettings::get_eyeTextureHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_eyeTextureHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::XR::XRSettings::get_eyeTextureDesc() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_eyeTextureDesc", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::TextureDimension UnityEngine::XR::XRSettings::get_deviceEyeTextureDimension() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_deviceEyeTextureDimension", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::TextureDimension>(nullptr, ___internal_method);
}
inline float_t UnityEngine::XR::XRSettings::get_renderViewportScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_renderViewportScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::XRSettings::set_renderViewportScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "set_renderViewportScale", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t UnityEngine::XR::XRSettings::get_renderViewportScaleInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_renderViewportScaleInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::XRSettings::set_renderViewportScaleInternal(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "set_renderViewportScaleInternal", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t UnityEngine::XR::XRSettings::get_occlusionMaskScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_occlusionMaskScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::XRSettings::get_useOcclusionMesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_useOcclusionMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::XR::XRSettings::get_loadedDeviceName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_loadedDeviceName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::ArrayW<::StringW> UnityEngine::XR::XRSettings::get_supportedDevices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_supportedDevices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::XRSettings_StereoRenderingMode UnityEngine::XR::XRSettings::get_stereoRenderingMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_stereoRenderingMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRSettings_StereoRenderingMode>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::XRSettings::get_eyeTextureDesc_Injected(::by_ref<::UnityEngine::RenderTextureDescriptor> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_eyeTextureDesc_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::XR::XRSettings::get_loadedDeviceName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRSettings*>(), { "get_loadedDeviceName_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRSettings::XRSettings() {}
