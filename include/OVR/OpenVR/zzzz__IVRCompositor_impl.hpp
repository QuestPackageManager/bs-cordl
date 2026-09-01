#pragma once
// IWYU pragma private; include "OVR\OpenVR\IVRCompositor.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRCompositor_def.hpp"
#include "OVR/OpenVR/zzzz__Compositor_CumulativeStats_def.hpp"
#include "OVR/OpenVR/zzzz__Compositor_FrameTiming_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "OVR/OpenVR/zzzz__EVRCompositorError_def.hpp"
#include "OVR/OpenVR/zzzz__EVRCompositorTimingMode_def.hpp"
#include "OVR/OpenVR/zzzz__EVREye_def.hpp"
#include "OVR/OpenVR/zzzz__EVRSubmitFlags_def.hpp"
#include "OVR/OpenVR/zzzz__HmdColor_t_def.hpp"
#include "OVR/OpenVR/zzzz__IVRCompositor_def.hpp"
#include "OVR/OpenVR/zzzz__Texture_t_def.hpp"
#include "OVR/OpenVR/zzzz__TrackedDevicePose_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRTextureBounds_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SetTrackingSpace._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__SetTrackingSpace::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__SetTrackingSpace::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e34418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetTrackingSpace*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SetTrackingSpace.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__SetTrackingSpace::*)(::OVR::OpenVR::ETrackingUniverseOrigin)>(
    &::OVR::OpenVR::IVRCompositor__SetTrackingSpace::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e34484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetTrackingSpace*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetTrackingSpace*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SetTrackingSpace.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__SetTrackingSpace::*)(::OVR::OpenVR::ETrackingUniverseOrigin, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRCompositor__SetTrackingSpace::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e34498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetTrackingSpace*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetTrackingSpace*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SetTrackingSpace.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__SetTrackingSpace::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__SetTrackingSpace::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e34520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetTrackingSpace*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetTrackingSpace*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__SetTrackingSpace::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetTrackingSpace*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__SetTrackingSpace::Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetTrackingSpace*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eOrigin);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__SetTrackingSpace::BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetTrackingSpace*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, eOrigin, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__SetTrackingSpace::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetTrackingSpace*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__SetTrackingSpace* OVR::OpenVR::IVRCompositor__SetTrackingSpace::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__SetTrackingSpace*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__SetTrackingSpace::IVRCompositor__SetTrackingSpace() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetTrackingSpace._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetTrackingSpace::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__GetTrackingSpace::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e3452c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetTrackingSpace*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetTrackingSpace.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::ETrackingUniverseOrigin (::OVR::OpenVR::IVRCompositor__GetTrackingSpace::*)()>(
    &::OVR::OpenVR::IVRCompositor__GetTrackingSpace::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e34594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetTrackingSpace*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetTrackingSpace*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetTrackingSpace.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__GetTrackingSpace::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__GetTrackingSpace::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e345a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetTrackingSpace*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetTrackingSpace*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetTrackingSpace.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::ETrackingUniverseOrigin (::OVR::OpenVR::IVRCompositor__GetTrackingSpace::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__GetTrackingSpace::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e345c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetTrackingSpace*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetTrackingSpace*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetTrackingSpace::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetTrackingSpace*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::ETrackingUniverseOrigin OVR::OpenVR::IVRCompositor__GetTrackingSpace::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetTrackingSpace*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ETrackingUniverseOrigin>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetTrackingSpace::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetTrackingSpace*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline ::OVR::OpenVR::ETrackingUniverseOrigin OVR::OpenVR::IVRCompositor__GetTrackingSpace::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetTrackingSpace*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ETrackingUniverseOrigin>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetTrackingSpace* OVR::OpenVR::IVRCompositor__GetTrackingSpace::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__GetTrackingSpace*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetTrackingSpace::IVRCompositor__GetTrackingSpace() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__WaitGetPoses._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__WaitGetPoses::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__WaitGetPoses::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e345e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__WaitGetPoses*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__WaitGetPoses.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__WaitGetPoses::*)(
    ::by_ref<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>>, uint32_t, ::by_ref<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>>, uint32_t)>(&::OVR::OpenVR::IVRCompositor__WaitGetPoses::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e34668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__WaitGetPoses*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__WaitGetPoses*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__WaitGetPoses.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRCompositor__WaitGetPoses::*)(::by_ref<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>>, uint32_t, ::by_ref<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>>, uint32_t,
                                                   ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__WaitGetPoses::BeginInvoke)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e3467c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__WaitGetPoses*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__WaitGetPoses*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__WaitGetPoses.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__WaitGetPoses::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__WaitGetPoses::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e346f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__WaitGetPoses*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__WaitGetPoses*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__WaitGetPoses::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__WaitGetPoses*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__WaitGetPoses::Invoke(::by_ref<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>> pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                                          ::by_ref<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>> pGamePoseArray, uint32_t unGamePoseArrayCount) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__WaitGetPoses*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError>(this, ___internal_method, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__WaitGetPoses::BeginInvoke(::by_ref<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>> pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                                     ::by_ref<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>> pGamePoseArray, uint32_t unGamePoseArrayCount,
                                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__WaitGetPoses*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__WaitGetPoses::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__WaitGetPoses*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__WaitGetPoses* OVR::OpenVR::IVRCompositor__WaitGetPoses::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__WaitGetPoses*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__WaitGetPoses::IVRCompositor__WaitGetPoses() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetLastPoses._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetLastPoses::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__GetLastPoses::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3471c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastPoses*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetLastPoses.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__GetLastPoses::*)(
    ::by_ref<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>>, uint32_t, ::by_ref<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>>, uint32_t)>(&::OVR::OpenVR::IVRCompositor__GetLastPoses::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3479c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastPoses*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastPoses*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetLastPoses.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRCompositor__GetLastPoses::*)(::by_ref<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>>, uint32_t, ::by_ref<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>>, uint32_t,
                                                   ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__GetLastPoses::BeginInvoke)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e347b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastPoses*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastPoses*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetLastPoses.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__GetLastPoses::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__GetLastPoses::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3482c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastPoses*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastPoses*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetLastPoses::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastPoses*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__GetLastPoses::Invoke(::by_ref<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>> pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                                          ::by_ref<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>> pGamePoseArray, uint32_t unGamePoseArrayCount) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastPoses*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError>(this, ___internal_method, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetLastPoses::BeginInvoke(::by_ref<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>> pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                                     ::by_ref<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>> pGamePoseArray, uint32_t unGamePoseArrayCount,
                                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastPoses*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__GetLastPoses::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastPoses*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetLastPoses* OVR::OpenVR::IVRCompositor__GetLastPoses::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__GetLastPoses*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetLastPoses::IVRCompositor__GetLastPoses() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e34850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::*)(
    uint32_t, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>)>(&::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e348bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::*)(uint32_t, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>, ::System::AsyncCallback*,
                                                                       ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::BeginInvoke)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5e348d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::*)(
    ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e34994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::Invoke(uint32_t unDeviceIndex, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose,
                                                                                                              ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pOutputGamePose) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError>(this, ___internal_method, unDeviceIndex, pOutputPose, pOutputGamePose);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::BeginInvoke(uint32_t unDeviceIndex, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose,
                                                                                                         ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pOutputGamePose,
                                                                                                         ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unDeviceIndex, pOutputPose, pOutputGamePose, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::EndInvoke(::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose,
                                                                                                                 ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pOutputGamePose,
                                                                                                                 ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError>(this, ___internal_method, pOutputPose, pOutputGamePose, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex* OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex::IVRCompositor__GetLastPoseForTrackedDeviceIndex() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__Submit._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__Submit::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__Submit::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e349c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__Submit*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__Submit.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__Submit::*)(
    ::OVR::OpenVR::EVREye, ::by_ref<::OVR::OpenVR::Texture_t>, ::by_ref<::OVR::OpenVR::VRTextureBounds_t>, ::OVR::OpenVR::EVRSubmitFlags)>(&::OVR::OpenVR::IVRCompositor__Submit::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e34a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__Submit*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__Submit*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__Submit.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRCompositor__Submit::*)(::OVR::OpenVR::EVREye, ::by_ref<::OVR::OpenVR::Texture_t>, ::by_ref<::OVR::OpenVR::VRTextureBounds_t>, ::OVR::OpenVR::EVRSubmitFlags,
                                             ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRCompositor__Submit::BeginInvoke)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5e34a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__Submit*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__Submit*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__Submit.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__Submit::*)(
    ::by_ref<::OVR::OpenVR::Texture_t>, ::by_ref<::OVR::OpenVR::VRTextureBounds_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__Submit::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e34b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__Submit*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__Submit*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__Submit::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__Submit*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__Submit::Invoke(::OVR::OpenVR::EVREye eEye, ::by_ref<::OVR::OpenVR::Texture_t> pTexture,
                                                                                    ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pBounds, ::OVR::OpenVR::EVRSubmitFlags nSubmitFlags) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__Submit*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError>(this, ___internal_method, eEye, pTexture, pBounds, nSubmitFlags);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__Submit::BeginInvoke(::OVR::OpenVR::EVREye eEye, ::by_ref<::OVR::OpenVR::Texture_t> pTexture,
                                                                               ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pBounds, ::OVR::OpenVR::EVRSubmitFlags nSubmitFlags,
                                                                               ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__Submit*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, eEye, pTexture, pBounds, nSubmitFlags, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__Submit::EndInvoke(::by_ref<::OVR::OpenVR::Texture_t> pTexture, ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pBounds,
                                                                                       ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__Submit*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError>(this, ___internal_method, pTexture, pBounds, result);
}
inline ::OVR::OpenVR::IVRCompositor__Submit* OVR::OpenVR::IVRCompositor__Submit::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__Submit*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__Submit::IVRCompositor__Submit() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e34b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::*)()>(&::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e34bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e34c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e34c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame* OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame::IVRCompositor__ClearLastSubmittedFrame() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__PostPresentHandoff._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__PostPresentHandoff::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__PostPresentHandoff::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e34c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__PostPresentHandoff*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__PostPresentHandoff.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__PostPresentHandoff::*)()>(&::OVR::OpenVR::IVRCompositor__PostPresentHandoff::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e34c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__PostPresentHandoff*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__PostPresentHandoff*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__PostPresentHandoff.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__PostPresentHandoff::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__PostPresentHandoff::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e34cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__PostPresentHandoff*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__PostPresentHandoff*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__PostPresentHandoff.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__PostPresentHandoff::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__PostPresentHandoff::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e34ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__PostPresentHandoff*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__PostPresentHandoff*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__PostPresentHandoff::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__PostPresentHandoff*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__PostPresentHandoff::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__PostPresentHandoff*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__PostPresentHandoff::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__PostPresentHandoff*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__PostPresentHandoff::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__PostPresentHandoff*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__PostPresentHandoff* OVR::OpenVR::IVRCompositor__PostPresentHandoff::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__PostPresentHandoff*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__PostPresentHandoff::IVRCompositor__PostPresentHandoff() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetFrameTiming._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetFrameTiming::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__GetFrameTiming::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e34cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTiming*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetFrameTiming.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRCompositor__GetFrameTiming::*)(::by_ref<::OVR::OpenVR::Compositor_FrameTiming>, uint32_t)>(
    &::OVR::OpenVR::IVRCompositor__GetFrameTiming::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e34d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTiming*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTiming*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetFrameTiming.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__GetFrameTiming::*)(::by_ref<::OVR::OpenVR::Compositor_FrameTiming>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRCompositor__GetFrameTiming::BeginInvoke)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e34d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTiming*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTiming*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetFrameTiming.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRCompositor__GetFrameTiming::*)(::by_ref<::OVR::OpenVR::Compositor_FrameTiming>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__GetFrameTiming::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e34e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTiming*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTiming*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetFrameTiming::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTiming*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRCompositor__GetFrameTiming::Invoke(::by_ref<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t unFramesAgo) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTiming*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pTiming, unFramesAgo);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetFrameTiming::BeginInvoke(::by_ref<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t unFramesAgo, ::System::AsyncCallback* callback,
                                                                                       ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTiming*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pTiming, unFramesAgo, callback, object);
}
inline bool OVR::OpenVR::IVRCompositor__GetFrameTiming::EndInvoke(::by_ref<::OVR::OpenVR::Compositor_FrameTiming> pTiming, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTiming*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pTiming, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetFrameTiming* OVR::OpenVR::IVRCompositor__GetFrameTiming::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__GetFrameTiming*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetFrameTiming::IVRCompositor__GetFrameTiming() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetFrameTimings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetFrameTimings::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__GetFrameTimings::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e34e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTimings*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetFrameTimings.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRCompositor__GetFrameTimings::*)(::by_ref<::OVR::OpenVR::Compositor_FrameTiming>, uint32_t)>(
    &::OVR::OpenVR::IVRCompositor__GetFrameTimings::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e34ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTimings*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTimings*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetFrameTimings.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__GetFrameTimings::*)(::by_ref<::OVR::OpenVR::Compositor_FrameTiming>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRCompositor__GetFrameTimings::BeginInvoke)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e34ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTimings*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTimings*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetFrameTimings.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRCompositor__GetFrameTimings::*)(::by_ref<::OVR::OpenVR::Compositor_FrameTiming>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__GetFrameTimings::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e34f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTimings*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTimings*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetFrameTimings::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTimings*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRCompositor__GetFrameTimings::Invoke(::by_ref<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t nFrames) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTimings*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pTiming, nFrames);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetFrameTimings::BeginInvoke(::by_ref<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t nFrames, ::System::AsyncCallback* callback,
                                                                                        ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTimings*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pTiming, nFrames, callback, object);
}
inline uint32_t OVR::OpenVR::IVRCompositor__GetFrameTimings::EndInvoke(::by_ref<::OVR::OpenVR::Compositor_FrameTiming> pTiming, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTimings*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pTiming, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetFrameTimings* OVR::OpenVR::IVRCompositor__GetFrameTimings::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__GetFrameTimings*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetFrameTimings::IVRCompositor__GetFrameTimings() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e34fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::*)()>(&::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e35008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e3501c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e35038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline float_t OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline float_t OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining* OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining::IVRCompositor__GetFrameTimeRemaining() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCumulativeStats._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetCumulativeStats::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__GetCumulativeStats::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3505c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCumulativeStats*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCumulativeStats.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetCumulativeStats::*)(::by_ref<::OVR::OpenVR::Compositor_CumulativeStats>, uint32_t)>(
    &::OVR::OpenVR::IVRCompositor__GetCumulativeStats::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e350dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCumulativeStats*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCumulativeStats*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCumulativeStats.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__GetCumulativeStats::*)(::by_ref<::OVR::OpenVR::Compositor_CumulativeStats>, uint32_t,
                                                                                                                                     ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__GetCumulativeStats::BeginInvoke)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e350f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCumulativeStats*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCumulativeStats*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCumulativeStats.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetCumulativeStats::*)(::by_ref<::OVR::OpenVR::Compositor_CumulativeStats>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__GetCumulativeStats::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e3519c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCumulativeStats*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCumulativeStats*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetCumulativeStats::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCumulativeStats*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__GetCumulativeStats::Invoke(::by_ref<::OVR::OpenVR::Compositor_CumulativeStats> pStats, uint32_t nStatsSizeInBytes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCumulativeStats*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pStats, nStatsSizeInBytes);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetCumulativeStats::BeginInvoke(::by_ref<::OVR::OpenVR::Compositor_CumulativeStats> pStats, uint32_t nStatsSizeInBytes,
                                                                                           ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCumulativeStats*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pStats, nStatsSizeInBytes, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__GetCumulativeStats::EndInvoke(::by_ref<::OVR::OpenVR::Compositor_CumulativeStats> pStats, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCumulativeStats*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pStats, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetCumulativeStats* OVR::OpenVR::IVRCompositor__GetCumulativeStats::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__GetCumulativeStats*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetCumulativeStats::IVRCompositor__GetCumulativeStats() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__FadeToColor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__FadeToColor::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__FadeToColor::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e351b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__FadeToColor*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__FadeToColor.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__FadeToColor::*)(float_t, float_t, float_t, float_t, float_t, bool)>(
    &::OVR::OpenVR::IVRCompositor__FadeToColor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e35220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__FadeToColor*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__FadeToColor*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__FadeToColor.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__FadeToColor::*)(float_t, float_t, float_t, float_t, float_t, bool, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRCompositor__FadeToColor::BeginInvoke)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5e35234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__FadeToColor*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__FadeToColor*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__FadeToColor.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__FadeToColor::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__FadeToColor::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e35308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__FadeToColor*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__FadeToColor*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__FadeToColor::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__FadeToColor*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__FadeToColor::Invoke(float_t fSeconds, float_t fRed, float_t fGreen, float_t fBlue, float_t fAlpha, bool bBackground) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__FadeToColor*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__FadeToColor::BeginInvoke(float_t fSeconds, float_t fRed, float_t fGreen, float_t fBlue, float_t fAlpha, bool bBackground,
                                                                                    ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__FadeToColor*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__FadeToColor::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__FadeToColor*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__FadeToColor* OVR::OpenVR::IVRCompositor__FadeToColor::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__FadeToColor*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__FadeToColor::IVRCompositor__FadeToColor() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e35314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::HmdColor_t (::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::*)(bool)>(
    &::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e35380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::BeginInvoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e35394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::HmdColor_t (::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e353ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::HmdColor_t OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::Invoke(bool bBackground) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdColor_t>(this, ___internal_method, bBackground);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::BeginInvoke(bool bBackground, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, bBackground, callback, object);
}
inline ::OVR::OpenVR::HmdColor_t OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdColor_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor* OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor::IVRCompositor__GetCurrentFadeColor() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__FadeGrid._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__FadeGrid::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__FadeGrid::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e35414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__FadeGrid*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__FadeGrid.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__FadeGrid::*)(float_t, bool)>(&::OVR::OpenVR::IVRCompositor__FadeGrid::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e35480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__FadeGrid*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__FadeGrid*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__FadeGrid.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__FadeGrid::*)(float_t, bool, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__FadeGrid::BeginInvoke)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e35494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__FadeGrid*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__FadeGrid*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__FadeGrid.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__FadeGrid::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__FadeGrid::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e3550c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__FadeGrid*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__FadeGrid*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__FadeGrid::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__FadeGrid*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__FadeGrid::Invoke(float_t fSeconds, bool bFadeIn) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__FadeGrid*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fSeconds, bFadeIn);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__FadeGrid::BeginInvoke(float_t fSeconds, bool bFadeIn, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__FadeGrid*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, fSeconds, bFadeIn, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__FadeGrid::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__FadeGrid*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__FadeGrid* OVR::OpenVR::IVRCompositor__FadeGrid::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__FadeGrid*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__FadeGrid::IVRCompositor__FadeGrid() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e35518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::*)()>(&::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e35580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e35594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e355b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline float_t OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline float_t OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha* OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha::IVRCompositor__GetCurrentGridAlpha() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SetSkyboxOverride._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__SetSkyboxOverride::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__SetSkyboxOverride::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e355d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SetSkyboxOverride.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__SetSkyboxOverride::*)(::by_ref<::ArrayW<::OVR::OpenVR::Texture_t>>, uint32_t)>(
    &::OVR::OpenVR::IVRCompositor__SetSkyboxOverride::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e35654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SetSkyboxOverride.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__SetSkyboxOverride::*)(::by_ref<::ArrayW<::OVR::OpenVR::Texture_t>>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRCompositor__SetSkyboxOverride::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e35668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SetSkyboxOverride.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__SetSkyboxOverride::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__SetSkyboxOverride::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e356c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__SetSkyboxOverride::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__SetSkyboxOverride::Invoke(::by_ref<::ArrayW<::OVR::OpenVR::Texture_t>> pTextures, uint32_t unTextureCount) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError>(this, ___internal_method, pTextures, unTextureCount);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__SetSkyboxOverride::BeginInvoke(::by_ref<::ArrayW<::OVR::OpenVR::Texture_t>> pTextures, uint32_t unTextureCount,
                                                                                          ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pTextures, unTextureCount, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__SetSkyboxOverride::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__SetSkyboxOverride* OVR::OpenVR::IVRCompositor__SetSkyboxOverride::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__SetSkyboxOverride::IVRCompositor__SetSkyboxOverride() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e356e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::*)()>(&::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e35750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e35764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e35780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride* OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride::IVRCompositor__ClearSkyboxOverride() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorBringToFront._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__CompositorBringToFront::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__CompositorBringToFront::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e3578c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorBringToFront*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorBringToFront.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__CompositorBringToFront::*)()>(&::OVR::OpenVR::IVRCompositor__CompositorBringToFront::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e357f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorBringToFront*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorBringToFront*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorBringToFront.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__CompositorBringToFront::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__CompositorBringToFront::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e35808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorBringToFront*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorBringToFront*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorBringToFront.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__CompositorBringToFront::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__CompositorBringToFront::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e35824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorBringToFront*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorBringToFront*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__CompositorBringToFront::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorBringToFront*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__CompositorBringToFront::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorBringToFront*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__CompositorBringToFront::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorBringToFront*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__CompositorBringToFront::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorBringToFront*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__CompositorBringToFront* OVR::OpenVR::IVRCompositor__CompositorBringToFront::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__CompositorBringToFront*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__CompositorBringToFront::IVRCompositor__CompositorBringToFront() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorGoToBack._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__CompositorGoToBack::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__CompositorGoToBack::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e35830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorGoToBack*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorGoToBack.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__CompositorGoToBack::*)()>(&::OVR::OpenVR::IVRCompositor__CompositorGoToBack::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e35898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorGoToBack*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorGoToBack*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorGoToBack.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__CompositorGoToBack::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__CompositorGoToBack::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e358ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorGoToBack*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorGoToBack*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorGoToBack.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__CompositorGoToBack::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__CompositorGoToBack::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e358c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorGoToBack*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorGoToBack*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__CompositorGoToBack::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorGoToBack*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__CompositorGoToBack::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorGoToBack*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__CompositorGoToBack::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorGoToBack*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__CompositorGoToBack::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorGoToBack*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__CompositorGoToBack* OVR::OpenVR::IVRCompositor__CompositorGoToBack::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__CompositorGoToBack*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__CompositorGoToBack::IVRCompositor__CompositorGoToBack() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorQuit._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__CompositorQuit::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__CompositorQuit::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e358d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorQuit*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorQuit.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__CompositorQuit::*)()>(&::OVR::OpenVR::IVRCompositor__CompositorQuit::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3593c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorQuit*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorQuit*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorQuit.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__CompositorQuit::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__CompositorQuit::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e35950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorQuit*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorQuit*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorQuit.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__CompositorQuit::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__CompositorQuit::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e3596c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorQuit*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorQuit*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__CompositorQuit::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorQuit*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__CompositorQuit::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorQuit*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__CompositorQuit::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorQuit*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__CompositorQuit::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorQuit*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__CompositorQuit* OVR::OpenVR::IVRCompositor__CompositorQuit::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__CompositorQuit*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__CompositorQuit::IVRCompositor__CompositorQuit() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__IsFullscreen._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__IsFullscreen::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__IsFullscreen::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e35978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__IsFullscreen*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__IsFullscreen.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRCompositor__IsFullscreen::*)()>(&::OVR::OpenVR::IVRCompositor__IsFullscreen::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e359e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__IsFullscreen*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__IsFullscreen*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__IsFullscreen.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__IsFullscreen::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__IsFullscreen::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e359f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__IsFullscreen*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__IsFullscreen*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__IsFullscreen.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRCompositor__IsFullscreen::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__IsFullscreen::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e35a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__IsFullscreen*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__IsFullscreen*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__IsFullscreen::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__IsFullscreen*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRCompositor__IsFullscreen::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__IsFullscreen*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__IsFullscreen::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__IsFullscreen*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::IVRCompositor__IsFullscreen::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__IsFullscreen*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__IsFullscreen* OVR::OpenVR::IVRCompositor__IsFullscreen::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__IsFullscreen*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__IsFullscreen::IVRCompositor__IsFullscreen() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e35a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::*)()>(&::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e35a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e35ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e35acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline uint32_t OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess* OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess::IVRCompositor__GetCurrentSceneFocusProcess() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e35af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::*)()>(&::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e35b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e35b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e35b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline uint32_t OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer* OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer::IVRCompositor__GetLastFrameRenderer() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CanRenderScene._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__CanRenderScene::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__CanRenderScene::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e35bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__CanRenderScene*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CanRenderScene.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRCompositor__CanRenderScene::*)()>(&::OVR::OpenVR::IVRCompositor__CanRenderScene::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e35c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__CanRenderScene*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CanRenderScene*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CanRenderScene.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__CanRenderScene::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__CanRenderScene::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e35c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__CanRenderScene*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CanRenderScene*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CanRenderScene.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRCompositor__CanRenderScene::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__CanRenderScene::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e35c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__CanRenderScene*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CanRenderScene*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__CanRenderScene::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__CanRenderScene*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRCompositor__CanRenderScene::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CanRenderScene*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__CanRenderScene::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CanRenderScene*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::IVRCompositor__CanRenderScene::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CanRenderScene*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__CanRenderScene* OVR::OpenVR::IVRCompositor__CanRenderScene::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__CanRenderScene*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__CanRenderScene::IVRCompositor__CanRenderScene() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ShowMirrorWindow._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__ShowMirrorWindow::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__ShowMirrorWindow::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e35c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ShowMirrorWindow.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__ShowMirrorWindow::*)()>(&::OVR::OpenVR::IVRCompositor__ShowMirrorWindow::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e35cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ShowMirrorWindow.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__ShowMirrorWindow::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__ShowMirrorWindow::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e35ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ShowMirrorWindow.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__ShowMirrorWindow::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__ShowMirrorWindow::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e35d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__ShowMirrorWindow::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__ShowMirrorWindow::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__ShowMirrorWindow::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__ShowMirrorWindow::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__ShowMirrorWindow* OVR::OpenVR::IVRCompositor__ShowMirrorWindow::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__ShowMirrorWindow::IVRCompositor__ShowMirrorWindow() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__HideMirrorWindow._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__HideMirrorWindow::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__HideMirrorWindow::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e35d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__HideMirrorWindow*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__HideMirrorWindow.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__HideMirrorWindow::*)()>(&::OVR::OpenVR::IVRCompositor__HideMirrorWindow::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e35d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__HideMirrorWindow*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__HideMirrorWindow*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__HideMirrorWindow.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__HideMirrorWindow::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__HideMirrorWindow::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e35d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__HideMirrorWindow*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__HideMirrorWindow*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__HideMirrorWindow.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__HideMirrorWindow::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__HideMirrorWindow::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e35da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__HideMirrorWindow*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__HideMirrorWindow*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__HideMirrorWindow::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__HideMirrorWindow*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__HideMirrorWindow::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__HideMirrorWindow*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__HideMirrorWindow::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__HideMirrorWindow*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__HideMirrorWindow::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__HideMirrorWindow*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__HideMirrorWindow* OVR::OpenVR::IVRCompositor__HideMirrorWindow::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__HideMirrorWindow*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__HideMirrorWindow::IVRCompositor__HideMirrorWindow() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e35db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::*)()>(&::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e35e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e35e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e35e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible* OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible::IVRCompositor__IsMirrorWindowVisible() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorDumpImages._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__CompositorDumpImages::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__CompositorDumpImages::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e35e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorDumpImages*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorDumpImages.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__CompositorDumpImages::*)()>(&::OVR::OpenVR::IVRCompositor__CompositorDumpImages::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e35ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorDumpImages*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorDumpImages*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorDumpImages.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__CompositorDumpImages::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__CompositorDumpImages::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e35ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorDumpImages*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorDumpImages*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__CompositorDumpImages.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__CompositorDumpImages::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__CompositorDumpImages::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e35f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorDumpImages*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorDumpImages*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__CompositorDumpImages::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorDumpImages*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__CompositorDumpImages::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorDumpImages*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__CompositorDumpImages::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorDumpImages*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__CompositorDumpImages::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__CompositorDumpImages*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__CompositorDumpImages* OVR::OpenVR::IVRCompositor__CompositorDumpImages::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__CompositorDumpImages*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__CompositorDumpImages::IVRCompositor__CompositorDumpImages() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e35f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::*)()>(
    &::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e35f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e35f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e35fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources* OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources::IVRCompositor__ShouldAppRenderWithLowResources() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e35fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::*)(bool)>(
    &::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e36038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::BeginInvoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e3604c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e360a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::Invoke(bool bOverride) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bOverride);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::BeginInvoke(bool bOverride, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, bOverride, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn* OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn::IVRCompositor__ForceInterleavedReprojectionOn() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ForceReconnectProcess._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__ForceReconnectProcess::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__ForceReconnectProcess::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e360b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ForceReconnectProcess.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__ForceReconnectProcess::*)()>(&::OVR::OpenVR::IVRCompositor__ForceReconnectProcess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e36118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ForceReconnectProcess.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__ForceReconnectProcess::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__ForceReconnectProcess::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e3612c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ForceReconnectProcess.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__ForceReconnectProcess::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__ForceReconnectProcess::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e36148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__ForceReconnectProcess::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__ForceReconnectProcess::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__ForceReconnectProcess::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__ForceReconnectProcess::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__ForceReconnectProcess* OVR::OpenVR::IVRCompositor__ForceReconnectProcess::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__ForceReconnectProcess::IVRCompositor__ForceReconnectProcess() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SuspendRendering._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__SuspendRendering::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__SuspendRendering::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e36154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__SuspendRendering*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SuspendRendering.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__SuspendRendering::*)(bool)>(&::OVR::OpenVR::IVRCompositor__SuspendRendering::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e361c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__SuspendRendering*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SuspendRendering*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SuspendRendering.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__SuspendRendering::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__SuspendRendering::BeginInvoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e361d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__SuspendRendering*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SuspendRendering*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SuspendRendering.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__SuspendRendering::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRCompositor__SuspendRendering::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e3622c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__SuspendRendering*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SuspendRendering*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__SuspendRendering::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__SuspendRendering*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__SuspendRendering::Invoke(bool bSuspend) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SuspendRendering*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bSuspend);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__SuspendRendering::BeginInvoke(bool bSuspend, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SuspendRendering*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, bSuspend, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__SuspendRendering::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SuspendRendering*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__SuspendRendering* OVR::OpenVR::IVRCompositor__SuspendRendering::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__SuspendRendering*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__SuspendRendering::IVRCompositor__SuspendRendering() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e36238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::*)(
    ::OVR::OpenVR::EVREye, ::System::IntPtr, ::by_ref<::System::IntPtr>)>(&::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e362a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::*)(::OVR::OpenVR::EVREye, ::System::IntPtr, ::by_ref<::System::IntPtr>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e362b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::*)(::by_ref<::System::IntPtr>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e36378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::Invoke(::OVR::OpenVR::EVREye eEye, ::System::IntPtr pD3D11DeviceOrResource,
                                                                                                   ::by_ref<::System::IntPtr> ppD3D11ShaderResourceView) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError>(this, ___internal_method, eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::BeginInvoke(::OVR::OpenVR::EVREye eEye, ::System::IntPtr pD3D11DeviceOrResource,
                                                                                              ::by_ref<::System::IntPtr> ppD3D11ShaderResourceView, ::System::AsyncCallback* callback,
                                                                                              ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::EndInvoke(::by_ref<::System::IntPtr> ppD3D11ShaderResourceView, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError>(this, ___internal_method, ppD3D11ShaderResourceView, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11* OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11::IVRCompositor__GetMirrorTextureD3D11() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3639c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::*)(::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e36408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::*)(::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::BeginInvoke)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e3641c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e36470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::Invoke(::System::IntPtr pD3D11ShaderResourceView) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pD3D11ShaderResourceView);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::BeginInvoke(::System::IntPtr pD3D11ShaderResourceView, ::System::AsyncCallback* callback,
                                                                                                  ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pD3D11ShaderResourceView, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11* OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11::IVRCompositor__ReleaseMirrorTextureD3D11() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3647c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::*)(
    ::OVR::OpenVR::EVREye, ::by_ref<uint32_t>, ::System::IntPtr)>(&::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e364e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::*)(::OVR::OpenVR::EVREye, ::by_ref<uint32_t>, ::System::IntPtr,
                                                                                                                                     ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::BeginInvoke)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5e364fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::*)(::by_ref<uint32_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e365c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*>(), { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::Invoke(::OVR::OpenVR::EVREye eEye, ::by_ref<uint32_t> pglTextureId, ::System::IntPtr pglSharedTextureHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError>(this, ___internal_method, eEye, pglTextureId, pglSharedTextureHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::BeginInvoke(::OVR::OpenVR::EVREye eEye, ::by_ref<uint32_t> pglTextureId, ::System::IntPtr pglSharedTextureHandle,
                                                                                           ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, eEye, pglTextureId, pglSharedTextureHandle, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::EndInvoke(::by_ref<uint32_t> pglTextureId, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError>(this, ___internal_method, pglTextureId, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL* OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL::IVRCompositor__GetMirrorTextureGL() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e365e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::*)(uint32_t, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e36650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::*)(uint32_t, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::BeginInvoke)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e36664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e366dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::Invoke(uint32_t glTextureId, ::System::IntPtr glSharedTextureHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, glTextureId, glSharedTextureHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::BeginInvoke(uint32_t glTextureId, ::System::IntPtr glSharedTextureHandle, ::System::AsyncCallback* callback,
                                                                                               ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, glTextureId, glSharedTextureHandle, callback, object);
}
inline bool OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture* OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture::IVRCompositor__ReleaseSharedGLTexture() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e36700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::*)(::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3676c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::*)(::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::BeginInvoke)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e36780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e367d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::Invoke(::System::IntPtr glSharedTextureHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, glSharedTextureHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::BeginInvoke(::System::IntPtr glSharedTextureHandle, ::System::AsyncCallback* callback,
                                                                                                     ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, glSharedTextureHandle, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess* OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess::IVRCompositor__LockGLSharedTextureForAccess() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e367e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::*)(::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3684c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::*)(::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::BeginInvoke)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e36860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e368b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::Invoke(::System::IntPtr glSharedTextureHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, glSharedTextureHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::BeginInvoke(::System::IntPtr glSharedTextureHandle, ::System::AsyncCallback* callback,
                                                                                                       ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, glSharedTextureHandle, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess* OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess::IVRCompositor__UnlockGLSharedTextureForAccess() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e368c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::*)(::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e36940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::*)(::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e36954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e369b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::Invoke(::System::Text::StringBuilder* pchValue, uint32_t unBufferSize) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pchValue, unBufferSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::BeginInvoke(::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                                                                            ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchValue, unBufferSize, callback, object);
}
inline uint32_t OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired* OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired::IVRCompositor__GetVulkanInstanceExtensionsRequired() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e369d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::*)(::System::IntPtr, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e36a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::*)(::System::IntPtr, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::BeginInvoke)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e36a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e36ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::Invoke(::System::IntPtr pPhysicalDevice, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pPhysicalDevice, pchValue, unBufferSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::BeginInvoke(::System::IntPtr pPhysicalDevice, ::System::Text::StringBuilder* pchValue,
                                                                                                          uint32_t unBufferSize, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pPhysicalDevice, pchValue, unBufferSize, callback, object);
}
inline uint32_t OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired* OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired::IVRCompositor__GetVulkanDeviceExtensionsRequired() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e36af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::*)(::OVR::OpenVR::EVRCompositorTimingMode)>(
    &::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e36b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::*)(::OVR::OpenVR::EVRCompositorTimingMode, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e36b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e36c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::Invoke(::OVR::OpenVR::EVRCompositorTimingMode eTimingMode) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eTimingMode);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::BeginInvoke(::OVR::OpenVR::EVRCompositorTimingMode eTimingMode, ::System::AsyncCallback* callback,
                                                                                              ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, eTimingMode, callback, object);
}
inline void OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode* OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode::IVRCompositor__SetExplicitTimingMode() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e36c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::*)()>(
    &::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e36c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e36c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e36ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData* OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData::IVRCompositor__SubmitExplicitTimingData() {}
// Ctor Parameters [CppParam { name: "SetTrackingSpace", ty: "::OVR::OpenVR::IVRCompositor__SetTrackingSpace*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetTrackingSpace", ty:
// "::OVR::OpenVR::IVRCompositor__GetTrackingSpace*", modifiers: "", def_value: Some("{}") }, CppParam { name: "WaitGetPoses", ty: "::OVR::OpenVR::IVRCompositor__WaitGetPoses*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "GetLastPoses", ty: "::OVR::OpenVR::IVRCompositor__GetLastPoses*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "GetLastPoseForTrackedDeviceIndex", ty: "::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Submit", ty:
// "::OVR::OpenVR::IVRCompositor__Submit*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ClearLastSubmittedFrame", ty: "::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "PostPresentHandoff", ty: "::OVR::OpenVR::IVRCompositor__PostPresentHandoff*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "GetFrameTiming", ty: "::OVR::OpenVR::IVRCompositor__GetFrameTiming*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetFrameTimings", ty:
// "::OVR::OpenVR::IVRCompositor__GetFrameTimings*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetFrameTimeRemaining", ty: "::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "GetCumulativeStats", ty: "::OVR::OpenVR::IVRCompositor__GetCumulativeStats*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "FadeToColor", ty: "::OVR::OpenVR::IVRCompositor__FadeToColor*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetCurrentFadeColor", ty:
// "::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*", modifiers: "", def_value: Some("{}") }, CppParam { name: "FadeGrid", ty: "::OVR::OpenVR::IVRCompositor__FadeGrid*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "GetCurrentGridAlpha", ty: "::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetSkyboxOverride", ty:
// "::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ClearSkyboxOverride", ty: "::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "CompositorBringToFront", ty: "::OVR::OpenVR::IVRCompositor__CompositorBringToFront*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "CompositorGoToBack", ty: "::OVR::OpenVR::IVRCompositor__CompositorGoToBack*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CompositorQuit", ty:
// "::OVR::OpenVR::IVRCompositor__CompositorQuit*", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsFullscreen", ty: "::OVR::OpenVR::IVRCompositor__IsFullscreen*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "GetCurrentSceneFocusProcess", ty: "::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "GetLastFrameRenderer", ty: "::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CanRenderScene", ty:
// "::OVR::OpenVR::IVRCompositor__CanRenderScene*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ShowMirrorWindow", ty: "::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "HideMirrorWindow", ty: "::OVR::OpenVR::IVRCompositor__HideMirrorWindow*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "IsMirrorWindowVisible", ty: "::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CompositorDumpImages", ty:
// "::OVR::OpenVR::IVRCompositor__CompositorDumpImages*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ShouldAppRenderWithLowResources", ty:
// "::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ForceInterleavedReprojectionOn", ty:
// "::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ForceReconnectProcess", ty:
// "::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SuspendRendering", ty: "::OVR::OpenVR::IVRCompositor__SuspendRendering*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "GetMirrorTextureD3D11", ty: "::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "ReleaseMirrorTextureD3D11", ty: "::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetMirrorTextureGL", ty:
// "::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ReleaseSharedGLTexture", ty: "::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "LockGLSharedTextureForAccess", ty: "::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "UnlockGLSharedTextureForAccess", ty: "::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "GetVulkanInstanceExtensionsRequired", ty: "::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "GetVulkanDeviceExtensionsRequired", ty: "::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetExplicitTimingMode", ty:
// "::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SubmitExplicitTimingData", ty:
// "::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::IVRCompositor::IVRCompositor(
    ::OVR::OpenVR::IVRCompositor__SetTrackingSpace* SetTrackingSpace, ::OVR::OpenVR::IVRCompositor__GetTrackingSpace* GetTrackingSpace, ::OVR::OpenVR::IVRCompositor__WaitGetPoses* WaitGetPoses,
    ::OVR::OpenVR::IVRCompositor__GetLastPoses* GetLastPoses, ::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex* GetLastPoseForTrackedDeviceIndex,
    ::OVR::OpenVR::IVRCompositor__Submit* Submit, ::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame* ClearLastSubmittedFrame, ::OVR::OpenVR::IVRCompositor__PostPresentHandoff* PostPresentHandoff,
    ::OVR::OpenVR::IVRCompositor__GetFrameTiming* GetFrameTiming, ::OVR::OpenVR::IVRCompositor__GetFrameTimings* GetFrameTimings,
    ::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining* GetFrameTimeRemaining, ::OVR::OpenVR::IVRCompositor__GetCumulativeStats* GetCumulativeStats,
    ::OVR::OpenVR::IVRCompositor__FadeToColor* FadeToColor, ::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor* GetCurrentFadeColor, ::OVR::OpenVR::IVRCompositor__FadeGrid* FadeGrid,
    ::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha* GetCurrentGridAlpha, ::OVR::OpenVR::IVRCompositor__SetSkyboxOverride* SetSkyboxOverride,
    ::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride* ClearSkyboxOverride, ::OVR::OpenVR::IVRCompositor__CompositorBringToFront* CompositorBringToFront,
    ::OVR::OpenVR::IVRCompositor__CompositorGoToBack* CompositorGoToBack, ::OVR::OpenVR::IVRCompositor__CompositorQuit* CompositorQuit, ::OVR::OpenVR::IVRCompositor__IsFullscreen* IsFullscreen,
    ::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess* GetCurrentSceneFocusProcess, ::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer* GetLastFrameRenderer,
    ::OVR::OpenVR::IVRCompositor__CanRenderScene* CanRenderScene, ::OVR::OpenVR::IVRCompositor__ShowMirrorWindow* ShowMirrorWindow, ::OVR::OpenVR::IVRCompositor__HideMirrorWindow* HideMirrorWindow,
    ::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible* IsMirrorWindowVisible, ::OVR::OpenVR::IVRCompositor__CompositorDumpImages* CompositorDumpImages,
    ::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources* ShouldAppRenderWithLowResources, ::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn* ForceInterleavedReprojectionOn,
    ::OVR::OpenVR::IVRCompositor__ForceReconnectProcess* ForceReconnectProcess, ::OVR::OpenVR::IVRCompositor__SuspendRendering* SuspendRendering,
    ::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11* GetMirrorTextureD3D11, ::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11* ReleaseMirrorTextureD3D11,
    ::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL* GetMirrorTextureGL, ::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture* ReleaseSharedGLTexture,
    ::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess* LockGLSharedTextureForAccess, ::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess* UnlockGLSharedTextureForAccess,
    ::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired* GetVulkanInstanceExtensionsRequired,
    ::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired* GetVulkanDeviceExtensionsRequired, ::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode* SetExplicitTimingMode,
    ::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData* SubmitExplicitTimingData) noexcept {
  this->SetTrackingSpace = SetTrackingSpace;
  this->GetTrackingSpace = GetTrackingSpace;
  this->WaitGetPoses = WaitGetPoses;
  this->GetLastPoses = GetLastPoses;
  this->GetLastPoseForTrackedDeviceIndex = GetLastPoseForTrackedDeviceIndex;
  this->Submit = Submit;
  this->ClearLastSubmittedFrame = ClearLastSubmittedFrame;
  this->PostPresentHandoff = PostPresentHandoff;
  this->GetFrameTiming = GetFrameTiming;
  this->GetFrameTimings = GetFrameTimings;
  this->GetFrameTimeRemaining = GetFrameTimeRemaining;
  this->GetCumulativeStats = GetCumulativeStats;
  this->FadeToColor = FadeToColor;
  this->GetCurrentFadeColor = GetCurrentFadeColor;
  this->FadeGrid = FadeGrid;
  this->GetCurrentGridAlpha = GetCurrentGridAlpha;
  this->SetSkyboxOverride = SetSkyboxOverride;
  this->ClearSkyboxOverride = ClearSkyboxOverride;
  this->CompositorBringToFront = CompositorBringToFront;
  this->CompositorGoToBack = CompositorGoToBack;
  this->CompositorQuit = CompositorQuit;
  this->IsFullscreen = IsFullscreen;
  this->GetCurrentSceneFocusProcess = GetCurrentSceneFocusProcess;
  this->GetLastFrameRenderer = GetLastFrameRenderer;
  this->CanRenderScene = CanRenderScene;
  this->ShowMirrorWindow = ShowMirrorWindow;
  this->HideMirrorWindow = HideMirrorWindow;
  this->IsMirrorWindowVisible = IsMirrorWindowVisible;
  this->CompositorDumpImages = CompositorDumpImages;
  this->ShouldAppRenderWithLowResources = ShouldAppRenderWithLowResources;
  this->ForceInterleavedReprojectionOn = ForceInterleavedReprojectionOn;
  this->ForceReconnectProcess = ForceReconnectProcess;
  this->SuspendRendering = SuspendRendering;
  this->GetMirrorTextureD3D11 = GetMirrorTextureD3D11;
  this->ReleaseMirrorTextureD3D11 = ReleaseMirrorTextureD3D11;
  this->GetMirrorTextureGL = GetMirrorTextureGL;
  this->ReleaseSharedGLTexture = ReleaseSharedGLTexture;
  this->LockGLSharedTextureForAccess = LockGLSharedTextureForAccess;
  this->UnlockGLSharedTextureForAccess = UnlockGLSharedTextureForAccess;
  this->GetVulkanInstanceExtensionsRequired = GetVulkanInstanceExtensionsRequired;
  this->GetVulkanDeviceExtensionsRequired = GetVulkanDeviceExtensionsRequired;
  this->SetExplicitTimingMode = SetExplicitTimingMode;
  this->SubmitExplicitTimingData = SubmitExplicitTimingData;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor::IVRCompositor() {}
