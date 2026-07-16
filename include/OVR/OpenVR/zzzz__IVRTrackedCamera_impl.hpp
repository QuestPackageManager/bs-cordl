#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRTrackedCamera.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRTrackedCamera_def.hpp"
#include "OVR/OpenVR/zzzz__CameraVideoStreamFrameHeader_t_def.hpp"
#include "OVR/OpenVR/zzzz__EVRTrackedCameraError_def.hpp"
#include "OVR/OpenVR/zzzz__EVRTrackedCameraFrameType_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix44_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector2_t_def.hpp"
#include "OVR/OpenVR/zzzz__IVRTrackedCamera_def.hpp"
#include "OVR/OpenVR/zzzz__VRTextureBounds_t_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2d320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::*)(::OVR::OpenVR::EVRTrackedCameraError)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2d38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::*)(::OVR::OpenVR::EVRTrackedCameraError, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e2d3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2d428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::IntPtr OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::Invoke(::OVR::OpenVR::EVRTrackedCameraError eCameraError) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, eCameraError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::BeginInvoke(::OVR::OpenVR::EVRTrackedCameraError eCameraError, ::System::AsyncCallback* callback,
                                                                                                      ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, eCameraError, callback, object);
}
inline ::System::IntPtr OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum* OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::IVRTrackedCamera__GetCameraErrorNameFromEnum() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__HasCamera._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRTrackedCamera__HasCamera::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRTrackedCamera__HasCamera::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2d44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__HasCamera*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__HasCamera.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__HasCamera::*)(uint32_t, ::by_ref<bool>)>(
    &::OVR::OpenVR::IVRTrackedCamera__HasCamera::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2d4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__HasCamera*>(), { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__HasCamera*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__HasCamera.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRTrackedCamera__HasCamera::*)(uint32_t, ::by_ref<bool>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRTrackedCamera__HasCamera::BeginInvoke)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e2d4cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__HasCamera*>(), { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__HasCamera*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__HasCamera.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__HasCamera::*)(::by_ref<bool>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRTrackedCamera__HasCamera::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2d548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__HasCamera*>(), { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__HasCamera*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRTrackedCamera__HasCamera::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__HasCamera*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__HasCamera::Invoke(uint32_t nDeviceIndex, ::by_ref<bool> pHasCamera) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__HasCamera*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, nDeviceIndex, pHasCamera);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera__HasCamera::BeginInvoke(uint32_t nDeviceIndex, ::by_ref<bool> pHasCamera, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__HasCamera*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, nDeviceIndex, pHasCamera, callback, object);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__HasCamera::EndInvoke(::by_ref<bool> pHasCamera, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__HasCamera*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, pHasCamera, result);
}
inline ::OVR::OpenVR::IVRTrackedCamera__HasCamera* OVR::OpenVR::IVRTrackedCamera__HasCamera::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRTrackedCamera__HasCamera*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRTrackedCamera__HasCamera::IVRTrackedCamera__HasCamera() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2d56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::*)(
    uint32_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>)>(&::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2d5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::*)(uint32_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::System::AsyncCallback*,
                                                            ::System::Object*)>(&::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::BeginInvoke)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5e2d5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::*)(
    ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e2d6e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::Invoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                      ::by_ref<uint32_t> pnWidth, ::by_ref<uint32_t> pnHeight, ::by_ref<uint32_t> pnFrameBufferSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, nDeviceIndex, eFrameType, pnWidth, pnHeight, pnFrameBufferSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::BeginInvoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::by_ref<uint32_t> pnWidth,
                                                                                              ::by_ref<uint32_t> pnHeight, ::by_ref<uint32_t> pnFrameBufferSize, ::System::AsyncCallback* callback,
                                                                                              ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, nDeviceIndex, eFrameType, pnWidth, pnHeight, pnFrameBufferSize, callback, object);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::EndInvoke(::by_ref<uint32_t> pnWidth, ::by_ref<uint32_t> pnHeight, ::by_ref<uint32_t> pnFrameBufferSize,
                                                                                                         ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, pnWidth, pnHeight, pnFrameBufferSize, result);
}
inline ::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize* OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::IVRTrackedCamera__GetCameraFrameSize() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2d714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::*)(
    uint32_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::by_ref<::OVR::OpenVR::HmdVector2_t>, ::by_ref<::OVR::OpenVR::HmdVector2_t>)>(&::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2d780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::*)(uint32_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::by_ref<::OVR::OpenVR::HmdVector2_t>, ::by_ref<::OVR::OpenVR::HmdVector2_t>,
                                                             ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::BeginInvoke)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e2d794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::*)(
    ::by_ref<::OVR::OpenVR::HmdVector2_t>, ::by_ref<::OVR::OpenVR::HmdVector2_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e2d884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::Invoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                       ::by_ref<::OVR::OpenVR::HmdVector2_t> pFocalLength,
                                                                                                       ::by_ref<::OVR::OpenVR::HmdVector2_t> pCenter) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, nDeviceIndex, eFrameType, pFocalLength, pCenter);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::BeginInvoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                               ::by_ref<::OVR::OpenVR::HmdVector2_t> pFocalLength, ::by_ref<::OVR::OpenVR::HmdVector2_t> pCenter,
                                                                                               ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, nDeviceIndex, eFrameType, pFocalLength, pCenter, callback, object);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::EndInvoke(::by_ref<::OVR::OpenVR::HmdVector2_t> pFocalLength,
                                                                                                          ::by_ref<::OVR::OpenVR::HmdVector2_t> pCenter, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, pFocalLength, pCenter, result);
}
inline ::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics* OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::IVRTrackedCamera__GetCameraIntrinsics() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2d8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::*)(
    uint32_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, float_t, float_t, ::by_ref<::OVR::OpenVR::HmdMatrix44_t>)>(&::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2d920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::*)(uint32_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, float_t, float_t, ::by_ref<::OVR::OpenVR::HmdMatrix44_t>, ::System::AsyncCallback*,
                                                             ::System::Object*)>(&::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::BeginInvoke)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e2d934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::*)(
    ::by_ref<::OVR::OpenVR::HmdMatrix44_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2da3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::Invoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, float_t flZNear,
                                                                                                       float_t flZFar, ::by_ref<::OVR::OpenVR::HmdMatrix44_t> pProjection) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, nDeviceIndex, eFrameType, flZNear, flZFar, pProjection);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::BeginInvoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, float_t flZNear,
                                                                                               float_t flZFar, ::by_ref<::OVR::OpenVR::HmdMatrix44_t> pProjection, ::System::AsyncCallback* callback,
                                                                                               ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, nDeviceIndex, eFrameType, flZNear, flZFar, pProjection, callback, object);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::EndInvoke(::by_ref<::OVR::OpenVR::HmdMatrix44_t> pProjection, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, pProjection, result);
}
inline ::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection* OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::IVRTrackedCamera__GetCameraProjection() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2da60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::*)(uint32_t, ::by_ref<uint64_t>)>(
    &::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2dacc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::*)(uint32_t, ::by_ref<uint64_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::BeginInvoke)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e2dae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::*)(
    ::by_ref<uint64_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2db5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::Invoke(uint32_t nDeviceIndex, ::by_ref<uint64_t> pHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, nDeviceIndex, pHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::BeginInvoke(uint32_t nDeviceIndex, ::by_ref<uint64_t> pHandle, ::System::AsyncCallback* callback,
                                                                                                        ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, nDeviceIndex, pHandle, callback, object);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::EndInvoke(::by_ref<uint64_t> pHandle, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, pHandle, result);
}
inline ::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService* OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::IVRTrackedCamera__AcquireVideoStreamingService() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2db80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::*)(uint64_t)>(
    &::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2dbec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::BeginInvoke)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e2dc00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2dc54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::Invoke(uint64_t hTrackedCamera) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, hTrackedCamera);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::BeginInvoke(uint64_t hTrackedCamera, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, hTrackedCamera, callback, object);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService* OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::IVRTrackedCamera__ReleaseVideoStreamingService() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2dc78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::*)(
    uint64_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::System::IntPtr, uint32_t, ::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, uint32_t)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2dce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::*)(uint64_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::System::IntPtr, uint32_t,
                                                                   ::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::BeginInvoke)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5e2dcf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::*)(
    ::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2de18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::Invoke(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                             ::System::IntPtr pFrameBuffer, uint32_t nFrameBufferSize,
                                                                                                             ::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader,
                                                                                                             uint32_t nFrameHeaderSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, hTrackedCamera, eFrameType, pFrameBuffer, nFrameBufferSize, pFrameHeader,
                                                                                   nFrameHeaderSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::BeginInvoke(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                     ::System::IntPtr pFrameBuffer, uint32_t nFrameBufferSize,
                                                                                                     ::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize,
                                                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, hTrackedCamera, eFrameType, pFrameBuffer, nFrameBufferSize, pFrameHeader, nFrameHeaderSize, callback,
                                                                      object);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::EndInvoke(::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader,
                                                                                                                ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, pFrameHeader, result);
}
inline ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer* OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::IVRTrackedCamera__GetVideoStreamFrameBuffer() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2de3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::*)(
    uint32_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::by_ref<::OVR::OpenVR::VRTextureBounds_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2dea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::*)(uint32_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::by_ref<::OVR::OpenVR::VRTextureBounds_t>,
                                                                                                        ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::BeginInvoke)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5e2debc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::*)(
    ::by_ref<::OVR::OpenVR::VRTextureBounds_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e2dfcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::Invoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                             ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ::by_ref<uint32_t> pnWidth,
                                                                                                             ::by_ref<uint32_t> pnHeight) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, nDeviceIndex, eFrameType, pTextureBounds, pnWidth, pnHeight);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::BeginInvoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                     ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ::by_ref<uint32_t> pnWidth,
                                                                                                     ::by_ref<uint32_t> pnHeight, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, nDeviceIndex, eFrameType, pTextureBounds, pnWidth, pnHeight, callback, object);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::EndInvoke(::by_ref<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ::by_ref<uint32_t> pnWidth,
                                                                                                                ::by_ref<uint32_t> pnHeight, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, pTextureBounds, pnWidth, pnHeight, result);
}
inline ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize* OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::IVRTrackedCamera__GetVideoStreamTextureSize() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2dffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::*)(
    uint64_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::System::IntPtr, ::by_ref<::System::IntPtr>, ::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, uint32_t)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2e068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::*)(uint64_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::System::IntPtr, ::by_ref<::System::IntPtr>,
                                                                    ::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::BeginInvoke)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5e2e07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::*)(
    ::by_ref<::System::IntPtr>, ::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e2e1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::Invoke(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                              ::System::IntPtr pD3D11DeviceOrResource,
                                                                                                              ::by_ref<::System::IntPtr> ppD3D11ShaderResourceView,
                                                                                                              ::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader,
                                                                                                              uint32_t nFrameHeaderSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, hTrackedCamera, eFrameType, pD3D11DeviceOrResource, ppD3D11ShaderResourceView,
                                                                                   pFrameHeader, nFrameHeaderSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::BeginInvoke(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                      ::System::IntPtr pD3D11DeviceOrResource, ::by_ref<::System::IntPtr> ppD3D11ShaderResourceView,
                                                                                                      ::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize,
                                                                                                      ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, hTrackedCamera, eFrameType, pD3D11DeviceOrResource, ppD3D11ShaderResourceView, pFrameHeader,
                                                                      nFrameHeaderSize, callback, object);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::EndInvoke(::by_ref<::System::IntPtr> ppD3D11ShaderResourceView,
                                                                                                                 ::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader,
                                                                                                                 ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, ppD3D11ShaderResourceView, pFrameHeader, result);
}
inline ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11* OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::IVRTrackedCamera__GetVideoStreamTextureD3D11() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2e1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::*)(
    uint64_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::by_ref<uint32_t>, ::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, uint32_t)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2e240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::*)(uint64_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::by_ref<uint32_t>, ::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>,
                                                                 uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::BeginInvoke)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5e2e254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::*)(
    ::by_ref<uint32_t>, ::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e2e360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::Invoke(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                           ::by_ref<uint32_t> pglTextureId,
                                                                                                           ::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader,
                                                                                                           uint32_t nFrameHeaderSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, hTrackedCamera, eFrameType, pglTextureId, pFrameHeader, nFrameHeaderSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::BeginInvoke(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                   ::by_ref<uint32_t> pglTextureId,
                                                                                                   ::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize,
                                                                                                   ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, hTrackedCamera, eFrameType, pglTextureId, pFrameHeader, nFrameHeaderSize, callback, object);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::EndInvoke(::by_ref<uint32_t> pglTextureId,
                                                                                                              ::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader,
                                                                                                              ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, pglTextureId, pFrameHeader, result);
}
inline ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL* OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::IVRTrackedCamera__GetVideoStreamTextureGL() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2e390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::*)(uint64_t, uint32_t)>(
    &::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2e3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::*)(uint64_t, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::BeginInvoke)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e2e410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2e488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::Invoke(uint64_t hTrackedCamera, uint32_t glTextureId) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, hTrackedCamera, glTextureId);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::BeginInvoke(uint64_t hTrackedCamera, uint32_t glTextureId, ::System::AsyncCallback* callback,
                                                                                                       ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, hTrackedCamera, glTextureId, callback, object);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL* OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::IVRTrackedCamera__ReleaseVideoStreamTextureGL() {}
// Ctor Parameters [CppParam { name: "GetCameraErrorNameFromEnum", ty: "::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "HasCamera", ty: "::OVR::OpenVR::IVRTrackedCamera__HasCamera*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetCameraFrameSize", ty:
// "::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetCameraIntrinsics", ty: "::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "GetCameraProjection", ty: "::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "AcquireVideoStreamingService", ty: "::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ReleaseVideoStreamingService", ty:
// "::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetVideoStreamFrameBuffer", ty:
// "::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetVideoStreamTextureSize", ty:
// "::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetVideoStreamTextureD3D11", ty:
// "::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetVideoStreamTextureGL", ty:
// "::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ReleaseVideoStreamTextureGL", ty:
// "::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::IVRTrackedCamera::IVRTrackedCamera(
    ::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum* GetCameraErrorNameFromEnum, ::OVR::OpenVR::IVRTrackedCamera__HasCamera* HasCamera,
    ::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize* GetCameraFrameSize, ::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics* GetCameraIntrinsics,
    ::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection* GetCameraProjection, ::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService* AcquireVideoStreamingService,
    ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService* ReleaseVideoStreamingService, ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer* GetVideoStreamFrameBuffer,
    ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize* GetVideoStreamTextureSize, ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11* GetVideoStreamTextureD3D11,
    ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL* GetVideoStreamTextureGL, ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL* ReleaseVideoStreamTextureGL) noexcept {
  this->GetCameraErrorNameFromEnum = GetCameraErrorNameFromEnum;
  this->HasCamera = HasCamera;
  this->GetCameraFrameSize = GetCameraFrameSize;
  this->GetCameraIntrinsics = GetCameraIntrinsics;
  this->GetCameraProjection = GetCameraProjection;
  this->AcquireVideoStreamingService = AcquireVideoStreamingService;
  this->ReleaseVideoStreamingService = ReleaseVideoStreamingService;
  this->GetVideoStreamFrameBuffer = GetVideoStreamFrameBuffer;
  this->GetVideoStreamTextureSize = GetVideoStreamTextureSize;
  this->GetVideoStreamTextureD3D11 = GetVideoStreamTextureD3D11;
  this->GetVideoStreamTextureGL = GetVideoStreamTextureGL;
  this->ReleaseVideoStreamTextureGL = ReleaseVideoStreamTextureGL;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRTrackedCamera::IVRTrackedCamera() {}
