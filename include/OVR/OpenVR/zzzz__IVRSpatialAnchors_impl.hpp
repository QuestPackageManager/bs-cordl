#pragma once
// IWYU pragma private; include "OVR\OpenVR\IVRSpatialAnchors.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRSpatialAnchors_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "OVR/OpenVR/zzzz__EVRSpatialAnchorError_def.hpp"
#include "OVR/OpenVR/zzzz__IVRSpatialAnchors_def.hpp"
#include "OVR/OpenVR/zzzz__SpatialAnchorPose_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e424bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor::*)(::StringW, ::by_ref<uint32_t>)>(
    &::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e4253c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor::*)(::StringW, ::by_ref<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor::BeginInvoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e42550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor::*)(
    ::by_ref<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e425a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor::Invoke(::StringW pchDescriptor, ::by_ref<uint32_t> pHandleOut) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError>(this, ___internal_method, pchDescriptor, pHandleOut);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor::BeginInvoke(::StringW pchDescriptor, ::by_ref<uint32_t> pHandleOut, ::System::AsyncCallback* callback,
                                                                                                              ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchDescriptor, pHandleOut, callback, object);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor::EndInvoke(::by_ref<uint32_t> pHandleOut, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError>(this, ___internal_method, pHandleOut, result);
}
inline ::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor* OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor::New_ctor(::System::Object* object,
                                                                                                                                                        ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e425cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose::*)(
    uint32_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ::by_ref<::OVR::OpenVR::SpatialAnchorPose_t>, ::by_ref<uint32_t>)>(&::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e42638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose::*)(uint32_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ::by_ref<::OVR::OpenVR::SpatialAnchorPose_t>, ::by_ref<uint32_t>,
                                                                      ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose::BeginInvoke)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e4264c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose::*)(
    ::by_ref<::OVR::OpenVR::SpatialAnchorPose_t>, ::by_ref<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e4273c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose::Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin,
                                                                                                                ::by_ref<::OVR::OpenVR::SpatialAnchorPose_t> pPose, ::by_ref<uint32_t> pHandleOut) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError>(this, ___internal_method, unDeviceIndex, eOrigin, pPose, pHandleOut);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose::BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin,
                                                                                                        ::by_ref<::OVR::OpenVR::SpatialAnchorPose_t> pPose, ::by_ref<uint32_t> pHandleOut,
                                                                                                        ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unDeviceIndex, eOrigin, pPose, pHandleOut, callback, object);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose::EndInvoke(::by_ref<::OVR::OpenVR::SpatialAnchorPose_t> pPose, ::by_ref<uint32_t> pHandleOut,
                                                                                                                   ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError>(this, ___internal_method, pPose, pHandleOut, result);
}
inline ::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose* OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose::IVRSpatialAnchors__CreateSpatialAnchorFromPose() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e4276c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose::*)(
    uint32_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ::by_ref<::OVR::OpenVR::SpatialAnchorPose_t>)>(&::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e427d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose::*)(uint32_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ::by_ref<::OVR::OpenVR::SpatialAnchorPose_t>, ::System::AsyncCallback*,
                                                               ::System::Object*)>(&::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e427ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose::*)(
    ::by_ref<::OVR::OpenVR::SpatialAnchorPose_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e428c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose::Invoke(uint32_t unHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin,
                                                                                                         ::by_ref<::OVR::OpenVR::SpatialAnchorPose_t> pPoseOut) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError>(this, ___internal_method, unHandle, eOrigin, pPoseOut);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose::BeginInvoke(uint32_t unHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin,
                                                                                                 ::by_ref<::OVR::OpenVR::SpatialAnchorPose_t> pPoseOut, ::System::AsyncCallback* callback,
                                                                                                 ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unHandle, eOrigin, pPoseOut, callback, object);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose::EndInvoke(::by_ref<::OVR::OpenVR::SpatialAnchorPose_t> pPoseOut, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError>(this, ___internal_method, pPoseOut, result);
}
inline ::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose* OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose::IVRSpatialAnchors__GetSpatialAnchorPose() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e428e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor::*)(
    uint32_t, ::System::Text::StringBuilder*, ::by_ref<uint32_t>)>(&::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e42954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor::*)(uint32_t, ::System::Text::StringBuilder*, ::by_ref<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor::BeginInvoke)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e42968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor::*)(
    ::by_ref<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e429e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor::Invoke(uint32_t unHandle, ::System::Text::StringBuilder* pchDescriptorOut,
                                                                                                               ::by_ref<uint32_t> punDescriptorBufferLenInOut) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError>(this, ___internal_method, unHandle, pchDescriptorOut, punDescriptorBufferLenInOut);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor::BeginInvoke(uint32_t unHandle, ::System::Text::StringBuilder* pchDescriptorOut,
                                                                                                       ::by_ref<uint32_t> punDescriptorBufferLenInOut, ::System::AsyncCallback* callback,
                                                                                                       ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unHandle, pchDescriptorOut, punDescriptorBufferLenInOut, callback, object);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor::EndInvoke(::by_ref<uint32_t> punDescriptorBufferLenInOut, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError>(this, ___internal_method, punDescriptorBufferLenInOut, result);
}
inline ::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor* OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor::IVRSpatialAnchors__GetSpatialAnchorDescriptor() {}
// Ctor Parameters [CppParam { name: "CreateSpatialAnchorFromDescriptor", ty: "::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "CreateSpatialAnchorFromPose", ty: "::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetSpatialAnchorPose", ty:
// "::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetSpatialAnchorDescriptor", ty:
// "::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor*", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::IVRSpatialAnchors::IVRSpatialAnchors(::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor* CreateSpatialAnchorFromDescriptor,
                                                              ::OVR::OpenVR::IVRSpatialAnchors__CreateSpatialAnchorFromPose* CreateSpatialAnchorFromPose,
                                                              ::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorPose* GetSpatialAnchorPose,
                                                              ::OVR::OpenVR::IVRSpatialAnchors__GetSpatialAnchorDescriptor* GetSpatialAnchorDescriptor) noexcept {
  this->CreateSpatialAnchorFromDescriptor = CreateSpatialAnchorFromDescriptor;
  this->CreateSpatialAnchorFromPose = CreateSpatialAnchorFromPose;
  this->GetSpatialAnchorPose = GetSpatialAnchorPose;
  this->GetSpatialAnchorDescriptor = GetSpatialAnchorDescriptor;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSpatialAnchors::IVRSpatialAnchors() {}
