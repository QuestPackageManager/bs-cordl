#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRSystem.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRSystem_def.hpp"
#include "OVR/OpenVR/zzzz__DistortionCoordinates_t_def.hpp"
#include "OVR/OpenVR/zzzz__EDeviceActivityLevel_def.hpp"
#include "OVR/OpenVR/zzzz__EHiddenAreaMeshType_def.hpp"
#include "OVR/OpenVR/zzzz__ETextureType_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackedControllerRole_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackedDeviceClass_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackedDeviceProperty_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackedPropertyError_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "OVR/OpenVR/zzzz__EVRButtonId_def.hpp"
#include "OVR/OpenVR/zzzz__EVRControllerAxisType_def.hpp"
#include "OVR/OpenVR/zzzz__EVREventType_def.hpp"
#include "OVR/OpenVR/zzzz__EVREye_def.hpp"
#include "OVR/OpenVR/zzzz__EVRFirmwareError_def.hpp"
#include "OVR/OpenVR/zzzz__HiddenAreaMesh_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix44_t_def.hpp"
#include "OVR/OpenVR/zzzz__IVRSystem_def.hpp"
#include "OVR/OpenVR/zzzz__TrackedDevicePose_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRControllerState_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e29764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::*)(::by_ref<uint32_t>, ::by_ref<uint32_t>)>(
    &::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e297e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::*)(::by_ref<uint32_t>, ::by_ref<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::BeginInvoke)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e297f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::*)(::by_ref<uint32_t>, ::by_ref<uint32_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e29868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::Invoke(::by_ref<uint32_t> pnWidth, ::by_ref<uint32_t> pnHeight) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pnWidth, pnHeight);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::BeginInvoke(::by_ref<uint32_t> pnWidth, ::by_ref<uint32_t> pnHeight, ::System::AsyncCallback* callback,
                                                                                                   ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pnWidth, pnHeight, callback, object);
}
inline void OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::EndInvoke(::by_ref<uint32_t> pnWidth, ::by_ref<uint32_t> pnHeight, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pnWidth, pnHeight, result);
}
inline ::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize* OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::IVRSystem__GetRecommendedRenderTargetSize() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetProjectionMatrix._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetProjectionMatrix::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetProjectionMatrix::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2988c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetProjectionMatrix*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetProjectionMatrix.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::HmdMatrix44_t (::OVR::OpenVR::IVRSystem__GetProjectionMatrix::*)(::OVR::OpenVR::EVREye, float_t, float_t)>(
    &::OVR::OpenVR::IVRSystem__GetProjectionMatrix::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e298f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetProjectionMatrix*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetProjectionMatrix*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetProjectionMatrix.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetProjectionMatrix::*)(::OVR::OpenVR::EVREye, float_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetProjectionMatrix::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5e2990c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetProjectionMatrix*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetProjectionMatrix*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetProjectionMatrix.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::HmdMatrix44_t (::OVR::OpenVR::IVRSystem__GetProjectionMatrix::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetProjectionMatrix::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e299c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetProjectionMatrix*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetProjectionMatrix*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetProjectionMatrix::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetProjectionMatrix*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::HmdMatrix44_t OVR::OpenVR::IVRSystem__GetProjectionMatrix::Invoke(::OVR::OpenVR::EVREye eEye, float_t fNearZ, float_t fFarZ) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetProjectionMatrix*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix44_t>(this, ___internal_method, eEye, fNearZ, fFarZ);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetProjectionMatrix::BeginInvoke(::OVR::OpenVR::EVREye eEye, float_t fNearZ, float_t fFarZ, ::System::AsyncCallback* callback,
                                                                                        ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetProjectionMatrix*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, eEye, fNearZ, fFarZ, callback, object);
}
inline ::OVR::OpenVR::HmdMatrix44_t OVR::OpenVR::IVRSystem__GetProjectionMatrix::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetProjectionMatrix*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix44_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetProjectionMatrix* OVR::OpenVR::IVRSystem__GetProjectionMatrix::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetProjectionMatrix*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetProjectionMatrix::IVRSystem__GetProjectionMatrix() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetProjectionRaw._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetProjectionRaw::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRSystem__GetProjectionRaw::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e299f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetProjectionRaw*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetProjectionRaw.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetProjectionRaw::*)(::OVR::OpenVR::EVREye, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>,
                                                                                                            ::by_ref<float_t>)>(&::OVR::OpenVR::IVRSystem__GetProjectionRaw::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e29a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetProjectionRaw*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetProjectionRaw*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetProjectionRaw.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__GetProjectionRaw::*)(::OVR::OpenVR::EVREye, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSystem__GetProjectionRaw::BeginInvoke)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5e29a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetProjectionRaw*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetProjectionRaw*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetProjectionRaw.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetProjectionRaw::*)(::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>,
                                                                                                            ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__GetProjectionRaw::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e29b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetProjectionRaw*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetProjectionRaw*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetProjectionRaw::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetProjectionRaw*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSystem__GetProjectionRaw::Invoke(::OVR::OpenVR::EVREye eEye, ::by_ref<float_t> pfLeft, ::by_ref<float_t> pfRight, ::by_ref<float_t> pfTop, ::by_ref<float_t> pfBottom) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetProjectionRaw*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eEye, pfLeft, pfRight, pfTop, pfBottom);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetProjectionRaw::BeginInvoke(::OVR::OpenVR::EVREye eEye, ::by_ref<float_t> pfLeft, ::by_ref<float_t> pfRight, ::by_ref<float_t> pfTop,
                                                                                     ::by_ref<float_t> pfBottom, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetProjectionRaw*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, eEye, pfLeft, pfRight, pfTop, pfBottom, callback, object);
}
inline void OVR::OpenVR::IVRSystem__GetProjectionRaw::EndInvoke(::by_ref<float_t> pfLeft, ::by_ref<float_t> pfRight, ::by_ref<float_t> pfTop, ::by_ref<float_t> pfBottom,
                                                                ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetProjectionRaw*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pfLeft, pfRight, pfTop, pfBottom, result);
}
inline ::OVR::OpenVR::IVRSystem__GetProjectionRaw* OVR::OpenVR::IVRSystem__GetProjectionRaw::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetProjectionRaw*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetProjectionRaw::IVRSystem__GetProjectionRaw() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ComputeDistortion._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__ComputeDistortion::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__ComputeDistortion::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e29b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__ComputeDistortion*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ComputeDistortion.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__ComputeDistortion::*)(
    ::OVR::OpenVR::EVREye, float_t, float_t, ::by_ref<::OVR::OpenVR::DistortionCoordinates_t>)>(&::OVR::OpenVR::IVRSystem__ComputeDistortion::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e29c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__ComputeDistortion*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ComputeDistortion*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ComputeDistortion.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__ComputeDistortion::*)(::OVR::OpenVR::EVREye, float_t, float_t, ::by_ref<::OVR::OpenVR::DistortionCoordinates_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSystem__ComputeDistortion::BeginInvoke)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5e29c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__ComputeDistortion*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ComputeDistortion*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ComputeDistortion.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__ComputeDistortion::*)(::by_ref<::OVR::OpenVR::DistortionCoordinates_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__ComputeDistortion::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e29d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__ComputeDistortion*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ComputeDistortion*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__ComputeDistortion::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__ComputeDistortion*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__ComputeDistortion::Invoke(::OVR::OpenVR::EVREye eEye, float_t fU, float_t fV, ::by_ref<::OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ComputeDistortion*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eEye, fU, fV, pDistortionCoordinates);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__ComputeDistortion::BeginInvoke(::OVR::OpenVR::EVREye eEye, float_t fU, float_t fV,
                                                                                      ::by_ref<::OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates, ::System::AsyncCallback* callback,
                                                                                      ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ComputeDistortion*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, eEye, fU, fV, pDistortionCoordinates, callback, object);
}
inline bool OVR::OpenVR::IVRSystem__ComputeDistortion::EndInvoke(::by_ref<::OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ComputeDistortion*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pDistortionCoordinates, result);
}
inline ::OVR::OpenVR::IVRSystem__ComputeDistortion* OVR::OpenVR::IVRSystem__ComputeDistortion::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__ComputeDistortion*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__ComputeDistortion::IVRSystem__ComputeDistortion() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e29d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::*)(::OVR::OpenVR::EVREye)>(
    &::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e29da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::*)(::OVR::OpenVR::EVREye, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e29db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e29e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::Invoke(::OVR::OpenVR::EVREye eEye) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t>(this, ___internal_method, eEye);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::BeginInvoke(::OVR::OpenVR::EVREye eEye, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, eEye, callback, object);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform* OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::IVRSystem__GetEyeToHeadTransform() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e29e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::*)(::by_ref<float_t>, ::by_ref<uint64_t>)>(
    &::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e29ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::*)(::by_ref<float_t>, ::by_ref<uint64_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::BeginInvoke)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5e29f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::*)(::by_ref<float_t>, ::by_ref<uint64_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e29f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::Invoke(::by_ref<float_t> pfSecondsSinceLastVsync, ::by_ref<uint64_t> pulFrameCounter) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pfSecondsSinceLastVsync, pulFrameCounter);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::BeginInvoke(::by_ref<float_t> pfSecondsSinceLastVsync, ::by_ref<uint64_t> pulFrameCounter,
                                                                                          ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pfSecondsSinceLastVsync, pulFrameCounter, callback, object);
}
inline bool OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::EndInvoke(::by_ref<float_t> pfSecondsSinceLastVsync, ::by_ref<uint64_t> pulFrameCounter, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pfSecondsSinceLastVsync, pulFrameCounter, result);
}
inline ::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync* OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::IVRSystem__GetTimeSinceLastVsync() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e29fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::*)()>(&::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2a010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e2a024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2a040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline int32_t OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex* OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::IVRSystem__GetD3D9AdapterIndex() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e2a064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::*)(::by_ref<int32_t>)>(&::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2a0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::*)(::by_ref<int32_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::BeginInvoke)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e2a0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::*)(::by_ref<int32_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e2a144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::Invoke(::by_ref<int32_t> pnAdapterIndex) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pnAdapterIndex);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::BeginInvoke(::by_ref<int32_t> pnAdapterIndex, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pnAdapterIndex, callback, object);
}
inline void OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::EndInvoke(::by_ref<int32_t> pnAdapterIndex, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pnAdapterIndex, result);
}
inline ::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo* OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::IVRSystem__GetDXGIOutputInfo() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetOutputDevice._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetOutputDevice::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRSystem__GetOutputDevice::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e2a15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetOutputDevice*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetOutputDevice.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetOutputDevice::*)(::by_ref<uint64_t>, ::OVR::OpenVR::ETextureType, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetOutputDevice::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2a1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetOutputDevice*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetOutputDevice*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetOutputDevice.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetOutputDevice::*)(::by_ref<uint64_t>, ::OVR::OpenVR::ETextureType, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetOutputDevice::BeginInvoke)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5e2a1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetOutputDevice*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetOutputDevice*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetOutputDevice.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetOutputDevice::*)(::by_ref<uint64_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetOutputDevice::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e2a2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetOutputDevice*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetOutputDevice*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetOutputDevice::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetOutputDevice*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSystem__GetOutputDevice::Invoke(::by_ref<uint64_t> pnDevice, ::OVR::OpenVR::ETextureType textureType, ::System::IntPtr pInstance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetOutputDevice*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pnDevice, textureType, pInstance);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetOutputDevice::BeginInvoke(::by_ref<uint64_t> pnDevice, ::OVR::OpenVR::ETextureType textureType, ::System::IntPtr pInstance,
                                                                                    ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetOutputDevice*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pnDevice, textureType, pInstance, callback, object);
}
inline void OVR::OpenVR::IVRSystem__GetOutputDevice::EndInvoke(::by_ref<uint64_t> pnDevice, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetOutputDevice*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pnDevice, result);
}
inline ::OVR::OpenVR::IVRSystem__GetOutputDevice* OVR::OpenVR::IVRSystem__GetOutputDevice::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetOutputDevice*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetOutputDevice::IVRSystem__GetOutputDevice() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e2a2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::*)()>(&::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2a334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e2a348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2a364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop* OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::IVRSystem__IsDisplayOnDesktop() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__SetDisplayVisibility._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__SetDisplayVisibility::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__SetDisplayVisibility::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2a388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__SetDisplayVisibility*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__SetDisplayVisibility.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__SetDisplayVisibility::*)(bool)>(&::OVR::OpenVR::IVRSystem__SetDisplayVisibility::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2a3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__SetDisplayVisibility*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__SetDisplayVisibility*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__SetDisplayVisibility.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__SetDisplayVisibility::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSystem__SetDisplayVisibility::BeginInvoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e2a408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__SetDisplayVisibility*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__SetDisplayVisibility*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__SetDisplayVisibility.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__SetDisplayVisibility::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__SetDisplayVisibility::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2a460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__SetDisplayVisibility*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__SetDisplayVisibility*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__SetDisplayVisibility::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__SetDisplayVisibility*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__SetDisplayVisibility::Invoke(bool bIsVisibleOnDesktop) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__SetDisplayVisibility*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bIsVisibleOnDesktop);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__SetDisplayVisibility::BeginInvoke(bool bIsVisibleOnDesktop, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__SetDisplayVisibility*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, bIsVisibleOnDesktop, callback, object);
}
inline bool OVR::OpenVR::IVRSystem__SetDisplayVisibility::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__SetDisplayVisibility*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__SetDisplayVisibility* OVR::OpenVR::IVRSystem__SetDisplayVisibility::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__SetDisplayVisibility*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__SetDisplayVisibility::IVRSystem__SetDisplayVisibility() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2a484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::*)(
    ::OVR::OpenVR::ETrackingUniverseOrigin, float_t, ::by_ref<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>>, uint32_t)>(&::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2a4f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::*)(::OVR::OpenVR::ETrackingUniverseOrigin, float_t, ::by_ref<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>>, uint32_t,
                                                                  ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::BeginInvoke)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5e2a504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e2a5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsToPhotonsFromNow,
                                                                            ::by_ref<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>> pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsToPhotonsFromNow,
                                                                                                    ::by_ref<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>> pTrackedDevicePoseArray,
                                                                                                    uint32_t unTrackedDevicePoseArrayCount, ::System::AsyncCallback* callback,
                                                                                                    ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount,
                                                                      callback, object);
}
inline void OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose* OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::IVRSystem__GetDeviceToAbsoluteTrackingPose() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e2a5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::*)()>(&::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2a644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e2a658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e2a674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose* OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::IVRSystem__ResetSeatedZeroPose() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e2a680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::*)()>(
    &::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2a6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::*)(::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e2a6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e2a718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::Invoke() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose* OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::New_ctor(::System::Object* object,
                                                                                                                                                                    ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e2a74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::*)()>(
    &::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2a7b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::*)(::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e2a7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e2a7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::Invoke() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose* OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::New_ctor(::System::Object* object,
                                                                                                                                                              ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2a818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::*)(
    ::OVR::OpenVR::ETrackedDeviceClass, ::by_ref<::ArrayW<uint32_t>>, uint32_t, uint32_t)>(&::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2a884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::*)(::OVR::OpenVR::ETrackedDeviceClass, ::by_ref<::ArrayW<uint32_t>>, uint32_t, uint32_t, ::System::AsyncCallback*,
                                                                       ::System::Object*)>(&::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::BeginInvoke)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5e2a898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2a95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::Invoke(::OVR::OpenVR::ETrackedDeviceClass eTrackedDeviceClass, ::by_ref<::ArrayW<uint32_t>> punTrackedDeviceIndexArray,
                                                                                     uint32_t unTrackedDeviceIndexArrayCount, uint32_t unRelativeToTrackedDeviceIndex) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::BeginInvoke(::OVR::OpenVR::ETrackedDeviceClass eTrackedDeviceClass,
                                                                                                         ::by_ref<::ArrayW<uint32_t>> punTrackedDeviceIndexArray,
                                                                                                         uint32_t unTrackedDeviceIndexArrayCount, uint32_t unRelativeToTrackedDeviceIndex,
                                                                                                         ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount,
                                                                      unRelativeToTrackedDeviceIndex, callback, object);
}
inline uint32_t OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass* OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::IVRSystem__GetSortedTrackedDeviceIndicesOfClass() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2a980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EDeviceActivityLevel (::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::*)(uint32_t)>(
    &::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2a9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::*)(uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::BeginInvoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e2aa00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EDeviceActivityLevel (::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2aa58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EDeviceActivityLevel OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::Invoke(uint32_t unDeviceId) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EDeviceActivityLevel>(this, ___internal_method, unDeviceId);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::BeginInvoke(uint32_t unDeviceId, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unDeviceId, callback, object);
}
inline ::OVR::OpenVR::EDeviceActivityLevel OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EDeviceActivityLevel>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel* OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::IVRSystem__GetTrackedDeviceActivityLevel() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ApplyTransform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__ApplyTransform::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRSystem__ApplyTransform::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e2aa7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__ApplyTransform*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ApplyTransform.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__ApplyTransform::*)(::by_ref<::OVR::OpenVR::TrackedDevicePose_t>, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>,
                                                                                                          ::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::IVRSystem__ApplyTransform::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2aafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__ApplyTransform*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ApplyTransform*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ApplyTransform.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__ApplyTransform::*)(::by_ref<::OVR::OpenVR::TrackedDevicePose_t>, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>,
                                                 ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__ApplyTransform::BeginInvoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5e2ab10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__ApplyTransform*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ApplyTransform*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ApplyTransform.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__ApplyTransform::*)(::by_ref<::OVR::OpenVR::TrackedDevicePose_t>, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>,
                                                                                                          ::by_ref<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__ApplyTransform::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2abf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__ApplyTransform*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ApplyTransform*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__ApplyTransform::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__ApplyTransform*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSystem__ApplyTransform::Invoke(::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose,
                                                           ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pTransform) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ApplyTransform*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pOutputPose, pTrackedDevicePose, pTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__ApplyTransform::BeginInvoke(::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose,
                                                                                   ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pTransform,
                                                                                   ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ApplyTransform*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pOutputPose, pTrackedDevicePose, pTransform, callback, object);
}
inline void OVR::OpenVR::IVRSystem__ApplyTransform::EndInvoke(::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose,
                                                              ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pTransform, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ApplyTransform*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pOutputPose, pTrackedDevicePose, pTransform, result);
}
inline ::OVR::OpenVR::IVRSystem__ApplyTransform* OVR::OpenVR::IVRSystem__ApplyTransform::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__ApplyTransform*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__ApplyTransform::IVRSystem__ApplyTransform() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2ac14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::*)(::OVR::OpenVR::ETrackedControllerRole)>(
    &::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2ac80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::*)(::OVR::OpenVR::ETrackedControllerRole, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e2ac94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2ad1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::Invoke(::OVR::OpenVR::ETrackedControllerRole unDeviceType) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, unDeviceType);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::BeginInvoke(::OVR::OpenVR::ETrackedControllerRole unDeviceType, ::System::AsyncCallback* callback,
                                                                                                           ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unDeviceType, callback, object);
}
inline uint32_t OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole* OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::IVRSystem__GetTrackedDeviceIndexForControllerRole() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2ad40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::ETrackedControllerRole (::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::*)(uint32_t)>(
    &::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2adac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::*)(uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::BeginInvoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e2adc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::ETrackedControllerRole (::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2ae18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::ETrackedControllerRole OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::Invoke(uint32_t unDeviceIndex) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ETrackedControllerRole>(this, ___internal_method, unDeviceIndex);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::BeginInvoke(uint32_t unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unDeviceIndex, callback, object);
}
inline ::OVR::OpenVR::ETrackedControllerRole OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ETrackedControllerRole>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex* OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::IVRSystem__GetControllerRoleForTrackedDeviceIndex() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2ae3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::ETrackedDeviceClass (::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::*)(uint32_t)>(
    &::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2aea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::*)(uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::BeginInvoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e2aebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::ETrackedDeviceClass (::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2af14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::ETrackedDeviceClass OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::Invoke(uint32_t unDeviceIndex) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ETrackedDeviceClass>(this, ___internal_method, unDeviceIndex);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::BeginInvoke(uint32_t unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unDeviceIndex, callback, object);
}
inline ::OVR::OpenVR::ETrackedDeviceClass OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ETrackedDeviceClass>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass* OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::IVRSystem__GetTrackedDeviceClass() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2af38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::*)(uint32_t)>(&::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2afa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::*)(uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::BeginInvoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e2afb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2b010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::Invoke(uint32_t unDeviceIndex) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, unDeviceIndex);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::BeginInvoke(uint32_t unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unDeviceIndex, callback, object);
}
inline bool OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected* OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::IVRSystem__IsTrackedDeviceConnected() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2b034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2b0a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>, ::System::AsyncCallback*,
                                                               ::System::Object*)>(&::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e2b0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::*)(::by_ref<::OVR::OpenVR::ETrackedPropertyError>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2b18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                                 ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback,
                                                                                                 ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unDeviceIndex, prop, pError, callback, object);
}
inline bool OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::EndInvoke(::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pError, result);
}
inline ::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty* OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::IVRSystem__GetBoolTrackedDeviceProperty() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2b1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2b21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>, ::System::AsyncCallback*,
                                                                ::System::Object*)>(&::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e2b230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::*)(::by_ref<::OVR::OpenVR::ETrackedPropertyError>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2b308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline float_t OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                             ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                                  ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback,
                                                                                                  ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unDeviceIndex, prop, pError, callback, object);
}
inline float_t OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::EndInvoke(::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, pError, result);
}
inline ::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty* OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::IVRSystem__GetFloatTrackedDeviceProperty() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2b32c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2b398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>, ::System::AsyncCallback*,
                                                                ::System::Object*)>(&::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e2b3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::*)(::by_ref<::OVR::OpenVR::ETrackedPropertyError>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2b484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                             ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                                  ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback,
                                                                                                  ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unDeviceIndex, prop, pError, callback, object);
}
inline int32_t OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::EndInvoke(::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, pError, result);
}
inline ::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty* OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::IVRSystem__GetInt32TrackedDeviceProperty() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2b4a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2b514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>, ::System::AsyncCallback*,
                                                                 ::System::Object*)>(&::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e2b528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::*)(::by_ref<::OVR::OpenVR::ETrackedPropertyError>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2b600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint64_t OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                               ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                                   ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback,
                                                                                                   ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unDeviceIndex, prop, pError, callback, object);
}
inline uint64_t OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::EndInvoke(::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, pError, result);
}
inline ::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty* OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::IVRSystem__GetUint64TrackedDeviceProperty() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2b624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2b690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>, ::System::AsyncCallback*,
                                                                   ::System::Object*)>(&::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e2b6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::*)(
    ::by_ref<::OVR::OpenVR::ETrackedPropertyError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::EndInvoke)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5e2b77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                                     ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                                     ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback,
                                                                                                     ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unDeviceIndex, prop, pError, callback, object);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::EndInvoke(::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t>(this, ___internal_method, pError, result);
}
inline ::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty* OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::IVRSystem__GetMatrix34TrackedDeviceProperty() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2b7bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, uint32_t, ::System::IntPtr, uint32_t, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>)>(
    &::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2b828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, uint32_t, ::System::IntPtr, uint32_t, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>,
                                                                ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::BeginInvoke)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5e2b83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::*)(::by_ref<::OVR::OpenVR::ETrackedPropertyError>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2b960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t propType, ::System::IntPtr pBuffer,
                                                                              uint32_t unBufferSize, ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, unDeviceIndex, prop, propType, pBuffer, unBufferSize, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t propType,
                                                                                                  ::System::IntPtr pBuffer, uint32_t unBufferSize,
                                                                                                  ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback,
                                                                                                  ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unDeviceIndex, prop, propType, pBuffer, unBufferSize, pError, callback, object);
}
inline uint32_t OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::EndInvoke(::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pError, result);
}
inline ::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty* OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::IVRSystem__GetArrayTrackedDeviceProperty() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2b984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::System::Text::StringBuilder*, uint32_t, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>)>(
    &::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2b9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::System::Text::StringBuilder*, uint32_t,
                                                                                                      ::by_ref<::OVR::OpenVR::ETrackedPropertyError>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::BeginInvoke)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5e2ba04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::*)(::by_ref<::OVR::OpenVR::ETrackedPropertyError>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2baf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::System::Text::StringBuilder* pchValue,
                                                                               uint32_t unBufferSize, ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, unDeviceIndex, prop, pchValue, unBufferSize, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                                   ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                                                                   ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback,
                                                                                                   ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unDeviceIndex, prop, pchValue, unBufferSize, pError, callback, object);
}
inline uint32_t OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::EndInvoke(::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pError, result);
}
inline ::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty* OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::IVRSystem__GetStringTrackedDeviceProperty() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2bb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::*)(::OVR::OpenVR::ETrackedPropertyError)>(
    &::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2bb88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::*)(::OVR::OpenVR::ETrackedPropertyError, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e2bb9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2bc24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::IntPtr OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::Invoke(::OVR::OpenVR::ETrackedPropertyError error) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, error);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::BeginInvoke(::OVR::OpenVR::ETrackedPropertyError error, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, error, callback, object);
}
inline ::System::IntPtr OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum* OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::IVRSystem__GetPropErrorNameFromEnum() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__PollNextEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__PollNextEvent::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRSystem__PollNextEvent::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e2bc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__PollNextEvent*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__PollNextEvent.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__PollNextEvent::*)(::by_ref<::OVR::OpenVR::VREvent_t>, uint32_t)>(
    &::OVR::OpenVR::IVRSystem__PollNextEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2bcc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__PollNextEvent*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__PollNextEvent*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__PollNextEvent.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__PollNextEvent::*)(::by_ref<::OVR::OpenVR::VREvent_t>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__PollNextEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e2bcdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__PollNextEvent*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__PollNextEvent*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__PollNextEvent.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__PollNextEvent::*)(::by_ref<::OVR::OpenVR::VREvent_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__PollNextEvent::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2bd88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__PollNextEvent*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__PollNextEvent*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__PollNextEvent::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__PollNextEvent*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__PollNextEvent::Invoke(::by_ref<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__PollNextEvent*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pEvent, uncbVREvent);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__PollNextEvent::BeginInvoke(::by_ref<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent, ::System::AsyncCallback* callback,
                                                                                  ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__PollNextEvent*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pEvent, uncbVREvent, callback, object);
}
inline bool OVR::OpenVR::IVRSystem__PollNextEvent::EndInvoke(::by_ref<::OVR::OpenVR::VREvent_t> pEvent, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__PollNextEvent*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pEvent, result);
}
inline ::OVR::OpenVR::IVRSystem__PollNextEvent* OVR::OpenVR::IVRSystem__PollNextEvent::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__PollNextEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__PollNextEvent::IVRSystem__PollNextEvent() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__PollNextEventWithPose._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__PollNextEventWithPose::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__PollNextEventWithPose::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2bdac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__PollNextEventWithPose*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__PollNextEventWithPose.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__PollNextEventWithPose::*)(
    ::OVR::OpenVR::ETrackingUniverseOrigin, ::by_ref<::OVR::OpenVR::VREvent_t>, uint32_t, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>)>(&::OVR::OpenVR::IVRSystem__PollNextEventWithPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2be18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__PollNextEventWithPose*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__PollNextEventWithPose*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__PollNextEventWithPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__PollNextEventWithPose::*)(::OVR::OpenVR::ETrackingUniverseOrigin, ::by_ref<::OVR::OpenVR::VREvent_t>, uint32_t, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>,
                                                        ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__PollNextEventWithPose::BeginInvoke)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e2be2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__PollNextEventWithPose*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__PollNextEventWithPose*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__PollNextEventWithPose.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__PollNextEventWithPose::*)(
    ::by_ref<::OVR::OpenVR::VREvent_t>, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__PollNextEventWithPose::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e2bf34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__PollNextEventWithPose*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__PollNextEventWithPose*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__PollNextEventWithPose::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__PollNextEventWithPose*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__PollNextEventWithPose::Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ::by_ref<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent,
                                                                  ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__PollNextEventWithPose*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__PollNextEventWithPose::BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ::by_ref<::OVR::OpenVR::VREvent_t> pEvent,
                                                                                          uint32_t uncbVREvent, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose,
                                                                                          ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__PollNextEventWithPose*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose, callback, object);
}
inline bool OVR::OpenVR::IVRSystem__PollNextEventWithPose::EndInvoke(::by_ref<::OVR::OpenVR::VREvent_t> pEvent, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose,
                                                                     ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__PollNextEventWithPose*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pEvent, pTrackedDevicePose, result);
}
inline ::OVR::OpenVR::IVRSystem__PollNextEventWithPose* OVR::OpenVR::IVRSystem__PollNextEventWithPose::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__PollNextEventWithPose*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__PollNextEventWithPose::IVRSystem__PollNextEventWithPose() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2bf64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::*)(::OVR::OpenVR::EVREventType)>(
    &::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2bfd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::*)(::OVR::OpenVR::EVREventType, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e2bfe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2c06c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::IntPtr OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::Invoke(::OVR::OpenVR::EVREventType eType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, eType);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::BeginInvoke(::OVR::OpenVR::EVREventType eType, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, eType, callback, object);
}
inline ::System::IntPtr OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum* OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::IVRSystem__GetEventTypeNameFromEnum() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2c090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::HiddenAreaMesh_t (::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::*)(::OVR::OpenVR::EVREye, ::OVR::OpenVR::EHiddenAreaMeshType)>(
    &::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2c0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::*)(::OVR::OpenVR::EVREye, ::OVR::OpenVR::EHiddenAreaMeshType, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5e2c110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::HiddenAreaMesh_t (::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e2c1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::HiddenAreaMesh_t OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::Invoke(::OVR::OpenVR::EVREye eEye, ::OVR::OpenVR::EHiddenAreaMeshType type) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HiddenAreaMesh_t>(this, ___internal_method, eEye, type);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::BeginInvoke(::OVR::OpenVR::EVREye eEye, ::OVR::OpenVR::EHiddenAreaMeshType type, ::System::AsyncCallback* callback,
                                                                                      ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, eEye, type, callback, object);
}
inline ::OVR::OpenVR::HiddenAreaMesh_t OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HiddenAreaMesh_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh* OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::IVRSystem__GetHiddenAreaMesh() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetControllerState::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetControllerState::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2c1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerState*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerState.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__GetControllerState::*)(uint32_t, ::by_ref<::OVR::OpenVR::VRControllerState_t>, uint32_t)>(
    &::OVR::OpenVR::IVRSystem__GetControllerState::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2c258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerState*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerState*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerState.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetControllerState::*)(uint32_t, ::by_ref<::OVR::OpenVR::VRControllerState_t>, uint32_t,
                                                                                                                                 ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSystem__GetControllerState::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e2c26c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerState*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerState*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerState.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__GetControllerState::*)(::by_ref<::OVR::OpenVR::VRControllerState_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetControllerState::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2c32c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerState*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerState*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetControllerState::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerState*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__GetControllerState::Invoke(uint32_t unControllerDeviceIndex, ::by_ref<::OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerState*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, unControllerDeviceIndex, pControllerState, unControllerStateSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetControllerState::BeginInvoke(uint32_t unControllerDeviceIndex, ::by_ref<::OVR::OpenVR::VRControllerState_t> pControllerState,
                                                                                       uint32_t unControllerStateSize, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerState*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unControllerDeviceIndex, pControllerState, unControllerStateSize, callback, object);
}
inline bool OVR::OpenVR::IVRSystem__GetControllerState::EndInvoke(::by_ref<::OVR::OpenVR::VRControllerState_t> pControllerState, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerState*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pControllerState, result);
}
inline ::OVR::OpenVR::IVRSystem__GetControllerState* OVR::OpenVR::IVRSystem__GetControllerState::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetControllerState*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetControllerState::IVRSystem__GetControllerState() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetControllerStateWithPose::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetControllerStateWithPose::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2c350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__GetControllerStateWithPose::*)(
    ::OVR::OpenVR::ETrackingUniverseOrigin, uint32_t, ::by_ref<::OVR::OpenVR::VRControllerState_t>, uint32_t, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>)>(
    &::OVR::OpenVR::IVRSystem__GetControllerStateWithPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2c3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetControllerStateWithPose::*)(::OVR::OpenVR::ETrackingUniverseOrigin, uint32_t, ::by_ref<::OVR::OpenVR::VRControllerState_t>,
                                                                                                  uint32_t, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetControllerStateWithPose::BeginInvoke)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5e2c3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__GetControllerStateWithPose::*)(
    ::by_ref<::OVR::OpenVR::VRControllerState_t>, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__GetControllerStateWithPose::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e2c4f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetControllerStateWithPose::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__GetControllerStateWithPose::Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex,
                                                                       ::by_ref<::OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize,
                                                                       ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetControllerStateWithPose::BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex,
                                                                                               ::by_ref<::OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize,
                                                                                               ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::System::AsyncCallback* callback,
                                                                                               ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose, callback,
                                                                      object);
}
inline bool OVR::OpenVR::IVRSystem__GetControllerStateWithPose::EndInvoke(::by_ref<::OVR::OpenVR::VRControllerState_t> pControllerState,
                                                                          ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pControllerState, pTrackedDevicePose, result);
}
inline ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose* OVR::OpenVR::IVRSystem__GetControllerStateWithPose::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose::IVRSystem__GetControllerStateWithPose() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__TriggerHapticPulse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__TriggerHapticPulse::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__TriggerHapticPulse::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2c520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__TriggerHapticPulse*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__TriggerHapticPulse.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__TriggerHapticPulse::*)(uint32_t, uint32_t, uint16_t)>(&::OVR::OpenVR::IVRSystem__TriggerHapticPulse::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2c58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__TriggerHapticPulse*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__TriggerHapticPulse*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__TriggerHapticPulse.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__TriggerHapticPulse::*)(uint32_t, uint32_t, uint16_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__TriggerHapticPulse::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e2c5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__TriggerHapticPulse*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__TriggerHapticPulse*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__TriggerHapticPulse.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__TriggerHapticPulse::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__TriggerHapticPulse::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e2c630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__TriggerHapticPulse*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__TriggerHapticPulse*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__TriggerHapticPulse::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__TriggerHapticPulse*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSystem__TriggerHapticPulse::Invoke(uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__TriggerHapticPulse*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__TriggerHapticPulse::BeginInvoke(uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec,
                                                                                       ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__TriggerHapticPulse*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unControllerDeviceIndex, unAxisId, usDurationMicroSec, callback, object);
}
inline void OVR::OpenVR::IVRSystem__TriggerHapticPulse::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__TriggerHapticPulse*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__TriggerHapticPulse* OVR::OpenVR::IVRSystem__TriggerHapticPulse::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__TriggerHapticPulse*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__TriggerHapticPulse::IVRSystem__TriggerHapticPulse() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2c63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::*)(::OVR::OpenVR::EVRButtonId)>(
    &::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2c6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::*)(::OVR::OpenVR::EVRButtonId, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e2c6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2c744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::IntPtr OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::Invoke(::OVR::OpenVR::EVRButtonId eButtonId) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, eButtonId);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::BeginInvoke(::OVR::OpenVR::EVRButtonId eButtonId, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, eButtonId, callback, object);
}
inline ::System::IntPtr OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum* OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::IVRSystem__GetButtonIdNameFromEnum() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2c768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::*)(::OVR::OpenVR::EVRControllerAxisType)>(
    &::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2c7d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::*)(::OVR::OpenVR::EVRControllerAxisType, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e2c7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2c870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::IntPtr OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::Invoke(::OVR::OpenVR::EVRControllerAxisType eAxisType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, eAxisType);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::BeginInvoke(::OVR::OpenVR::EVRControllerAxisType eAxisType, ::System::AsyncCallback* callback,
                                                                                                      ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, eAxisType, callback, object);
}
inline ::System::IntPtr OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum* OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::IVRSystem__GetControllerAxisTypeNameFromEnum() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsInputAvailable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__IsInputAvailable::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRSystem__IsInputAvailable::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e2c894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__IsInputAvailable*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsInputAvailable.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__IsInputAvailable::*)()>(&::OVR::OpenVR::IVRSystem__IsInputAvailable::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2c8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__IsInputAvailable*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__IsInputAvailable*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsInputAvailable.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__IsInputAvailable::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSystem__IsInputAvailable::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e2c910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__IsInputAvailable*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__IsInputAvailable*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsInputAvailable.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__IsInputAvailable::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__IsInputAvailable::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2c92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__IsInputAvailable*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__IsInputAvailable*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__IsInputAvailable::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__IsInputAvailable*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__IsInputAvailable::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__IsInputAvailable*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__IsInputAvailable::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__IsInputAvailable*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::IVRSystem__IsInputAvailable::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__IsInputAvailable*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__IsInputAvailable* OVR::OpenVR::IVRSystem__IsInputAvailable::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__IsInputAvailable*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__IsInputAvailable::IVRSystem__IsInputAvailable() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e2c950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::*)()>(&::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2c9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e2c9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2c9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers* OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::IVRSystem__IsSteamVRDrawingControllers() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ShouldApplicationPause._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__ShouldApplicationPause::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__ShouldApplicationPause::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e2ca0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__ShouldApplicationPause*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ShouldApplicationPause.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__ShouldApplicationPause::*)()>(&::OVR::OpenVR::IVRSystem__ShouldApplicationPause::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2ca74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__ShouldApplicationPause*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ShouldApplicationPause*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ShouldApplicationPause.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__ShouldApplicationPause::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSystem__ShouldApplicationPause::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e2ca88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__ShouldApplicationPause*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ShouldApplicationPause*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ShouldApplicationPause.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__ShouldApplicationPause::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__ShouldApplicationPause::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2caa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__ShouldApplicationPause*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ShouldApplicationPause*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__ShouldApplicationPause::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__ShouldApplicationPause*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__ShouldApplicationPause::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ShouldApplicationPause*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__ShouldApplicationPause::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ShouldApplicationPause*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::IVRSystem__ShouldApplicationPause::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ShouldApplicationPause*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__ShouldApplicationPause* OVR::OpenVR::IVRSystem__ShouldApplicationPause::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__ShouldApplicationPause*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__ShouldApplicationPause::IVRSystem__ShouldApplicationPause() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e2cac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::*)()>(
    &::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2cb30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e2cb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2cb60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork* OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::IVRSystem__ShouldApplicationReduceRenderingWork() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__DriverDebugRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__DriverDebugRequest::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__DriverDebugRequest::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2cb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__DriverDebugRequest*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__DriverDebugRequest.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRSystem__DriverDebugRequest::*)(uint32_t, ::StringW, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::IVRSystem__DriverDebugRequest::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2cbf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__DriverDebugRequest*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__DriverDebugRequest*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__DriverDebugRequest.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__DriverDebugRequest::*)(uint32_t, ::StringW, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__DriverDebugRequest::BeginInvoke)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e2cc04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__DriverDebugRequest*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__DriverDebugRequest*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__DriverDebugRequest.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRSystem__DriverDebugRequest::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__DriverDebugRequest::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2cc84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__DriverDebugRequest*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__DriverDebugRequest*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__DriverDebugRequest::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__DriverDebugRequest*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRSystem__DriverDebugRequest::Invoke(uint32_t unDeviceIndex, ::StringW pchRequest, ::System::Text::StringBuilder* pchResponseBuffer, uint32_t unResponseBufferSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__DriverDebugRequest*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__DriverDebugRequest::BeginInvoke(uint32_t unDeviceIndex, ::StringW pchRequest, ::System::Text::StringBuilder* pchResponseBuffer,
                                                                                       uint32_t unResponseBufferSize, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__DriverDebugRequest*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize, callback, object);
}
inline uint32_t OVR::OpenVR::IVRSystem__DriverDebugRequest::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__DriverDebugRequest*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__DriverDebugRequest* OVR::OpenVR::IVRSystem__DriverDebugRequest::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__DriverDebugRequest*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__DriverDebugRequest::IVRSystem__DriverDebugRequest() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2cca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRFirmwareError (::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::*)(uint32_t)>(
    &::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2cd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::*)(uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::BeginInvoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e2cd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRFirmwareError (::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2cd80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRFirmwareError OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::Invoke(uint32_t unDeviceIndex) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRFirmwareError>(this, ___internal_method, unDeviceIndex);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::BeginInvoke(uint32_t unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unDeviceIndex, callback, object);
}
inline ::OVR::OpenVR::EVRFirmwareError OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRFirmwareError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate* OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::IVRSystem__PerformFirmwareUpdate() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e2cda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::*)()>(&::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2ce0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e2ce20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e2ce3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting* OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::IVRSystem__AcknowledgeQuit_Exiting() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e2ce48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::*)()>(&::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2ceb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e2cec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e2cee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt* OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::IVRSystem__AcknowledgeQuit_UserPrompt() {}
// Ctor Parameters [CppParam { name: "GetRecommendedRenderTargetSize", ty: "::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "GetProjectionMatrix", ty: "::OVR::OpenVR::IVRSystem__GetProjectionMatrix*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetProjectionRaw", ty:
// "::OVR::OpenVR::IVRSystem__GetProjectionRaw*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ComputeDistortion", ty: "::OVR::OpenVR::IVRSystem__ComputeDistortion*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "GetEyeToHeadTransform", ty: "::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "GetTimeSinceLastVsync", ty: "::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetD3D9AdapterIndex", ty:
// "::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetDXGIOutputInfo", ty: "::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "GetOutputDevice", ty: "::OVR::OpenVR::IVRSystem__GetOutputDevice*", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsDisplayOnDesktop", ty:
// "::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetDisplayVisibility", ty: "::OVR::OpenVR::IVRSystem__SetDisplayVisibility*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "GetDeviceToAbsoluteTrackingPose", ty: "::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "ResetSeatedZeroPose", ty: "::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetSeatedZeroPoseToStandingAbsoluteTrackingPose", ty:
// "::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetRawZeroPoseToStandingAbsoluteTrackingPose", ty:
// "::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetSortedTrackedDeviceIndicesOfClass", ty:
// "::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetTrackedDeviceActivityLevel", ty:
// "::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ApplyTransform", ty: "::OVR::OpenVR::IVRSystem__ApplyTransform*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "GetTrackedDeviceIndexForControllerRole", ty: "::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "GetControllerRoleForTrackedDeviceIndex", ty: "::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "GetTrackedDeviceClass", ty: "::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsTrackedDeviceConnected", ty:
// "::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetBoolTrackedDeviceProperty", ty:
// "::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetFloatTrackedDeviceProperty", ty:
// "::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetInt32TrackedDeviceProperty", ty:
// "::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetUint64TrackedDeviceProperty", ty:
// "::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetMatrix34TrackedDeviceProperty", ty:
// "::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetArrayTrackedDeviceProperty", ty:
// "::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetStringTrackedDeviceProperty", ty:
// "::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetPropErrorNameFromEnum", ty:
// "::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*", modifiers: "", def_value: Some("{}") }, CppParam { name: "PollNextEvent", ty: "::OVR::OpenVR::IVRSystem__PollNextEvent*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "PollNextEventWithPose", ty: "::OVR::OpenVR::IVRSystem__PollNextEventWithPose*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "GetEventTypeNameFromEnum", ty: "::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetHiddenAreaMesh", ty:
// "::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetControllerState", ty: "::OVR::OpenVR::IVRSystem__GetControllerState*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "GetControllerStateWithPose", ty: "::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "TriggerHapticPulse", ty: "::OVR::OpenVR::IVRSystem__TriggerHapticPulse*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetButtonIdNameFromEnum", ty:
// "::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetControllerAxisTypeNameFromEnum", ty:
// "::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsInputAvailable", ty: "::OVR::OpenVR::IVRSystem__IsInputAvailable*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "IsSteamVRDrawingControllers", ty: "::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "ShouldApplicationPause", ty: "::OVR::OpenVR::IVRSystem__ShouldApplicationPause*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ShouldApplicationReduceRenderingWork",
// ty: "::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*", modifiers: "", def_value: Some("{}") }, CppParam { name: "DriverDebugRequest", ty:
// "::OVR::OpenVR::IVRSystem__DriverDebugRequest*", modifiers: "", def_value: Some("{}") }, CppParam { name: "PerformFirmwareUpdate", ty: "::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "AcknowledgeQuit_Exiting", ty: "::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "AcknowledgeQuit_UserPrompt", ty: "::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::IVRSystem::IVRSystem(
    ::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize* GetRecommendedRenderTargetSize, ::OVR::OpenVR::IVRSystem__GetProjectionMatrix* GetProjectionMatrix,
    ::OVR::OpenVR::IVRSystem__GetProjectionRaw* GetProjectionRaw, ::OVR::OpenVR::IVRSystem__ComputeDistortion* ComputeDistortion,
    ::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform* GetEyeToHeadTransform, ::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync* GetTimeSinceLastVsync,
    ::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex* GetD3D9AdapterIndex, ::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo* GetDXGIOutputInfo, ::OVR::OpenVR::IVRSystem__GetOutputDevice* GetOutputDevice,
    ::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop* IsDisplayOnDesktop, ::OVR::OpenVR::IVRSystem__SetDisplayVisibility* SetDisplayVisibility,
    ::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose* GetDeviceToAbsoluteTrackingPose, ::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose* ResetSeatedZeroPose,
    ::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose* GetSeatedZeroPoseToStandingAbsoluteTrackingPose,
    ::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose* GetRawZeroPoseToStandingAbsoluteTrackingPose,
    ::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass* GetSortedTrackedDeviceIndicesOfClass, ::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel* GetTrackedDeviceActivityLevel,
    ::OVR::OpenVR::IVRSystem__ApplyTransform* ApplyTransform, ::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole* GetTrackedDeviceIndexForControllerRole,
    ::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex* GetControllerRoleForTrackedDeviceIndex, ::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass* GetTrackedDeviceClass,
    ::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected* IsTrackedDeviceConnected, ::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty* GetBoolTrackedDeviceProperty,
    ::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty* GetFloatTrackedDeviceProperty, ::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty* GetInt32TrackedDeviceProperty,
    ::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty* GetUint64TrackedDeviceProperty, ::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty* GetMatrix34TrackedDeviceProperty,
    ::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty* GetArrayTrackedDeviceProperty, ::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty* GetStringTrackedDeviceProperty,
    ::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum* GetPropErrorNameFromEnum, ::OVR::OpenVR::IVRSystem__PollNextEvent* PollNextEvent,
    ::OVR::OpenVR::IVRSystem__PollNextEventWithPose* PollNextEventWithPose, ::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum* GetEventTypeNameFromEnum,
    ::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh* GetHiddenAreaMesh, ::OVR::OpenVR::IVRSystem__GetControllerState* GetControllerState,
    ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose* GetControllerStateWithPose, ::OVR::OpenVR::IVRSystem__TriggerHapticPulse* TriggerHapticPulse,
    ::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum* GetButtonIdNameFromEnum, ::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum* GetControllerAxisTypeNameFromEnum,
    ::OVR::OpenVR::IVRSystem__IsInputAvailable* IsInputAvailable, ::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers* IsSteamVRDrawingControllers,
    ::OVR::OpenVR::IVRSystem__ShouldApplicationPause* ShouldApplicationPause, ::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork* ShouldApplicationReduceRenderingWork,
    ::OVR::OpenVR::IVRSystem__DriverDebugRequest* DriverDebugRequest, ::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate* PerformFirmwareUpdate,
    ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting* AcknowledgeQuit_Exiting, ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt* AcknowledgeQuit_UserPrompt) noexcept {
  this->GetRecommendedRenderTargetSize = GetRecommendedRenderTargetSize;
  this->GetProjectionMatrix = GetProjectionMatrix;
  this->GetProjectionRaw = GetProjectionRaw;
  this->ComputeDistortion = ComputeDistortion;
  this->GetEyeToHeadTransform = GetEyeToHeadTransform;
  this->GetTimeSinceLastVsync = GetTimeSinceLastVsync;
  this->GetD3D9AdapterIndex = GetD3D9AdapterIndex;
  this->GetDXGIOutputInfo = GetDXGIOutputInfo;
  this->GetOutputDevice = GetOutputDevice;
  this->IsDisplayOnDesktop = IsDisplayOnDesktop;
  this->SetDisplayVisibility = SetDisplayVisibility;
  this->GetDeviceToAbsoluteTrackingPose = GetDeviceToAbsoluteTrackingPose;
  this->ResetSeatedZeroPose = ResetSeatedZeroPose;
  this->GetSeatedZeroPoseToStandingAbsoluteTrackingPose = GetSeatedZeroPoseToStandingAbsoluteTrackingPose;
  this->GetRawZeroPoseToStandingAbsoluteTrackingPose = GetRawZeroPoseToStandingAbsoluteTrackingPose;
  this->GetSortedTrackedDeviceIndicesOfClass = GetSortedTrackedDeviceIndicesOfClass;
  this->GetTrackedDeviceActivityLevel = GetTrackedDeviceActivityLevel;
  this->ApplyTransform = ApplyTransform;
  this->GetTrackedDeviceIndexForControllerRole = GetTrackedDeviceIndexForControllerRole;
  this->GetControllerRoleForTrackedDeviceIndex = GetControllerRoleForTrackedDeviceIndex;
  this->GetTrackedDeviceClass = GetTrackedDeviceClass;
  this->IsTrackedDeviceConnected = IsTrackedDeviceConnected;
  this->GetBoolTrackedDeviceProperty = GetBoolTrackedDeviceProperty;
  this->GetFloatTrackedDeviceProperty = GetFloatTrackedDeviceProperty;
  this->GetInt32TrackedDeviceProperty = GetInt32TrackedDeviceProperty;
  this->GetUint64TrackedDeviceProperty = GetUint64TrackedDeviceProperty;
  this->GetMatrix34TrackedDeviceProperty = GetMatrix34TrackedDeviceProperty;
  this->GetArrayTrackedDeviceProperty = GetArrayTrackedDeviceProperty;
  this->GetStringTrackedDeviceProperty = GetStringTrackedDeviceProperty;
  this->GetPropErrorNameFromEnum = GetPropErrorNameFromEnum;
  this->PollNextEvent = PollNextEvent;
  this->PollNextEventWithPose = PollNextEventWithPose;
  this->GetEventTypeNameFromEnum = GetEventTypeNameFromEnum;
  this->GetHiddenAreaMesh = GetHiddenAreaMesh;
  this->GetControllerState = GetControllerState;
  this->GetControllerStateWithPose = GetControllerStateWithPose;
  this->TriggerHapticPulse = TriggerHapticPulse;
  this->GetButtonIdNameFromEnum = GetButtonIdNameFromEnum;
  this->GetControllerAxisTypeNameFromEnum = GetControllerAxisTypeNameFromEnum;
  this->IsInputAvailable = IsInputAvailable;
  this->IsSteamVRDrawingControllers = IsSteamVRDrawingControllers;
  this->ShouldApplicationPause = ShouldApplicationPause;
  this->ShouldApplicationReduceRenderingWork = ShouldApplicationReduceRenderingWork;
  this->DriverDebugRequest = DriverDebugRequest;
  this->PerformFirmwareUpdate = PerformFirmwareUpdate;
  this->AcknowledgeQuit_Exiting = AcknowledgeQuit_Exiting;
  this->AcknowledgeQuit_UserPrompt = AcknowledgeQuit_UserPrompt;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem::IVRSystem() {}
